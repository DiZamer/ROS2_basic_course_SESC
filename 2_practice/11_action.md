# Практика: action server и action client

## Цель

Через 5–10 минут студент создаёт пакет с action server и action client на Python (длительная задача на базе стандартного `example_interfaces/action/Fibonacci`), видит feedback, отменяет goal и получает result.

## Предварительные требования

- Открыт Dev Container уровня 2 (`.devcontainer/`, Ubuntu 24.04 + ROS2 Jazzy).
- ROS2 не устанавливается на хост — всё выполняется внутри контейнера.
- Готов workspace из практики 7: [`07_workspace.md`](07_workspace.md) (`~/ros2_ws`).
- Прочитана статья [`../2_knowledge/actions.md`](../2_knowledge/actions.md).

## Что получится

- Пакет `my_action_pkg` с двумя узлами: `fibonacci_action_server` и `fibonacci_action_client`.
- Server принимает goal, публикует feedback на каждом шаге, обрабатывает cancel и возвращает result.
- Client отправляет goal, читает feedback, через несколько шагов отменяет goal и печатает итог.
- Action проверен из CLI: `ros2 action list`, `ros2 action info`, `ros2 action send_goal --feedback`.

## Шаг 1. Создать пакет

```bash
cd ~/ros2_ws
ros2 pkg create --build-type ament_python my_action_pkg \
  --destination-directory src --dependencies rclpy example_interfaces
```

Пакет `example_interfaces` содержит стандартный тип `Fibonacci` с полями `order` (goal), `sequence` (feedback и result).

## Шаг 2. Код action server

Файл `~/ros2_ws/src/my_action_pkg/my_action_pkg/fibonacci_action_server.py`:

```python
import time

import rclpy
from rclpy.action import ActionServer
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from example_interfaces.action import Fibonacci


class FibonacciActionServer(Node):

    def __init__(self):
        super().__init__('fibonacci_action_server')
        self._action_server = ActionServer(
            self, Fibonacci, 'fibonacci', self.execute_callback)

    def execute_callback(self, goal_handle):
        self.get_logger().info(f'Goal accepted (order={goal_handle.request.order})')

        feedback_msg = Fibonacci.Feedback()
        feedback_msg.sequence = [0, 1]

        for i in range(1, goal_handle.request.order):
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                self.get_logger().info('Goal canceled')
                return Fibonacci.Result(sequence=feedback_msg.sequence)

            feedback_msg.sequence.append(
                feedback_msg.sequence[i] + feedback_msg.sequence[i - 1])
            goal_handle.publish_feedback(feedback_msg)
            self.get_logger().info(f'Feedback: {feedback_msg.sequence}')
            time.sleep(1.0)

        goal_handle.succeed()
        self.get_logger().info('Goal succeeded')
        return Fibonacci.Result(sequence=feedback_msg.sequence)


def main(args=None):
    rclpy.init(args=args)
    node = FibonacciActionServer()
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

`MultiThreadedExecutor` обязателен: он даёт server обрабатывать запрос отмены, пока `execute_callback` занят `time.sleep`.

## Шаг 3. Код action client

Файл `~/ros2_ws/src/my_action_pkg/my_action_pkg/fibonacci_action_client.py`:

```python
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from example_interfaces.action import Fibonacci


class FibonacciActionClient(Node):

    def __init__(self):
        super().__init__('fibonacci_action_client')
        self._action_client = ActionClient(self, Fibonacci, 'fibonacci')
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
            self.get_logger().info('Goal rejected')
            rclpy.shutdown()
            return
        self.get_logger().info('Goal accepted')
        self._get_result_future = self._goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.result_callback)

    def feedback_callback(self, feedback_msg):
        self._feedback_count += 1
        self.get_logger().info(f'Feedback: {feedback_msg.feedback.sequence}')
        if self._feedback_count == 3:
            self.get_logger().info('Cancel goal after 3 feedbacks')
            self._goal_handle.cancel_goal_async()

    def result_callback(self, future):
        result = future.result().result
        self.get_logger().info(f'Result: {result.sequence}')
        rclpy.shutdown()


def main(args=None):
    rclpy.init(args=args)
    client = FibonacciActionClient()
    client.send_goal(20)
    rclpy.spin(client)


if __name__ == '__main__':
    main()
```

## Шаг 4. Точки входа в setup.py

Откройте `~/ros2_ws/src/my_action_pkg/setup.py` и замените блок `entry_points` на:

```python
entry_points={
    'console_scripts': [
        'fibonacci_action_server = my_action_pkg.fibonacci_action_server:main',
        'fibonacci_action_client = my_action_pkg.fibonacci_action_client:main',
    ],
},
```

## Шаг 5. Сборка

```bash
cd ~/ros2_ws
colcon build
source install/setup.bash
```

Ожидаемый финал: `Summary: 1 package finished`.

## Шаг 6. Запуск

Терминал 1 — server:

```bash
cd ~/ros2_ws && source install/setup.bash
ros2 run my_action_pkg fibonacci_action_server
```

Терминал 2 — client:

```bash
cd ~/ros2_ws && source install/setup.bash
ros2 run my_action_pkg fibonacci_action_client
```

```text
[INFO] [fibonacci_action_client]: Goal accepted
[INFO] [fibonacci_action_client]: Feedback: [0, 1, 1]
[INFO] [fibonacci_action_client]: Feedback: [0, 1, 1, 2]
[INFO] [fibonacci_action_client]: Feedback: [0, 1, 1, 2, 3]
[INFO] [fibonacci_action_client]: Cancel goal after 3 feedbacks
[INFO] [fibonacci_action_client]: Result: [0, 1, 1, 2, 3]
```

В терминале server:

```text
[INFO] [fibonacci_action_server]: Goal accepted (order=20)
[INFO] [fibonacci_action_server]: Feedback: [0, 1, 1]
...
[INFO] [fibonacci_action_server]: Goal canceled
```

## Шаг 7. Проверка из CLI

Server после отмены продолжает работать (client — отдельный процесс и не завершает server). В третьем терминале:

```bash
# список actions
ros2 action list
ros2 action list -t
# /fibonacci [example_interfaces/action/Fibonacci]

# информация об action
ros2 action info /fibonacci

# отправить goal и видеть feedback; Ctrl+C — отменить
ros2 action send_goal /fibonacci example_interfaces/action/Fibonacci "{order: 10}" --feedback
```

С `--feedback` CLI печатает поток feedback. Нажмите `Ctrl+C` через пару секунд — goal отменится, робот-задача остановится.

## Проверка результата

| Действие | Ожидаемый результат |
| --- | --- |
| `ros2 run my_action_pkg fibonacci_action_server` | Server запущен, ждёт goals |
| `ros2 run my_action_pkg fibonacci_action_client` | Client видит `Goal accepted`, feedback, `Cancel goal after 3 feedbacks`, `Result` |
| `ros2 action list -t` | `/fibonacci [example_interfaces/action/Fibonacci]` |
| `ros2 action info /fibonacci` | Action server и client, тип действия |
| `ros2 action send_goal ... --feedback` | Поток feedback; `Ctrl+C` отменяет goal |

## Вопросы студентам

1. Чем action отличается от service, если и там, и там есть client и server?
2. Почему server нужен `MultiThreadedExecutor`, а в practice 10 (service) хватало обычного `spin()`?
3. Что вернёт `result_callback`, если goal отменили — полный результат или частичный?
4. Почему `wait_for_server()` важен перед `send_goal_async()`?

## Типичные ошибки

| Симптом | Причина | Исправление |
| --- | --- | --- |
| `ros2 run` — «Package not found» | Забыли `source install/setup.bash` | `source ~/ros2_ws/install/setup.bash` |
| Cancel не срабатывает, server продолжает считать | Обычный `spin()` вместо `MultiThreadedExecutor` | `rclpy.spin(node, executor=MultiThreadedExecutor())` |
| Client вечно печатает `Goal rejected` или молчит | Server не запущен или имя/тип различаются | Запустить server, сверить `'fibonacci'` |
| Нет feedback | Не передан `feedback_callback` | `send_goal_async(goal_msg, feedback_callback=...)` |
| Ошибка импорта `example_interfaces` | Не добавлена зависимость | `--dependencies example_interfaces` при создании пакета |
| Client завис без `Result` | Server не вызвал `succeed()`/`canceled()` | Проверить `execute_callback` на корректный финал |

## Дополнительное задание

1. Замените в client ручной счётчик отмены на отмену по таймеру: создайте `create_timer(5.0, ...)`, который вызывает `cancel_goal_async()`.
2. Отправьте два goal подряд с разным `order` и понаблюдайте, что делает server (приём/отклонение второй цели — preemption).
3. Посмотрите внутренности action: `ros2 topic list | grep fibonacci` и `ros2 service list | grep fibonacci`.

## Где это в роботе

В TIAgo action — ядро навигации и манипуляции. Пример — `/navigate_to_pose` (`nav2_msgs/action/NavigateToPose`): goal — точка на карте, feedback — оставшееся расстояние, отмена — остановка робота. Разбор — в кейсе уровня 3 занятия 11 и [`3_Robot/TIAgo_humble/docs/navigation.md`](../../3_Robot/TIAgo_humble/docs/navigation.md).

## Ссылки

- Статья — [`../2_knowledge/actions.md`](../2_knowledge/actions.md).
- Практика 10 (service) — [`10_service.md`](10_service.md).
- Домашнее задание 11 — [`../2_homework/hw_11_action.md`](../2_homework/hw_11_action.md).
- [Writing an action server and client (Python)](https://docs.ros.org/en/jazzy/Tutorials/Intermediate/Writing-an-Action-Server-Client/Py.html)
- [Understanding actions](https://docs.ros.org/en/jazzy/Tutorials/Beginner-CLI-Tools/Understanding-ROS2-Actions/Understanding-ROS2-Actions.html)
