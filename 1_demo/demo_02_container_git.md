# Демонстрация: контейнеризация и Git

## Цель

Показать, как контейнер воспроизводит окружение (образ/контейнер/том), как Dev Container открывает проект внутри контейнера, и пройти полный цикл Git: `init` → `add` → `commit` → ветка → `.gitignore` → `diff`/`restore`. В финале — зайти в контейнер робота и увидеть его изолированные процессы.

## Подготовка до занятия

1. Dev Container уровня 2 открыт и готов (`.devcontainer/`, Ubuntu 24.04 + ROS2 Jazzy).
2. Docker-демон работает на хосте; открыт отдельный терминал хоста для `docker ps`.
3. Заранее проверены `docker --version` и `docker ps` на хосте.
4. Подготовлен учебный Git-репозиторий (или начисто создаётся на демонстрации).
5. Для кейса уровня 3 — контейнер `3_Robot/TIAgo_humble/` готов или подготовлен план Б.

## Контейнер

- Уровень 2: Dev Container `.devcontainer/` — основная часть. Docker-демон работает на хосте, не в контейнере.
- Уровень 3: контейнер `3_Robot/TIAgo_humble/` — кейс «зайти в контейнер робота и увидеть ROS-процессы».

## Контекст для студентов

> «Проблема „у меня работает, у тебя нет“ возникает из-за разных версий ОС и библиотек. Контейнер упаковывает всё нужное в образ, поэтому окружение одинаковое у всех. А Git записывает историю вашей работы — как журнал лабораторных, куда можно откатиться.»

## Что показать

### 1. Docker: образ, контейнер, том

На хосте:

```bash
docker --version
docker run -it --rm ubuntu:24.04 bash
# внутри: cat /etc/os-release, exit
docker ps
```

**Что сказать**: «Образ — чертёж мастерской, контейнер — работающая мастерская. `docker run` запускает контейнер из образа, `docker ps` показывает запущенные контейнеры. Флаг `--rm` удаляет контейнер после выхода.»

### 2. Dev Container: проект внутри контейнера

Показать `devcontainer.json` как текст и объяснить, что VS Code читает его, собирает образ, запускает контейнер и открывает в нём терминал.

```json
{
  "name": "ROS2 Jazzy Course",
  "build": { "dockerfile": "Dockerfile" },
  "remoteUser": "ubuntu"
}
```

**Что сказать**: «`devcontainer.json` — описание окружения. Один и тот же файл даёт одинаковый контейнер в классе и дома. Поэтому ROS2 не ставится на хост.»

### 3. Git: полный цикл

```bash
mkdir -p ~/demo_git && cd ~/demo_git
git init -b main
git config user.name "Teacher"
git config user.email "teacher@example.com"
echo "# My robot" > README.md
git status
git add README.md
git commit -m "Первый коммит: README"
git log --oneline
```

**Что сказать**: «`git add` выбирает, `git commit` сохраняет. Без `git add` коммит пустой. `git status` показывает, что изменилось.»

### 4. `.gitignore` и ветка

```bash
mkdir -p build install log && touch build/artifact.o
git status
printf 'build/\ninstall/\nlog/\n' > .gitignore
git status
git add .gitignore && git commit -m "Исключил результаты сборки"
git switch -c feature/sensor
git switch main
```

**Что сказать**: «`build/`, `install/`, `log/` создаёт `colcon build` заново — хранить их в Git вредно. `.gitignore` исключает их из истории. Ветка — отдельная линия истории для смелого эксперимента.»

### 5. Кейс робота: изолированные процессы (уровень 3)

На хосте:

```bash
docker ps
docker exec -it <имя-контейнера-робота> bash
```

Внутри контейнера робота:

```bash
ps aux | grep -i ros | head
ros2 node list
exit
```

**Что сказать**: «Контейнер робота — изолированная система со своими процессами. `ros2 node list` показывает узлы запущенной симуляции — полный разбор ROS Graph будет на занятии 6.»

## Что сказать

- «Контейнер — переносная мастерская, образ — её чертёж, том — шкаф с данными.»
- «Все студенты запускают один образ — поэтому окружение одинаковое в классе и дома.»
- «Ключи и пароли, попавшие в коммит, остаются в истории навсегда. Исключайте их до первого `git add`.»
- «Коммиты по домашним заданиям ведут историю к вашей собственной модели робота.»

## Ожидаемый результат

- `docker run ... ubuntu:24.04 bash` открывает терминал внутри контейнера Ubuntu.
- `git log --oneline` показывает историю из двух коммитов.
- После `.gitignore` папки `build/`, `install/`, `log/` исчезают из `git status`.
- В контейнере робота `ros2 node list` показывает узлы симуляции.

## Типичные проблемы

| Симптом | Причина | Исправление |
| --- | --- | --- |
| `docker ps` пуст внутри контейнера | Docker-демон на хосте | Запускать `docker ps` на хосте |
| Изменили Dockerfile, а в контейнере по-старому | Не пересобран контейнер | «Dev Containers: Rebuild Container» |
| `git commit` → «nothing to commit» | Забыли `git add` | `git add` перед `git commit` |
| `build/` всё равно в `git status` | `.gitignore` создан после `git add` | `git rm -r --cached build` |
| Секрет закоммичен | Ключ добавлен в репозиторий | Сменить ключ и удалить из истории |

## План Б

Если контейнер робота `3_Robot/TIAgo_humble/` не запускается:

1. Показать Docker-команды на контейнере уровня 2 (`docker ps`, `docker exec`).
2. Показать структуру `3_Robot/TIAgo_humble/.devcontainer/` (Dockerfile, `devcontainer.json`) как текст и объяснить, что делает каждая часть.
3. Показать `.gitignore` проекта и историю коммитов (`git log --oneline`) на репозитории курса.
4. Если Docker недоступен вообще — разобрать схему «образ → контейнер → том» и `devcontainer.json` без запуска.

## Ссылки на материалы курса

- Статьи базы знаний — [`../2_knowledge/docker_devcontainer.md`](../2_knowledge/docker_devcontainer.md), [`../2_knowledge/git.md`](../2_knowledge/git.md).
- Практика — [`../2_practice/02_container_git.md`](../2_practice/02_container_git.md).
- Домашнее задание — [`../2_homework/hw_02_setup.md`](../2_homework/hw_02_setup.md).
- Настройка окружения дома — [`../2_knowledge/home_setup.md`](../2_knowledge/home_setup.md).

## Связь с роботом

- Уровень 3 живёт в отдельном тяжёлом контейнере `3_Robot/TIAgo_humble/`: образ на базе `osrf/ros:humble-desktop`, `postCreateCommand` клонирует пакеты TIAGo через `vcs import` и собирает workspace через `colcon build`.
- `.gitignore` проекта исключает `build/`, `install/`, `log/` и ключи — история коммитов пакетов TIAGo в `ros2_ws/src/` остаётся чистой.
- Смелый тест занятия: `pkill -f robot_state_publisher` — узел исчезает из `ros2 node list`, остальные продолжают работать (только в симуляции).
