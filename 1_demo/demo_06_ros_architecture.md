# Демонстрация: архитектура ROS2, ROS Graph и middleware

## Цель

Показать ROS2 как среду обмена сообщениями: граф узлов (`rqt_graph`, `ros2 node list`), выбор middleware (`printenv RMW_IMPLEMENTATION`, `ros2 doctor --report`) и изоляцию графа через `ROS_DOMAIN_ID`. В кейсе робота — подсистемы TIAgo и CycloneDDS.

## Подготовка до занятия

1. Dev Container уровня 2 открыт и готов (`.devcontainer/`, Ubuntu 24.04 + ROS2 Jazzy).
2. Проверено, что `demo_nodes_cpp` есть (`ros2 run demo_nodes_cpp talker`).
3. Для кейса уровня 3 — симуляция TIAgo готова к запуску, либо подготовлен план Б.
4. Подготовлены три терминала для демонстрации изоляции доменов.

## Контейнер

- Уровень 2: Dev Container `.devcontainer/` — `ros2 doctor`, `rqt_graph`, `ros2 node list`, эксперимент с `ROS_DOMAIN_ID`.
- Уровень 3: контейнер `3_Robot/TIAgo_humble/` — подсистемы TIAgo, CycloneDDS, смена домена.

## Контекст для студентов

> «ROS2 — это не одна программа, а инфраструктура, по которой программы робота общаются. Одна программа — один узел. Вместе они образуют граф. А `ROS_DOMAIN_ID` делит этот граф на изолированные группы, чтобы несколько роботов не мешали друг другу.»

## Что показать

### 1. Диагностика системы

```bash
ros2 doctor --report
printenv RMW_IMPLEMENTATION
```

**Что сказать**: «`ros2 doctor` проверяет состояние системы, включая middleware. `printenv RMW_IMPLEMENTATION` пусто — значит, используется дефолтная реализация DDS, Fast DDS. RMW — адаптер, который можно заменить, не меняя код узлов.»

### 2. Граф из двух узлов

Терминал 1:

```bash
ros2 run demo_nodes_cpp talker
```

Терминал 2:

```bash
ros2 run demo_nodes_cpp listener
```

Терминал 3:

```bash
ros2 node list
ros2 topic list
rqt_graph
```

**Что сказать**: «Два узла обмениваются сообщениями через тему `/chatter`. `rqt_graph` рисует эту связь. Сообщение не летит напрямую — его сериализует DDS, доставляет сеть, а на той стороне срабатывает callback.»

### 3. Смена middleware

```bash
sudo apt install -y ros-jazzy-rmw-cyclonedds-cpp
export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
ros2 doctor --report
```

**Что сказать**: «Сменили DDS на Cyclone, не трогая код узлов. Запомните: узлы на разных RMW не видят друг друга — все узлы одной системы должны использовать один middleware.»

### 4. Изоляция графа: `ROS_DOMAIN_ID`

Терминал 1 (домен 0):

```bash
export ROS_DOMAIN_ID=0
ros2 run demo_nodes_cpp talker
```

Терминал 2 (домен 0 — получает):

```bash
export ROS_DOMAIN_ID=0
ros2 run demo_nodes_cpp listener
```

Остановить listener (`Ctrl+C`) и запустить в домене 1:

```bash
export ROS_DOMAIN_ID=1
ros2 run demo_nodes_cpp listener   # тишина
```

**Что сказать**: «`ROS_DOMAIN_ID` — номер логической сети DDS (0–101). Узлы с разными ID не видят друг друга. Один домен — когда роботам нужно общаться; разные — когда они не должны мешать друг другу.»

### 5. Смелый тест: граф «исчез» (уровень 3, TIAgo)

В контейнере TIAgo:

```bash
# терминал 1: симуляция (домен 0)
ros2 launch tiago_gazebo tiago_gazebo.launch.py is_public_sim:=True

# терминал 2: граф виден
ros2 node list    # ~15 узлов

# терминал 3: сменить домен — граф «исчез»
export ROS_DOMAIN_ID=56
ros2 daemon stop
ros2 node list    # пусто
```

**Что сказать**: «Весь граф TIAgo — десятки узлов — «исчезает», если смотреть из другого домена. Так два экземпляра TIAgo в одной сети не путают темы друг друга.»

## Что сказать

- «Узел — одна программа с одной задачей. Граф — карта того, кто с кем говорит.»
- «Сообщение сериализует DDS, доставляет сеть, а срабатывает ваш callback.»
- «RMW — адаптер к конкретной реализации DDS; его можно менять, не меняя код.»
- «`ROS_DOMAIN_ID` — как этаж в здании: соседи по этажу слышат друг друга, с других этажей — нет.»
- «TIAgo использует CycloneDDS — рекомендовано PAL Robotics для нескольких роботов.»

## Ожидаемый результат

- `ros2 doctor --report` — отчёт без ошибок, указан RMW.
- `ros2 node list` — `/talker` и `/listener`; `rqt_graph` — два узла и `/chatter`.
- `listener` в домене 1 не получает сообщения от `talker` в домене 0.
- В контейнере TIAgo `ros2 node list` в домене 56 пуст — граф изолирован.

## Типичные проблемы

| Симптом | Причина | Исправление |
| --- | --- | --- |
| `rqt_graph` не открывается | Нет графического интерфейса | Использовать `ros2 node list` + `ros2 topic list`, нарисовать граф на доске |
| `ros2 node list` пуст, хотя узел запущен | `ros2`-демон остался в другом домене | `ros2 daemon stop`, повторить в нужном домене |
| `sudo apt install ros-jazzy-rmw-cyclonedds-cpp` не находит | Не выполнен `apt update` | `sudo apt update` перед установкой |
| talker и listener на разных RMW не видят друг друга | Разные `RMW_IMPLEMENTATION` | Одинаковый RMW для всех узлов |
| Симуляция TIAgo не запустилась | GUI/драйверы не готовы | Перейти на план Б |

## План Б

Если симуляция TIAgo не запускается:

1. Показать карту подсистем из [`3_Robot/TIAgo_humble/docs/tiago_architecture.md`](../../3_Robot/TIAgo_humble/docs/tiago_architecture.md) как текст.
2. Показать `RMW_IMPLEMENTATION=rmw_cyclonedds_cpp` в `.bashrc` контейнера TIAgo и объяснить, что это и зачем.
3. Выполнить изоляцию доменов в контейнере уровня 2 (`talker`/`listener`) — она работает без симуляции.
4. Рассказать про `ROS_DOMAIN_ID` по [`../2_knowledge/robots_communication.md`](../2_knowledge/robots_communication.md) без живого робота.

## Ссылки на материалы курса

- Статья базы знаний — [`../2_knowledge/ros_architecture.md`](../2_knowledge/ros_architecture.md).
- DDS — [`../2_knowledge/dds_protocol.md`](../2_knowledge/dds_protocol.md).
- RMW — [`../2_knowledge/rmw.md`](../2_knowledge/rmw.md).
- Discovery — [`../2_knowledge/discovery.md`](../2_knowledge/discovery.md).
- Домены и несколько роботов — [`../2_knowledge/robots_communication.md`](../2_knowledge/robots_communication.md).
- Практика — [`../2_practice/06_ros_architecture.md`](../2_practice/06_ros_architecture.md).
- Домашнее задание — [`../2_homework/hw_06_ros_architecture.md`](../2_homework/hw_06_ros_architecture.md).

## Связь с роботом

- TIAgo — полный пример архитектуры ROS2: десятки узлов, разделённых на подсистемы (Navigation, Manipulation, Perception, Mobile Base, Safety, Simulation).
- Middleware — CycloneDDS (`RMW_IMPLEMENTATION=rmw_cyclonedds_cpp`), `ROS_DOMAIN_ID` по умолчанию 0; несколько экземпляров изолируют разными доменами.
- Карта подсистем — [`3_Robot/TIAgo_humble/docs/tiago_architecture.md`](../../3_Robot/TIAgo_humble/docs/tiago_architecture.md), настройка RMW и DDS — [`3_Robot/TIAgo_humble/docs/rmw_dds.md`](../../3_Robot/TIAgo_humble/docs/rmw_dds.md).
