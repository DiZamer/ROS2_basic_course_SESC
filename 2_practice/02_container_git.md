# Практика: контейнер и Git

## Цель

Через 10 минут студент пересобирает Dev Container, наблюдает свой контейнер, а затем проходит полный Git-цикл в учебном репозитории: инициализация, первый коммит, `.gitignore`, ветка и переключение, `git diff`.

## Предварительные требования

- Открыт Dev Container уровня 2 (`.devcontainer/`, Ubuntu 24.04 + ROS2 Jazzy).
- Терминал внутри контейнера: меню VS Code → Terminal → New Terminal.
- ROS2 не устанавливается на хост — всё выполняется внутри контейнера.

## Что получится

- Понимание, где «живёт» контейнер и как его пересобрать.
- Учебный Git-репозиторий с историей из нескольких коммитов.
- Умение исключать файлы через `.gitignore` и работать с ветками.

## Шаг 1. Пересборка Dev Container

Откройте палитру команд: Ctrl+Shift+P → «Dev Containers: Rebuild Container». Контейнер пересоберётся по `devcontainer.json`. Обычно это нужно только после изменения конфигурации — в остальных случаях достаточно «Reopen in Container».

Проверьте, что вы внутри контейнера, а не на хосте:

```bash
hostname      # имя контейнера, а не вашего компьютера
whoami        # ubuntu (пользователь контейнера)
cat /etc/os-release
```

## Шаг 2. Посмотреть на контейнер из Docker

Docker-демон работает на хосте, поэтому изнутри контейнера команды Docker чаще всего недоступны. Проверьте, доступны ли они:

```bash
docker --version
```

- Если команда найдена и `docker ps` показывает контейнеры — продолжайте внутри.
- Если `command not found` — выполните эти две команды в терминале **хоста** (не контейнера):

```bash
docker ps                 # список запущенных контейнеров — найдите свой devcontainer
docker exec -it <имя> bash   # войти в контейнер вторым терминалом
```

`docker ps` показывает запущенные контейнеры: ID, имя, образ, команду запуска. Ваш Dev Container — один из них.

## Шаг 3. Git: создать репозиторий и настроить автора

```bash
mkdir -p ~/git_practice && cd ~/git_practice
git init -b main
git config user.name "Student"
git config user.email "student@example.com"
```

Ожидаемый результат: `Initialized empty Git repository in ...`, имя и email автора заданы (для коммитов они обязательны).

## Шаг 4. Первый коммит

```bash
echo "# My robot" > README.md
git status                  # README.md помечен как untracked
git add README.md
git status                  # теперь он в индексе (staged)
git commit -m "Первый коммит: README"
git log --oneline           # один коммит в истории
```

Ожидаемый результат: `git status` до `add` показывает `Untracked files: README.md`; после `commit` `git log --oneline` выводит хеш и сообщение.

## Шаг 5. `.gitignore`

```bash
mkdir -p build install log
touch build/artifact.o
git status                  # видно build/ как untracked
printf 'build/\ninstall/\nlog/\n' > .gitignore
git status                  # build/ исчез из untracked
git add .gitignore
git commit -m "Исключил результаты сборки"
```

Ожидаемый результат: после создания `.gitignore` папки `build/`, `install/`, `log/` больше не отображаются в `git status`.

## Шаг 6. Ветка и переключение

```bash
git switch -c feature/sensor
echo "Добавлен лидар" >> README.md
git add README.md
git commit -m "Описал сенсор"
git log --oneline            # новый коммит поверх предыдущего
git switch main              # вернуться на основную ветку
git log --oneline            # коммита про лидар здесь нет
```

Ожидаемый результат: на ветке `feature/sensor` видно два коммита, на `main` — только первый. Изменения в разных ветках не мешают друг другу.

## Шаг 7. `git diff` и откат

```bash
echo "И колёса" >> README.md
git diff                     # показать незакоммиченную правку
git restore README.md
git diff                     # пусто — правка отменена
```

Ожидаемый результат: `git diff` показывает добавленную строку с `+`; после `git restore` вывод пуст.

## Проверка результата

| Команда | Ожидаемый результат |
| --- | --- |
| `hostname` | имя контейнера, не компьютера |
| `git log --oneline` | 2 коммита в ветке `main` |
| `git branch` | ветки `main` и `feature/sensor` |
| `git status` | рабочий каталог чистый, `build/` не отслеживается |
| `git diff` | пустой вывод |

## Вопросы студентам

1. Чем образ отличается от контейнера, а контейнер — от тома?
2. Что делает `git add` и почему без него коммит пустой?
3. Зачем `.gitignore` исключает `build/`, `install/`, `log/`?
4. Почему на ветке `main` не видно коммита, сделанного в `feature/sensor`?

## Типичные ошибки

| Симптом | Причина | Исправление |
| --- | --- | --- |
| `git commit` говорит «nothing to commit» | Не выполнен `git add` | Сначала `git add`, затем `git commit` |
| `docker ps` пуст внутри контейнера | Docker-демон на хосте | Запустить `docker ps` в терминале хоста |
| `git switch main` не находит ветку | Ветка называется `master` | `git branch` и переключиться на актуальное имя |
| Изменение пропало | `git restore` отменил нужное | Проверять `git status` перед `git restore` |
| `build/` всё равно в `git status` | `.gitignore` создан после `git add` | Убрать из индекса: `git rm -r --cached build` |

## Дополнительное задание

Слейте ветку `feature/sensor` в `main` и посмотрите историю:

```bash
git switch main
git merge feature/sensor
git log --oneline
```

Ожидаемый результат: теперь в `main` видны оба коммита, история линейная.

## Ссылки

- Статьи базы знаний — [`../2_knowledge/docker_devcontainer.md`](../2_knowledge/docker_devcontainer.md), [`../2_knowledge/git.md`](../2_knowledge/git.md).
- Настройка окружения дома — [`../2_knowledge/home_setup.md`](../2_knowledge/home_setup.md).
- [Developing inside a Container](https://code.visualstudio.com/docs/devcontainers/containers)
- [Pro Git (рус.)](https://git-scm.com/book/ru/v2)
