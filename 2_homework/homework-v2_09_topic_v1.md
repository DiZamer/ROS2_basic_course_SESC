# Домашняя работа-v2 09: topic своей модели

## Цель

Добавить в модель собственный поток статуса и отдельный узел-потребитель.

## Предварительные требования

- Личный workspace и package из задания 7.
- Работающий Node из задания 8 или готовность добавить node в package.
- Dev Container Jazzy; ROS 2 на host не устанавливается.

## Шаг к модели

Модель получает первое межузловое взаимодействие: один компонент публикует состояние, другой его принимает. Выбери безопасный topic, например `/robot_status`, не команду привода.

## Шаг 1. Добавить зависимости

В `package.xml` своего package проверь зависимости:

```xml
<depend>rclpy</depend>
<depend>std_msgs</depend>
```

Если `std_msgs` отсутствует, добавь её в manifest; не создавай структуру пакета вручную.

## Шаг 2. Добавить publisher

Создай `my_robot_core/robot_status_publisher.py`:

```python
import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class StatusPublisher(Node):
    def __init__(self):
        super().__init__('robot_status_publisher')
        self._pub = self.create_publisher(String, '/robot_status', 10)
        self._timer = self.create_timer(1.0, self._publish)

    def _publish(self):
        msg = String()
        msg.data = 'simulation_ready'
        self._pub.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = StatusPublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
```

## Шаг 3. Добавить subscriber

Создай `my_robot_core/robot_status_monitor.py`:

```python
import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class StatusMonitor(Node):
    def __init__(self):
        super().__init__('robot_status_monitor')
        self._sub = self.create_subscription(
            String, '/robot_status', self._on_status, 10)

    def _on_status(self, msg):
        self.get_logger().info(f'status: {msg.data}')


def main(args=None):
    rclpy.init(args=args)
    node = StatusMonitor()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
```

В `setup.py` добавь к существующим entry points:

```python
'robot_status_publisher = my_robot_core.robot_status_publisher:main',
'robot_status_monitor = my_robot_core.robot_status_monitor:main',
```

## Шаг 4. Сборка и проверка

```bash
cd ~/my_robot/ros2_ws
colcon build --symlink-install --packages-select my_robot_core
source install/setup.bash
```

В двух терминалах запусти оба executable. В третьем проверь:

```bash
ros2 topic info /robot_status --verbose
ros2 topic echo /robot_status --once
```

## Шаг 5. Зафиксировать интерфейс

Добавь в `diary.md`:

```markdown
## Topic модели
- Имя: /robot_status
- Тип: std_msgs/msg/String
- Publisher node: …
- Subscriber node: …
- Что означает сообщение: …
```

## Ожидаемый результат

Один узел публикует текстовый статус, другой его получает, CLI подтверждает type и endpoints.

## Самопроверка

1. Почему topic подходит для потока статуса?
2. Какой другой message type может понадобиться для измерения лидара?
3. Какие проверки сделать, если topic появился, но сообщений нет?
4. Почему `/cmd_vel` нельзя использовать для неограниченного эксперимента на физическом роботе?

## Критерии выполнения

- Publisher/subscriber разделены на узлы.
- Используются одинаковые topic name и message type.
- Сборка и запуск проходят внутри контейнера.
- В дневнике описан интерфейс.

## Связанные материалы

- Практика: [`../2_practice/practice-v2_09_topic_v1.md`](../2_practice/practice-v2_09_topic_v1.md).
- Статья: [`../2_knowledge/topics.md`](../2_knowledge/topics.md).
- [ROS 2 topics concepts](https://docs.ros.org/en/jazzy/Concepts/Basic/About-Topics.html).
