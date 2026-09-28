# Домашнее задание 9: publisher и subscriber в своей модели

## Цель

Добавить в свою модель робота два узла, которые обмениваются данными через topic: «датчик» публикует показания, «обработчик» подписывается и выводит их. Собрать, запустить, проверить из CLI, зафиксировать в дневнике и сделать коммит.

## Связь с темой занятия

Занятие 9 показало, что topic — именованный поток сообщений с фиксированным типом, а publisher и subscriber общаются только через имя topic и тип. Дома студент связывает первый узел модели (из [`hw_08_node.md`](hw_08_node.md)) с новым узлом через topic — так в модели появляется первый поток данных.

## Предварительные требования

- Workspace модели и пакет из [`hw_07_workspace.md`](hw_07_workspace.md) (`~/my_robot/ros2_ws`, пакет `my_robot_base`).
- Узел `robot_state_node` из [`hw_08_node.md`](hw_08_node.md).
- Перечень узлов и интерфейсов модели из [`hw_06_ros_architecture.md`](hw_06_ros_architecture.md).
- Дневник `~/my_robot/diary.md`.
- Статья [`../2_knowledge/topics.md`](../2_knowledge/topics.md) и практика [`../2_practice/09_topic.md`](../2_practice/09_topic.md).
- Выполняется дома в devcontainer (ROS2 Jazzy, уровень 2); ROS2 не устанавливается на хост.

## Шаг к виртуальной модели робота

В модели появляется первый поток данных: узел-«датчик» (например, `sensor_node`) публикует показания в topic, узел-«обработчик» (например, `monitor_node`) подписывается и выводит их. В следующих занятиях эти узлы обрастут реальными типами (`sensor_msgs`, `nav_msgs`) и подключатся к навигации и восприятию.

## Шаги

### Шаг 1. Узел-датчик (publisher)

Создайте файл `~/my_robot/ros2_ws/src/my_robot_base/my_robot_base/sensor_node.py`:

```python
import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class SensorNode(Node):

    def __init__(self):
        super().__init__('sensor_node')
        self.publisher = self.create_publisher(String, 'sensor_data', 10)
        self.reading = 0
        self.timer = self.create_timer(1.0, self.timer_callback)

    def timer_callback(self):
        msg = String()
        msg.data = f'reading={self.reading}'
        self.publisher.publish(msg)
        self.get_logger().info(f'Sensor published: "{msg.data}"')
        self.reading += 1


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

### Шаг 2. Узел-обработчик (subscriber)

Создайте файл `~/my_robot/ros2_ws/src/my_robot_base/my_robot_base/monitor_node.py`:

```python
import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class MonitorNode(Node):

    def __init__(self):
        super().__init__('monitor_node')
        self.subscription = self.create_subscription(
            String, 'sensor_data', self.callback, 10)

    def callback(self, msg):
        self.get_logger().info(f'Monitor received: "{msg.data}"')


def main(args=None):
    rclpy.init(args=args)
    node = MonitorNode()
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

### Шаг 3. Точки входа в setup.py

В `my_robot_base/setup.py` замените блок `entry_points` на:

```python
entry_points={
    'console_scripts': [
        'robot_state_node = my_robot_base.robot_state_node:main',
        'sensor_node = my_robot_base.sensor_node:main',
        'monitor_node = my_robot_base.monitor_node:main',
    ],
},
```

### Шаг 4. Собрать

```bash
cd ~/my_robot/ros2_ws
colcon build
source install/setup.bash
```

Ожидаемый финал: `Summary: 1 package finished`.

### Шаг 5. Запустить и проверить

Терминал 1 — датчик:

```bash
cd ~/my_robot/ros2_ws && source install/setup.bash
ros2 run my_robot_base sensor_node
```

Терминал 2 — обработчик:

```bash
cd ~/my_robot/ros2_ws && source install/setup.bash
ros2 run my_robot_base monitor_node
```

Ожидаемый вывод:

```text
# sensor_node
[INFO] [sensor_node]: Sensor published: "reading=0"
[INFO] [sensor_node]: Sensor published: "reading=1"

# monitor_node
[INFO] [monitor_node]: Monitor received: "reading=0"
[INFO] [monitor_node]: Monitor received: "reading=1"
```

В третьем терминале проверьте из CLI:

```bash
ros2 topic list -t          # /sensor_data [std_msgs/msg/String]
ros2 topic echo /sensor_data
ros2 topic hz /sensor_data  # average rate: 1.000
ros2 topic info /sensor_data
```

Остановите оба узла (`Ctrl+C`).

### Шаг 6. Эксперимент: публикация из CLI

Запустите только `monitor_node`, затем в другом терминале:

```bash
ros2 topic pub --once /sensor_data std_msgs/msg/String "data: 'manual override'"
```

Убедитесь, что `monitor_node` напечатал `Monitor received: "manual override"`.

### Шаг 7. Зафиксировать в дневнике

Добавьте в `~/my_robot/diary.md`:

```markdown
## Поток данных модели (topic)

- sensor_node (publisher) → /sensor_data (std_msgs/msg/String), 1 Гц
- monitor_node (subscriber) ← /sensor_data
- запуск: ros2 run my_robot_base sensor_node / monitor_node
- проверка: ros2 topic list -t, echo, hz, info
- эксперимент: ros2 topic pub --once /sensor_data ...
```

### Шаг 8. Коммит в Git

```bash
cd ~/my_robot
git add ros2_ws/src/my_robot_base diary.md
git commit -m "поток данных модели: sensor_node → /sensor_data → monitor_node"
```

## Ожидаемый результат

- Узлы `sensor_node` и `monitor_node` собраны и обмениваются сообщениями через `/sensor_data`.
- `ros2 topic echo`, `ros2 topic hz`, `ros2 topic info` подтверждают обмен.
- Продемонстрирована публикация из CLI в работающий subscriber.
- В `diary.md` записан поток данных, сделан коммит.

## Вопросы для самопроверки

1. Как `monitor_node` узнаёт, что сообщение пришло, если он не вызывает `sensor_node` напрямую?
2. Что будет, если в `monitor_node` подписаться на `Int32`, а `sensor_node` публикует `String`?
3. Почему `ros2 topic echo /sensor_data` видит данные, хотя не запущен ни один ваш узел-обработчик?
4. Чем topic отличается от прямого вызова функции между узлами?

## Критерии оценки

Задание выполнено, если:

- созданы два узла: publisher (`create_publisher`) и subscriber (`create_subscription`);
- у них одинаковое имя topic `/sensor_data` и одинаковый тип `std_msgs/msg/String`;
- в `setup.py` объявлены точки входа, пакет собран;
- обмен подтверждён из CLI (`list -t`, `echo`, `hz`, `info`) и публикацией `ros2 topic pub`;
- сделан коммит, в `diary.md` записан поток данных.

## Типичные ошибки

| Симптом | Причина | Исправление |
| --- | --- | --- |
| `monitor_node` молчит, `sensor_node` печатает | Разные имена topic или типы | Сверить `'sensor_data'` и `String` в обоих узлах |
| `ros2 topic hz` показывает 0 | publisher не публикует (нет `spin()` или таймера) | Проверить `rclpy.spin(node)` и `create_timer` |
| `ros2 run` не находит команду | Не обновлён `entry_points` | Обновить `setup.py`, `colcon build` |
| `ros2 topic list` не видит `/sensor_data` | Забыли `source install/setup.bash` | `source ~/my_robot/ros2_ws/install/setup.bash` |
| В Git попали `build/`, `install/` | Нет `.gitignore` | Убедиться, что `build/`, `install/`, `log/` в `.gitignore` |

## Ссылки

- Статья — [`../2_knowledge/topics.md`](../2_knowledge/topics.md).
- Практика занятия — [`../2_practice/09_topic.md`](../2_practice/09_topic.md).
- Предыдущее ДЗ — [`hw_08_node.md`](hw_08_node.md).
- Архитектура своей модели — [`hw_06_ros_architecture.md`](hw_06_ros_architecture.md).
- Следующее занятие 10 «Service и client» — [`../1_lecture/lectures_content.md`](../1_lecture/lectures_content.md), тема 10.
