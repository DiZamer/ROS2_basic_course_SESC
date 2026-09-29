# NVIDIA GPU + X11 в DevContainer — конфигурация и диагностика

Документ для быстрого восстановления вывода GUI из контейнера TIAGo при проблемах с GPU и X11.

## Рабочая конфигурация (devcontainer.json, Вариант 5)

По умолчанию активен **Вариант 1 (VNC/браузер)**. Вариант 5 — это блок, закомментированный в `.devcontainer/devcontainer.json`. Чтобы включить его, **закомментируйте блок Варианта 1** и **раскомментируйте** приведённый ниже блок вместе с `mounts`, затем выполните **Rebuild Container**:

```jsonc
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
  "MESA_LOADER_DRIVER_OVERRIDE": "zink"
}
```

Образ собирается автоматически из `.devcontainer/Dockerfile`. В `devcontainer.json` задано `"build": { "options": ["--network=host"] }`, поэтому `apt` на этапе сборки работает через host-сеть и отдельная ручная сборка образа не требуется. При необходимости собрать образ вручную:

```bash
docker build --network=host -t tiago_humble:gpu -f .devcontainer/Dockerfile .
```

---

## Архитектура вывода: что и как работает

```
┌──────────────────────────────────────────────────┐
│                    Контейнер                      │
│                                                   │
│  ┌──────────┐   OpenGL    ┌───────────────────┐  │
│  │ Gazebo   │────────────►│ Mesa Zink         │  │
│  │ RViz     │             │ (OpenGL → Vulkan) │  │
│  └──────────┘             └────────┬──────────┘  │
│                                    │ Vulkan       │
│                          ┌─────────▼──────────┐   │
│                          │ libGLX_nvidia.so.0 │   │
│                          │ (nvidia_icd.json)  │   │
│                          └────────┬───────────┘   │
│                                   │               │
│  ┌────────────────────────────────▼───────────┐   │
│  │          NVIDIA Driver (host)              │   │
│  │          RTX 5060, 595.71.05               │   │
│  └────────────────┬───────────────────────────┘   │
│                   │                               │
│  ┌────────────────▼───────────────────────────┐   │
│  │  X11: /tmp/.X11-unix/X1 (bind mount)       │   │
│  │  DISPLAY=:1                                │   │
│  └────────────────┬───────────────────────────┘   │
└───────────────────┼───────────────────────────────┘
                    │ Unix socket
┌───────────────────▼───────────────────────────────┐
│                 Хост                               │
│  X Server (DISPLAY=:1, XDG_SESSION_TYPE=x11)      │
└───────────────────────────────────────────────────┘
```

**Ключевая идея:** OpenGL-приложения в контейнере не используют Intel Mesa (`iris`), потому что он не знает PCI ID нового GPU. Вместо этого форсируется **Zink** — прослойка Mesa, транслирующая OpenGL в Vulkan. Vulkan уже идёт через NVIDIA ICD (`nvidia_icd.json`) и рендерится на RTX 5060.

---

## Диагностика: пошаговый алгоритм

### Шаг 0. Убедиться, что образ собран правильно

```bash
docker images | grep tiago_humble
```

Должен быть тег `gpu`. Если нет — пересобрать (см. команду выше).

### Шаг 1. Проверить, что контейнер использует native Docker (не Desktop)

```bash
docker context show
# Должно быть: default
```

Если `desktop-linux` — переключить:

```bash
docker context use default
```

### Шаг 2. Проверить доступность GPU из контейнера

```bash
nvidia-smi
```

**Ожидаемый результат:** таблица с RTX 5060, версия драйвера 595.71.05.

**Если `nvidia-smi: command not found`:**
- Проверить, что `--gpus all` есть в `runArgs`
- Проверить, что `nvidia-container-toolkit` установлен на хосте: `dpkg -l | grep nvidia-container-toolkit`
- Проверить `/etc/docker/daemon.json` — должен быть `"runtimes": {"nvidia": {...}}` и `"default-runtime": "nvidia"`

### Шаг 3. Проверить X11-сокет

```bash
ls -la /tmp/.X11-unix/
```

**Ожидаемый результат:** виден файл `X1` (или другой номер, соответствующий `$DISPLAY`).

**Если директория отсутствует или пуста:**
- Проверить, что `"mounts"` с `/tmp/.X11-unix` есть в `devcontainer.json`
- Проверить на хосте: `ls -la /tmp/.X11-unix/` — существует ли сокет
- Проверить на хосте: `echo $DISPLAY` — должен совпадать с `containerEnv.DISPLAY`

### Шаг 4. Проверить рендерер OpenGL

```bash
glxinfo -B | head -20
```

**Ожидаемый результат:**
```
Device: zink Vulkan 1.4(NVIDIA GeForce RTX 5060 ...)
Accelerated: yes
Video memory: 8151MB
```

**Если `Device: llvmpipe` или ошибки `iris`:**
- Проверить: `echo $MESA_LOADER_DRIVER_OVERRIDE` — должно быть `zink`
- Если нет — выставить вручную: `export MESA_LOADER_DRIVER_OVERRIDE=zink`
- Если переменная есть, но не работает — проверить Vulkan ICD (шаг 5)

### Шаг 5. Проверить Vulkan ICD

```bash
cat /etc/vulkan/icd.d/nvidia_icd.json
```

**Ожидаемый результат:**
```json
{
    "file_format_version" : "1.0.1",
    "ICD": {
        "library_path": "libGLX_nvidia.so.0",
        "api_version" : "1.4.329"
    }
}
```

**Если файл отсутствует:** проблема с nvidia-container-runtime — проверить установку `nvidia-container-toolkit` и перезапуск Docker.

**Если файл есть, но Zink не работает:** возможно, `nvidia-primus-vk-common` переопределил ICD:

```bash
dpkg -l | grep nvidia-primus-vk-common
# Если установлен — удалить:
sudo apt-get purge nvidia-primus-vk-common
```

### Шаг 6. Проверить EGL

```bash
cat /usr/share/glvnd/egl_vendor.d/10_nvidia.json
```

Должен быть:
```json
{"file_format_version":"1.0.0","ICD":{"library_path":"libEGL_nvidia.so.0"}}
```

Если файла нет — EGL fallback на программный рендеринг.

---

## Таблица проблем, симптомов и решений

| Симптом                                                    | Причина                                                 | Решение                                           |
| ---------------------------------------------------------- | ------------------------------------------------------- | ------------------------------------------------- |
| `nvidia-smi: not found`                                    | Не указан `--gpus all` или Docker Desktop вместо native | Проверить `runArgs`, `docker context use default` |
| Gazebo/Rviz не показывают окна                             | Нет `/tmp/.X11-unix` в контейнере                       | Добавить `"mounts"` в `devcontainer.json`         |
| `MESA: warning: Driver does not support the 0x7d67 PCI ID` | Mesa iris не знает Intel Arrow Lake GPU                 | `export MESA_LOADER_DRIVER_OVERRIDE=zink`         |
| `Device: llvmpipe` в glxinfo                               | Программный рендеринг (не используется GPU)             | `export MESA_LOADER_DRIVER_OVERRIDE=zink`         |
| Vulkan ICD не найден                                       | `nvidia-primus-vk-common` переопределил ICD             | `sudo apt-get purge nvidia-primus-vk-common`      |
| `apt` не работает (DNS)                                    | Провайдер блокирует UDP/53                              | Собирать образ с `--network=host`                 |
| Gazebo запущен, но нет в `nvidia-smi`                      | Рендеринг идёт не на NVIDIA                             | Проверить `MESA_LOADER_DRIVER_OVERRIDE=zink`      |

---

## Быстрое ручное восстановление

Если GUI пропал, выполнить в терминале контейнера:

```bash
# 1. Базовые проверки
nvidia-smi
ls /tmp/.X11-unix/
echo $DISPLAY
echo $MESA_LOADER_DRIVER_OVERRIDE

# 2. Если MESA_LOADER_DRIVER_OVERRIDE пуст — выставить
export MESA_LOADER_DRIVER_OVERRIDE=zink

# 3. Проверить рендерер
glxinfo -B | grep -E "Device|Accelerated|Video memory"

# 4. Убить старые процессы Gazebo и перезапустить
pkill -f gzserver; pkill -f gzclient
source ros2_ws/install/setup.bash
ros2 launch tiago_gazebo tiago_gazebo.launch.py is_public_sim:=True
```

Если X11-сокет отсутствует:

```bash
# На хосте:
xhost +local:docker
ls -la /tmp/.X11-unix/
echo $DISPLAY
```

## Навигация и манипуляция на GPU (Вариант 5)

На Варианте 5 окна идут на хост напрямую (`DISPLAY=:1`), виртуальные дисплеи не нужны.
Режимы включаются аргументами единого `tiago_gazebo.launch.py`:

```bash
# Навигация (Nav2)
ros2 launch tiago_gazebo tiago_gazebo.launch.py \
  is_public_sim:=True navigation:=True

# Навигация + SLAM
ros2 launch tiago_gazebo tiago_gazebo.launch.py \
  is_public_sim:=True navigation:=True slam:=True

# Манипуляция (MoveIt2) + RViz с плагином MoveIt2
ros2 launch tiago_gazebo tiago_gazebo.launch.py \
  is_public_sim:=True moveit:=True
ros2 launch tiago_moveit_config moveit_rviz.launch.py

# Полный стек
ros2 launch tiago_gazebo tiago_gazebo.launch.py \
  is_public_sim:=True navigation:=True moveit:=True
```

> **Пакеты.** `tiago_navigation`, `tiago_2dnav` — мета-пакеты без launch-файлов; пакета `tiago_moveit` не существует (используйте `tiago_moveit_config`).
> Флаг `rviz` — общий пользовательский (`CommonArgs.rviz`): `rviz:=False` отключает и встроенный, и навигационный RViz.

### Два экрана на Варианте 5

Вариант 5 выводит окна прямо на X-сервер хоста, поэтому отдельные вкладки noVNC недоступны.
Если нужны именно **отдельные окна** Gazebo и RViz2 — останьтесь на Варианте 1 (VNC):
запустите `start_gui.sh --displays 2` и разведите окна по `:99`/`:100` (см. `README.md`, раздел «Две вкладки»).
На Варианте 5 Gazebo и RViz2 работают как обычные окна хоста и удобно располагаются средствами оконного менеджера.

## Ключевые файлы

| Файл | Роль |
|------|------|
| `.devcontainer/devcontainer.json` | Активная конфигурация: Вариант 1 (VNC/браузер) по умолчанию; Вариант 5 — в комментариях |
| `.devcontainer/devcontainer_prod.json` | Копия активного (эталон) |
| `.devcontainer/Dockerfile` | Сборка образа из `osrf/ros:humble-desktop` |
| `/etc/docker/daemon.json` (хост) | NVIDIA runtime + DNS |
| `/etc/vulkan/icd.d/nvidia_icd.json` (контейнер) | Vulkan ICD для Zink |
| `/usr/share/glvnd/egl_vendor.d/10_nvidia.json` (контейнер) | EGL vendor для NVIDIA |

## Переменные окружения (Вариант 5)

| Переменная | Значение | Зачем |
|-----------|---------|-------|
| `DISPLAY` | `:1` | X11-дисплей хоста |
| `QT_X11_NO_MITSHM` | `1` | Обход MIT-SHM (нужен для X11-forwarding) |
| `MESA_LOADER_DRIVER_OVERRIDE` | `zink` | OpenGL → Vulkan через Zink (не iris) |

> **Примечание (контейнер уровня 2).** В корневом `.devcontainer/` Вариант 5 дополнительно задаёт `GZ_RENDER_ENGINE=ogre2` — движок рендера gz-sim, который использует GPU. В Варианте 1 (VNC/CPU) та же переменная равна `ogre` (GLX), потому что `ogre2` падает на EGL без рабочего GPU-ICD. Команда запуска Gazebo при этом не меняется. Для контейнера TIAGo (уровень 3, Gazebo Classic 11) `GZ_RENDER_ENGINE` не задаётся — используется рендер Gazebo Classic.

## Принцип сборки образа

Образ собирается из `Dockerfile` автоматически при первом запуске контейнера. В `devcontainer.json` включена опция `"build": { "options": ["--network=host"] }` — она прокидывает host-сеть на этап `docker build`, поэтому `apt` работает даже там, где провайдер блокирует UDP:53. Готовый образ `tiago_humble:gpu` для этого не нужен.

Ручная сборка (если требуется):

```bash
docker build --network=host -t tiago_humble:gpu -f .devcontainer/Dockerfile .
```

## Версия

Дата: 2026-07-07
Конфигурация проверена на: Ubuntu 24.04, X11, Intel Arrow Lake + NVIDIA RTX 5060 (драйвер 595.71.05), native Docker Engine 29.6.0, nvidia-container-toolkit 1.19.1.
