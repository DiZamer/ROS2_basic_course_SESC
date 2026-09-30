# Практика-v2 02: контейнер и Git

> Уровень 2 занятия 2. Работа выполняется в общем Dev Container курса с ROS 2 Jazzy. Проверка Docker daemon может выполняться с хоста; ROS 2 на хост не устанавливается.

## Цель

За 40 минут студент проверяет контекст контейнера, создаёт локальный Git-репозиторий, формирует два коммита в `main`, исключает build-артефакты, создаёт ветку `feature/sensor` и объясняет, где находятся изменения.

## Что получится

- временная папка `~/git_practice` с README и `.gitignore`;
- два коммита в `main`;
- ветка `feature/sensor` с отдельным коммитом;
- чистая рабочая копия на `main`;
- понимание разницы между средой выполнения, рабочей папкой и Git-историей.

## Предварительные требования

- Открыт общий Dev Container уровня 2 (Ubuntu 24.04 + ROS 2 Jazzy).
- VS Code подключён к контейнеру; открыт его terminal.
- Git доступен внутри контейнера.
- Для шага 2 нужен отдельный терминал **хоста**, имеющий доступ к Docker daemon. Если такой доступ не настроен, шаг пропустить; не включать Docker socket ради практики.
- ROS 2 не устанавливается на хост.

## Шаг 1. Подтвердить контекст (5 минут)

В терминале Dev Container выполните:

```bash
hostname
whoami
pwd
ros2 --help
```

Ожидаемый результат: shell находится в контейнерной среде, `ros2 --help` выводит справку.

## Шаг 2. Посмотреть контейнер с хоста (5 минут)

Откройте terminal хоста, не terminal Dev Container:

```bash
docker ps
```

Ожидаемый результат: список запущенных Docker-контейнеров; найдите контейнер среды курса. Не выполняйте `docker rm` и не останавливайте контейнер.

Если Docker CLI или daemon на хосте недоступны, пропустите команду и нарисуйте границу: VS Code подключён к среде, а Docker управляется на стороне хоста/контейнерного runtime.

## Шаг 3. Создать локальный репозиторий (5 минут)

Вернитесь в terminal Dev Container:

```bash
mkdir -p ~/git_practice
cd ~/git_practice
git init -b main
git config user.name "Student"
git config user.email "student@example.com"
```

Ожидаемый результат: Git создал локальный репозиторий с веткой `main`. Имя и email заданы только для этого репозитория.

## Шаг 4. Создать первый коммит (8 минут)

```bash
printf '# My robot\n\nКолёсная платформа с лидаром.\n' > README.md
git status --short
git diff
git add README.md
git status --short
git diff --staged
git commit -m "Описал идею мобильного робота"
git log --oneline -1
```

Ожидаемый результат: `README.md` стал частью первого коммита. После коммита `git status --short` пуст.

**Обсудите:** до `git add` файл untracked; после `git add` содержимое подготовлено в индексе; commit фиксирует индекс.

## Шаг 5. Исключить результаты сборки (7 минут)

Создайте имитацию выходных каталогов:

```bash
mkdir -p build install log
touch build/artifact.o
git status --short
```

До настройки ignore должен отображаться новый путь `build/`. Создайте правила:

```bash
printf 'build/\ninstall/\nlog/\n__pycache__/\n*.py[cod]\n.env\n*.key\n*.pem\nid_ed25519\n' > .gitignore
git status --short
git check-ignore -v build/artifact.o
```

Добавьте `.gitignore` и зафиксируйте:

```bash
git add .gitignore
git diff --staged
git commit -m "Исключил артефакты сборки и локальные секреты"
```

Ожидаемый результат: в `git status --short` не отображаются новые файлы внутри игнорируемых каталогов; в `git log --oneline` два коммита на `main`.

Важно: ignore помогает с неотслеживаемыми файлами. Он не удаляет ранее закоммиченные файлы из истории.

## Шаг 6. Создать ветку эксперимента (7 минут)

```bash
git switch -c feature/sensor
printf '\n- Сенсор: LiDAR\n' >> README.md
git diff
git add README.md
git diff --staged
git commit -m "Добавил лидар в описание робота"
git log --oneline --decorate --all
```

Вернитесь на `main` и проверьте историю:

```bash
git switch main
git log --oneline --decorate --all
git status --short
```

Ожидаемый результат: ветка `feature/sensor` содержит дополнительный коммит, который пока не входит в `main`.

## Шаг 7. Проверка безопасной отмены (3 минуты)

Только в учебном репозитории:

```bash
printf '\nВременная правка\n' >> README.md
```

`git restore README.md` удаляет незакоммиченную правку в рабочей копии. Перед выполнением студент должен увидеть и проговорить, какую именно строку команда отменит.

## Итоговая проверка

| Проверка | Команда | Ожидаемый результат |
| --- | --- | --- |
| Текущая ветка | `git branch --show-current` | `main` |
| История main | `git log --oneline main` | Два коммита |
| Ветки | `git branch` | `main` и `feature/sensor` |
| Рабочая копия | `git status --short` | Пустой вывод |
| Игнорирование | `git check-ignore -v build/artifact.o` | Строка `.gitignore` с правилом `build/` |
| Проверка ROS 2 | `ros2 --help` | Справка, команда работает внутри контейнера |

## Вопросы студенту

1. Где хранятся исходники, которые должны пережить пересоздание контейнера?
2. Чем `git diff` отличается от `git diff --staged`?
3. Почему `build/` перестал отображаться после создания `.gitignore`?
4. Почему коммит из `feature/sensor` не виден в `main` до интеграции?

## Типичные ошибки

| Симптом | Причина | Исправление |
| --- | --- | --- |
| `git commit` пишет `nothing to commit` | Изменение не добавлено в индекс | `git status`, затем `git add` и проверка `git diff --staged`. |
| `docker ps` не работает в terminal контейнера | В контейнер не проброшен Docker daemon | Запустить на хосте или пропустить наблюдение. |
| `build/` всё ещё отображается | Ignore создан не в корне или файлы уже tracked | `git check-ignore -v`; проверить `git ls-files build`. |
| После `git restore` пропала нужная правка | Команду запустили без предварительной проверки | Восстановить учебный README из коммита либо повторить шаг; всегда просматривать `git diff`. |
| ROS 2 не найден | Terminal открыт на хосте или контейнер не подключён | Вернуться в Dev Container; не устанавливать ROS 2 на host. |

## Дополнительное задание

Выполнить локальное слияние `feature/sensor` в `main` и исследовать граф:

```bash
git switch main
```

Ожидаемый результат: описание лидара доступно и в `main`; история показывает соединение ветки. Не отправляйте изменения в общий remote курса.

## Связанные материалы

- Содержание: [`../1_lecture/lecture-v2_content_02_container_git_v1.md`](../1_lecture/lecture-v2_content_02_container_git_v1.md).
- План: [`../1_lecture/lecture-v2_plan_02_container_git_v1.md`](../1_lecture/lecture-v2_plan_02_container_git_v1.md).
- Слайды: [`../1_slides/lecture-v2_slides_02_container_git_v1.md`](../1_slides/lecture-v2_slides_02_container_git_v1.md).
- Домашняя работа: [`../2_homework/homework-v2_02_container_git_v1.md`](../2_homework/homework-v2_02_container_git_v1.md).
- [Docker storage](https://docs.docker.com/engine/storage/), [Dev Containers](https://code.visualstudio.com/docs/devcontainers/containers), [Pro Git](https://git-scm.com/book/ru/v2).
