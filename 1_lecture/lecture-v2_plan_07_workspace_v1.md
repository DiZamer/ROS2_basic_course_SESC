# Занятие 7 — план lecture-v2: Workspace, package и colcon

Содержание: [`lecture-v2_content_07_workspace_v1.md`](lecture-v2_content_07_workspace_v1.md). Слайды: [`../1_slides/lecture-v2_slides_07_workspace_v1.md`](../1_slides/lecture-v2_slides_07_workspace_v1.md).

## Цель

Студент создаёт первый ROS 2 package официальным CLI-генератором и собирает его внутри workspace контейнера Jazzy.

## Подготовка

- Проверить общий Dev Container: `ros2 --help`, `colcon --help`, `printenv ROS_DISTRO`.
- Подготовить ROS 2 Jazzy underlay и чистую рабочую директорию для группы.
- Не использовать `2_code/mini_project` как шаблон пустого пакета: занятие учит официальному `ros2 pkg create`.
- Для уровня 3 открыть TIAGo README, `.repos` и структуру `ros2_ws/src`, не запускать повторный импорт.

## Тайминг 40+40+40

| Время | Уровень | Результат |
| --- | --- | --- |
| 0–40 | Лекция | Понятны workspace, package, build tree и overlay. |
| 40–80 | Практика | Создан и собран package `ros2_basics`. |
| 80–120 | TIAGo | Учебная модель сопоставлена с крупным workspace. |

## Уровень 1 — лекция (0–40)

| Минуты | Блок | Объяснить / показать | Проверить |
| --- | --- | --- | --- |
| 0–5 | От graph к файлам | На прошлом занятии увидели узлы; теперь выясняем, где хранятся программы | «Где положить исходник собственного node?» |
| 5–12 | Workspace tree | `src`, `build`, `install`, `log` | Распределить каталог по роли. |
| 12–19 | Пакет | `package.xml`, build type, назначение пакетов | Чем `ament_python` отличается от роли bringup? |
| 19–25 | Генератор | `ros2 pkg create` создаёт согласованный skeleton | Почему не копировать папку неизвестного пакета? |
| 25–33 | Сборка | `colcon build`, зависимости и текущий каталог | Из какого каталога запускать `colcon build`? |
| 33–37 | Underlay/overlay | Базовый ROS Jazzy и собственная сборка | Зачем `source install/setup.bash`? |
| 37–40 | Итог | Путь исходник → сборка → подключение | Выходной билет из трёх команд. |

Не уходить в глубину workspace overlays и настройки CMake; цель — первый успешный цикл.

## Уровень 2 — практика (40–80)

Инструкция: [`../2_practice/practice-v2_07_workspace_v1.md`](../2_practice/practice-v2_07_workspace_v1.md).

| Время | Действие | Проверка |
| --- | --- | --- |
| 40–45 | Создать `~/ros2_ws/src` и проверить `pwd` | Корень workspace определён. |
| 45–55 | `ros2 pkg create --build-type ament_python --dependencies rclpy ros2_basics` | Скелет создан официальным инструментом. |
| 55–60 | Прочитать `package.xml`, `setup.py`, `resource/` | Студент находит имя и build type. |
| 60–68 | Собрать workspace | `colcon build --symlink-install` завершается успешно. |
| 68–73 | Source overlay и найти prefix | Prefix указывает в `install/`. |
| 73–77 | Открыть структуру `src/build/install/log` | Объяснить, что исходное, а что генерируется. |
| 77–80 | Exit ticket | Команды и их эффекты объяснены. |

## Уровень 3 — TIAGo (80–120)

| Время | Шаг | Действие |
| --- | --- | --- |
| 80–86 | Найти root workspace | `pwd`, `ls ~/ros2_ws`, `ls ~/ros2_ws/src`. |
| 86–96 | Классифицировать пакеты | Description, bringup, interfaces, configuration, metapackage. |
| 96–104 | Понять происхождение кода | Прочитать `tiago.repos`: откуда импортируются исходники. |
| 104–112 | Проследить build directories | `build/install/log` — выходы colcon; не редактировать. |
| 112–118 | Найти setup environment | Underlay Humble и workspace overlay в контейнере. |
| 118–120 | Сформулировать отличие от практики | Один package против workspace из десятков пакетов. |

## План Б и домашнее задание

Если сборка не работает — записать ошибку и разобрать package skeleton на схеме. ROS 2 не устанавливать на хост. ДЗ: [`../2_homework/homework-v2_07_workspace_v1.md`](../2_homework/homework-v2_07_workspace_v1.md).

Источники: [ROS 2 workspace](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Creating-A-Workspace/Creating-A-Workspace.html), [package](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Creating-Your-First-ROS2-Package.html), [colcon](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Colcon-Tutorial.html).
