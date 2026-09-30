# Домашняя работа-v2 07: workspace и первый package модели

## Цель

Добавить первый ROS 2 package в личный репозиторий робота и научиться повторять цикл build/source в контейнере курса.

## Связь с занятием

На занятии 7 студент использовал `ros2 pkg create`, `colcon build` и `source install/setup.bash`. Дома он выполняет тот же цикл внутри личного проекта.

## Предварительные требования

- Есть личный репозиторий `~/my_robot/` и папка проекта с доступом к контейнеру.
- Подготовленный Dev Container уровня 2 с ROS 2 Jazzy.
- ROS 2 не устанавливается на host.

## Шаг к виртуальной модели

Создать пакет `my_robot_core`, который станет местом для узлов занятий 8–11. На этом задании не нужно писать ROS-узел.

## Шаг 1. Создать workspace внутри личного проекта

```bash
mkdir -p ~/my_robot/ros2_ws/src
cd ~/my_robot/ros2_ws/src
```

Убедитесь, что путь находится в каталоге проекта, который сохраняется между сессиями Dev Container.

## Шаг 2. Создать package официальным инструментом

```bash
ros2 pkg create --build-type ament_python --license Apache-2.0 my_robot_core --dependencies rclpy
```

Прочитайте созданный `package.xml`: проверьте имя и зависимость `rclpy`.

## Шаг 3. Собрать и подключить overlay

```bash
cd ~/my_robot/ros2_ws
colcon build --symlink-install
source install/setup.bash
ros2 pkg prefix my_robot_core
```

Ожидаемый результат: команда prefix выводит путь внутри `~/my_robot/ros2_ws/install/`.

## Шаг 4. Добавить `.gitignore`

В корне `~/my_robot/` добавьте:

```gitignore
build/
install/
log/
__pycache__/
*.py[cod]
```

Проверьте `git status --short`: в истории остаются исходники и metadata, а не результаты сборки.

## Шаг 5. Зафиксировать этап

```bash
cd ~/my_robot
```

Перед commit убедитесь, что `build/`, `install/`, `log/` не staged.

## Ожидаемый результат

- В `~/my_robot/ros2_ws/src` находится пакет `my_robot_core`.
- Package собран и виден через `ros2 pkg prefix`.
- `.gitignore` исключает результаты сборки.
- Есть commit с исходной структурой ROS 2-пакета.

## Самопроверка

1. Почему код кладут в `src/`, а не в `install/`?
2. Зачем нужен `source install/setup.bash`?
3. Что генерирует `colcon build`?
4. Почему package надо создавать официальным CLI?

## Критерии выполнения

- Workspace находится в личной модели и сохраняется вне временного слоя контейнера.
- `ros2 pkg create` использован без ручного создания skeleton.
- Сборка завершилась успешно; overlay подключён.
- Артефакты сборки исключены из Git.

## Материалы

- Практика: [`../2_practice/practice-v2_07_workspace_v1.md`](../2_practice/practice-v2_07_workspace_v1.md).
- Статья: [`../2_knowledge/workspace.md`](../2_knowledge/workspace.md), [`../2_knowledge/packages.md`](../2_knowledge/packages.md), [`../2_knowledge/colcon.md`](../2_knowledge/colcon.md).
- [Creating a workspace](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Creating-A-Workspace/Creating-A-Workspace.html).
