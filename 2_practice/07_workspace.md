# Практика: workspace, package и сборка через colcon

## Цель

Через 5–10 минут студент создаёт workspace, пакет `ament_python`, собирает его `colcon build`, подключает через `source install/setup.bash` и проверяет, что пакет виден в `ros2 pkg list`.

## Предварительные требования

- Открыт Dev Container уровня 2 (`.devcontainer/`, Ubuntu 24.04 + ROS2 Jazzy).
- ROS2 не устанавливается на хост — всё выполняется внутри контейнера.
- Статья [`../2_knowledge/workspace.md`](../2_knowledge/workspace.md) — прочитана.

## Что получится

- Workspace `~/ros2_ws` со структурой `src/`, `build/`, `install/`, `log/`.
- Пакет `my_first_pkg` (`ament_python`), видимый в `ros2 pkg list`.

## Шаг 1. Создать workspace

```bash
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws
ls
```

Ожидаемый вывод: папка `src`. Пока workspace пуст.

## Шаг 2. Создать пакет

```bash
ros2 pkg create --build-type ament_python my_first_pkg --destination-directory src
```

Команда создаёт в `src/` папку `my_first_pkg` со структурой: `package.xml`, `setup.py`, `setup.cfg`, `resource/`, `test/`, `my_first_pkg/__init__.py`.

Посмотрите на результат:

```bash
tree src/my_first_pkg
```

## Шаг 3. Собрать

```bash
colcon build
```

Ожидаемый финал вывода:

```text
Summary: 1 package finished [<время>]
```

После сборки в корне workspace появились `build/`, `install/`, `log/`:

```bash
ls
# build install log src
```

## Шаг 4. Подключить workspace

```bash
source install/setup.bash
```

Без этой команды собранный пакет не виден ROS2.

## Шаг 5. Проверить результат

```bash
ros2 pkg list | grep my_first_pkg
```

Ожидаемый вывод:

```text
my_first_pkg
```

Проверьте, что пакет установлен и какие у него точки входа:

```bash
ros2 pkg prefix my_first_pkg
ros2 pkg executables my_first_pkg   # пока пусто — узлов ещё нет
```

## Проверка результата

| Действие | Ожидаемый результат |
| --- | --- |
| `ls` в корне workspace | папки `src`, `build`, `install`, `log` |
| `colcon build` | `Summary: 1 package finished` |
| `ros2 pkg list \| grep my_first_pkg` | `my_first_pkg` |
| `ros2 pkg prefix my_first_pkg` | путь до `install/my_first_pkg` |

## Вопросы студентам

1. Почему `build/`, `install/`, `log/` нельзя редактировать вручную?
2. Что произойдёт, если пропустить `source install/setup.bash`?
3. Зачем пакет создавать именно в `src/`, а не в корне workspace?
4. Чем `install/` отличается от `src/`?

## Типичные ошибки

| Симптом | Причина | Исправление |
| --- | --- | --- |
| `colcon build` — «no packages found» | Команда запущена не из корня workspace, или пакет не в `src/` | `cd ~/ros2_ws && colcon build`; пакет — в `src/` |
| `ros2 pkg list` не показывает пакет | Забыли `source install/setup.bash` | `source ~/ros2_ws/install/setup.bash` |
| Создался `ament_cmake`-пакет | Забыли `--build-type ament_python` | Удалить пакет и создать заново с флагом |
| `ros2: command not found` | Контейнер не запущен | Открыть Dev Container уровня 2 |

## Дополнительное задание

Создайте второй пакет `my_pkg_cpp` с типом `ament_cmake` и сравните его структуру с `ament_python`:

```bash
ros2 pkg create --build-type ament_cmake my_pkg_cpp --destination-directory src
tree src/my_pkg_cpp
colcon build
```

Главное отличие: у `ament_cmake`-пакета вместо `setup.py` — `CMakeLists.txt`.

## Где это в роботе

В TIAgo тот же принцип: workspace `ros2_ws/` с `src/` и сборкой через `colcon build`. Но пакетов не один, а десятки, и они разных типов (description, bringup, msgs, мета-пакеты). Разбор структуры — в кейсе уровня 3 занятия 7.

## Ссылки

- Workspace — [`../2_knowledge/workspace.md`](../2_knowledge/workspace.md).
- Пакеты — [`../2_knowledge/packages.md`](../2_knowledge/packages.md).
- colcon — [`../2_knowledge/colcon.md`](../2_knowledge/colcon.md).
- Домашнее задание 7 — [`../2_homework/hw_07_workspace.md`](../2_homework/hw_07_workspace.md).
- [Creating a workspace](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Creating-A-Workspace/Creating-A-Workspace.html)
- [Creating a package](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Creating-Your-First-ROS2-Package.html)
- [Using colcon](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Colcon-Tutorial.html)
