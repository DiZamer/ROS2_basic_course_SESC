# Содержание занятия 7 · lecture-v2

## Паспорт и результат

Занятие превращает схему ROS Graph из темы 6 в настоящую структуру проекта. Студент создаёт workspace и первый пакет официальной командой `ros2 pkg create`, собирает его `colcon` и подключает overlay.

## Что студент сможет объяснить и сделать

- различать workspace и package;
- назвать назначение `src/`, `build/`, `install/`, `log/`;
- создать пакет из ROS 2 CLI-шаблона, а не вручную воспроизводить его метаданные;
- выполнить `colcon build` из корня workspace;
- подключить underlay/overlay через `source` и проверить видимость пакета;
- различать `ament_python` и `ament_cmake` на уровне выбора шаблона;
- объяснить, какие каталоги исходники и какие результаты сборки.

## Аналогия

Workspace — мастерская, package — самостоятельный рабочий модуль, `src/` — исходные чертежи, `colcon build` — сборочная линия, `install/` — результат для запуска.

Граница аналогии: workspace не обязателен к единственному пакету; `colcon` собирает пакеты с учётом зависимостей и может собирать выборочно.

## Модель workspace

```text
~/ros2_ws/
├── src/       исходные пакеты, редактирует разработчик
├── build/     промежуточные результаты colcon
├── install/   установленные пакеты и setup-файлы
└── log/       отчёты сборки
```

Типичный цикл:

```text
Создать workspace → добавить package в src → colcon build
                                      ↓
                             source install/setup.bash
                                      ↓
                        ros2 pkg list / ros2 run
```

`build/`, `install/` и `log/` создаёт `colcon`; не редактируй их вручную.

## Underlay и overlay

- **Underlay** — базовая установка ROS 2, например `/opt/ros/jazzy`.
- **Overlay** — workspace, подключённый поверх базовой установки.
- `source install/setup.bash` задаёт окружению терминала пути к собранным пакетам.
- Новый terminal — новая shell-сессия; в ней overlay надо подключить снова, если конфигурация контейнера этого не делает автоматически.

## Package и тип сборки

Package — единица кода, зависимостей и сборки. В ней обычно есть manifest `package.xml` и файлы выбранного build type.

- `ament_python` — Python-пакеты.
- `ament_cmake` — CMake/C++-пакеты и многие пакеты интерфейсов/библиотек.
- Назначение пакета (description, bringup, node, interfaces) — архитектурная договорённость команды; build type — технический шаблон сборки.

Не путай эти две классификации.

## Минимальный цикл в контейнере

```bash
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws/src
ros2 pkg create --build-type ament_python --dependencies rclpy ros2_basics
cd ~/ros2_ws
colcon build --symlink-install
source install/setup.bash
ros2 pkg prefix ros2_basics
```

Ожидаемый результат: `ros2 pkg prefix` показывает путь из `~/ros2_ws/install/`.

## Что создаёт официальный генератор

`ros2 pkg create` формирует согласованный стартовый skeleton и метаданные package. Разработчик затем добавляет собственную логику. Для первого ROS-пакета это надёжнее, чем вручную писать структуру каталогов и setuptools/CMake metadata.

## Три уровня

- **Уровень 1:** объяснить workspace, package, build type и underlay/overlay одной схемой.
- **Уровень 2:** создать пустой Python-пакет и собрать его в Dev Container Jazzy.
- **Уровень 3:** прочитать `3_Robot/TIAgo_humble/ros2_ws/` как большой workspace с внешними источниками, десятками пакетов и отдельным Humble underlay.
- **ДЗ:** создать workspace и первый пакет в репозитории модели.

## Типичные ошибки

| Симптом | Причина | Исправление |
| --- | --- | --- |
| `colcon` не видит пакет | Package создан не под `src/` или команда выполнена не из workspace | Проверить `pwd` и структуру. |
| `ros2 pkg list` не показывает пакет | Overlay не sourced в текущем терминале | `source ~/ros2_ws/install/setup.bash`. |
| Сломан build после ручной правки `install/` | Артефакты сборки изменены вручную | Исправить исходник в `src/` и пересобрать. |
| Путают Python/CMake и тип назначения пакета | Смешаны build type и архитектурная роль | Отдельно выбрать build type, затем осмысленно назвать назначение. |

## Связанные материалы

- [`workspace.md`](../2_knowledge/workspace.md), [`packages.md`](../2_knowledge/packages.md), [`colcon.md`](../2_knowledge/colcon.md)
- [Creating a workspace](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Creating-A-Workspace/Creating-A-Workspace.html)
- [Creating a package](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Creating-Your-First-ROS2-Package.html)
- [Colcon tutorial](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Colcon-Tutorial.html)
