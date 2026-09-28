# Gitignore для репозитория TIAGo Humble

Этот документ описывает, какие файлы и папки должны быть исключены из Git-репозитория проекта TIAGo, и почему.

## Общая стратегия

Репозиторий содержит только **инфраструктурные файлы**:

- конфигурация DevContainer (Dockerfile, devcontainer.json)
- скрипты сборки (fetch_external.sh, start_gui.sh, patch_twist_mux.py)
- файл tiago.repos (список репозиториев для vcs import)
- noVNC-клиент (novnc_index.html)
- документация (README.md, AGENTS.md, TIAgo_configuration.md, TIAgo_conf_improv_plan.md)

Исходные коды ROS2-пакетов (в `ros2_ws/src/`) **не хранятся** в репозитории — они клонируются из GitHub PAL Robotics через `vcs import` при первой сборке DevContainer.

## Почему src/ исключён

Каждый пакет в `ros2_ws/src/` (всего 19 пакетов, ~230 MB) — это отдельный git-репозиторий PAL Robotics. Включать их в корневой репозиторий нельзя:

- **Размер.** 230 MB + вложенные .git папки сделают клонирование медленным
- **Конфликт истории.** Вложенные git-репозитории внутри другого git-репозитория создают chaos
- **Воспроизводимость.** Студенты получают свежие исходники через `vcs import` по `tiago.repos` — это гарантирует актуальность и совместимость

## Файлы и папки для .gitignore

```gitignore
# === Артефакты сборки colcon ===
ros2_ws/build/
ros2_ws/install/
ros2_ws/log/

# === Исходные коды (клонируются через vcs import) ===
ros2_ws/src/

# === Системные файлы ===
*~
*.swp
*.swo
*.pyc
__pycache__/

# === VS Code (личные настройки) ===
.vscode/*.db
.vscode/*.db-wal
.vscode/*.db-shm

# === Docker / DevContainer (кэш) ===
.devcontainer/devcontainer-lock.json
```

## Пояснения к каждой строке

| Правило | Зачем |
|---------|-------|
| `ros2_ws/build/` | Результат `colcon build`. Генерируется заново при каждой сборке |
| `ros2_ws/install/` | Установленные пакеты. Генерируется заново |
| `ros2_ws/log/` | Логи сборки. Не влияют на работу |
| `ros2_ws/src/` | Исходники, клонируемые через `vcs import`. 230 MB, 19 git-репозиториев |
| `*~`, `*.swp` | Временные файлы редакторов |
| `*.pyc`, `__pycache__/` | Кэш байткода Python |
| `.vscode/*.db*` | База данных C/C++ IntelliSense (browse.vc.db) |
| `devcontainer-lock.json` | Лок-файл DevContainer, генерируется автоматически |

## Что должно быть в репозитории

После применения .gitignore в репозитории останутся только файлы, необходимые для воспроизведения среды:

```
TIAgo_humble/
├── .devcontainer/
│   ├── Dockerfile
│   ├── devcontainer.json
│   ├── devcontainer_prod.json
│   ├── novnc_index.html
│   └── start_gui.sh
├── .vscode/
│   ├── c_cpp_properties.json
│   └── settings.json
├── ros2_ws/
│   ├── fetch_external.sh
│   ├── patch_twist_mux.py
│   └── tiago.repos
├── AGENTS.md
├── gitignore_TIAgo.md
├── opencode.jsonc
├── README.md
├── TIAgo_conf_improv_plan.md
└── TIAgo_configuration.md
```

Размер репозитория: **~250 KB** — студенты клонируют за секунды.

## Как студенты получают проект

1. `git clone <url> && cd TIAgo_humble`
2. Открыть в VS Code → "Reopen in Container"
3. DevContainer автоматически:
   - собирает Docker-образ
   - запускает `vcs import` (клонирует src/)
   - запускает `fetch_external.sh`
   - запускает `rosdep install`
   - запускает `colcon build`
4. Через 20-40 минут — готовая симуляция TIAGo

## Как создать .gitignore

Скопируйте содержимое секции "Файлы и папки для .gitignore" выше в файл `.gitignore` в корне проекта перед инициализацией репозитория:

```bash
# Из корня проекта TIAgo_humble
cp gitignore_TIAgo.md .gitignore
# ... или вручную создать .gitignore с правилами выше
git init
git add .
git commit -m "Initial commit: TIAgo Humble infrastructure"
```

## Известные ограничения

- Файлы `.gitignore` внутри `ros2_ws/src/*/.gitignore` (в пакетах `launch_pal`, `pal_gazebo_plugins`, `tiago_robot`) игнорируют `*~`, `*.pyc`, `*user` — они относятся только к тем репозиториям и не влияют на корневой репозиторий
- При изменении `tiago.repos` (добавлении/удалении пакетов) нужно уведомить студентов о необходимости пересборки контейнера
