# Практика-v2 11: Action Server, client и отмена

## Цель

В Dev Container Jazzy запустить Fibonacci Action Server, отправить goal, получить feedback/result и проверить корректную отмену через ROS 2 CLI.

## Предварительные требования

- `rclpy`, `example_interfaces`, `colcon` доступны в контейнере.
- Все три терминала находятся в одном Dev Container и одном ROS_DOMAIN_ID.
- Это учебный числовой action; он не управляет роботом.

## Шаг 1. Создать package (5 минут)

```bash
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws/src
ros2 pkg create --build-type ament_python --license Apache-2.0 action_demo_pkg --dependencies rclpy example_interfaces
```

## Шаг 2. Создать Action Server с feedback и cancel (15 минут)

Файл `action_demo_pkg/action_demo_pkg/fibonacci_server.py`:

```python
import time

import rclpy
from example_interfaces.action import Fibonacci
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node


class FibonacciServer(Node):
    def __init__(self):
        super().__init__('fibonacci_server')
        self._server = ActionServer(
            self,
            Fibonacci,
            '/fibonacci',
            execute_callback=self._execute,
            callback_group=ReentrantCallbackGroup(),
            goal_callback=self._goal,
            cancel_callback=self._cancel)

    def _goal(self, request):
        return GoalResponse.ACCEPT

    def _cancel(self, goal_handle):
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
    node = FibonacciServer()
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

Goal length is bounded by the built-in interface field type for this toy task; try `order: 30`.

## Шаг 3. Create a small Python Action Client (8 минут)

Файл `action_demo_pkg/action_demo_pkg/fibonacci_client.py`:

```python
import rclpy
from example_interfaces.action import Fibonacci
from rclpy.action import ActionClient
from rclpy.node import Node


class FibonacciClient(Node):
    def __init__(self):
        super().__init__('fibonacci_client')
        self._client = ActionClient(self, Fibonacci, '/fibonacci')

    def run_goal(self, order):
        self._client.wait_for_server()
        goal = Fibonacci.Goal()
        goal.order = order
        future = self._client.send_goal_async(
            goal, feedback_callback=self._feedback)
        rclpy.spin_until_future_complete(self, future)
        handle = future.result()
        if not handle or not handle.accepted:
            self.get_logger().error('Goal rejected')
            return
        result_future = handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future)
        result = result_future.result()
        self.get_logger().info(f'Result: {result.result.sequence}')

    def _feedback(self, message):
        self.get_logger().info(
            f'Feedback: {message.feedback.sequence}')


def main(args=None):
    rclpy.init(args=args)
    node = FibonacciClient()
    try:
        node.run_goal(8)
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
```

Client waits for a completed goal, so cancellation is demonstrated separately through CLI.

## Шаг 4. Добавить executables (4 минуты)

В `setup.py` допишите:

```python
'fibonacci_server = action_demo_pkg.fibonacci_server:main',
'fibonacci_client = action_demo_pkg.fibonacci_client:main',
```

## Шаг 5. Собрать (5 минут)

```bash
cd ~/ros2_ws
colcon build --symlink-install --packages-select action_demo_pkg
source install/setup.bash
```

## Шаг 6. Проверить goal и feedback (4 минуты)

В terminal 1 запустите server:

```bash
ros2 run action_demo_pkg fibonacci_server
```

В terminal 2:

```bash
ros2 action list -t
ros2 action info /fibonacci
ros2 run action_demo_pkg fibonacci_client
```

Ожидаемый результат: client видит feedback и конечный sequence result.

## Шаг 7. Проверить отмену через CLI (4 минуты)

В terminal 2 отправьте длинную goal:

```bash
ros2 action send_goal /fibonacci example_interfaces/action/Fibonacci "{order: 30}" --feedback
```

После нескольких сообщений feedback нажмите `Ctrl+C`. В ROS 2 Jazzy эта команда CLI запрашивает отмену активной goal. Server должен проверить cancel request, вызвать `canceled()` и завершить callback.

## Проверка результата

- `ros2 action list -t` показывает `/fibonacci` и action type.
- Client получает feedback и result.
- CLI cancel приводит к `CANCELED`/сообщению о принятой отмене, а не к успешному result.
- Ctrl+C в terminal server допустим только для завершения учебного процесса после теста.

## Типичные ошибки

| Симптом | Проверка |
| --- | --- |
| Action server не найден | Он запущен? Совпадают domain и action name/type? |
| Goal завершилась раньше cancel | Увеличить `order` или слегка увеличить задержку шага. |
| Cancel принят, но callback не завершился | Server должен проверять `is_cancel_requested` внутри цикла. |
| Client висит | Проверить, что server не заблокирован и executor запущен. |

## Связанные материалы

- Содержание: [`../1_lecture/lecture-v2_content_11_action_v1.md`](../1_lecture/lecture-v2_content_11_action_v1.md).
- План: [`../1_lecture/lecture-v2_plan_11_action_v1.md`](../1_lecture/lecture-v2_plan_11_action_v1.md).
- ДЗ: [`../2_homework/homework-v2_11_action_v1.md`](../2_homework/homework-v2_11_action_v1.md).
- [ROS 2 Jazzy action tutorial](https://docs.ros.org/en/jazzy/Tutorials/Intermediate/Writing-an-Action-Server-Client/Py.html).
