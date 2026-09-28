# Домашнее задание 8: первый узел своей модели

## Цель

Добавить в свою модель робота первый рабочий узел с timer callback, собрать его, запустить через `ros2 run`, проверить в `ros2 node list` и `ros2 node info`, зафиксировать результат в дневнике и сделать коммит.

## Связь с темой занятия

Занятие 8 показало, что node — программа с одной задачей, а Executor вызывает callbacks. Дома студент кладёт в пакет из [`hw_07_workspace.md`](hw_07_workspace.md) первый узел: он пока не публикует данные в topic (это занятие 9), а «отбивает сердцебиение» таймером — так проверяется, что узел собран, запущен и обрабатывает события.

## Предварительные требования

- Workspace модели и пакет из [`hw_07_workspace.md`](hw_07_workspace.md) (`~/my_robot/ros2_ws`, пакет `my_robot_base`).
- Перечень узлов модели из [`hw_06_ros_architecture.md`](hw_06_ros_architecture.md).
- Дневник `~/my_robot/diary.md`.
- Статья [`../2_knowledge/nodes.md`](../2_knowledge/nodes.md) и практика [`../2_practice/08_node.md`](../2_practice/08_node.md).
- Выполняется дома в devcontainer (ROS2 Jazzy, уровень 2); ROS2 не устанавливается на хост.

## Шаг к виртуальной модели робота

Это первый «живой» элемент модели: узел, который работает и печатает своё состояние по таймеру. В занятии 9 этот узел начнёт публиковать состояние в topic (`/robot_state`), а в занятиях 15–20 к нему добавятся координаты, одометрия и управление. Сейчас важно: **узел собран, запускается и обрабатывает callbacks**.

## Шаги

### Шаг 1. Создать файл узла

Внутри пакета `my_robot_base` создайте файл `robot_state_node.py`:

```bash
cd ~/my_robot/ros2_ws/src/my_robot_base
mkdir -p my_robot_base
```

Файл `my_robot_base/robot_state_node.py`:

```python
import rclpy
from rclpy.node import Node


class RobotStateNode(Node):

    def __init__(self):
        super().__init__('robot_state_node')
        self._heartbeat = 0
        self._timer = self.create_timer(1.0, self._timer_callback)
        self.get_logger().info('Robot state node started')

    def _timer_callback(self):
        self._heartbeat += 1
        self.get_logger().info(f'Heartbeat #{self._heartbeat}: robot is alive')


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


if __name__ == '__main__':
    main()
```

### Шаг 2. Точка входа в setup.py

В `my_robot_base/setup.py` замените блок `entry_points` на:

```python
entry_points={
    'console_scripts': [
        'robot_state_node = my_robot_base.robot_state_node:main',
    ],
},
```

### Шаг 3. Собрать

```bash
cd ~/my_robot/ros2_ws
colcon build
source install/setup.bash
```

Ожидаемый финал: `Summary: 1 package finished`.

### Шаг 4. Запустить и проверить

```bash
ros2 run my_robot_base robot_state_node
```

Ожидаемый вывод:

```text
[INFO] [robot_state_node]: Robot state node started
[INFO] [robot_state_node]: Heartbeat #1: robot is alive
[INFO] [robot_state_node]: Heartbeat #2: robot is alive
...
```

В другом терминале (тоже внутри контейнера, с `source ~/my_robot/ros2_ws/install/setup.bash`) проверьте:

```bash
ros2 node list          # /robot_state_node
ros2 node info /robot_state_node
```

Остановите узел `Ctrl+C`.

### Шаг 5. Эксперимент: без spin()

Скопируйте узел в `no_spin_state_node.py`, закомментируйте в `main()` строку `rclpy.spin(node)`, добавьте точку входа `no_spin_state_node = my_robot_base.no_spin_state_node:main`, пересоберите и запустите. Убедитесь, что узел печатает только сообщение конструктора и завершается — heartbeat не выводится.

### Шаг 6. Зафиксировать в дневнике

Добавьте в `~/my_robot/diary.md`:

```markdown
## Первый узел модели

Узел: robot_state_node (пакет my_robot_base)
- таймер 1.0 c → heartbeat
- запуск: ros2 run my_robot_base robot_state_node
- проверка: ros2 node list, ros2 node info /robot_state_node
- эффект без spin(): callback не вызывается, узел завершается сразу
```

### Шаг 7. Коммит в Git

```bash
cd ~/my_robot
git add ros2_ws/src/my_robot_base diary.md
git commit -m "первый узел модели: robot_state_node"
```

## Ожидаемый результат

- Узел `robot_state_node` собран и запускается через `ros2 run`.
- Раз в секунду печатается `Heartbeat #N`.
- `ros2 node list` показывает `/robot_state_node`, `ros2 node info` — его имя и сервисы.
- Продемонстрирован эффект отсутствия `spin()`.
- В `diary.md` записан узел, сделан коммит.

## Вопросы для самопроверки

1. Почему без `rclpy.spin(node)` таймер не вызывает `_timer_callback`?
2. Что делает `super().__init__('robot_state_node')`?
3. Почему в `ros2 node info /robot_state_node` пока пустые Publishers и Subscribers?
4. Зачем разделять робота на несколько узлов, если один узел может «всё»?

## Критерии оценки

Задание выполнено, если:

- создан файл узла с timer callback и корректным `main()` (`init` → `spin` → `destroy` → `shutdown`);
- в `setup.py` объявлена точка входа;
- пакет собран, узел запускается и печатает `Heartbeat #N`;
- узел виден в `ros2 node list` и `ros2 node info`;
- сделан коммит, в `diary.md` записан узел.

## Типичные ошибки

| Симптом | Причина | Исправление |
| --- | --- | --- |
| Узел печатает `started` и выходит | Забыли `rclpy.spin(node)` | Добавить `rclpy.spin(node)` в `main()` |
| `ros2 run` не находит команду | Не обновлён `entry_points` или не пересобрано | Обновить `setup.py`, `colcon build` |
| `ros2 run` не находит пакет | Забыли `source install/setup.bash` | `source ~/my_robot/ros2_ws/install/setup.bash` |
| Имя `/robot_state_node` занято | Запущены два экземпляра | Остановить первый экземпляр |
| В Git попали `build/`, `install/` | Нет `.gitignore` | Убедиться, что `ros2_ws/build/`, `install/`, `log/` в `.gitignore` |

## Ссылки

- Статья — [`../2_knowledge/nodes.md`](../2_knowledge/nodes.md).
- Практика занятия — [`../2_practice/08_node.md`](../2_practice/08_node.md).
- Предыдущее ДЗ — [`hw_07_workspace.md`](hw_07_workspace.md).
- Архитектура своей модели — [`hw_06_ros_architecture.md`](hw_06_ros_architecture.md).
- Следующее занятие 9 «Topic, publisher, subscriber» — [`../1_lecture/lectures_content.md`](../1_lecture/lectures_content.md), тема 9: узел начнёт публиковать состояние в topic.
