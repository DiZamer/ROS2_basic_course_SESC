# Демонстрация: workspace, package и сборка через colcon

## Цель

Показать путь «workspace → пакет → сборка → подключение»: создать `ros2_ws`, пакет через `ros2 pkg create`, собрать `colcon build`, подключить `source install/setup.bash` и проверить `ros2 pkg list`. В кейсе робота — разобрать структуру `ros2_ws/src/` TIAgo и типы пакетов.

## Подготовка до занятия

1. Dev Container уровня 2 открыт и готов (`.devcontainer/`, Ubuntu 24.04 + ROS2 Jazzy).
2. Проверено, что `colcon` доступен (`colcon --version`).
3. Для кейса уровня 3 — контейнер `3_Robot/TIAgo_humble/` готов, либо подготовлен план Б.
4. Подготовлены два терминала: один для уровня 2, один для кейса TIAgo.

## Контейнер

- Уровень 2: Dev Container `.devcontainer/` — создание workspace и пакета, `colcon build`.
- Уровень 3: контейнер `3_Robot/TIAgo_humble/` — разбор `ros2_ws/src/`, типы пакетов, выборочная сборка.

## Контекст для студентов

> «Код робота не лежит где попало — он организован в workspace. `src/` — исходники, `colcon build` — сборка, `install/` — готовые пакеты, которые подключаются через `source install/setup.bash`. Один пакет — одна зона ответственности: интерфейсы, узлы, описание, запуск.»

## Что показать

### 1. Создать workspace и пакет (уровень 2)

```bash
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws
ros2 pkg create --build-type ament_python my_first_pkg --destination-directory src
tree src/my_first_pkg
```

**Что сказать**: «Команда `ros2 pkg create` генерирует пакет официальным способом — `package.xml`, `setup.py`, папку исходников. Пакет вручную не пишут.»

### 2. Собрать и подключить

```bash
colcon build
ls                 # build install log src
source install/setup.bash
ros2 pkg list | grep my_first_pkg
```

**Что сказать**: «`colcon build` собрал пакет и разложил результат по `build/`, `install/`, `log/`. Но пока мы не выполнили `source install/setup.bash`, ROS2 не видит пакет. Собрал — подключи.»

### 3. Underlay и overlay

```bash
ros2 pkg prefix demo_nodes_cpp   # из underlay (/opt/ros/jazzy)
ros2 pkg prefix my_first_pkg     # из overlay (~/ros2_ws/install)
```

**Что сказать**: «`demo_nodes_cpp` — из базовой установки ROS2 (underlay). `my_first_pkg` — из вашего workspace (overlay). Overlay лежит поверх underlay и добавляет ваши пакеты.»

### 4. Смелый тест: карта пакетов TIAgo (уровень 3)

В контейнере TIAgo:

```bash
cd ~/ros2_ws
colcon list | wc -l
colcon list --names-only
```

**Что сказать**: «У TIAgo не один пакет, а десятки. `colcon` строит их все, сам определяя порядок по зависимостям.»

### 5. Смелый тест: типы пакетов (уровень 3)

```bash
cd ~/ros2_ws/src
ls tiago_robot
ls tiago_robot/tiago_description   # urdf, meshes → описание
ls tiago_robot/tiago_bringup       # launch, config → запуск
ls pal_msgs                        # pal_*_msgs → интерфейсы
cat tiago_robot/tiago_robot/package.xml   # мета-пакет: exec_depend
```

**Что сказать**: «Один репозиторий `tiago_robot` содержит пакеты разных типов: `tiago_description` — описание робота, `tiago_bringup` — запуск, `tiago_robot` — мета-пакет, который просто объединяет остальные.»

### 6. Смелый тест: пересобрать один пакет (уровень 3)

```bash
cd ~/ros2_ws
colcon build --packages-select tiago_description
```

**Что сказать**: «`colcon` умеет собирать один пакет, беря зависимости из уже собранного `install/`. Так отладка одного пакета не требует полной пересборки.»

## Что сказать

- «Workspace — мастерская: `src/` — чертежи, `colcon build` — сборка, `install/` — готовая продукция.»
- «`source install/setup.bash` — берёте изделие со склада и кладёте на верстак.»
- «Underlay — базовый набор ROS2, overlay — ваша личная полка.»
- «Пакет — одна папка с одной зоной ответственности; создаётся только `ros2 pkg create`.»
- «`colcon` строит десятки пакетов TIAgo сам, следя за порядком зависимостей.»

## Ожидаемый результат

- `colcon build` заканчивается `Summary: 1 package finished`.
- `ros2 pkg list | grep my_first_pkg` выводит имя пакета.
- `colcon list` в TIAgo — несколько десятков пакетов.
- Студент относит `tiago_description` к описанию, `tiago_bringup` к запуску, `pal_msgs` к интерфейсам, `tiago_robot` к мета-пакетам.

## Типичные проблемы

| Симптом | Причина | Исправление |
| --- | --- | --- |
| `colcon build` — «no packages found» | Команда не из корня workspace | `cd ~/ros2_ws && colcon build` |
| `ros2 pkg list` не видит пакет | Забыли `source` | `source ~/ros2_ws/install/setup.bash` |
| `ros2 pkg create` не найден | Контейнер не поднят | Открыть Dev Container уровня 2 |
| `colcon list` в TIAgo пуст | Не выполнен `source install/setup.bash` в контейнере | Подключить workspace TIAgo |

## План Б

Если контейнер TIAgo не запускается:

1. Показать структуру `ros2_ws/src/` как текст (список папок и типов пакетов из [`3_Robot/TIAgo_humble/docs/tiago_architecture.md`](../3_Robot/TIAgo_humble/docs/tiago_architecture.md)).
2. Показать `tiago.repos` — откуда берутся пакеты.
3. Показать `package.xml` мета-пакета `tiago_robot` и пустой `CMakeLists.txt` как текст.
4. Выполнить создание workspace и пакета в контейнере уровня 2 (работает без симуляции).

## Ссылки на материалы курса

- Workspace — [`../2_knowledge/workspace.md`](../2_knowledge/workspace.md).
- Пакеты — [`../2_knowledge/packages.md`](../2_knowledge/packages.md).
- colcon — [`../2_knowledge/colcon.md`](../2_knowledge/colcon.md).
- Практика — [`../2_practice/07_workspace.md`](../2_practice/07_workspace.md).
- Домашнее задание — [`../2_homework/hw_07_workspace.md`](../2_homework/hw_07_workspace.md).
- Вариант lecture-v2 — [`../1_lecture/lecture-v2_plan_07_workspace_v1.md`](../1_lecture/lecture-v2_plan_07_workspace_v1.md).

## Связь с роботом

- TIAgo — полный пример workspace в масштабе: `ros2_ws/` с `src/`, `build/`, `install/`, `log/`, сборка через `colcon build`.
- Типы пакетов: description (`tiago_description`), bringup (`tiago_bringup`), интерфейсы (`pal_msgs`), конфиги (`tiago_controller_configuration`, `tiago_moveit_config`), мета-пакеты (`tiago_robot`, `pmb2_robot`).
- Подробнее — [`3_Robot/TIAgo_humble/docs/tiago_architecture.md`](../3_Robot/TIAgo_humble/docs/tiago_architecture.md) и [`3_Robot/TIAgo_humble/AGENTS.md`](../3_Robot/TIAgo_humble/AGENTS.md).
