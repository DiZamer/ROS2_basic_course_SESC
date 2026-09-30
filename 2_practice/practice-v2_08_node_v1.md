# Практика-v2 08: первый timer node

## Цель

Создать package через `ros2 pkg create`, добавить Python node с timer callback, собрать и проверить его в Dev Container Jazzy.

## Результат

- Package `timer_demo_pkg` в workspace;
- executable `heartbeat_node`;
- регулярный лог раз в секунду;
- подтверждённый node name через ROS 2 CLI.

## Предварительные требования

- Dev Container Jazzy открыт; команда `ros2` доступна.
- Workspace `~/ros2_ws` подготовлен на занятии 7.
- ROS 2 не устанавливается на host.

## Шаг 1. Создать package генератором (5 минут)

```bash
cd ~/ros2_ws/src
ros2 pkg create --build-type ament_python --license Apache-2.0 timer_demo_pkg --dependencies rclpy
```

Если папка уже есть, не генерируйте поверх неё: используйте `timer_demo_pkg_2` или продолжите в существующем пакете.

## Шаг 2. Добавить код узла (10 минут)

Создайте `~/ros2_ws/src/timer_demo_pkg/timer_demo_pkg/heartbeat_node.py`:

```python
import rclpy
from rclpy.node import Node


class HeartbeatNode(Node):
    def __init__(self):
        super().__init__('heartbeat_node')
        self._count = 0
        self._timer = self.create_timer(1.0, self._tick)

    def _tick(self):
        self._count += 1
        self.get_logger().info(f'heartbeat {self._count}')


def main(args=None):
    rclpy.init(args=args)
    node = HeartbeatNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
```

## Шаг 3. Зарегистрировать executable (5 минут)

В `setup.py` допишите в `entry_points['console_scripts']`:

```python
'heartbeat_node = timer_demo_pkg.heartbeat_node:main',
```

Это точка входа для `ros2 run`: package, модуль, функция main.

## Шаг 4. Собрать package (7 минут)

```bash
cd ~/ros2_ws
colcon build --symlink-install --packages-select timer_demo_pkg
source install/setup.bash
ros2 pkg prefix timer_demo_pkg
```

Ожидаемый результат: команда prefix показывает `~/ros2_ws/install/timer_demo_pkg`.

## Шаг 5. Запустить и исследовать node (8 минут)

В терминале 1:

```bash
ros2 run timer_demo_pkg heartbeat_node
```

Ожидаемо: сообщения `heartbeat 1`, `heartbeat 2` примерно раз в секунду. Во втором терминале контейнера:

```bash
ros2 node list
ros2 node info /heartbeat_node
```

Остановите узел через Ctrl+C.

## Шаг 6. Проверить роль spin (5 минут)

Откройте код и временно переместите `rclpy.spin(node)` под комментарий. Запустите снова. Узел создастся и быстро завершится без регулярных heartbeat. Верните строку до окончания практики.

## Проверка результата

| Проверка | Ожидаемый результат |
| --- | --- |
| `ros2 pkg prefix timer_demo_pkg` | Путь к установленному package. |
| `ros2 run timer_demo_pkg heartbeat_node` | Heartbeat раз в секунду. |
| `ros2 node list` | `/heartbeat_node`. |
| Без `spin()` | Нет регулярных callback-сообщений. |

## Типичные ошибки

| Симптом | Исправление |
| --- | --- |
| Executable не найден | Проверить `entry_points`, пересобрать package и source overlay. |
| Файл не импортируется | Проверить путь `timer_demo_pkg/heartbeat_node.py` и имя модуля. |
| Callback не повторяется | Проверить, что есть `rclpy.spin(node)`. |
| Несколько heartbeat узлов | Завершить старый процесс в терминале через Ctrl+C. |

## Связанные материалы

- Содержание: [`../1_lecture/lecture-v2_content_08_node_v1.md`](../1_lecture/lecture-v2_content_08_node_v1.md).
- План: [`../1_lecture/lecture-v2_plan_08_node_v1.md`](../1_lecture/lecture-v2_plan_08_node_v1.md).
- ДЗ: [`../2_homework/homework-v2_08_node_v1.md`](../2_homework/homework-v2_08_node_v1.md).
- [ROS 2 Python node tutorial](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Publisher-And-Subscriber.html).
