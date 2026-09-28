# Домашнее задание 7: workspace и первый пакет своей модели

## Цель

Создать в своей модели робота workspace и первый пакет, собрать их `colcon build`, подключить через `source install/setup.bash`, зафиксировать структуру в дневнике и сделать коммит в Git.

## Связь с темой занятия

Занятие 7 показало путь «workspace → пакет → сборка → подключение». Дома студент повторяет этот путь для собственной модели: узлы из [`hw_06_ros_architecture.md`](hw_06_ros_architecture.md) начинают превращаться в реальные пакеты.

## Предварительные требования

- Идея модели и перечень узлов из [`hw_06_ros_architecture.md`](hw_06_ros_architecture.md).
- Папка `~/my_robot/` из [`hw_02_setup.md`](hw_02_setup.md).
- Дневник `~/my_robot/diary.md` из [`hw_03_opencode.md`](hw_03_opencode.md).
- Статьи [`../2_knowledge/workspace.md`](../2_knowledge/workspace.md), [`../2_knowledge/packages.md`](../2_knowledge/packages.md), [`../2_knowledge/colcon.md`](../2_knowledge/colcon.md).
- Выполняется дома в devcontainer (ROS2 Jazzy, уровень 2); ROS2 не устанавливается на хост.

## Шаг к виртуальной модели робота

Это шаг от «архитектуры на бумаге» к «коду». Студент заводит для своей модели workspace и первый пакет — каркас, в который в занятиях 8–9 лягут первые узлы (publisher/subscriber). Сейчас важно зафиксировать **структуру проекта и повторяемый процесс сборки**.

## Шаги

### Шаг 1. Создать workspace модели

```bash
mkdir -p ~/my_robot/ros2_ws/src
cd ~/my_robot/ros2_ws
```

Workspace модели лежит внутри папки проекта `~/my_robot/`, а не в домашнем каталоге, чтобы вся модель хранилась в одном месте и попадала в Git.

### Шаг 2. Создать первый пакет

Назовите пакет по главному узлу модели из [`hw_06_ros_architecture.md`](hw_06_ros_architecture.md). Например, если робот-курьер начинает с базы — `my_robot_base`:

```bash
ros2 pkg create --build-type ament_python my_robot_base --destination-directory src
```

Если пакетов планируется несколько — заведите их все как пустые каркасы, по одному на подсистему:

```bash
ros2 pkg create --build-type ament_python my_robot_base --destination-directory src
ros2 pkg create --build-type ament_python my_robot_perception --destination-directory src
```

### Шаг 3. Собрать

```bash
cd ~/my_robot/ros2_ws
colcon build
```

Ожидаемый финал: `Summary: N packages finished`.

### Шаг 4. Подключить и проверить

```bash
source install/setup.bash
ros2 pkg list | grep my_robot
```

Все созданные пакеты должны появиться в списке.

### Шаг 5. Зафиксировать структуру в дневнике

Добавьте в `~/my_robot/diary.md`:

```markdown
## Workspace и пакеты

Структура:
~/my_robot/ros2_ws/
├── src/       → my_robot_base, my_robot_perception
├── build/     → (colcon)
├── install/   → (colcon)
└── log/       → (colcon)

Типы пакетов модели:
- my_robot_base       — узлы (управление базой, /cmd_vel, /odom)
- my_robot_perception — узлы (лидар, /scan)
- (позже) my_robot_interfaces — собственные .msg/.srv/.action
- (позже) my_robot_description — URDF/Xacro
- (позже) my_robot_bringup    — launch-файлы
```

### Шаг 6. Коммит в Git

```bash
cd ~/my_robot
git add ros2_ws/src diary.md
git commit -m "workspace и первые пакеты модели"
```

**Не коммитьте** `build/`, `install/`, `log/` — они генерируются сборкой. Добавьте их в `.gitignore`:

```bash
cd ~/my_robot
echo "ros2_ws/build/" >> .gitignore
echo "ros2_ws/install/" >> .gitignore
echo "ros2_ws/log/" >> .gitignore
```

## Ожидаемый результат

- Workspace `~/my_robot/ros2_ws` со структурой `src/`, `build/`, `install/`, `log/`.
- Минимум один пакет `ament_python`, видимый в `ros2 pkg list`.
- В `diary.md` записана структура workspace и типы пакетов модели.
- Сделан коммит; `build/`, `install/`, `log/` в `.gitignore`.

## Вопросы для самопроверки

1. Почему workspace лежит внутри `~/my_robot/`, а не в домашнем каталоге?
2. Зачем разделять пакеты по назначению (узлы, интерфейсы, описание), если можно положить всё в один?
3. Почему `build/`, `install/`, `log/` не попадают в Git?
4. Что произойдёт, если открыть новый терминал и сразу запустить `ros2 run my_robot_base ...` без `source install/setup.bash`?

## Критерии оценки

Задание выполнено, если:

- создан workspace модели со структурой `src/`, `build/`, `install/`, `log/`;
- создан минимум один пакет `ament_python`;
- пакет собран и виден в `ros2 pkg list`;
- в `diary.md` зафиксирована структура и список типов пакетов модели;
- сделан коммит, а `build/`, `install/`, `log/` добавлены в `.gitignore`.

## Типичные ошибки

| Симптом | Причина | Исправление |
| --- | --- | --- |
| Пакет не виден после сборки | Забыли `source install/setup.bash` | Выполнить `source` в текущем терминале |
| В Git попали `build/` и `install/` | Нет `.gitignore` | Добавить три строки в `.gitignore` и удалить папки из индекса |
| Пакет создан вне `src/` | Забыли `--destination-directory src` | Переместить пакет в `src/` или создать заново |
| Один пакет «на всё» | Не разделили по назначению | Разделить по подсистемам из `hw_06` |

## Ссылки

- Workspace — [`../2_knowledge/workspace.md`](../2_knowledge/workspace.md).
- Пакеты — [`../2_knowledge/packages.md`](../2_knowledge/packages.md).
- colcon — [`../2_knowledge/colcon.md`](../2_knowledge/colcon.md).
- Практика занятия — [`../2_practice/07_workspace.md`](../2_practice/07_workspace.md).
- Архитектура своей модели — [`hw_06_ros_architecture.md`](hw_06_ros_architecture.md).
- Следующее занятие 8 «Node, Executor и callbacks» — [`../1_lecture/lectures_content.md`](../1_lecture/lectures_content.md), тема 8: в пакеты лягут первые узлы.
