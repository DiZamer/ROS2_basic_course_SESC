# Практика-v2 09: talker и listener

## Цель и результат

Создать ROS 2 Python package `topic_demo_pkg` с publisher и subscriber для `std_msgs/msg/String`, собрать, запустить и проверить обмен с CLI.

## Предварительные требования

- Dev Container уровня 2 (ROS 2 Jazzy), `rclpy`, `std_msgs`, `colcon`.
- Выполнять команды в отдельном workspace `~/ros2_ws`.
- Не публиковать учебную скорость в `/cmd_vel` в этой практике.

## Шаг 1. Создать package (5 минут)

```bash
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws/src
ros2 pkg create --build-type ament_python --license Apache-2.0 topic_demo_pkg --dependencies rclpy std_msgs
```

## Шаг 2. Создать publisher (8 минут)

Создайте `topic_demo_pkg/topic_demo_pkg/talker.py`:

```python
import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class Talker(Node):
    def __init__(self):
        super().__init__('talker')
        self._count = 0
        self._pub = self.create_publisher(String, '/chatter', 10)
        self._timer = self.create_timer(1.0, self._publish)

    def _publish(self):
        msg = String()
        msg.data = f'hello {self._count}'
        self._pub.publish(msg)
        self.get_logger().info(f'published: {msg.data}')
        self._count += 1


def main(args=None):
    rclpy.init(args=args)
    node = Talker()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
```

## Шаг 3. Создать subscriber (8 минут)

Создайте `topic_demo_pkg/topic_demo_pkg/listener.py`:

```python
import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class Listener(Node):
    def __init__(self):
        super().__init__('listener')
        self._sub = self.create_subscription(
            String, '/chatter', self._on_message, 10)

    def _on_message(self, msg):
        self.get_logger().info(f'heard: {msg.data}')


def main(args=None):
    rclpy.init(args=args)
    node = Listener()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
```

## Шаг 4. Добавить executables (4 минуты)

В `setup.py` допишите в `console_scripts`:

```python
'talker = topic_demo_pkg.talker:main',
'listener = topic_demo_pkg.listener:main',
```

## Шаг 5. Собрать и подключить (7 минут)

```bash
cd ~/ros2_ws
colcon build --symlink-install --packages-select topic_demo_pkg
source install/setup.bash
```

## Шаг 6. Запустить и увидеть обмен (5 минут)

В терминале 1:

```bash
ros2 run topic_demo_pkg talker
```

В терминале 2:

```bash
ros2 run topic_demo_pkg listener
```

Ожидаемый результат: listener выводит последовательность `hello N`.

## Шаг 7. Проверить topic со стороны (4 минуты)

В третьем терминале:

```bash
ros2 topic list -t
ros2 topic info /chatter --verbose
ros2 topic echo /chatter --once
ros2 interface show std_msgs/msg/String
```

Остановите talker и listener через Ctrl+C.

## Ручная публикация (дополнительно)

```bash
ros2 topic pub --once /chatter std_msgs/msg/String "{data: 'manual test'}"
```

Эта команда тестирует только `/chatter`. Никогда не переносите её на `/cmd_vel` без подтверждения, что target — изолированная симуляция.

## Проверка результата

- `ros2 topic list -t` показывает `/chatter [std_msgs/msg/String]`.
- `topic info` видит publisher/subscriber при запущенных узлах.
- Listener получает сообщения.
- После Ctrl+C узлы завершаются.

## Вопросы и ошибки

1. Почему subscriber не находит publisher, если типы разные?
2. Что означает последняя цифра `10` в `create_publisher` на этом занятии?
3. Как проверить namespace и точное имя topic?

| Ошибка | Проверить |
| --- | --- |
| `ros2 run` не находит executable | setup.py entry point, build и source. |
| `topic info` показывает 0 endpoints | Точное имя, domain ID, наличие процессов. |
| Узлы видят topic, но не обмениваются | Типы и QoS compatibility. |

## Связанные материалы

- [Содержание](../1_lecture/lecture-v2_content_09_topic_v1.md) · [План](../1_lecture/lecture-v2_plan_09_topic_v1.md) · [ДЗ](../2_homework/homework-v2_09_topic_v1.md)
- [ROS 2 Python publisher/subscriber tutorial](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Publisher-And-Subscriber.html)
