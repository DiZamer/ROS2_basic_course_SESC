# Практика-v2 10: AddTwoInts service

## Цель

Создать в контейнере Jazzy service server и client на `example_interfaces/srv/AddTwoInts`, собрать package, получить ответ через код и CLI.

## Предварительные требования

- Dev Container Jazzy; `rclpy`, `example_interfaces`, `colcon` доступны.
- ROS 2 на host не устанавливается.
- Все операции выполняются в учебном workspace `~/ros2_ws`.

## Шаг 1. Создать package (5 минут)

```bash
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws/src
ros2 pkg create --build-type ament_python --license Apache-2.0 service_demo_pkg --dependencies rclpy example_interfaces
```

## Шаг 2. Создать server (8 минут)

Файл `service_demo_pkg/service_demo_pkg/add_server.py`:

```python
import rclpy
from example_interfaces.srv import AddTwoInts
from rclpy.node import Node


class AddServer(Node):
    def __init__(self):
        super().__init__('add_server')
        self._service = self.create_service(
            AddTwoInts, '/add_two_ints', self._add)

    def _add(self, request, response):
        response.sum = request.a + request.b
        self.get_logger().info(f'{request.a} + {request.b} = {response.sum}')
        return response


def main(args=None):
    rclpy.init(args=args)
    node = AddServer()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
```

## Шаг 3. Создать client (8 минут)

Файл `service_demo_pkg/service_demo_pkg/add_client.py`:

```python
import rclpy
from example_interfaces.srv import AddTwoInts
from rclpy.node import Node


class AddClient(Node):
    def __init__(self):
        super().__init__('add_client')
        self._client = self.create_client(AddTwoInts, '/add_two_ints')

    def add(self, a, b):
        if not self._client.wait_for_service(timeout_sec=5.0):
            raise RuntimeError('service /add_two_ints is not available')
        request = AddTwoInts.Request()
        request.a = a
        request.b = b
        return self._client.call_async(request)


def main(args=None):
    rclpy.init(args=args)
    node = AddClient()
    try:
        future = node.add(5, 3)
        rclpy.spin_until_future_complete(node, future)
        response = future.result()
        if response is None:
            raise RuntimeError('service call failed')
        node.get_logger().info(f'Result: {response.sum}')
    finally:
        node.destroy_node()
        rclpy.shutdown()
```

`spin_until_future_complete` здесь вызван из `main`, не из callback node.

## Шаг 4. Добавить entry points (4 минуты)

В `setup.py` добавьте:

```python
'add_server = service_demo_pkg.add_server:main',
'add_client = service_demo_pkg.add_client:main',
```

## Шаг 5. Собрать (6 минут)

```bash
cd ~/ros2_ws
colcon build --symlink-install --packages-select service_demo_pkg
source install/setup.bash
```

## Шаг 6. Запустить и вызвать (6 минут)

Терминал 1:

```bash
ros2 run service_demo_pkg add_server
```

Терминал 2:

```bash
ros2 run service_demo_pkg add_client
```

Ожидаемый ответ client: `Result: 8`.

Терминал 3, CLI:

```bash
ros2 service list -t
ros2 service type /add_two_ints
ros2 service call /add_two_ints example_interfaces/srv/AddTwoInts "{a: 12, b: 7}"
```

Ожидаемый CLI response: `sum: 19`.

## Шаг 7. Проверить недоступный server (3 минуты)

Остановите server, затем запустите client. Ожидается сообщение `service /add_two_ints is not available`, а не вечное ожидание.

## Вопросы

1. Какие поля входят в request и response?
2. Почему client проверяет server availability?
3. Почему длительную навигацию нельзя моделировать этим service?

## Типичные ошибки

| Симптом | Проверка |
| --- | --- |
| Service не находится | Одинаковы ли domain ID и имя? Запущен ли server? |
| Client сообщает timeout | Запустить server в другом терминале контейнера. |
| CLI сообщает неизвестное поле | `ros2 interface show example_interfaces/srv/AddTwoInts`. |
| Client блокируется внутри callback | Не вызывать `spin_until_future_complete` из callback этого node. |

## Связанные материалы

- Содержание: [`../1_lecture/lecture-v2_content_10_service_v1.md`](../1_lecture/lecture-v2_content_10_service_v1.md).
- План: [`../1_lecture/lecture-v2_plan_10_service_v1.md`](../1_lecture/lecture-v2_plan_10_service_v1.md).
- ДЗ: [`../2_homework/homework-v2_10_service_v1.md`](../2_homework/homework-v2_10_service_v1.md).
- [ROS 2 service client/server tutorial](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Service-And-Client.html).
