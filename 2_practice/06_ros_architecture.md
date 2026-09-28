# Практика: архитектура ROS2, ROS Graph и middleware

## Цель

Через 5–10 минут студент видит ROS2 как среду обмена сообщениями: проверяет состояние системы (`ros2 doctor --report`), узнаёт выбранный middleware (`printenv RMW_IMPLEMENTATION`), смотрит граф узлов (`rqt_graph`, `ros2 node list`) и показывает изоляцию графа через `ROS_DOMAIN_ID`.

## Предварительные требования

- Открыт Dev Container уровня 2 (`.devcontainer/`, Ubuntu 24.04 + ROS2 Jazzy).
- ROS2 не устанавливается на хост — всё выполняется внутри контейнера.
- Статья [`../2_knowledge/ros_architecture.md`](../2_knowledge/ros_architecture.md) — прочитана.

## Что получится

- Вывод `ros2 doctor --report` — студент объясняет, что в нём про middleware.
- Имя выбранного RMW и понимание, зачем его менять.
- Граф из двух узлов (`talker` → `/chatter` → `listener`) в `rqt_graph`.
- Демонстрация изоляции: узлы в разных `ROS_DOMAIN_ID` не видят друг друга.

## Шаг 1. Диагностика: `ros2 doctor --report`

```bash
ros2 doctor --report
```

Что искать в выводе: разделы про RMW (какой middleware выбран), discovery (работает ли обнаружение узлов), сеть и синхронизацию часов. В учебном контейнере всё должно быть в норме (`OK`).

## Шаг 2. Какой middleware: `printenv RMW_IMPLEMENTATION`

```bash
printenv RMW_IMPLEMENTATION
```

Ожидаемо: пустой вывод. Это значит, что ROS2 использует дефолтную реализацию — Fast DDS (`rmw_fastrtps_cpp`). RMW — адаптер между ROS2 API и конкретной реализацией DDS.

## Шаг 3. Граф: запустить узлы и посмотреть связи

Терминал 1 — узел-источник:

```bash
ros2 run demo_nodes_cpp talker
```

Терминал 2 — узел-приёмник:

```bash
ros2 run demo_nodes_cpp listener
```

`listener` печатает `[INFO] ... I heard: [Hello World: N]` — сообщение дошло через middleware.

Терминал 3 — посмотреть граф:

```bash
ros2 node list
ros2 topic list
rqt_graph
```

В `rqt_graph` видно два узла и тему `/chatter` между ними. `rqt_graph` требует графического интерфейса (в Dev Container дисплей пробрасывается с хоста).

## Шаг 4. Сменить middleware (если пакет есть)

Fast DDS можно заменить на Cyclone DDS, не меняя код узлов:

```bash
# проверить, установлен ли пакет
dpkg -l | grep rmw-cyclonedds || sudo apt install -y ros-jazzy-rmw-cyclonedds-cpp

# переключиться на Cyclone DDS
export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
ros2 doctor --report
printenv RMW_IMPLEMENTATION   # теперь rmw_cyclonedds_cpp
```

Узлы на разных RMW не видят друг друга: talker на Fast DDS и listener на Cyclone DDS не соединятся. Это ключевое свойство RMW — все узлы одной системы должны использовать один middleware.

Возврат к дефолту:

```bash
unset RMW_IMPLEMENTATION
```

## Шаг 5. Изоляция графа: `ROS_DOMAIN_ID`

`ROS_DOMAIN_ID` — номер логической сети DDS (0–101). Узлы с одинаковым ID видят друг друга, с разными — нет.

Запустите talker в домене 0:

```bash
export ROS_DOMAIN_ID=0
ros2 run demo_nodes_cpp talker
```

В другом терминале listener в домене 0 — получает сообщения:

```bash
export ROS_DOMAIN_ID=0
ros2 run demo_nodes_cpp listener
```

Остановите listener (`Ctrl+C`) и запустите его в домене 1 — тишина:

```bash
export ROS_DOMAIN_ID=1
ros2 run demo_nodes_cpp listener   # ничего не получает
```

Проверьте изоляцию списком тем:

```bash
export ROS_DOMAIN_ID=1
ros2 topic list    # темы /chatter нет — домен изолирован
export ROS_DOMAIN_ID=0
ros2 topic list    # тема /chatter есть
```

## Проверка результата

| Действие | Ожидаемый результат |
| --- | --- |
| `ros2 doctor --report` | отчёт без ошибок, указан RMW |
| `printenv RMW_IMPLEMENTATION` | пусто (дефолт Fast DDS) или имя после смены |
| `ros2 node list` | оба узла: `/talker` и `/listener` |
| `rqt_graph` | два узла и тема `/chatter` |
| listener в другом домене | сообщения не приходят — изоляция работает |

## Вопросы студентам

1. Почему `printenv RMW_IMPLEMENTATION` пусто, но middleware работает?
2. Что произойдёт, если talker запустить на Fast DDS, а listener — на Cyclone DDS?
3. Зачем нужно `ROS_DOMAIN_ID`, если узлы и так видят друг друга в одной сети?
4. Как `ROS_DOMAIN_ID` помогает в учебном классе, где у всех один и тот же `/chatter`?

## Типичные ошибки

| Симптом | Причина | Исправление |
| --- | --- | --- |
| `ros2 node list` пуст, хотя узел запущен | `ros2`-демон остался в другом домене | `ros2 daemon stop`, затем повторить в нужном домене |
| `rqt_graph` не открывается | Нет графического интерфейса | Использовать `ros2 node list` и `ros2 topic list` как план Б |
| `sudo apt install ros-jazzy-rmw-cyclonedds-cpp` не находит пакет | Не выполнен `apt update` | `sudo apt update` перед установкой |
| talker и listener на разных RMW не видят друг друга | Разные `RMW_IMPLEMENTATION` | Использовать одинаковый RMW для всех узлов |
| Путают домен и физическую сеть | Думают, что домен — это отдельная машина | Домен — логическая изоляция внутри одной сети |

## Дополнительное задание

Посмотрите, как меняются UDP-порты при смене домена. В домене 0 discovery идёт на порт 7400, в домене 1 — на 7650 (формула `7400 + 250 × domainId`). Подробнее — [`../2_knowledge/dds_protocol.md`](../2_knowledge/dds_protocol.md) и [`../2_knowledge/robots_communication.md`](../2_knowledge/robots_communication.md).

## Ссылки

- Статья базы знаний — [`../2_knowledge/ros_architecture.md`](../2_knowledge/ros_architecture.md).
- DDS и транспорт — [`../2_knowledge/dds_protocol.md`](../2_knowledge/dds_protocol.md).
- RMW — [`../2_knowledge/rmw.md`](../2_knowledge/rmw.md).
- Discovery — [`../2_knowledge/discovery.md`](../2_knowledge/discovery.md).
- Домены и несколько роботов — [`../2_knowledge/robots_communication.md`](../2_knowledge/robots_communication.md).
- Домашнее задание 6 — [`../2_homework/hw_06_ros_architecture.md`](../2_homework/hw_06_ros_architecture.md).
- [ROS2 Concepts](https://docs.ros.org/en/jazzy/Concepts.html)
- [About different middleware vendors](https://docs.ros.org/en/jazzy/Concepts/Intermediate/About-Different-Middleware-Vendors.html)
- [About the Domain ID](https://docs.ros.org/en/jazzy/Concepts/Intermediate/About-Domain-ID.html)
