# Варианты запуска и вывод GUI

Документ описывает, как в контейнере уровня 2 (`.devcontainer/`) выводится графика и как запускать приложения на одном или нескольких экранах.

Короткая выжимка и пример на два экрана — в [`README.md`](README.md). Детали по роботу TIAGo (уровень 3) — в [`3_Robot/TIAgo_humble/README.md`](3_Robot/TIAgo_humble/README.md).

---

## 1. Пять вариантов вывода GUI

В `.devcontainer/devcontainer.json` заложены пять вариантов. Активен ровно **один** — по умолчанию **Вариант 1** (VNC/браузер, работает на любой ОС). Образ собирается из `Dockerfile` автоматически при первом запуске (с `--network=host`).

| Вариант | ОС / сценарий | Что делает | Требования на хосте |
| --- | --- | --- | --- |
| **1 (по умолчанию)** | любая ОС | Виртуальный дисплей Xvfb + VNC/noVNC, окна в браузере | нет (только Docker) |
| **2** | Ubuntu (X11/Wayland) | Прямой X11 на хост | `xhost +local:docker` |
| **3** | Windows | Прямой X11 через VcXsrv | установленный VcXsrv |
| **4** | macOS | Прямой X11 через XQuartz | установленный XQuartz |
| **5** | Ubuntu + NVIDIA GPU | Прямой X11, аппаратный рендер | native Docker Engine + `nvidia-container-toolkit` |

**Как переключить вариант:**

1. Откройте `.devcontainer/devcontainer.json`.
2. Закомментируйте блок `runArgs` + `containerEnv` + `forwardPorts` **Варианта 1**.
3. Раскомментируйте блок нужного варианта **вместе с блоком `mounts`** (`/tmp/.X11-unix`).
4. Выполните **Rebuild Container**.

> **Файлы конфигурации:**
> - `devcontainer.json` — активный конфиг (все 5 вариантов, включён Вариант 1)
> - `devcontainer_prod.json` — копия активного (эталон)

### Движок рендера Gazebo (`GZ_RENDER_ENGINE`)

Выбирается автоматически из варианта `devcontainer.json`, менять команду запуска не нужно:

| Режим вывода | Вариант | `GZ_RENDER_ENGINE` |
| --- | --- | --- |
| VNC/браузер, CPU (любая ОС) | Вариант 1 | `ogre` |
| Прямой X11 + NVIDIA GPU | Вариант 5 | `ogre2` |

`ogre` использует GLX и безопасен для Xvfb/CPU. `ogre2` задействует GPU, но требует рабочего EGL (поэтому не используется в Варианте 1).

---

## 2. Виртуальный дисплей: `start_gui.sh`

`start_gui.sh` поднимает виртуальные X-дисплеи (Xvfb), VNC-сервер (x11vnc), веб-прокси (noVNC/websockify) и оконный менеджер (Fluxbox). Запускается **в контейнере**.

```bash
start_gui.sh                 # один экран (:99, VNC 5900, Web 6080)
start_gui.sh --displays 2    # два экрана (:99, :100)
```

| Дисплей | DISPLAY | VNC | Web (браузер) |
| --- | --- | --- | --- |
| 0 | `:99` | 5900 | **6080** |
| 1 | `:100` | 5901 | **6081** |
| 2 | `:101` | 5902 | **6082** |
| 3 | `:102` | 5903 | **6083** |

Доступны дисплеи `0–3` (Web `6080–6083`, VNC `5900–5903`).

**Особенности:**

- Повторный запуск безопасен: прежние процессы дисплея останавливаются автоматически.
- x11vnc запускается с `-shared` — к экрану можно подключаться и через браузер, и через VNC-клиент одновременно.
- Порт соответствует номеру дисплея (`6080 + i`). Если порт занят — измените проброс в блоке Варианта 1 (`runArgs`/`forwardPorts`) и пересоберите контейнер.

**Альтернатива браузеру — VNC-клиент** (меньше RAM, выше FPS): TigerVNC, RealVNC Viewer. Подключение: `localhost:5900` (или `5901` и т.д.).

> **Важно:** порты `6081+` публикуются только после `Rebuild Container` — до пересборки вторая вкладка будет недоступна.

**Проверка, что экраны подняты** (в контейнере):

```bash
DISPLAY=:99  xdpyinfo >/dev/null && echo ":99 OK"
DISPLAY=:100 xdpyinfo >/dev/null && echo ":100 OK"
netstat -tn | grep 5900        # должна быть сессия VNC
```

На хосте: `docker ps` — должны быть проброшены `6080-6083` и `5900-5903`.

---

## 3. Запуск приложений на нужном экране

Один экран = один виртуальный дисплей = одна вкладка браузера. Приложение запускается **с указанием дисплея** через переменную `DISPLAY` (по умолчанию — `:99`).

```bash
DISPLAY=:99  <команда>     # окно на экран 0 → http://localhost:6080
DISPLAY=:100 <команда>     # окно на экран 1 → http://localhost:6081
```

### Пример: `rviz2` + `turtlesim` на двух экранах

```bash
# Терминал 1: поднять два экрана
start_gui.sh --displays 2

# Терминал 2: RViz2 на экране 0
DISPLAY=:99  rviz2

# Терминал 3: turtlesim на экране 1
DISPLAY=:100 ros2 run turtlesim turtlesim_node

# Браузер:
#   вкладка 1 → http://localhost:6080 (RViz2)
#   вкладка 2 → http://localhost:6081 (turtlesim)
```

### Пример: Gazebo + RViz2 на двух экранах

Учебный пакет `2_code/gazebo_demo` (см. [`2_code/`](2_code/)).

```bash
start_gui.sh --displays 2

# Gazebo с роботом на экране 0
DISPLAY=:99  ros2 launch gazebo_demo gazebo.launch.py

# RViz2 на экране 1
DISPLAY=:100 rviz2
```

### Два окна на одном экране

Если отдельные вкладки не нужны, запустите приложения на **одном** дисплее — окна размещаются во Fluxbox:

```bash
start_gui.sh                 # один экран :99
DISPLAY=:99 rviz2
DISPLAY=:99 ros2 run turtlesim turtlesim_node
# оба окна на http://localhost:6080
```

---

## 4. Gazebo `gazebo_demo` (уровень 2)

Одна команда — движок рендера берётся из `GZ_RENDER_ENGINE` (см. раздел 1):

```bash
ros2 launch gazebo_demo gazebo.launch.py
```

Пакет собирается и подключается автоматически при создании контейнера. В контейнере уровня 2 используется **gz-sim** (через `ros_gz`) — это отличается от TIAGo, где применяется Gazebo Classic 11.

---

## 5. Уровень 3: TIAGo (ROS2 Humble)

Отдельный контейнер и собственные launch-файлы. Все детали вывода GUI, вариантов запуска и симуляции TIAGo — в проекте робота: [`3_Robot/TIAgo_humble/README.md`](3_Robot/TIAgo_humble/README.md).

---

## 6. Типичные ошибки

| Ошибка | Причина | Исправление |
| --- | --- | --- |
| `Package '...' not found` | Overlay не подключён | **Rebuild Container**; диагностика: `ros2 pkg prefix gazebo_demo` |
| Пакет не найден после правок | Пакет не пересобран | `cd 2_code && colcon build --symlink-install`, затем новый терминал |
| `ros2: command not found` | Контейнер не активен | Открыть проект в Dev Container |
| Вторая вкладка (`6081`) недоступна | Порты не проброшены | **Rebuild Container** (порты `6081+` публикуются после пересборки) |
| Окно не появляется в браузере | `start_gui.sh` не запущен | Запустить `start_gui.sh` и открыть `http://localhost:6080` |
| Gazebo падает / чёрный экран (Jazzy) | Движок `ogre2` без рабочего EGL | Вариант 1 использует `ogre` (задаётся автоматически) |
| `cannot open display :N` (Варианты 2–5) | Не выдан доступ к X-серверу | `xhost +local:docker`; проверить номер `echo $DISPLAY` |

---

## 7. Шпаргалка

```bash
# Экраны
start_gui.sh                 # 1 экран
start_gui.sh --displays 2    # 2 экрана

# Приложения на конкретный экран
DISPLAY=:99  rviz2
DISPLAY=:100 ros2 run turtlesim turtlesim_node

# Gazebo (корень, gz-sim)
ros2 launch gazebo_demo gazebo.launch.py

# Проверки
DISPLAY=:99 xdpyinfo >/dev/null && echo OK
netstat -tn | grep 5900
docker ps
```
