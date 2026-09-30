# Домашняя работа-v2 11: длительная задача с feedback

## Цель

Добавить к личной модели учебный Action Server и client, который отправляет goal, показывает feedback и получает result. Проверить cancel без управления реальным роботом.

## Предварительные требования

- Личный workspace из заданий 7–10.
- `rclpy` и `example_interfaces` доступны внутри Dev Container Jazzy.
- Занятия 9 и 10: topic/service интерфейсы своей модели.
- ROS 2 на host не устанавливать.

## Связь и шаг модели

Action — первое описание длительной задачи модели. Здесь это безопасный расчёт последовательности; позднее тот же контрактный механизм будет применяться к навигации или манипуляции.

## Шаг 1. Создать пакет

```bash
cd ~/my_robot/ros2_ws/src
ros2 pkg create --build-type ament_python --license Apache-2.0 my_robot_mission --dependencies rclpy example_interfaces
```

## Шаг 2. Добавить Action Server

Создай `my_robot_mission/my_robot_mission/mission_server.py`:

```python
import time
import rclpy
from example_interfaces.action import Fibonacci
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node


class MissionServer(Node):
    def __init__(self):
        super().__init__('mission_server')
        self._server = ActionServer(
            self, Fibonacci, '/mission', execute_callback=self._execute,
            callback_group=ReentrantCallbackGroup(),
            goal_callback=self._accept_goal, cancel_callback=self._accept_cancel)

    def _accept_goal(self, request):
        return GoalResponse.ACCEPT

    def _accept_cancel(self, goal_handle):
        return CancelResponse.ACCEPT

    def _execute(self, goal_handle):
        feedback = Fibonacci.Feedback()
        feedback.sequence = [0, 1]
        for i in range(1, goal_handle.request.order):
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                result = Fibonacci.Result()
                result.sequence = feedback.sequence
                return result
            feedback.sequence.append(
                feedback.sequence[i] + feedback.sequence[i - 1])
            goal_handle.publish_feedback(feedback)
            time.sleep(0.25)
        goal_handle.succeed()
        result = Fibonacci.Result()
        result.sequence = feedback.sequence
        return result


def main(args=None):
    rclpy.init(args=args)
    node = MissionServer()
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        executor.shutdown()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
```

## Шаг 3. Добавить Action Client

Создай `my_robot_mission/my_robot_mission/mission_client.py`:

```python
import rclpy
from example_interfaces.action import Fibonacci
from rclpy.action import ActionClient
from rclpy.node import Node


class MissionClient(Node):
    def __init__(self):
        super().__init__('mission_client')
        self._client = ActionClient(self, Fibonacci, '/mission')

    def run(self, order):
        if not self._client.wait_for_server(timeout_sec=5.0):
            raise RuntimeError('Action server is not available')
        goal = Fibonacci.Goal()
        goal.order = order
        future = self._client.send_goal_async(
            goal, feedback_callback=self._feedback)
        rclpy.spin_until_future_complete(self, future)
        handle = future.result()
        if handle is None or not handle.accepted:
            raise RuntimeError('Goal was not accepted')
        result_future = handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future)
        return result_future.result().result

    def _feedback(self, message):
        self.get_logger().info(f'Progress: {message.feedback.sequence}')


def main(args=None):
    rclpy.init(args=args)
    node = MissionClient()
    try:
        result = node.run(8)
        node.get_logger().info(f'Result: {result.sequence}')
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
```

`spin_until_future_complete` вызывается из main-потока, не из callback.

## Шаг 4. Зарегистрировать команды

В `setup.py` допиши в `console_scripts`:

```python
'mission_server = my_robot_mission.mission_server:main',
'mission_client = my_robot_mission.mission_client:main',
```

## Шаг 5. Собрать и подключить overlay

```bash
cd ~/my_robot/ros2_ws
colcon build --symlink-install --packages-select my_robot_mission
source install/setup.bash
```

## Шаг 6. Проверить goal, feedback и result

В терминале 1 запусти server:

```bash
ros2 run my_robot_mission mission_server
```

В терминале 2 запусти Python client:

```bash
ros2 run my_robot_mission mission_client
```

Затем проверь также CLI:

```bash
ros2 action list -t
ros2 action send_goal /mission example_interfaces/action/Fibonacci "{order: 12}" --feedback
```

Ожидаемый результат: client получает feedback и финальную Fibonacci result.

Для cancel отправь длинную goal, подожди несколько feedback и нажми Ctrl+C в терминале CLI. Jazzy CLI запрашивает отмену активной goal; server должен завершить её как canceled.

## Шаг 7. Зафиксировать контракт в дневнике

```markdown
## Action моей модели
- Имя:
- Тип goal:
- Что показывает feedback:
- Что означает result:
- Как обрабатывается cancel:
- Пока это учебный action; он не управляет приводами.
```

## Ожидаемый результат

- Server и client находятся в личном пакете.
- Feedback приходит до завершения goal.
- Result доступен после завершения.
- Cancel request принят и обрабатывается server.
- Никакой action не отправляется на реальный робот.

## Самопроверка

1. Чем Action отличается от Service, если в обоих есть client/server?
2. Что должен сделать server, получив cancel request?
3. Почему CLI Ctrl+C для goal — не аппаратный E-stop?
4. Почему `example_interfaces/Fibonacci` подходит для учебного теста, но не для навигации?

## Критерии выполнения

- Package собирается внутри контейнера.
- Goal, feedback и result проверены.
- Cancel протестирован на учебной задаче.
- В дневнике указаны типы полей и ограничения.
- Изменения сохранены в Git личной модели; секретов нет.

## Типичные ошибки

| Ошибка | Исправление |
| --- | --- |
| Goal заканчивается до нажатия cancel | Увеличить длительность тестовой задачи. |
| Server игнорирует cancel | Проверять `is_cancel_requested` в цикле и завершать через `canceled()`. |
| Client не показывает feedback | Передать callback при отправке goal. |
| Путают cancel и stop topic/service | Cancel — запрос action server; E-stop — отдельная safety-функция. |

## Связанные материалы

- Практика: [`../2_practice/practice-v2_11_action_v1.md`](../2_practice/practice-v2_11_action_v1.md).
- Содержание: [`../1_lecture/lecture-v2_content_11_action_v1.md`](../1_lecture/lecture-v2_content_11_action_v1.md).
- База знаний: [`../2_knowledge/actions.md`](../2_knowledge/actions.md).
- [ROS 2 Jazzy actions](https://docs.ros.org/en/jazzy/Concepts/Basic/About-Actions.html).
