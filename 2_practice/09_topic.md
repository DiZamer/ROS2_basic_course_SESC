# Практика: topic, publisher и subscriber

## Цель

Через 5–10 минут студент создаёт пакет с publisher и subscriber на Python, обменивается сообщениями `std_msgs/msg/String` и проверяет обмен из командной строки через `ros2 topic echo`, `ros2 topic hz` и `ros2 topic pub`.

## Предварительные требования

- Открыт Dev Container уровня 2 (`.devcontainer/`, Ubuntu 24.04 + ROS2 Jazzy).
- ROS2 не устанавливается на хост — всё выполняется внутри контейнера.
- Готов workspace из практики 7: [`07_workspace.md`](07_workspace.md) (`~/ros2_ws`).
- Прочитана статья [`../2_knowledge/topics.md`](../2_knowledge/topics.md).

## Что получится

- Пакет `my_topic_pkg` с двумя узлами: `talker` (publisher) и `listener` (subscriber).
- Узел `talker` раз в секунду публикует строку в topic `/chatter`; `listener` читает её и печатает.
- Обмен проверен из CLI: `ros2 topic echo`, `ros2 topic hz`, `ros2 topic pub`, `ros2 topic info`.

## Шаг 1. Создать пакет

```bash
cd ~/ros2_ws
ros2 pkg create --build-type ament_python my_topic_pkg \
  --destination-directory src --dependencies rclpy std_msgs
```

Флаг `--dependencies rclpy std_msgs` прописывает зависимости в `package.xml`.

## Шаг 2. Код publisher

Файл `~/ros2_ws/src/my_topic_pkg/my_topic_pkg/talker.py`:

```python
import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class Talker(Node):

    def __init__(self):
        super().__init__('talker')
        self.publisher = self.create_publisher(String, 'chatter', 10)
        self.count = 0
        self.timer = self.create_timer(1.0, self.timer_callback)

    def timer_callback(self):
        msg = String()
        msg.data = f'Hello #{self.count}'
        self.publisher.publish(msg)
        self.get_logger().info(f'Published: "{msg.data}"')
        self.count += 1


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


if __name__ == '__main__':
    main()
```

## Шаг 3. Код subscriber

Файл `~/ros2_ws/src/my_topic_pkg/my_topic_pkg/listener.py`:

```python
import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class Listener(Node):

    def __init__(self):
        super().__init__('listener')
        self.subscription = self.create_subscription(
            String, 'chatter', self.callback, 10)

    def callback(self, msg):
        self.get_logger().info(f'I heard: "{msg.data}"')


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


if __name__ == '__main__':
    main()
```

## Шаг 4. Точки входа в setup.py

Откройте `~/ros2_ws/src/my_topic_pkg/setup.py` и замените блок `entry_points` на:

```python
entry_points={
    'console_scripts': [
        'talker = my_topic_pkg.talker:main',
        'listener = my_topic_pkg.listener:main',
    ],
},
```

Полный файл `setup.py` (создаётся `ros2 pkg create`, дополняется точками входа):

```python
from setuptools import find_packages, setup

package_name = 'my_topic_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='student',
    maintainer_email='student@todo.todo',
    description='Topic publisher and subscriber example',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'talker = my_topic_pkg.talker:main',
            'listener = my_topic_pkg.listener:main',
        ],
    },
)
```

## Шаг 5. Сборка

```bash
cd ~/ros2_ws
colcon build
source install/setup.bash
```

Ожидаемый финал: `Summary: 1 package finished`.

## Шаг 6. Запуск

Терминал 1 — publisher:

```bash
cd ~/ros2_ws && source install/setup.bash
ros2 run my_topic_pkg talker
```

```text
[INFO] [talker]: Published: "Hello #0"
[INFO] [talker]: Published: "Hello #1"
...
```

Терминал 2 — subscriber:

```bash
cd ~/ros2_ws && source install/setup.bash
ros2 run my_topic_pkg listener
```

```text
[INFO] [listener]: I heard: "Hello #0"
[INFO] [listener]: I heard: "Hello #1"
...
```

## Шаг 7. Проверить обмен из CLI

Пока `talker` работает, в третьем терминале:

```bash
# список topics и их типы
ros2 topic list
ros2 topic list -t
# /chatter [std_msgs/msg/String]

# читаем сообщения
ros2 topic echo /chatter

# частота публикации
ros2 topic hz /chatter
# average rate: 1.000

# тип и число publisher/subscriber
ros2 topic info /chatter
ros2 topic info /chatter --verbose
```

## Шаг 8. Публикация из CLI

Остановите `talker` (`Ctrl+C`), оставьте `listener` работать. Публикуйте из командной строки:

```bash
ros2 topic pub --once /chatter std_msgs/msg/String "data: 'Hello from CLI'"
```

В терминале `listener` появится:

```text
[INFO] [listener]: I heard: "Hello from CLI"
```

Непрерывная публикация с частотой 2 Гц (остановить `Ctrl+C`):

```bash
ros2 topic pub /chatter std_msgs/msg/String "data: 'Streaming'" --rate 2
```

## Проверка результата

| Действие | Ожидаемый результат |
| --- | --- |
| `ros2 run my_topic_pkg talker` | Раз в секунду печатается `Published: "Hello #N"` |
| `ros2 run my_topic_pkg listener` | Те же строки в `I heard: "..."` |
| `ros2 topic echo /chatter` | Сообщения видны без написания своего узла |
| `ros2 topic hz /chatter` | `average rate: 1.000` |
| `ros2 topic info /chatter` | Тип `std_msgs/msg/String`, по одному pub и sub |
| `ros2 topic pub --once /chatter ...` | `listener` печатает полученную строку |

## Вопросы студентам

1. Почему `listener` ничего не печатает, пока `talker` остановлен, но печатает сообщение от `ros2 topic pub`?
2. Что показывает `ros2 topic info /chatter` и зачем там тип сообщения?
3. Что произойдёт, если `talker` публикует `String`, а `listener` подпишется на `Int32`?
4. Зачем нужен topic, если можно просто вызвать функцию у другого узла?

## Типичные ошибки

| Симптом | Причина | Исправление |
| --- | --- | --- |
| `ros2 run` — «Package 'my_topic_pkg' not found» | Забыли `source install/setup.bash` | `source ~/ros2_ws/install/setup.bash` |
| `ros2 run` — «No executable found» | Не обновлён `entry_points` или не пересобрано | Обновить `setup.py`, `colcon build` |
| `listener` молчит, `talker` печатает | Разные имена topic у pub и sub | Сверить `'chatter'` в обоих файлах |
| `ros2 topic info` показывает 0 subscriber | Несовпадение типа или имени topic | Проверить тип и имя `chatter` |
| Ошибка импорта `std_msgs` | Не добавлена зависимость | `--dependencies std_msgs` при создании пакета |
| `listener` печатает с задержкой/рывками | Блокирующий код в callback | Callback делать быстрым |

## Дополнительное задание

1. Измените тип на `std_msgs/msg/Int32` и публикуйте `msg.data = self.count` — посмотрите, как изменится вывод `ros2 topic echo`.
2. Опубликуйте `geometry_msgs/msg/Twist` в `/cmd_vel_test` через `ros2 topic pub` и прочитайте через `ros2 topic echo`. Посмотрите структуру: `ros2 interface show geometry_msgs/msg/Twist`.

## Где это в роботе

В TIAgo именно так устроены все потоки данных: лидар публикует `/scan` (`sensor_msgs/LaserScan`), привод базы публикует `/odom` (`nav_msgs/Odometry`), навигатор публикует `/cmd_vel` (`geometry_msgs/Twist`). Разбор — в кейсе уровня 3 занятия 9.

## Ссылки

- Статья — [`../2_knowledge/topics.md`](../2_knowledge/topics.md).
- Практика 8 (узел) — [`08_node.md`](08_node.md).
- Домашнее задание 9 — [`../2_homework/hw_09_topic.md`](../2_homework/hw_09_topic.md).
- [Writing a simple publisher and subscriber (Python)](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Publisher-And-Subscriber.html)
- [Understanding ROS 2 topics](https://docs.ros.org/en/jazzy/Tutorials/Beginner-CLI-Tools/Understanding-ROS2-Topics/Understanding-ROS2-Topics.html)
