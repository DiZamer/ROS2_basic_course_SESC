# Домашнее задание 10: service в своей модели

## Цель

Добавить в свою модель робота service «включить/выключить датчик» через стандартный `std_srvs/srv/SetBool`: узел-датчик предоставляет service server, отдельный узел-клиент переключает датчик. Собрать, запустить, проверить из CLI, зафиксировать в дневнике и сделать коммит.

## Связь с темой занятия

Занятие 10 показало, что service — это короткий запрос-ответ, где client отправляет запрос и ждёт ответа, а server обрабатывает его и возвращает результат. Дома студент добавляет в узел `sensor_node` (из [`hw_09_topic.md`](hw_09_topic.md)) service server, чтобы управлять им не только потоком сообщений, но и командой с подтверждением.

## Предварительные требования

- Workspace модели и пакет из [`hw_07_workspace.md`](hw_07_workspace.md) (`~/my_robot/ros2_ws`, пакет `my_robot_base`).
- Узлы `sensor_node` и `monitor_node` из [`hw_09_topic.md`](hw_09_topic.md).
- Дневник `~/my_robot/diary.md`.
- Статья [`../2_knowledge/services.md`](../2_knowledge/services.md) и практика [`../2_practice/10_service.md`](../2_practice/10_service.md).
- Выполняется дома в devcontainer (ROS2 Jazzy, уровень 2); ROS2 не устанавливается на хост.

## Шаг к виртуальной модели робота

У модели появляется первая команда с подтверждением: service `/sensor_enable` включает и выключает публикацию датчика. В следующих занятиях такие service станут командами управления (`/emergency_stop`, включение подсистем), а на уровне 3 — реальными интерфейсами робота.

## Шаги

### Шаг 1. Добавить зависимость `std_srvs`

В `~/my_robot/ros2_ws/src/my_robot_base/package.xml` добавьте строку после `<exec_depend>std_msgs</exec_depend>`:

```xml
  <exec_depend>std_srvs</exec_depend>
```

### Шаг 2. Service server в узле-датчике

Обновите файл `~/my_robot/ros2_ws/src/my_robot_base/my_robot_base/sensor_node.py`:

```python
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from std_srvs.srv import SetBool


class SensorNode(Node):

    def __init__(self):
        super().__init__('sensor_node')
        self.publisher = self.create_publisher(String, 'sensor_data', 10)
        self.reading = 0
        self.enabled = True
        self.timer = self.create_timer(1.0, self.timer_callback)
        self.srv = self.create_service(SetBool, 'sensor_enable', self.enable_callback)

    def timer_callback(self):
        if not self.enabled:
            return
        msg = String()
        msg.data = f'reading={self.reading}'
        self.publisher.publish(msg)
        self.get_logger().info(f'Sensor published: "{msg.data}"')
        self.reading += 1

    def enable_callback(self, request, response):
        self.enabled = request.data
        response.success = True
        response.message = f'sensor {"enabled" if self.enabled else "disabled"}'
        self.get_logger().info(f'/sensor_enable: {response.message}')
        return response


def main(args=None):
    rclpy.init(args=args)
    node = SensorNode()
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

### Шаг 3. Service client

Создайте файл `~/my_robot/ros2_ws/src/my_robot_base/my_robot_base/sensor_control_client.py`:

```python
import rclpy
from rclpy.node import Node
from std_srvs.srv import SetBool


class SensorControlClient(Node):

    def __init__(self):
        super().__init__('sensor_control_client')
        self.cli = self.create_client(SetBool, 'sensor_enable')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('waiting for /sensor_enable...')

    def call(self, data):
        req = SetBool.Request()
        req.data = data
        return self.cli.call_async(req)


def main(args=None):
    rclpy.init(args=args)
    client = SensorControlClient()
    for data in (False, True):
        future = client.call(data)
        rclpy.spin_until_future_complete(client, future)
        response = future.result()
        client.get_logger().info(f'response: success={response.success} message="{response.message}"')
    client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
```

### Шаг 4. Точка входа в setup.py

В `my_robot_base/setup.py` добавьте в `entry_points` строку для клиента:

```python
entry_points={
    'console_scripts': [
        'robot_state_node = my_robot_base.robot_state_node:main',
        'sensor_node = my_robot_base.sensor_node:main',
        'monitor_node = my_robot_base.monitor_node:main',
        'sensor_control_client = my_robot_base.sensor_control_client:main',
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

Терминал 1 — датчик (publisher + service server):

```bash
cd ~/my_robot/ros2_ws && source install/setup.bash
ros2 run my_robot_base sensor_node
```

Терминал 2 — обработчик:

```bash
cd ~/my_robot/ros2_ws && source install/setup.bash
ros2 run my_robot_base monitor_node
```

Терминал 3 — проверить service из CLI:

```bash
ros2 service list -t
# /sensor_enable [std_srvs/srv/SetBool]

# выключить датчик
ros2 service call /sensor_enable std_srvs/srv/SetBool "{data: false}"

# включить датчик
ros2 service call /sensor_enable std_srvs/srv/SetBool "{data: true}"
```

После вызова `"{data: false}"` публикация останавливается: `sensor_node` и `monitor_node` перестают печатать. После `"{data: true}"` — возобновляется.

### Шаг 7. Запустить client

В отдельном терминале:

```bash
cd ~/my_robot/ros2_ws && source install/setup.bash
ros2 run my_robot_base sensor_control_client
```

```text
[INFO] [sensor_control_client]: response: success=True message="sensor disabled"
[INFO] [sensor_control_client]: response: success=True message="sensor enabled"
```

### Шаг 8. Зафиксировать в дневнике

Добавьте в `~/my_robot/diary.md`:

```markdown
## Команда модели (service)

- sensor_node: service server /sensor_enable (std_srvs/srv/SetBool)
- sensor_control_client: service client → включает/выключает публикацию
- запуск: ros2 run my_robot_base sensor_node / sensor_control_client
- проверка: ros2 service call /sensor_enable std_srvs/srv/SetBool "{data: false}"
```

### Шаг 9. Коммит в Git

```bash
cd ~/my_robot
git add ros2_ws/src/my_robot_base diary.md
git commit -m "service в модели: /sensor_enable включает/выключает датчик"
```

## Ожидаемый результат

- Узел `sensor_node` предоставляет service `/sensor_enable` типа `std_srvs/srv/SetBool`.
- `ros2 service call ... "{data: false}"` останавливает публикацию, `"{data: true}"` возобновляет.
- Узел `sensor_control_client` вызывает service из кода и печатает ответ.
- В `diary.md` записан service, сделан коммит.

## Вопросы для самопроверки

1. Чем service `/sensor_enable` отличается от topic `/sensor_data` в одной и той же модели?
2. Почему в client нужен цикл `wait_for_service()`?
3. Что вернёт `response.success`, если service отработал, но датчик не смог включиться?
4. Зачем нужен `spin_until_future_complete` в клиенте?

## Критерии оценки

Задание выполнено, если:

- в `sensor_node` добавлен service server (`create_service`) с типом `std_srvs/srv/SetBool`;
- вызов `ros2 service call /sensor_enable ... "{data: false}"` останавливает публикацию, `"{data: true}"` возобновляет;
- добавлен client-узел с `wait_for_service()` и `call_async()`;
- в `setup.py` объявлена точка входа, пакет собран;
- сделан коммит, в `diary.md` записан service.

## Типичные ошибки

| Симптом | Причина | Исправление |
| --- | --- | --- |
| Ошибка импорта `std_srvs` | Не добавлена зависимость | `<exec_depend>std_srvs</exec_depend>` в `package.xml` |
| `ros2 service call` — «service not available» | Server не запущен или имя различается | Запустить `sensor_node`, сверить `sensor_enable` |
| Вызов `"{data: false}"` не останавливает публикацию | В `timer_callback` нет проверки `self.enabled` | Добавить `if not self.enabled: return` |
| Client вечно печатает `waiting for /sensor_enable...` | `sensor_node` не запущен | Запустить `sensor_node` первым |
| `ros2 service list` пуст | Забыли `source install/setup.bash` | `source ~/my_robot/ros2_ws/install/setup.bash` |

## Ссылки

- Статья — [`../2_knowledge/services.md`](../2_knowledge/services.md).
- Практика занятия — [`../2_practice/10_service.md`](../2_practice/10_service.md).
- Предыдущее ДЗ — [`hw_09_topic.md`](hw_09_topic.md).
- Следующее занятие 11 «Action server и action client» — [`../1_lecture/lectures_content.md`](../1_lecture/lectures_content.md), тема 11.
