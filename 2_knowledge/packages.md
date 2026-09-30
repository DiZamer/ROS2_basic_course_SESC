# Пакеты в ROS2

## Коротко

Package — минимальная единица организации кода в ROS2: одна папка со строго определённой структурой, зависимостями и способом сборки. Пакеты делятся по **назначению** (интерфейсы, узлы, описание, bringup, мета-пакеты) и по **типу сборки** (`ament_python` или `ament_cmake`).

> *Официальное определение*: «Пакет — это организационная единица вашего кода ROS 2.» — [Creating a package](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Creating-Your-First-ROS2-Package.html)

## Что это

Пакет — папка с обязательным файлом `package.xml`. Создаётся только официальным инструментом `ros2 pkg create`, а не вручную.

Структура `ament_python`-пакета:

```text
my_first_pkg/
├── package.xml            # метаданные: имя, версия, зависимости, лицензия
├── setup.py               # инструкция установки Python-пакета + точки входа
├── setup.cfg              # конфигурация установки
├── resource/
│   └── my_first_pkg       # маркерный файл ament_python
├── test/                  # тесты (copyright, flake8, pep257)
└── my_first_pkg/          # исходный код
    └── __init__.py
```

Структура `ament_cmake`-пакета:

```text
my_cpp_pkg/
├── package.xml
├── CMakeLists.txt         # инструкция сборки CMake
├── include/my_cpp_pkg/    # заголовки
└── src/                   # исходники C++
```

## Зачем нужно

Пакет группирует код, зависимости и конфигурацию в одну единицу. Без пакетов проект превращается в мешанину файлов, которую невозможно собрать и запустить. Каждый пакет собирается и устанавливается независимо: можно обновить пакет камеры, не трогая навигацию.

## Аналогия

Пакет — **папка-проект** внутри workspace. Как отдельный модуль в monorepo: у него свой манифест (`package.xml`), свой список зависимостей и свои точки входа.

## Какие бывают пакеты и зачем

Пакеты делят по назначению. Один пакет — одна зона ответственности, чтобы части менялись независимо и переиспользовались.

| Тип пакета | Что внутри | Зачем | Пример в TIAgo |
| --- | --- | --- | --- |
| **Интерфейсы** | `.msg`, `.srv`, `.action` | Общие типы данных, которыми обмениваются узлы | `pal_msgs` (`pal_common_msgs`, `pal_detection_msgs`, `pal_navigation_msgs`) |
| **Узлы** | Исполняемые программы (nodes) | Бизнес-логика робота | `play_motion2`, `pal_gripper` |
| **Описание (description)** | URDF/Xacro, meshes, конфиги сенсоров | Описание тела робота для RViz/Gazebo/ros2_control | `tiago_description`, `pmb2_description` |
| **Bringup** | launch-файлы, параметры запуска системы | Запуск группы узлов одной командой | `tiago_bringup`, `pmb2_bringup` |
| **Конфиги** | YAML параметров контроллеров/планировщиков | Настройки Nav2, MoveIt2, ros2_control | `tiago_controller_configuration`, `tiago_moveit_config` |
| **Мета-пакет** | Только список зависимостей | Объединить несколько пакетов под одним именем | `tiago_robot`, `pmb2_robot`, `tiago_navigation` |

### Интерфейсы

Пакет интерфейсов содержит только описания типов данных — файлы `.msg` (сообщения), `.srv` (сервисы), `.action` (действия). Сам код не содержит — только типы, которые компилируются в готовые для Python и C++.

Зачем выносить отдельно: типы нужны сразу нескольким узлам, а меняются реже кода. В TIAgo все типы PAL собраны в `pal_msgs`. Подробно — занятие 13 «Собственные интерфейсы».

### Узлы

Пакет узлов содержит исполняемые программы. Это то, что вы запускаете командой `ros2 run my_pkg my_node`. Примеры: драйвер камеры, детектор объектов, контроллер мотора.

### Описание (description)

Пакет описания хранит, **как выглядит и из чего состоит робот**: URDF/Xacro, меши (3D-модели), конфиги сенсоров. Сам ничего не запускает — его данные читают RViz, Gazebo и `ros2_control`.

В `tiago_description/` есть папки `urdf/` (описание звеньев и сочленений), `meshes/` (3D-модели), `robots/` (варианты робота). Подробно — занятие 17 «Simulation-first: URDF/rviz2».

### Bringup

Пакет bringup содержит launch-файлы и параметры, которые запускают группу узлов. «Bring up» = «поднять систему». Вместо десятка `ros2 run` — одна команда `ros2 launch tiago_bringup ...`.

В `tiago_bringup/` есть папки `launch/` и `config/`. Подробно — занятие 14 «Parameters и launch».

### Конфиги

Пакет конфигов хранит параметры в YAML-файлах: настройки Nav2, MoveIt2, контроллеров. Например, `tiago_moveit_config/` — конфигурация MoveIt2, сгенерированная MoveIt Setup Assistant. Подробно — занятия 20 (Nav2) и 21 (MoveIt2).

### Мета-пакет

Мета-пакет — это пакет **без кода**: только `package.xml` со списком `exec_depend` и пустой `CMakeLists.txt`. Он объединяет несколько пакетов под одним именем, чтобы установить их одной командой.

```xml
<?xml version="1.0"?>
<package format="3">
  <name>tiago_robot</name>
  <version>5.1.3</version>
  <description>Description and controller configuration of TIAGo</description>
  <buildtool_depend>ament_cmake</buildtool_depend>
  <exec_depend>tiago_description</exec_depend>
  <exec_depend>tiago_controller_configuration</exec_depend>
  <exec_depend>tiago_bringup</exec_depend>
  <export>
    <build_type>ament_cmake</build_type>
  </export>
</package>
```

`CMakeLists.txt` мета-пакета пуст:

```cmake
cmake_minimum_required(VERSION 3.8)
project(tiago_robot)
find_package(ament_cmake REQUIRED)
ament_package()
```

Аналогия: мета-пакет — **готовый набор инструментов**: вы покупаете не каждый инструмент по отдельности, а весь набор по одному названию.

## ament_python vs ament_cmake

| | `ament_python` | `ament_cmake` |
| --- | --- | --- |
| Язык | Python | C++ |
| Сборка | `setup.py` (setuptools) | `CMakeLists.txt` + CMake |
| В курсе | **Основной** — все примеры | Ссылкой; нужен для интерфейсов, библиотек, мета-пакетов |
| Создание | `ros2 pkg create --build-type ament_python pkg_name` | `ros2 pkg create --build-type ament_cmake pkg_name` |

**В курсе используется `ament_python`** — Python проще для первого знакомства с ROS2 API. `ament_cmake` обязателен для пакетов интерфейсов (`.msg`/`.srv`/`.action`) и мета-пакетов — поэтому в TIAgo большинство пакетов именно `ament_cmake`.

## package.xml

Манифест пакета. Ключевые части:

```xml
<?xml version="1.0"?>
<package format="3">
  <name>my_first_pkg</name>          <!-- имя должно совпадать с именем папки -->
  <version>0.0.1</version>
  <description>My first ROS2 package</description>
  <maintainer email="student@example.com">Student</maintainer>
  <license>Apache-2.0</license>

  <buildtool_depend>ament_python</buildtool_depend>  <!-- чем собирается -->

  <depend>rclpy</depend>             <!-- зависимости для сборки и запуска -->
  <depend>std_msgs</depend>

  <test_depend>ament_flake8</test_depend>

  <export>
    <build_type>ament_python</build_type>  <!-- тип сборки -->
  </export>
</package>
```

## setup.py — точка входа узлов

ROS2 должен знать, какой Python-файл запускать как узел. Это настраивается в `setup.py` через `entry_points`:

```python
from setuptools import setup

package_name = 'my_first_pkg'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Student',
    maintainer_email='student@example.com',
    description='My first ROS2 package',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'my_node = my_first_pkg.my_node:main',
            # формат: 'имя_команды = имя_пакета.имя_файла:имя_функции'
        ],
    },
)
```

После сборки узел запускается командой `ros2 run my_first_pkg my_node`.

## Создание пакета

```bash
cd ~/ros2_ws

# Создать Python-пакет внутри src/
ros2 pkg create --build-type ament_python my_pkg --destination-directory src

# С зависимостями
ros2 pkg create --build-type ament_python my_pkg \
  --dependencies rclpy std_msgs --destination-directory src

# C++-пакет
ros2 pkg create --build-type ament_cmake my_cpp_pkg --destination-directory src
```

Без `--build-type` по умолчанию создаётся `ament_cmake`-пакет.

Полезные команды проверки:

```bash
ros2 pkg list              # все видимые пакеты
ros2 pkg executables my_pkg  # какие узлы можно запустить
ros2 pkg xml my_pkg        # показать package.xml
ros2 pkg prefix my_pkg     # где установлен пакет
```

## Установка зависимостей

Зависимости из `package.xml` ставит `rosdep`:

```bash
rosdep update
rosdep install --from-paths ~/ros2_ws/src --ignore-src -r -y
```

## Типичные ошибки

| Ошибка | Симптом | Исправление |
| --- | --- | --- |
| Забыли `--build-type ament_python` | Создался `ament_cmake`-пакет | Удалить и создать заново с `--build-type ament_python` |
| Имя пакета не совпадает с именем папки | `colcon build` предупреждает | Имя в `package.xml` должно совпадать с именем папки |
| Пакет создан не в `src/` | `colcon build` не видит пакет | Создать через `--destination-directory src` или переместить |
| Не обновили `entry_points` | `ros2 run` не находит узел | Добавить запись в `entry_points` → `console_scripts` в `setup.py` |
| Зависимость не объявлена в `package.xml` | `colcon build` падает с ImportError | Добавить `<depend>имя_пакета</depend>` в `package.xml` |

## Пример в реальном роботе

Workspace TIAgo — готовый пример всех типов пакетов сразу:

- **description** — `tiago_description/` (папки `urdf/`, `meshes/`, `robots/`).
- **bringup** — `tiago_bringup/` (папки `launch/`, `config/`).
- **интерфейсы** — `pal_msgs/` (десятки `pal_*_msgs`).
- **конфиги** — `tiago_controller_configuration/`, `tiago_moveit_config/`.
- **мета-пакеты** — `tiago_robot`, `pmb2_robot`, `tiago_navigation`.

Подробнее — [`3_Robot/TIAgo_humble/docs/tiago_architecture.md`](../3_Robot/TIAgo_humble/docs/tiago_architecture.md).

## Связанные темы

- [Workspace и окружение](workspace.md) — где живут пакеты
- [colcon](colcon.md) — сборка пакета
- [Nodes](nodes.md) — код внутри пакета
- [Topics](topics.md) — обмен сообщениями
- Практика 7 — [`../2_practice/07_workspace.md`](../2_practice/07_workspace.md)
- Домашнее задание 7 — [`../2_homework/hw_07_workspace.md`](../2_homework/hw_07_workspace.md)
- Вариант lecture-v2 занятия 7 — [`../1_lecture/lecture-v2_content_07_workspace_v1.md`](../1_lecture/lecture-v2_content_07_workspace_v1.md)

## Источники

- [Creating a package](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Creating-Your-First-ROS2-Package.html)
- [ament documentation](https://docs.ros.org/en/jazzy/How-To-Guides/Ament-CMake-Python-Documentation.html)
- [Package.xml reference](https://docs.ros.org/en/jazzy/How-To-Guides/Ament-CMake-Python-Documentation.html)
