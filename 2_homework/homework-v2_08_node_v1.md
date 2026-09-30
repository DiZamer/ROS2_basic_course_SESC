# Домашняя работа-v2 08: heartbeat node своей модели

## Цель

Добавить к личной модели ROS 2 node, который периодически публикует сообщение в лог и корректно завершается.

## Предварительные требования

- Выполнено ДЗ 7; в личном workspace есть `my_robot_core`.
- Доступен Dev Container Jazzy.
- ROS 2 не устанавливается на host.

## Связь и шаг модели

Node — первый запущенный компонент собственной модели. Пока он не обменивается сообщениями; topic появится в задании занятия 9.

## Шаг 1. Создать файл узла

В `~/my_robot/ros2_ws/src/my_robot_core/my_robot_core/robot_state_node.py` создайте:

```python
import rclpy
from rclpy.node import Node


class RobotStateNode(Node):
    def __init__(self):
        super().__init__('robot_state_node')
        self._ticks = 0
        self._timer = self.create_timer(2.0, self._report)

    def _report(self):
        self._ticks += 1
        self.get_logger().info(f'model heartbeat #{self._ticks}')


def main(args=None):
    rclpy.init(args=args)
    node = RobotStateNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
```

## Шаг 2. Добавить entry point

В `setup.py` добавьте в `console_scripts`:

```python
'robot_state_node = my_robot_core.robot_state_node:main',
```

## Шаг 3. Собрать и проверить

```bash
cd ~/my_robot/ros2_ws
colcon build --symlink-install --packages-select my_robot_core
source install/setup.bash
ros2 run my_robot_core robot_state_node
```

Во втором терминале контейнера выполните:

```bash
ros2 node list
ros2 node info /robot_state_node
```

Ожидаемый результат: node повторно пишет сообщение каждые 2 секунды; CLI показывает `/robot_state_node`.

## Шаг 4. Обновить дневник

В `~/my_robot/diary.md` зафиксируйте:

```markdown
## Занятие 8 — первый node
- Node name: /robot_state_node
- Одна ответственность: heartbeat состояния модели
- Timer period: 2 s
- Проверка: ros2 node list / ros2 node info
```

## Критерии выполнения

- Узел запускается через `ros2 run`.
- В логе видны периодические сообщения.
- `ros2 node list` показывает node, а `ros2 node info` не завершается ошибкой.
- Рабочее дерево остаётся чистым после фиксации в Git.

## Типичные ошибки и самопроверка

- Нет `spin()` → callback не повторяется.
- Нет console entry point → CLI не находит executable.
- Не подключён overlay → package не находится.

Вопросы: что является node — файл или процесс? Какую задачу выполняет Executor? Что изменится при периоде 0,1 секунды?

Материалы: [`../2_practice/practice-v2_08_node_v1.md`](../2_practice/practice-v2_08_node_v1.md), [`../2_knowledge/nodes.md`](../2_knowledge/nodes.md).
