# Варианты запуска и вывод GUI

Документ описывает, как в контейнере уровня 2 (`.devcontainer/`) выводится графика и как запускать приложения на одном или нескольких экранах.

В `devcontainer.json` заложены **пять вариантов** вывода GUI. Активен ровно **один** — по умолчанию **Вариант 1** (VNC/браузер, работает на любой ОС). Варианты 2–5 — прямой X11 на хост.

Короткая выжимка и пример на два экрана — в [`README.md`](README.md). Детали по роботу TIAGo (уровень 3) — в [`3_Robot/TIAgo_humble/README.md`](3_Robot/TIAgo_humble/README.md).

---

## 1. Выбор варианта и переключение

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

Образ собирается из `Dockerfile` автоматически при первом запуске (с `--network=host`), отдельный GPU-образ не нужен.

> **Файлы конфигурации:**
> - `devcontainer.json` — активный конфиг (все 5 вариантов, включён Вариант 1)
> - `devcontainer_prod.json` — копия активного (эталон)
> - `start_gui.sh`, `novnc_index.html` — виртуальный дисплей Xvfb/VNC и стартовая страница noVNC (нужны только Варианту 1)
> - блоки Вариантов 2–5 — в комментариях `devcontainer.json`

---

## 2. Движок рендера Gazebo (`GZ_RENDER_ENGINE`)

Уровень 2 использует **gz-sim** (через `ros_gz`). Движок рендера выбирается автоматически из варианта `devcontainer.json` — менять команду запуска не нужно:

| Режим вывода | Вариант | `GZ_RENDER_ENGINE` | Дополнительно |
| --- | --- | --- | --- |
| VNC/браузер, CPU (любая ОС) | Вариант 1 | `ogre` | — |
| Прямой X11 + NVIDIA GPU | Вариант 5 | `ogre2` | `MESA_LOADER_DRIVER_OVERRIDE=zink` |

`ogre` использует GLX и безопасен для Xvfb/CPU. `ogre2` задействует GPU, но требует рабочего EGL (поэтому не используется в Варианте 1).

В вариантах 2–4 переменная `GZ_RENDER_ENGINE` **не задана** — применяется движок gz-sim по умолчанию. Если Gazebo не стартует (чёрный экран, ошибка EGL), добавьте в `containerEnv` своего варианта `"GZ_RENDER_ENGINE": "ogre"`.

---

## 3. Вариант 1 — Виртуальный дисплей (VNC/браузер)

Активен по умолчанию. Подходит для **всех ОС** и не требует X11-сервера на хосте.

### Как это работает

1. **Xvfb** — виртуальный X-сервер (дисплей `:99` / `:100` / ..., 1920x1080).
2. **x11vnc** — VNC-сервер на порту 5900 / 5901 / ...
3. **websockify** — WebSocket-прокси для noVNC на порту 6080 / 6081 / ...
4. **Fluxbox** — оконный менеджер (перемещение и сворачивание окон).

Через noVNC в браузере вы видите виртуальный экран контейнера. Все GUI-приложения (Gazebo, RViz2) рендерятся на этом экране.

### `start_gui.sh`

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
- `http://localhost:6080` открывает штатную страницу noVNC: соединение устанавливается автоматически, изображение подгоняется под окно браузера. Режим масштаба (None / Local Scaling / Remote Resizing) переключается в панели noVNC.
- Каждый Xvfb потребляет ~60 MB видеопамяти.

### Альтернатива браузеру — VNC-клиент

Меньше RAM (экономия 200–500 MB), выше FPS, без прослойки браузер + noVNC + websockify.

| Клиент | Сайт | ОС |
| --- | --- | --- |
| TigerVNC | https://tigervnc.org | Linux, Windows, macOS |
| RealVNC Viewer | https://www.realvnc.com/en/connect/download/viewer/ | Linux, Windows, macOS |

Подключение: `localhost:5900` (или `5901` и т.д.). `start_gui.sh` продолжает работать как обычно.

### Запуск приложений на нужном экране

Один экран = один виртуальный дисплей = одна вкладка браузера. Приложение запускается **с указанием дисплея** через переменную `DISPLAY` (по умолчанию — `:99`).

```bash
DISPLAY=:99  <команда>     # окно на экран 0 → http://localhost:6080
DISPLAY=:100 <команда>     # окно на экран 1 → http://localhost:6081
```

**Пример: `rviz2` + `turtlesim` на двух экранах**

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

**Пример: Gazebo + RViz2 на двух экранах**

Учебный пакет `2_code/gazebo_demo` (см. [`2_code/`](2_code/)).

Одной командой — Gazebo на экране 0, RViz2 на экране 1 через аргумент `rviz_display`:

```bash
start_gui.sh --displays 2

DISPLAY=:99 ros2 launch gazebo_demo gazebo.launch.py rviz_display:=:100

# Браузер:
#   вкладка 1 → http://localhost:6080 (Gazebo)
#   вкладка 2 → http://localhost:6081 (RViz2)
```

Без `rviz_display` и Gazebo, и RViz2 появятся на одном экране (`:99`).

**Уровень 3 (TIAGo): Gazebo + RViz2 на двух экранах**

У PAL-пакета `tiago_gazebo.launch.py` нет аргумента `rviz_display`, поэтому встроенный RViz2 отключается флагом `rviz:=False`, а RViz2 поднимается отдельной командой на `:100`:

```bash
start_gui.sh --displays 2

# Gazebo + робот на экране 0 (встроенный RViz отключён)
DISPLAY=:99 ros2 launch tiago_gazebo tiago_gazebo.launch.py \
  is_public_sim:=True rviz:=False

# RViz2 на экране 1 с конфигом симуляции TIAGo
DISPLAY=:100 rviz2 -d \
  /workspaces/TIAgo_humble/ros2_ws/install/tiago_gazebo/share/tiago_gazebo/config/tiago_sim.rviz

# Браузер:
#   вкладка 1 → http://localhost:6080 (Gazebo)
#   вкладка 2 → http://localhost:6081 (RViz2)
```

Без `rviz:=False` встроенный RViz2 появится на первом экране, а второй останется пустым.

**Уровень 3 (TIAGo): навигация + два экрана**

Флаг `rviz` у PAL-пакета общий (`CommonArgs.rviz`), поэтому `rviz:=False` отключает и встроенный, и навигационный RViz. Навигация включается аргументом `navigation:=True`:

```bash
start_gui.sh --displays 2

# Gazebo + Nav2 на экране 0 (любой RViz отключён)
DISPLAY=:99 ros2 launch tiago_gazebo tiago_gazebo.launch.py \
  is_public_sim:=True navigation:=True rviz:=False

# RViz2 на экране 1
DISPLAY=:100 rviz2 -d \
  /workspaces/TIAgo_humble/ros2_ws/install/tiago_gazebo/share/tiago_gazebo/config/tiago.rviz
```

**Уровень 3 (TIAGo) на Варианте 5 (NVIDIA GPU)**

При прямом X11 (Вариант 5) виртуальные дисплеи не нужны — окна идут на хост. Запуск навигации:

```bash
ros2 launch tiago_gazebo tiago_gazebo.launch.py \
  is_public_sim:=True navigation:=True moveit:=False
```

Манипуляция (MoveIt2):

```bash
ros2 launch tiago_gazebo tiago_gazebo.launch.py \
  is_public_sim:=True moveit:=True
ros2 launch tiago_moveit_config moveit_rviz.launch.py
```

> **`moveit:=False`** для чистой навигации/SLAM, чтобы не поднимать лишний стек MoveIt.
> **SLAM строится только при движении** — после `navigation:=True slam:=True` подайте `cmd_vel` или goal в RViz.
> **Перед новым запуском** дождитесь полного останова предыдущего (`ros2 node list` пусто, `ps aux | grep gzserver` пусто),
> иначе Gazebo не поднимется, `controller_manager` не загрузится и режимы будут пустыми.
> Подробнее — [`3_Robot/TIAgo_humble/README.md`](3_Robot/TIAgo_humble/README.md), разделы «Быстрый старт» и «Типичные ошибки».

Двумя командами (если нужно запустить RViz2 отдельно):

```bash
start_gui.sh --displays 2

# Gazebo с роботом на экране 0 (без RViz2)
DISPLAY=:99 ros2 launch gazebo_demo gazebo.launch.py rviz:=false

# RViz2 на экране 1
DISPLAY=:100 rviz2
```

**Два окна на одном экране** — если отдельные вкладки не нужны:

```bash
start_gui.sh                 # один экран :99
DISPLAY=:99 rviz2
DISPLAY=:99 ros2 run turtlesim turtlesim_node
# оба окна на http://localhost:6080
```

### Проверка, что экраны подняты (в контейнере)

```bash
DISPLAY=:99  xdpyinfo >/dev/null && echo ":99 OK"
DISPLAY=:100 xdpyinfo >/dev/null && echo ":100 OK"
netstat -tn | grep 5900        # должна быть сессия VNC
```

На хосте: `docker ps` — должны быть проброшены `6080-6083` и `5900-5903`.

> **Важно:** порты `6081+` публикуются только после `Rebuild Container` — до пересборки вторая вкладка будет недоступна.

---

## 4. Вариант 2 — Прямой X11: Ubuntu (X11 или Wayland/XWayland)

Окна Gazebo и RViz2 появляются прямо на хосте, как обычные приложения. Быстрее и удобнее, но требует X11-сервера на хосте.

**Проверено:** Ubuntu 24.04 + Docker Desktop 29.6.0. Работает и с native Docker Engine.

**Настройка хоста (один раз):**

1. Проверьте номер дисплея на **хосте**:

   ```bash
   echo $DISPLAY
   # :1 — если Docker Desktop (он занимает :0 под свой X-сервер)
   # :0 — если native Docker Engine или нет конфликта дисплеев
   ```

2. Разрешите контейнеру подключаться к X-серверу (**хост**, один раз):

   ```bash
   xhost +local:docker
   ```

**В `devcontainer.json`:** закомментируйте блок Варианта 1 и раскомментируйте блок Варианта 2 **вместе с `mounts`**:

```json
"mounts": [
  "source=/tmp/.X11-unix,target=/tmp/.X11-unix,type=bind"
],
"runArgs": [
  "--privileged",
  "--network=host",
  "--shm-size=1g"
],
"containerEnv": {
  "QT_X11_NO_MITSHM": "1",
  "LIBGL_ALWAYS_SOFTWARE": "1",
  "DISPLAY": ":1"
},
"forwardPorts": []
```

Если `echo $DISPLAY` показал не `:1` — исправьте значение `DISPLAY` в `containerEnv`.

**Далее:** **Rebuild Container**, после пересборки проверьте X11 (в контейнере):

```bash
xdpyinfo | head -n 3   # должен показать параметры X-сервера хоста
xterm                  # должно открыться окно xterm на хосте
```

**Запуск приложений** — без `start_gui.sh` (номер дисплея задан в `containerEnv`):

```bash
ros2 launch gazebo_demo gazebo.launch.py
# Gazebo и RViz2 появляются как обычные окна на хосте
```

**Wayland.** Gazebo и RViz2 используют X11 API и автоматически работают через **XWayland** — встроенный X11-совместимый слой в каждом Wayland-окружении. Настройка идентична X11: те же шаги с `xhost +local:docker`, проверкой `echo $DISPLAY` и раскомментированием Варианта 2. Нативные Wayland-приложения из контейнера на хост не пробросить, но для Gazebo/RViz2 это не требуется.

**Типичные ошибки:**

- `cannot open display :1` → забыли `xhost +local:docker`.
- `cannot open display :0` → Docker Desktop, нужно `DISPLAY=:1`.

---

## 5. Вариант 3 — Прямой X11: Windows (VcXsrv)

Окна Gazebo и RViz2 появляются прямо на хосте. Требуется X-сервер VcXsrv, запущенный на Windows.

**Требования на хосте:**

1. Скачайте и установите [VcXsrv](https://sourceforge.net/projects/vcxsrv/) (бесплатно, open source).
2. Запустите **XLaunch** и настройте:
   - `Multiple windows`
   - `Display number: -1`
   - `Start no client`
   - отметьте `Disable access control`
3. Сохраните конфигурацию для быстрого запуска в следующий раз.

**В `devcontainer.json`:** закомментируйте блок Варианта 1 и раскомментируйте блок Варианта 3 **вместе с `mounts`**:

```json
"mounts": [
  "source=/tmp/.X11-unix,target=/tmp/.X11-unix,type=bind"
],
"runArgs": [
  "--privileged",
  "--shm-size=1g"
],
"containerEnv": {
  "QT_X11_NO_MITSHM": "1",
  "LIBGL_ALWAYS_SOFTWARE": "1",
  "DISPLAY": "host.docker.internal:0",
  "ROS_LOCALHOST_ONLY": "1"
},
"forwardPorts": []
```

Здесь `--network=host` не задан: контейнер обращается к X-серверу хоста по имени `host.docker.internal` (работает в Docker Desktop для Windows).

**Далее:** **Rebuild Container**, после пересборки проверьте X11 (в контейнере):

```bash
xdpyinfo | head -n 3   # должен показать параметры X-сервера VcXsrv
xterm                  # должно открыться окно xterm на Windows
```

**Запуск приложений** — без `start_gui.sh`:

```bash
ros2 launch gazebo_demo gazebo.launch.py
# Gazebo и RViz2 появляются как обычные окна на Windows
```

**Типичные ошибки:**

- `cannot open display host.docker.internal:0` → VcXsrv не запущен или включён `Access control` (нужен `Disable access control`).
- Неверный номер дисплея → в XLaunch укажите `Display number: -1`, чтобы контейнер подключался к экрану `:0`.

---

## 6. Вариант 4 — Прямой X11: macOS (XQuartz)

Окна Gazebo и RViz2 появляются прямо на хосте. Требуется X-сервер XQuartz, запущенный на macOS.

**Требования на хосте:**

1. Скачайте и установите [XQuartz](https://www.xquartz.org/) (бесплатно).
2. XQuartz → **Preferences → Security** → отметьте `Allow connections from network clients`.
3. Перезапустите XQuartz.
4. В терминале хоста (один раз):

   ```bash
   xhost +localhost
   ```

**В `devcontainer.json`:** закомментируйте блок Варианта 1 и раскомментируйте блок Варианта 4 **вместе с `mounts`**:

```json
"mounts": [
  "source=/tmp/.X11-unix,target=/tmp/.X11-unix,type=bind"
],
"runArgs": [
  "--privileged",
  "--shm-size=1g"
],
"containerEnv": {
  "QT_X11_NO_MITSHM": "1",
  "LIBGL_ALWAYS_SOFTWARE": "1",
  "DISPLAY": "host.docker.internal:0",
  "ROS_LOCALHOST_ONLY": "1"
},
"forwardPorts": []
```

Здесь `--network=host` не задан: контейнер обращается к X-серверу хоста по имени `host.docker.internal` (работает в Docker Desktop для macOS).

**Далее:** **Rebuild Container**, после пересборки проверьте X11 (в контейнере):

```bash
xdpyinfo | head -n 3   # должен показать параметры X-сервера XQuartz
xterm                  # должно открыться окно xterm на macOS
```

**Запуск приложений** — без `start_gui.sh`:

```bash
ros2 launch gazebo_demo gazebo.launch.py
# Gazebo и RViz2 появляются как обычные окна на macOS
```

**Типичные ошибки:**

- `cannot open display host.docker.internal:0` → XQuartz не запущен или не включён `Allow connections from network clients`; после включения нужен перезапуск XQuartz.
- Отказ доступа → выполните `xhost +localhost` на хосте после каждого перезапуска XQuartz.

---

## 7. Вариант 5 — Прямой X11: Ubuntu + NVIDIA GPU

Для владельцев NVIDIA-видеокарт — аппаратный рендеринг Gazebo (60 FPS вместо 5).

**Требования на хосте:**

- native Docker Engine (`docker-ce`), **не** Docker Desktop;
- NVIDIA-драйвер и `nvidia-container-toolkit`.

**Настройка хоста (однократно):**

```bash
# Установить nvidia-container-toolkit
curl -fsSL https://nvidia.github.io/libnvidia-container/gpgkey | \
  sudo gpg --dearmor -o /usr/share/keyrings/nvidia-container-toolkit-keyring.gpg
curl -s -L https://nvidia.github.io/libnvidia-container/stable/deb/nvidia-container-toolkit.list | \
  sed 's#deb https://#deb [signed-by=/usr/share/keyrings/nvidia-container-toolkit-keyring.gpg] https://#g' | \
  sudo tee /etc/apt/sources.list.d/nvidia-container-toolkit.list
sudo apt update && sudo apt install -y nvidia-container-toolkit
sudo nvidia-ctk runtime configure --runtime=docker
sudo systemctl restart docker

# Переключиться на native Docker Engine
docker context use default

# Проверить GPU-проброс
docker run --rm --gpus all nvidia/cuda:12.8.0-runtime-ubuntu22.04 nvidia-smi
```

**В `devcontainer.json`:** закомментируйте блок Варианта 1 и раскомментируйте блок Варианта 5 **вместе с `mounts`**:

```json
"mounts": [
  "source=/tmp/.X11-unix,target=/tmp/.X11-unix,type=bind"
],
"runArgs": [
  "--privileged",
  "--network=host",
  "--shm-size=1g",
  "--gpus", "all"
],
"containerEnv": {
  "QT_X11_NO_MITSHM": "1",
  "DISPLAY": ":1",
  "MESA_LOADER_DRIVER_OVERRIDE": "zink",
  "GZ_RENDER_ENGINE": "ogre2"
},
"forwardPorts": []
```

Здесь `GZ_RENDER_ENGINE=ogre2` включает GPU-рендеринг gz-sim, а `MESA_LOADER_DRIVER_OVERRIDE=zink` направляет OpenGL через Vulkan на GPU. Проверьте номер дисплея (`echo $DISPLAY`) и при необходимости исправьте `DISPLAY`.

**Далее:** **Rebuild Container**, после пересборки разрешите доступ к X-серверу и проверьте GPU:

```bash
# На хосте
xhost +local:docker

# В контейнере
nvidia-smi             # должен показать вашу GPU
xdpyinfo | head -n 3   # X-сервер хоста
```

**Запуск Gazebo с аппаратным рендером** — без `start_gui.sh`:

```bash
ros2 launch gazebo_demo gazebo.launch.py
# Gazebo рендерится на GPU, плавно (60 FPS)
```

**Типичные ошибки:**

- GPU не виден в контейнере → проверьте `docker run --rm --gpus all ... nvidia-smi`; при ошибке повторите `sudo nvidia-ctk runtime configure --runtime=docker` и `sudo systemctl restart docker`.
- Используется Docker Desktop → переключитесь на native Docker Engine: `docker context use default`.
- Gazebo падает / чёрный экран → проверьте, что в `containerEnv` заданы `GZ_RENDER_ENGINE=ogre2` и `MESA_LOADER_DRIVER_OVERRIDE=zink`.

---

## 8. Уровень 3: TIAGo (ROS2 Humble)

Отдельный контейнер и собственные launch-файлы. Все детали вывода GUI, вариантов запуска и симуляции TIAGo — в проекте робота: [`3_Robot/TIAgo_humble/README.md`](3_Robot/TIAgo_humble/README.md).

Отличия от уровня 2: ROS2 Humble и **Gazebo Classic 11** (вместо gz-sim/Jazzy), поэтому переменная `GZ_RENDER_ENGINE` там не используется, а команда запуска симуляции другая (`tiago_gazebo`).

---

## 9. Типичные ошибки

| Ошибка | Причина | Исправление |
| --- | --- | --- |
| `Package '...' not found` | Overlay не подключён | **Rebuild Container**; диагностика: `ros2 pkg prefix gazebo_demo` |
| `Package '...' not found` после переименования папки проекта | Абсолютные пути в `build/install` устарели | `cd 2_code && rm -rf build install log && colcon build` |
| Пакет не найден после правок | Пакет не пересобран | `cd 2_code && colcon build`, затем новый терминал |
| `ros2: command not found` | Контейнер не активен | Открыть проект в Dev Container |
| Вторая вкладка (`6081`) недоступна | Порты не проброшены | **Rebuild Container** (порты `6081+` публикуются после пересборки) |
| Окно не появляется в браузере | `start_gui.sh` не запущен | Запустить `start_gui.sh` и открыть `http://localhost:6080` |
| Gazebo падает / чёрный экран (Jazzy) | Движок `ogre2` без рабочего EGL | Вариант 1 использует `ogre` (задаётся автоматически); для В2–В4 добавьте `"GZ_RENDER_ENGINE": "ogre"` |
| `cannot open display :N` (Варианты 2–5) | Не выдан доступ к X-серверу | `xhost +local:docker` (Ubuntu), `xhost +localhost` (macOS); проверить `echo $DISPLAY` |
| `cannot open display :0` в Варианте 2 | Docker Desktop занимает `:0` | Укажите `DISPLAY=:1` в `containerEnv` |
| `cannot open display host.docker.internal:0` (В3/В4) | Не запущен X-сервер или включён access control | Запустить VcXsrv/XQuartz, снять `Access control`, перезапустить |
| GPU не виден (Вариант 5) | Не установлен или не настроен `nvidia-container-toolkit` | `sudo nvidia-ctk runtime configure --runtime=docker && sudo systemctl restart docker` |

---

## 10. Шпаргалка

```bash
# ── Вариант 1 (VNC/браузер) ──
start_gui.sh                 # 1 экран
start_gui.sh --displays 2    # 2 экрана

DISPLAY=:99  rviz2
DISPLAY=:100 ros2 run turtlesim turtlesim_node

DISPLAY=:99 ros2 launch gazebo_demo gazebo.launch.py
DISPLAY=:99 ros2 launch gazebo_demo gazebo.launch.py rviz_display:=:100

DISPLAY=:99 xdpyinfo >/dev/null && echo OK
netstat -tn | grep 5900
docker ps

# ── Варианты 2–5 (прямой X11, без start_gui.sh) ──
xhost +local:docker                            # Ubuntu (В2, В5)
xhost +localhost                               # macOS (В4)
echo $DISPLAY                                  # номер дисплея хоста

ros2 launch gazebo_demo gazebo.launch.py       # Gazebo + RViz2 в окнах хоста
xdpyinfo | head -n 3                           # проверка X11
nvidia-smi                                     # проверка GPU (В5)
```
