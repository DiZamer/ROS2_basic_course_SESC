# DEBUG — журнал анализа ошибок и доработок TIAGo

Журнал ведёт ИИ-агент (opencode). Сюда записываются: анализ ошибок, установленные причины, внесённые исправления и доработки проекта.
Записи добавляются **в конец файла** (хронологический порядок).

## Формат записи

- **Дата** — когда проводился разбор.
- **Симптом** — что наблюдалось (команда, ошибка, лог).
- **Причина** — установлена по логам, файлам, сравнением конфигураций.
- **Исправление** — что изменено.
- **Файлы** — затронутые пути (`file:line`).
- **Статус** — применено / требует Rebuild / наблюдение.

---

## 2026-09-28 — postCreate-регрессия и починка сборки контейнера

**Симптом.** `postCreateCommand from devcontainer.json failed with exit code 127`:
```
exec: "bash -lc 'source ...'": stat ...: no such file or directory
```

**Причина.** `postCreateCommand` был задан JSON-**массивом** (`["bash -lc '...'"]`). Массив в Dev Container Spec — exec-форма (argv): первый элемент считается путём к исполняемому файлу, поэтому CLI искал файл с именем, равным всей строке команды. В истории VS Code прежние рабочие версии всегда были строкой.

**Исправление.**
- Логика вынесена в скрипты `.devcontainer/post_create.sh` (одноразовая подготовка: `src/` + overlay в `~/.bashrc`) и `.devcontainer/post_start.sh` (`vcs import`, `fetch_external.sh`, `rosdep`, `colcon build`, идемпотентно).
- В `devcontainer.json` и `devcontainer_prod.json` `postCreateCommand`/`postStartCommand` заданы **строками**, вызывающими эти скрипты.
- Убрана висячая запятая после `forwardPorts` (была в исходнике).

**Файлы.** `3_Robot/TIAgo_humble/.devcontainer/{post_create.sh,post_start.sh,devcontainer.json,devcontainer_prod.json}`, `README.md`, `gitignore_TIAgo.md`, `nvidia_gpu-x11_conf.md`, `TIAgo_configuration.md`, `2_knowledge/docker_devcontainer.md`, `1_slides/lecture_02_container_git.md`, `1_lecture/lecture_plan_02_container_git.md`.

**Статус.** Применено.

---

## 2026-09-28 — Двухэкранный запуск Gazebo и RViz2 (Вариант 1)

**Симптом.** При `start_gui.sh --displays 2` и команде `DISPLAY=:99 ros2 launch tiago_gazebo ...` и Gazebo, и встроенный RViz2 оказывались на первом экране; вторая вкладка пустая.

**Причина.** `tiago_gazebo.launch.py` поднимает Gazebo и RViz2 вместе, оба наследуют `DISPLAY=:99`. У PAL-пакета нет аргумента `rviz_display`/`additional_env` (править PAL нельзя).

**Исправление (вариант C, без нового пакета).**
- `rviz:=False` отключает встроенный/навигационный RViz (флаг `rviz` общий — `CommonArgs.rviz`); RViz2 запускается отдельно:
  `DISPLAY=:100 rviz2 -d /workspaces/TIAgo_humble/ros2_ws/install/tiago_gazebo/share/tiago_gazebo/config/tiago_sim.rviz`.
- Сценарии «навигация + два экрана» и «манипуляция + два экрана» задокументированы.

**Файлы.** `README.md` (раздел «Две вкладки»), `start_options_and_GUI.md`, комментарий Варианта 1 в обоих `devcontainer*.json`.

**Статус.** Применено.

---

## 2026-09-29 — Режимы навигации/SLAM/манипуляции: разбор логов запусков

**Симптомы.**
- «Навигация + SLAM» запустила Gazebo и RViz2, но карта не строилась.
- «Манипуляция» запустилась с ошибками без режима манипуляции.

**Причина (по `~/.ros/log`, запуск манипуляции `2026-09-29-05-32-46-...-11601`).**
- Gazebo в этом запуске **не стартовал** (`gzserver`/`gzclient` отсутствуют среди процессов) — предыдущий запуск ещё не завершился. Следствие: не поднялся `controller_manager`, и все 7 спейвнеров упали (`exit code 1`):
  `arm_controller`, `ft_sensor_controller`, `mobile_base_controller`, `gripper_controller`, `joint_state_broadcaster`, `head_controller`, `torso_controller`.
- Без контроллеров `play_motion2` не выполнил траекторию: `PlayMotion2 is busy`, `Joint Trajectory failed`, `[arm_tucker]: Failed to tuck arm after 5 tries`.
- `[move_group]: Failed to read controllers from /controller_manager/list_controllers within 3 seconds` — то же следствие.
- SLAM (запуск `05-31-33-...-9055`): стек поднялся корректно (`sync_slam_toolbox_node`, `map_saver`, `amcl`, контроллеры; arm/torso goal reached success). Карта не строится, потому что **робот не двигался** — SLAM Toolbox создаёт карту только при движении и сканировании.
- `process has died ... exit code -11` у `move_group`/`gzclient` — **SIGSEGV при завершении по Ctrl+C**, не причина сбоя (в логе аккуратное `signal_handler(SIGINT)`).

**Исправление (документация).**
- Предупреждение о полном останове предыдущего launch перед новым (`ros2 node list` пусто, `ps aux | grep gzserver` пусто).
- Для навигации/SLAM — `moveit:=False` (не поднимать лишний стек).
- Для SLAM — команда подачи движения и проверка `ros2 topic echo /map --once`.
- Добавлена таблица «Типичные ошибки при запуске режимов».

**Файлы.** `README.md` («Быстрый старт», «Типичные ошибки»), `start_options_and_GUI.md`.

**Статус.** Применено.

---

## 2026-09-29 — Дефект контейнера: плагин `pointcloud_octomap_updater`

**Симптом.** При запуске с sensor manager (параметры `octomap_updater.*` в `/tmp/launch_params_*`):
```
[ERROR] ... Failed to load sensor: `pointcloud_octomap_updater`
[ERROR] ... Exception while loading octomap updater 'occupancy_map_monitor/PointCloudOctomapUpdater'
```

**Причина.** `tiago_moveit_config/config/sensors_3d.yaml` требует плагин `occupancy_map_monitor/PointCloudOctomapUpdater`. Пакет `ros-humble-moveit-ros-perception`, который его регистрирует, **не установлен** (в образе есть только `moveit-ros-occupancy-map-monitor`). Отсутствовал в **обоих** — и в fork, и в оригинале. Срабатывает только при `use_sensor_manager:=True` (по умолчанию `False`, `common.py:109-113`).

**Исправление.** В Dockerfile добавлен `ros-humble-moveit-ros-perception`.

**Файлы.** `.devcontainer/Dockerfile:58`.

**Статус.** Требует **Rebuild Container**.

---

## 2026-09-29 — Сравнение оригинала (`ROS2_course_ini`) и fork (`ROS2_basic_course_SESC`)

**Вопрос.** Не потеряны ли в fork пакеты / не сконфигурированы ли иначе, раз «в оригинале команды работали, а в fork перестали».

**Метод.** Рекурсивное сравнение `ros2_ws` и `.devcontainer` двух проектов.

**Результат сравнения.**

| Что сравнивалось | Результат |
|---|---|
| `ros2_ws/tiago.repos` | Идентичен (19 репозиториев) |
| `ros2_ws/src/` — состав | Идентичен (19 пакетов) |
| `ros2_ws/src/` — содержимое файлов | Побайтово идентично (`diff -r` без отличий) |
| Коммиты PAL-пакетов (HEAD) | Совпадают все |
| `moveit_ros_control_interface` | Содержимое идентично; отличается только git-remote (оригинал → `ROS2_short_course`, fork → `ROS2_basic_course_SESC`) |
| `ros2_ws/install/` — состав | Идентичен (54 записи, 43 пакета) |
| `ros2_ws/build/` — собрано пакетов | Идентично (43) |
| `fetch_external.sh`, `patch_twist_mux.py` | Идентичны |
| `sensors_3d.yaml`, `move_group.launch.py` | Идентичны |

**Реальные расхождения.**

| Область | Оригинал | Fork |
|---|---|---|
| `Dockerfile` | без `moveit-ros-perception`; `COPY ros2_ws/...` | + `ros-humble-moveit-ros-perception`, `x11-utils`, `xterm`; `COPY .devcontainer/...` |
| `start_gui.sh`, `novnc_index.html` | базовая версия | улучшенные (идемпотентность, `--displays`, noVNC-редирект) |
| `README.md` | те же неверные команды (`tiago_navigation nav2_bringup.launch.py`, `tiago_moveit moveit.launch.py`) | команды исправлены на флаги `tiago_gazebo.launch.py` |
| `devcontainer.json` | `"image": "tiago_humble:gpu"` | сборка из Dockerfile |

**Вывод.** Fork **не потерял пакеты и не переконфигурирован**: `src/`, PAL-конфиги, `install/`, `build/`, `tiago.repos` идентичны оригиналу. Причины симптомов — в **процессе запуска** (неверные команды, незавершённый Gazebo), а не в fork. `pointcloud_octomap_updater` отсутствовал в обоих, исправлен в Dockerfile.

**Статус.** Анализ выполнен; исправление octomap требует Rebuild.

---

## Дальнейшие шаги

1. **Rebuild Container** — применить `ros-humble-moveit-ros-perception` из Dockerfile.
2. Запускать режимы чисто и последовательно, флагами (`navigation:=True`, `slam:=True`, `moveit:=True`), с полным остановом предыдущего launch.
3. Для SLAM — подавать движение, проверять `/map`.
