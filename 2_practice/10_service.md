# Практика: service server и client

## Цель

Через 5–10 минут студент создаёт пакет с service server и client на Python («сложить два числа» через стандартный `example_interfaces/srv/AddTwoInts`), вызывает service из кода и из командной строки через `ros2 service call`.

## Предварительные требования

- Открыт Dev Container уровня 2 (`.devcontainer/`, Ubuntu 24.04 + ROS2 Jazzy).
- ROS2 не устанавливается на хост — всё выполняется внутри контейнера.
- Готов workspace из практики 7: [`07_workspace.md`](07_workspace.md) (`~/ros2_ws`).
- Прочитана статья [`../2_knowledge/services.md`](../2_knowledge/services.md).

## Что получится

- Пакет `my_service_pkg` с двумя узлами: `add_two_ints_server` и `add_two_ints_client`.
- Server принимает два числа и возвращает их сумму; client отправляет запрос и печатает ответ.
- Service вызван из кода и из CLI: `ros2 service list`, `ros2 service type`, `ros2 service call`, `ros2 service find`.

## Шаг 1. Создать пакет

```bash
cd ~/ros2_ws
ros2 pkg create --build-type ament_python my_service_pkg \
  --destination-directory src --dependencies rclpy example_interfaces
```

Флаг `--dependencies rclpy example_interfaces` прописывает зависимости в `package.xml`. Пакет `example_interfaces` содержит стандартный тип `AddTwoInts`.

## Шаг 2. Код service server

Файл `~/ros2_ws/src/my_service_pkg/my_service_pkg/add_two_ints_server.py`:

```python
import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts


class AddTwoIntsServer(Node):

    def __init__(self):
        super().__init__('add_two_ints_server')
        self.srv = self.create_service(AddTwoInts, 'add_two_ints', self.callback)

    def callback(self, request, response):
        response.sum = request.a + request.b
        self.get_logger().info(f'{request.a} + {request.b} = {response.sum}')
        return response


def main(args=None):
    rclpy.init(args=args)
    node = AddTwoIntsServer()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
```

## Шаг 3. Код service client

Файл `~/ros2_ws/src/my_service_pkg/my_service_pkg/add_two_ints_client.py`:

```python
import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts


class AddTwoIntsClient(Node):

    def __init__(self):
        super().__init__('add_two_ints_client')
        self.cli = self.create_client(AddTwoInts, 'add_two_ints')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('waiting for service...')

    def call(self, a, b):
        req = AddTwoInts.Request()
        req.a = a
        req.b = b
        return self.cli.call_async(req)


def main(args=None):
    rclpy.init(args=args)
    client = AddTwoIntsClient()
    future = client.call(5, 3)
    rclpy.spin_until_future_complete(client, future)
    response = future.result()
    client.get_logger().info(f'Result: {response.sum}')
    client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
```

## Шаг 4. Точки входа в setup.py

Откройте `~/ros2_ws/src/my_service_pkg/setup.py` и замените блок `entry_points` на:

```python
entry_points={
    'console_scripts': [
        'add_two_ints_server = my_service_pkg.add_two_ints_server:main',
        'add_two_ints_client = my_service_pkg.add_two_ints_client:main',
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
ros2 run my_service_pkg add_two_ints_server
```

```text
[INFO] [add_two_ints_server]: add_two_ints server is running
```

Терминал 2 — client:

```bash
cd ~/ros2_ws && source install/setup.bash
ros2 run my_service_pkg add_two_ints_client
```

```text
[INFO] [add_two_ints_client]: Result: 8
```

В терминале server появится:

```text
[INFO] [add_two_ints_server]: 5 + 3 = 8
```

## Шаг 7. Вызов из CLI

Пока server работает, в третьем терминале:

```bash
# список services и их типов
ros2 service list
ros2 service list -t
# /add_two_ints [example_interfaces/srv/AddTwoInts]

# тип service
ros2 service type /add_two_ints
# example_interfaces/srv/AddTwoInts

# вызвать service из командной строки
ros2 service call /add_two_ints example_interfaces/srv/AddTwoInts "{a: 2, b: 3}"
# response:
# example_interfaces.srv.AddTwoInts_Response(sum=5)

# найти все services с таким типом
ros2 service find example_interfaces/srv/AddTwoInts
# /add_two_ints
```

## Проверка результата

| Действие | Ожидаемый результат |
| --- | --- |
| `ros2 run my_service_pkg add_two_ints_server` | Server запущен, ждёт запросы |
| `ros2 run my_service_pkg add_two_ints_client` | Client печатает `Result: 8`, server печатает `5 + 3 = 8` |
| `ros2 service list -t` | `/add_two_ints [example_interfaces/srv/AddTwoInts]` |
| `ros2 service type /add_two_ints` | `example_interfaces/srv/AddTwoInts` |
| `ros2 service call /add_two_ints ... "{a: 2, b: 3}"` | `sum=5` |

## Вопросы студентам

1. Почему client ждёт в цикле `wait_for_service()` перед отправкой запроса? Что будет без этого ожидания?
2. Чем `ros2 service call` отличается от запуска вашего client-узла?
3. Что вернёт `ros2 service call`, если указать поля с другими именами, например `"{x: 2, y: 3}"`?
4. Почему service — это «один запрос → один ответ», а не непрерывный поток, как topic?

## Типичные ошибки

| Симптом | Причина | Исправление |
| --- | --- | --- |
| `ros2 run` — «Package not found» | Забыли `source install/setup.bash` | `source ~/ros2_ws/install/setup.bash` |
| Client вечно печатает `waiting for service...` | Server не запущен или имя service различается | Запустить server, сверить `'add_two_ints'` |
| `ros2 service call` возвращает `0` | Неправильные имена полей запроса | Сверить `a`, `b` (не `x`, `y`) |
| `ros2 service call` — «service not available» | Другое имя service или нет server | Проверить `ros2 service list` |
| Ошибка импорта `example_interfaces` | Не добавлена зависимость | `--dependencies example_interfaces` при создании пакета |
| Client завис после `call_async` | Не вызван `spin_until_future_complete` | Добавить `rclpy.spin_until_future_complete(node, future)` |

## Дополнительное задание

1. Сделайте client с полностью асинхронным ответом: замените блокирующее ожидание на `future.add_done_callback(...)` и `rclpy.spin(client)`. Сравните поведение.
2. Вызовите `ros2 service call` на несуществующий service и прочитайте текст ошибки: `ros2 service type /nonexistent`.
3. Запустите client, когда server выключен, — понаблюдайте за сообщением `waiting for service...`, затем запустите server и увидьте, что client дождался его.

## Где это в роботе

В TIAgo service используется для команд с подтверждением. Пример — аварийная остановка: `ros2 service call /emergency_stop std_srvs/srv/Trigger "{}"` останавливает робота. Разбор — в кейсе уровня 3 занятия 10 и [`3_Robot/TIAgo_humble/docs/safety.md`](../../3_Robot/TIAgo_humble/docs/safety.md).

## Ссылки

- Статья — [`../2_knowledge/services.md`](../2_knowledge/services.md).
- Практика 9 (topic) — [`09_topic.md`](09_topic.md).
- Домашнее задание 10 — [`../2_homework/hw_10_service.md`](../2_homework/hw_10_service.md).
- [Writing a simple service and client (Python)](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Service-And-Client.html)
- [Understanding ROS 2 services](https://docs.ros.org/en/jazzy/Tutorials/Beginner-CLI-Tools/Understanding-ROS2-Services/Understanding-ROS2-Services.html)
