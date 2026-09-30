# Практика-v2 07: создать и собрать ROS 2 package

## Цель

Внутри Dev Container Jazzy создать workspace, сгенерировать package официальной командой, собрать его и подключить overlay.

## Предварительные требования

- Терминал открыт внутри общего Dev Container уровня 2.
- Доступны `ros2`, `colcon`, `rclpy`.
- Рабочее имя `ros2_basics` не занято в `~/ros2_ws/src`.

## Результат

- `~/ros2_ws/src/ros2_basics` создан командой `ros2 pkg create`;
- `colcon build` успешен;
- `ros2 pkg prefix ros2_basics` указывает в workspace `install/`.

## Шаг 1. Создать workspace (5 минут)

```bash
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws
pwd
```

Ожидаемый результат: текущий каталог — `/home/ubuntu/ros2_ws` или путь с окончанием `/ros2_ws`.

## Шаг 2. Сгенерировать package (10 минут)

```bash
cd ~/ros2_ws/src
ros2 pkg create --build-type ament_python --license Apache-2.0 ros2_basics --dependencies rclpy
```

Ожидаемый результат: CLI сообщает, что package создан. Посмотрите сгенерированные файлы:

```bash
ls -la ros2_basics
```

Не переписывайте skeleton вручную. Найдите `package.xml`, `setup.py`, `setup.cfg` и `resource/ros2_basics`.

## Шаг 3. Собрать workspace (10 минут)

```bash
cd ~/ros2_ws
colcon build --symlink-install
```

Ожидаемый результат: summary сообщает успешную сборку package. Первичная сборка может занять дольше, чем повторная.

## Шаг 4. Подключить overlay (5 минут)

```bash
source install/setup.bash
ros2 pkg prefix ros2_basics
```

Ожидаемый результат: `ros2 pkg prefix` выводит путь внутри `~/ros2_ws/install/ros2_basics`.

## Шаг 5. Прочитать workspace (5 минут)

```bash
ls -d src build install log
```

Объясните партнёру назначение каждого каталога. Не редактируйте `build/`, `install/`, `log/` вручную.

## Шаг 6. Проверить новый terminal (5 минут)

В новом terminal контейнера выполните:

```bash
source ~/ros2_ws/install/setup.bash
ros2 pkg prefix ros2_basics
```

Ожидаемый результат: package виден после подключения overlay в новой shell-сессии.

## Типичные ошибки

| Симптом | Причина | Исправление |
| --- | --- | --- |
| `ros2: command not found` | Терминал не в Dev Container или underlay не активирован | Переподключиться к контейнеру курса. |
| `colcon` не видит package | Команда выполнена не из workspace | `cd ~/ros2_ws` и повторить сборку. |
| `ros2 pkg prefix` не находит пакет | Не сделан build или source | `colcon build`, затем `source install/setup.bash`. |
| `ros2 pkg create` сообщает, что имя уже существует | Такой package уже есть | Использовать новое учебное имя или проверить существующий каталог. |

## Связанные материалы

- Содержание: [`../1_lecture/lecture-v2_content_07_workspace_v1.md`](../1_lecture/lecture-v2_content_07_workspace_v1.md).
- План: [`../1_lecture/lecture-v2_plan_07_workspace_v1.md`](../1_lecture/lecture-v2_plan_07_workspace_v1.md).
- ДЗ: [`../2_homework/homework-v2_07_workspace_v1.md`](../2_homework/homework-v2_07_workspace_v1.md).
- [ROS 2 package tutorial](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Creating-Your-First-ROS2-Package.html).
