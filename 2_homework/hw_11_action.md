# Домашнее задание 11: action в своей модели

## Цель

Добавить в свою модель робота action «выполнить длительную задачу» с прогрессом и отменой через стандартный `example_interfaces/action/Fibonacci`: узел `mission_node` предоставляет action server, узел `mission_client` отправляет goal, читает feedback и отменяет goal. Собрать, запустить, проверить из CLI, зафиксировать в дневнике и сделать коммит.

## Связь с темой занятия

Занятие 11 показало, что action — это длительная задача с goal/feedback/result/cancel. Дома студент добавляет в модель первый action: длинная задача (например, «калибровка/зарядка»), которая сообщает прогресс и которую можно отменить. Стандартный тип `Fibonacci` — временная заглушка: собственные `.action`-интерфейсы появятся в занятии 13.

## Предварительные требования

- Workspace модели и пакет из [`hw_07_workspace.md`](hw_07_workspace.md) (`~/my_robot/ros2_ws`, пакет `my_robot_base`).
- Узлы `sensor_node`, `monitor_node` из [`hw_09_topic.md`](hw_09_topic.md) и `sensor_control_client` из [`hw_10_service.md`](hw_10_service.md).
- Перечень узлов и интерфейсов модели из [`hw_06_ros_architecture.md`](hw_06_ros_architecture.md).
- Дневник `~/my_robot/diary.md`.
- Статья [`../2_knowledge/actions.md`](../2_knowledge/actions.md) и практика [`../2_practice/11_action.md`](../2_practice/11_action.md).
- Выполняется дома в devcontainer (ROS2 Jazzy, уровень 2); ROS2 не устанавливается на хост.

## Шаг к виртуальной модели робота

У модели появляется первая длительная задача с прогрессом и отменой: action `/mission`. Это прообраз навигации и манипуляции (темы 19–20), где goal — цель, feedback — прогресс, отмена — остановка. На уровне 3 тот же механизм работает в `/navigate_to_pose` TIAgo.

## Шаги

### Шаг 1. Добавить зависимость `example_interfaces`

В `~/my_robot/ros2_ws/src/my_robot_base/package.xml` добавьте строку после `<exec_depend>std_srvs</exec_depend>`:

```xml
  <exec_depend>example_interfaces</exec_depend>
```

### Шаг 2. Action server в узле-задаче

Создайте файл `~/my_robot/ros2_ws/src/my_robot_base/my_robot_base/mission_node.py`:

```python
import time

import rclpy
from rclpy.action import ActionServer
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from example_interfaces.action import Fibonacci


class MissionNode(Node):

    def __init__(self):
        super().__init__('mission_node')
        self._action_server = ActionServer(
            self, Fibonacci, 'mission', self.execute_callback)

    def execute_callback(self, goal_handle):
        self.get_logger().info(f'Mission accepted (order={goal_handle.request.order})')

        feedback_msg = Fibonacci.Feedback()
        feedback_msg.sequence = [0, 1]

        for i in range(1, goal_handle.request.order):
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                self.get_logger().info('Mission canceled')
                return Fibonacci.Result(sequence=feedback_msg.sequence)

            feedback_msg.sequence.append(
                feedback_msg.sequence[i] + feedback_msg.sequence[i - 1])
            goal_handle.publish_feedback(feedback_msg)
            self.get_logger().info(f'Mission progress: {feedback_msg.sequence}')
            time.sleep(1.0)

        goal_handle.succeed()
        self.get_logger().info('Mission succeeded')
        return Fibonacci.Result(sequence=feedback_msg.sequence)


def main(args=None):
    rclpy.init(args=args)
    node = MissionNode()
    try:
        rclpy.spin(node, executor=MultiThreadedExecutor())
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
```

### Шаг 3. Action client

Создайте файл `~/my_robot/ros2_ws/src/my_robot_base/my_robot_base/mission_client.py`:

```python
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from example_interfaces.action import Fibonacci


class MissionClient(Node):

    def __init__(self):
        super().__init__('mission_client')
        self._action_client = ActionClient(self, Fibonacci, 'mission')
        self._goal_handle = None
        self._feedback_count = 0

    def send_goal(self, order):
        goal_msg = Fibonacci.Goal()
        goal_msg.order = order
        self._action_client.wait_for_server()
        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg, feedback_callback=self.feedback_callback)
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        self._goal_handle = future.result()
        if not self._goal_handle.accepted:
            self.get_logger().info('Mission rejected')
            rclpy.shutdown()
            return
        self.get_logger().info('Mission accepted')
        self._goal_handle.get_result_async().add_done_callback(self.result_callback)

    def feedback_callback(self, feedback_msg):
        self._feedback_count += 1
        self.get_logger().info(f'Progress: {feedback_msg.feedback.sequence}')
        if self._feedback_count == 4:
            self.get_logger().info('Cancel mission after 4 progress updates')
            self._goal_handle.cancel_goal_async()

    def result_callback(self, future):
        self.get_logger().info(f'Result: {future.result().result.sequence}')
        rclpy.shutdown()


def main(args=None):
    rclpy.init(args=args)
    client = MissionClient()
    client.send_goal(30)
    rclpy.spin(client)


if __name__ == '__main__':
    main()
```

### Шаг 4. Точка входа в setup.py

В `my_robot_base/setup.py` добавьте в `entry_points` строки для двух узлов:

```python
entry_points={
    'console_scripts': [
        'robot_state_node = my_robot_base.robot_state_node:main',
        'sensor_node = my_robot_base.sensor_node:main',
        'monitor_node = my_robot_base.monitor_node:main',
        'sensor_control_client = my_robot_base.sensor_control_client:main',
        'mission_node = my_robot_base.mission_node:main',
        'mission_client = my_robot_base.mission_client:main',
    ],
},
```

### Шаг 5. Собрать

```bash
cd ~/my_robot/ros2_ws
colcon build
source install/setup.bash
```

Ожидаемый финал: `Summary: 1 package finished`.

### Шаг 6. Запустить и проверить

Терминал 1 — action server:

```bash
cd ~/my_robot/ros2_ws && source install/setup.bash
ros2 run my_robot_base mission_node
```

Терминал 2 — action client:

```bash
cd ~/my_robot/ros2_ws && source install/setup.bash
ros2 run my_robot_base mission_client
```

```text
[INFO] [mission_client]: Mission accepted
[INFO] [mission_client]: Progress: [0, 1, 1]
...
[INFO] [mission_client]: Cancel mission after 4 progress updates
[INFO] [mission_client]: Result: [0, 1, 1, 2, 3]
```

В терминале server появится `Mission canceled`.

### Шаг 7. Проверить из CLI

Запустите `mission_node` ещё раз и в отдельном терминале:

```bash
ros2 action list -t
# /mission [example_interfaces/action/Fibonacci]

ros2 action info /mission

ros2 action send_goal /mission example_interfaces/action/Fibonacci "{order: 10}" --feedback
# Ctrl+C — отменить goal
```

### Шаг 8. Зафиксировать в дневнике

Добавьте в `~/my_robot/diary.md`:

```markdown
## Длительная задача модели (action)

- mission_node: action server /mission (example_interfaces/action/Fibonacci)
- mission_client: action client → goal, feedback, cancel, result
- запуск: ros2 run my_robot_base mission_node / mission_client
- проверка: ros2 action list, info, send_goal --feedback (Ctrl+C = cancel)
```

### Шаг 9. Коммит в Git

```bash
cd ~/my_robot
git add ros2_ws/src/my_robot_base diary.md
git commit -m "action в модели: /mission — длительная задача с прогрессом и отменой"
```

## Ожидаемый результат

- Узел `mission_node` предоставляет action `/mission` типа `example_interfaces/action/Fibonacci`.
- `mission_client` отправляет goal, видит feedback, отменяет goal и получает result.
- `ros2 action send_goal ... --feedback` показывает прогресс, `Ctrl+C` отменяет goal.
- В `diary.md` записан action, сделан коммит.

## Вопросы для самопроверки

1. Чем action `/mission` отличается от service `/sensor_enable` в одной и той же модели?
2. Почему `mission_node` использует `MultiThreadedExecutor`, а `sensor_node` — нет?
3. Что произойдёт, если убрать проверку `is_cancel_requested` из цикла?
4. Зачем в client отдельные callback для goal-response, feedback и result?

## Критерии оценки

Задание выполнено, если:

- в `mission_node` добавлен action server (`ActionServer`) с feedback, cancel и result;
- `mission_client` отправляет goal, читает feedback и вызывает `cancel_goal_async()`;
- `ros2 action send_goal /mission ... --feedback` показывает прогресс и отмену по `Ctrl+C`;
- в `setup.py` объявлены точки входа, пакет собран;
- сделан коммит, в `diary.md` записан action.

## Типичные ошибки

| Симптом | Причина | Исправление |
| --- | --- | --- |
| Ошибка импорта `example_interfaces` | Не добавлена зависимость | `<exec_depend>example_interfaces</exec_depend>` в `package.xml` |
| Cancel не срабатывает | Обычный `spin()` вместо `MultiThreadedExecutor` | `rclpy.spin(node, executor=MultiThreadedExecutor())` |
| `ros2 action list` пуст | `mission_node` не запущен или забыт `source` | Запустить `mission_node`, `source install/setup.bash` |
| Client молчит после `send_goal` | Не вызван `rclpy.spin(client)` | Проверить `rclpy.spin(client)` в `main` |
| `Result` не приходит | Server не вызвал `succeed()`/`canceled()` | Проверить финал `execute_callback` |

## Ссылки

- Статья — [`../2_knowledge/actions.md`](../2_knowledge/actions.md).
- Практика занятия — [`../2_practice/11_action.md`](../2_practice/11_action.md).
- Предыдущее ДЗ — [`hw_10_service.md`](hw_10_service.md).
- Архитектура своей модели — [`hw_06_ros_architecture.md`](hw_06_ros_architecture.md).
- Зачёт 1 (занятие 12) — [`../1_lecture/exam_01.md`](../1_lecture/exam_01.md).
