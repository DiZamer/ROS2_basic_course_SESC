# Содержание занятия 8 · lecture-v2

## Паспорт и результат

Тема: ROS 2 node, Executor и callbacks. Студент пишет и запускает простой Python-node, видит его в graph и объясняет, почему `spin()` удерживает узел в обработке событий.

Формат 40+40+40; узел создан внутри Dev Container Jazzy.

## Учебные результаты

К концу занятия студент:

- объясняет node как работающий компонент с одной основной ответственностью;
- различает исходный файл узла и работающий процесс;
- создаёт `rclpy.node.Node` и timer;
- связывает событие с callback;
- запускает node через console entry point и проверяет `ros2 node list/info`;
- объясняет роль Executor и `spin()` на базовом уровне.

## Модель события

```text
Программа создаёт Node
       ↓
Node регистрирует таймер / subscription / service
       ↓
Executor ждёт готовые события
       ↓
Executor вызывает нужный callback
       ↓
callback выполняет короткую работу и возвращается
```

- **Node** — участник ROS Graph, создающий publishers, subscriptions, timers, services и actions.
- **Callback** — функция, которую вызывают при событии.
- **Executor** — компонент, который ждёт события и вызывает callback.
- **`rclpy.spin(node)`** — удобный способ продолжать обработку событий узла.

Аналогия: сотрудник (node) получает события, а диспетчер (Executor) передаёт их подходящему обработчику. Аналогия не означает, что callbacks гарантированно запускаются параллельно.

## Жизненный цикл простого Python-node

```text
rclpy.init()
   ↓
Создать Node и зарегистрировать timer
   ↓
rclpy.spin(node) ── timer event ──> callback
   ↓ Ctrl+C
destroy_node() → rclpy.shutdown()
```

## Минимальный пример

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

Timer вызывает `_tick` примерно раз в секунду. `spin()` ждёт события; он не генерирует саму периодичность — её задаёт timer.

## Почему callback должен быть коротким

Пока callback выполняет длительную блокирующую работу, узел может задерживать обработку других событий. На этом занятии правило простое: измерить/обработать короткий шаг, записать результат и вернуть управление Executor.

Параллельные executors, callback groups и синхронизация — обзорно сейчас, глубже позднее по необходимости; не перегружать первую практику.

## Команды наблюдения

```bash
ros2 node list
ros2 node info /heartbeat_node
```

`node list` показывает работающие узлы в доступном ROS Graph; `node info` показывает интерфейсы выбранного узла.

## Три уровня

- **Уровень 1:** объяснить lifecycle, событие timer, Executor и `spin()` на одной схеме.
- **Уровень 2:** сгенерировать Python package, добавить timer node, console entry point, собрать, запустить и посмотреть CLI.
- **Уровень 3:** исследовать несколько узлов TIAGo и их разные ответственности через `ros2 node list/info`.
- **ДЗ:** добавить heartbeat/state node в свою модель.

## Типичные ошибки

| Ошибка | Симптом | Проверка |
| --- | --- | --- |
| Нет `spin()` | Процесс сразу завершился, timer не сработал | Проверить main и жизненный цикл. |
| Node не зарегистрирован в setup.py | `ros2 run` не находит executable | Проверить console entry point и пересобрать. |
| Callback блокируется | Нет регулярных сообщений | Убрать длительный `sleep`/I/O из callback. |
| Ищут node по имени файла | `node list` показывает другое имя | Сверить имя в `super().__init__()`. |

## Источники

- [ROS 2 Jazzy: Understanding Nodes](https://docs.ros.org/en/jazzy/Tutorials/Beginner-CLI-Tools/Understanding-ROS2-Nodes/Understanding-ROS2-Nodes.html)
- [ROS 2 Jazzy: Executors](https://docs.ros.org/en/jazzy/Concepts/Intermediate/About-Executors.html)
- [`nodes.md`](../2_knowledge/nodes.md)
- [Практика и план](../2_practice/practice-v2_08_node_v1.md), [`lecture-v2_plan_08_node_v1.md`](lecture-v2_plan_08_node_v1.md)
