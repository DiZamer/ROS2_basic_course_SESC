# Практика: узел, Executor и callbacks

## Цель

Через 5–10 минут студент пишет минимальный Python-узел с timer callback, запускает его через `ros2 run`, находит в `ros2 node list` и `ros2 node info`, и видит разницу между узлом со `spin()` и без него.

## Предварительные требования

- Открыт Dev Container уровня 2 (`.devcontainer/`, Ubuntu 24.04 + ROS2 Jazzy).
- ROS2 не устанавливается на хост — всё выполняется внутри контейнера.
- Готов workspace и пакет из практики 7: [`07_workspace.md`](07_workspace.md) (`~/ros2_ws`, пакет `my_first_pkg`).
- Прочитана статья [`../2_knowledge/nodes.md`](../2_knowledge/nodes.md).

## Что получится

- Пакет `my_first_pkg` с узлом `timer_node`, который раз в секунду печатает `Tick #N`.
- Узел виден в `ros2 node list`; `ros2 node info` показывает его параметры.
- Демонстрация: узел без `spin()` создаётся, но не обрабатывает события — «молчит».

## Шаг 1. Подготовка

Если workspace ещё нет — повторите практику 7:

```bash
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws
ros2 pkg create --build-type ament_python my_first_pkg --destination-directory src
```

## Шаг 2. Код узла

Создайте файл узла:

```bash
mkdir -p ~/ros2_ws/src/my_first_pkg/my_first_pkg
```

Файл `~/ros2_ws/src/my_first_pkg/my_first_pkg/timer_node.py`:

```python
import rclpy
from rclpy.node import Node


class TimerNode(Node):

    def __init__(self):
        super().__init__('timer_node')
        self._count = 0
        self._timer = self.create_timer(1.0, self._timer_callback)
        self.get_logger().info('Node started')

    def _timer_callback(self):
        self._count += 1
        self.get_logger().info(f'Tick #{self._count}')


def main(args=None):
    rclpy.init(args=args)
    node = TimerNode()
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

## Шаг 3. Точка входа в setup.py

Откройте `~/ros2_ws/src/my_first_pkg/setup.py` и замените блок `entry_points` на:

```python
entry_points={
    'console_scripts': [
        'timer_node = my_first_pkg.timer_node:main',
    ],
},
```

## Шаг 4. Сборка

```bash
cd ~/ros2_ws
colcon build
source install/setup.bash
```

Ожидаемый финал: `Summary: 1 package finished`.

## Шаг 5. Запуск

```bash
ros2 run my_first_pkg timer_node
```

Ожидаемый вывод:

```text
[INFO] [timer_node]: Node started
[INFO] [timer_node]: Tick #1
[INFO] [timer_node]: Tick #2
...
```

Остановите узел `Ctrl+C`.

## Шаг 6. Найти узел в графе

Запустите узел в фоне и посмотрите на него со стороны:

```bash
ros2 run my_first_pkg timer_node &
ros2 node list
# /timer_node

ros2 node info /timer_node
# timer_node
#   Subscribers: (пусто)
#   Publishers:  (пусто)
#   Service Servers: ...
```

`ros2 node list` — список живых узлов, `ros2 node info` — что узел делает в графе. Publishers/Subscribers пока пусты — они появятся в занятии 9.

Остановите фоновый узел:

```bash
kill %1
```

## Шаг 7. Эффект отсутствия spin()

Создайте второй узел без `spin()`. Файл `~/ros2_ws/src/my_first_pkg/my_first_pkg/no_spin_node.py`:

```python
import rclpy
from rclpy.node import Node


class NoSpinNode(Node):

    def __init__(self):
        super().__init__('no_spin_node')
        self._timer = self.create_timer(1.0, self._timer_callback)
        self.get_logger().info('Node created (но spin() не вызван)')


    def _timer_callback(self):
        self.get_logger().info('Это сообщение не появится')


def main(args=None):
    rclpy.init(args=args)
    node = NoSpinNode()
    # rclpy.spin(node)   ← НАМЕРЕННО НЕТ
    rclpy.shutdown()


if __name__ == '__main__':
    main()
```

Добавьте точку входа в `setup.py`:

```python
entry_points={
    'console_scripts': [
        'timer_node = my_first_pkg.timer_node:main',
        'no_spin_node = my_first_pkg.no_spin_node:main',
    ],
},
```

Пересоберите и запустите:

```bash
cd ~/ros2_ws && colcon build && source install/setup.bash
ros2 run my_first_pkg no_spin_node
```

Ожидаемый вывод:

```text
[INFO] [no_spin_node]: Node created (но spin() не вызван)
```

Программа завершается сразу. Сообщение «Это сообщение не появится» **никогда не печатается** — таймер создан, но Executor не запущен, поэтому callback не вызывается.

## Проверка результата

| Действие | Ожидаемый результат |
| --- | --- |
| `ros2 run my_first_pkg timer_node` | Раз в секунду печатается `Tick #N` |
| `ros2 node list` (при работающем узле) | В списке есть `/timer_node` |
| `ros2 node info /timer_node` | Имя узла, пустые Publishers/Subscribers, список сервисов |
| `ros2 run my_first_pkg no_spin_node` | Печатается только `Node created`, программа сразу завершается |

## Вопросы студентам

1. Почему `timer_node` печатает `Tick` бесконечно, а `no_spin_node` — нет?
2. Кто такой Executor и что он делает с событиями?
3. Почему `ros2 node list` показывает `/timer_node` только пока узел запущен?
4. Зачем нужны `rclpy.init()` и `rclpy.shutdown()`?

## Типичные ошибки

| Симптом | Причина | Исправление |
| --- | --- | --- |
| `ros2 run` — «Package 'my_first_pkg' not found» | Забыли `source install/setup.bash` | `source ~/ros2_ws/install/setup.bash` |
| `ros2 run` — «No executable found» | Не обновлён `entry_points` или не пересобрано | Добавить точку входа в `setup.py`, затем `colcon build` |
| Узел печатает `Node started` и выходит | Забыли `rclpy.spin(node)` | Добавить `rclpy.spin(node)` в `main()` |
| `RuntimeError: rclpy.init() has not been called` | Нет `rclpy.init()` | Добавить `rclpy.init(args=args)` в начале `main()` |
| Имя узла `/timer_node` уже занято | Запущены два экземпляра | Остановить первый (`Ctrl+C`) или задать другое имя |

## Дополнительное задание

Измените период таймера с `1.0` на `0.5` (два раза в секунду) и перезапустите узел. Убедитесь, что частота `Tick` выросла вдвое.

Попробуйте `MultiThreadedExecutor`:

```python
from rclpy.executors import MultiThreadedExecutor
# ...
executor = MultiThreadedExecutor()
executor.add_node(node)
executor.spin()
```

Заметьте: внешне поведение то же, но обработка событий идёт в нескольких потоках. Это важно, когда один долгий callback не должен блокировать остальные.

## Где это в роботе

В TIAgo каждый контроллер (`DiffDriveController`, `joint_state_broadcaster`), каждый драйвер и `twist_mux` — отдельный узел со своим Executor и callbacks. Разбор узлов `tiago_bringup/` — в кейсе уровня 3 занятия 8.

## Ссылки

- Статья — [`../2_knowledge/nodes.md`](../2_knowledge/nodes.md).
- Практика 7 (workspace и пакет) — [`07_workspace.md`](07_workspace.md).
- Домашнее задание 8 — [`../2_homework/hw_08_node.md`](../2_homework/hw_08_node.md).
- [Understanding ROS 2 nodes](https://docs.ros.org/en/jazzy/Tutorials/Beginner-CLI-Tools/Understanding-ROS2-Nodes/Understanding-ROS2-Nodes.html)
- [About Executors](https://docs.ros.org/en/jazzy/Concepts/Intermediate/About-Executors.html)
