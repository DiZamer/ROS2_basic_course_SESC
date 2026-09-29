---
marp: true
theme: default
paginate: true
size: 16:9
footer: 'ROS2 Course • Занятие 2 • 120 мин (40+40+40)'
---

<style>
@import url('https://fonts.googleapis.com/css2?family=Inter:wght@300;400;600;700;800&family=Roboto+Mono:wght@400;600&display=swap');

:root {
  --primary: #1e40af;
  --primary-light: #2563eb;
  --accent: #3b82f6;
  --accent-light: #60a5fa;
  --green: #16a34a;
  --green-bg: #f0fdf4;
  --green-border: #86efac;
  --red: #dc2626;
  --red-bg: #fef2f2;
  --red-border: #fca5a5;
  --yellow: #d97706;
  --yellow-bg: #fffbeb;
  --yellow-border: #fcd34d;
  --gray-50: #f9fafb;
  --gray-100: #f3f4f6;
  --gray-200: #e5e7eb;
  --gray-300: #d1d5db;
  --gray-400: #9ca3af;
  --gray-500: #6b7280;
  --gray-600: #4b5563;
  --gray-700: #374151;
  --gray-800: #1f2937;
  --white: #ffffff;
  --card-bg: #f3f7ff;
  --card-border: #bfdbfe;
  --font: 'Inter', 'Segoe UI', system-ui, sans-serif;
  --mono: 'Roboto Mono', 'Consolas', monospace;
}

section {
  background: var(--white);
  color: var(--gray-800);
  font-family: var(--font);
  font-weight: 400;
  box-sizing: border-box;
  border-top: 8px solid var(--primary);
  position: relative;
  line-height: 1.6;
  font-size: 20px;
  padding: 48px 56px 52px;
}

section::after { font-size: 14px; color: var(--gray-400); }

h1, h2, h3, h4, h5, h6 { font-weight: 700; color: var(--primary); margin: 0; padding: 0; }

h1 { font-size: 50px; line-height: 1.15; letter-spacing: -0.02em; }

h2 {
  position: absolute; top: 34px; left: 56px; right: 56px;
  font-size: 32px; padding-bottom: 10px;
  border-bottom: 3px solid var(--accent);
}
h2 + * { margin-top: 94px; }

h3 { color: var(--primary-light); font-size: 22px; margin-top: 24px; margin-bottom: 8px; font-weight: 600; }
h4 { color: var(--primary); font-size: 18px; margin-top: 14px; margin-bottom: 6px; }

ul, ol { padding-left: 28px; }
li { margin-bottom: 7px; line-height: 1.6; font-size: 18px; }

strong { color: var(--primary); font-weight: 700; }
em { color: var(--green); font-style: normal; font-weight: 600; }

table { border-collapse: collapse; width: 100%; margin: 14px 0; font-size: 16px; }
th { background: var(--primary); color: var(--white); font-weight: 700; font-size: 15px; padding: 10px 14px; text-align: left; }
td { border: 1px solid var(--gray-300); padding: 9px 14px; }
tr:nth-child(even) td { background: var(--gray-50); }
td:first-child { font-weight: 600; }

code {
  background: #eef2ff; color: var(--primary); padding: 2px 7px;
  border-radius: 4px; font-family: var(--mono); font-size: 0.85em;
}

blockquote {
  border-left: 5px solid var(--accent); padding: 12px 20px;
  background: var(--card-bg); border-radius: 0 8px 8px 0;
  margin: 14px 0; font-size: 20px; color: var(--primary); font-weight: 500;
}

section.lead {
  display: flex; flex-direction: column; justify-content: center;
  background: linear-gradient(135deg, #ffffff 0%, #eff6ff 60%, #dbeafe 100%);
}
section.lead h1 { margin-bottom: 20px; font-size: 56px; }
section.lead p { font-size: 22px; color: var(--gray-700); font-weight: 400; }

section.section-break {
  display: flex; flex-direction: column; justify-content: center;
  background: linear-gradient(135deg, #1e3a8a 0%, #1e40af 50%, #2563eb 100%);
  color: var(--white); border-top: 8px solid #93c5fd;
}
section.section-break h1 { color: var(--white); font-size: 46px; }
section.section-break p { color: #bfdbfe; font-size: 20px; }

footer {
  font-size: 13px; color: var(--gray-400); position: absolute;
  left: 56px; right: 56px; bottom: 16px;
  display: flex; justify-content: space-between; align-items: center;
}

.badge {
  display: inline-block; padding: 3px 11px; border-radius: 20px;
  font-size: 13px; font-weight: 600; margin: 2px;
}
.badge-blue { background: #dbeafe; color: #1e40af; }
.badge-green { background: #dcfce7; color: #16a34a; }
.badge-yellow { background: #fef3c7; color: #92400e; }
.badge-red { background: #fee2e2; color: #dc2626; }

.callout {
  padding: 14px 20px; border-left: 5px solid var(--accent);
  border-radius: 0 8px 8px 0; margin: 12px 0; font-size: 17px;
  background: var(--card-bg);
}
.callout-green { background: var(--green-bg); border-left-color: var(--green); }
.callout-yellow { background: var(--yellow-bg); border-left-color: var(--yellow); }
.callout-red { background: var(--red-bg); border-left-color: var(--red); }

.two-col { display: flex; gap: 26px; margin-top: 6px; }
.two-col > div { flex: 1; }

.arch-node {
  padding: 10px 16px; border: 2px solid var(--accent); border-radius: 8px;
  text-align: center; font-weight: 700; font-size: 16px; color: var(--primary);
  background: var(--card-bg);
}
.arch-node-warn { background: var(--yellow-bg); border-color: var(--yellow); color: #92400e; }
.arch-node-danger { background: var(--red-bg); border-color: var(--red); color: #7f1d1d; }
.arch-node-gray { background: var(--gray-100); border-color: var(--gray-500); color: var(--gray-700); }

.l2-link { font-size: 14px; color: var(--primary-light); margin-top: 10px; }
.l3-link { font-size: 14px; color: var(--green); }
</style>

<!-- _class: lead -->
<!-- _paginate: false -->

# Контейнеризация и Git

Лекция • 40 минут (уровень 1)

<span class="badge badge-blue">Уровень 1: Лекция</span>
<span class="badge badge-green">Уровень 2: Практика</span>
<span class="badge badge-yellow">Уровень 3: Робот TIAGo</span>

---

<!-- _class: section-break -->

# Часть 1

Docker, Dev Container, Git

---

## Проблема «у меня работает, у тебя нет»

<div class="two-col">
<div>

- Разные версии ОС и библиотек
- ROS2, Gazebo, Nav2, MoveIt2 тянут **десятки зависимостей**
- Держать всё на хосте — ломать систему при каждом обновлении

</div>
<div>

<div class="arch-node arch-node-danger" style="font-size:14px;">Хост студента А<br/><span style="font-weight:400;font-size:11px;">Ubuntu 22.04, старая библиотека</span></div>
<div style="text-align:center; color:var(--red); font-size:18px;">≠</div>
<div class="arch-node arch-node-danger" style="font-size:14px;">Хост студента Б<br/><span style="font-weight:400;font-size:11px;">Windows 11, другая версия</span></div>

<div class="callout callout-green" style="font-size:15px; margin-top:10px;">
  <strong>Решение:</strong> все запускают один и тот же образ.
</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/docker_devcontainer.md</code></div>
<div class="l3-link">Ур.3: 3_Robot/ TIAGo · свой тяжёлый образ <code>osrf/ros:humble-desktop</code></div>

<!-- «Проблема „у меня работает, у тебя нет“ решается тем, что все запускают один и тот же образ. Поэтому ROS2 не ставится на хост — он живёт в контейнере.» -->

---

## Образ, контейнер, том

<div class="two-col">
<div>

- **Образ** — чертёж мастерской
- **Контейнер** — работающая мастерская
- **Том** — шкаф с данными, которые переживают пересборку

</div>
<div>

<div style="display:flex; flex-direction:column; gap:6px; margin-top:6px;">
  <div class="arch-node" style="font-size:14px;">Dockerfile<br/><span style="font-weight:400;font-size:11px;">рецепт</span></div>
  <div style="text-align:center; color:var(--accent);">↓ docker build</div>
  <div class="arch-node arch-node-warn" style="font-size:14px;">Образ (image)<br/><span style="font-weight:400;font-size:11px;">чертёж мастерской</span></div>
  <div style="text-align:center; color:var(--accent);">↓ docker run</div>
  <div class="arch-node" style="font-size:14px;">Контейнер<br/><span style="font-weight:400;font-size:11px;">работающая мастерская</span></div>
  <div style="text-align:center; color:var(--accent);">↓ mount</div>
  <div class="arch-node arch-node-gray" style="font-size:14px;">Том — папка проекта</div>
</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/docker_devcontainer.md</code></div>
<div class="l3-link">Ур.3: 3_Robot/ <code>ros2_ws/</code> монтируется как том — код переживает пересборку</div>

<!-- «Образ — чертёж мастерской, контейнер — её работающая копия, том — шкаф с вашими данными. Файлы вне смонтированной папки пропадают при удалении контейнера.» -->

---

## Docker: основные команды

```bash
docker --version                 # Docker установлен?
docker run -it --rm ubuntu:24.04 bash   # запустить и войти
docker ps                        # запущенные контейнеры
docker exec -it <имя> bash       # войти в работающий контейнер
docker stop <имя>                # остановить
docker images                    # локальные образы
```

<div class="two-col" style="margin-top:10px;">
<div>

<div class="callout" style="font-size:15px;">
  <strong><code>-it</code></strong> — интерактивный терминал,<br/><strong><code>--rm</code></strong> — удалить после выхода.
</div>

</div>
<div>

<div class="callout callout-yellow" style="font-size:15px;">
  <strong><code>docker ps</code> пуст внутри контейнера</strong> — демон работает на хосте, а не в контейнере.
</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/docker_devcontainer.md</code> · <code>2_practice/02_container_git.md</code></div>
<div class="l3-link">Ур.3: <code>docker exec -it &lt;имя-робота&gt; bash</code> — войти в контейнер TIAgo</div>

<!-- «`docker run` запускает контейнер из образа, `docker exec` входит в уже запущенный. Docker-демон работает на хосте, поэтому внутри контейнера `docker ps` обычно пуст.» -->

---

## Dev Container: проект внутри контейнера

<div class="two-col">
<div>

- VS Code читает `devcontainer.json`
- Собирает образ, запускает контейнер, открывает терминал
- **Одна команда** — «Reopen in Container»

</div>
<div>

```json
{
  "name": "ROS2 Jazzy Course",
  "build": { "dockerfile": "Dockerfile" },
  "remoteUser": "ubuntu"
}
```

<div class="callout callout-yellow" style="font-size:15px; margin-top:8px;">
  <strong>Изменили конфиг?</strong> «Dev Containers: Rebuild Container».
</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/docker_devcontainer.md</code> · <code>2_knowledge/home_setup.md</code></div>
<div class="l3-link">Ур.3: 3_Robot/TIAgo_humble/.devcontainer/ — Dockerfile + devcontainer.json</div>

<!-- «`devcontainer.json` — описание окружения. Один и тот же файл даёт одинаковый контейнер в классе и дома. Поэтому окружение у всех студентов одинаковое.» -->

---

## Git: журнал лабораторных работ

<div class="two-col">
<div>

- `git add` — выбрать изменения
- `git commit` — сохранить снимок в историю
- `git log` / `git diff` — посмотреть историю / правки
- `git restore` — откатить правку

</div>
<div>

```text
рабочая копия → индекс (staging) → коммит (история)
     git add            git commit
```

<div class="callout callout-red" style="font-size:15px; margin-top:8px;">
  <strong>Без <code>git add</code> коммит пустой.</strong>
</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/git.md</code></div>
<div class="l3-link">Ур.3: коммиты по ДЗ ведут историю к собственной модели робота</div>

<!-- «Git — журнал лабораторных работ: каждый коммит — запись. `git add` выбирает, `git commit` сохраняет. Если опыт не удался — листаете журнал назад.» -->

---

## Git + remote: синхронизация

```bash
git clone <URL>            # скачать репозиторий
git remote -v              # настроенные remote
git pull                   # забрать чужие изменения
git push -u origin main    # отправить свои коммиты
```

<div style="display:flex; gap:6px; align-items:center; margin-top:12px;">
  <div class="arch-node" style="font-size:14px;">Рабочая копия</div>
  <div style="color:var(--accent); font-weight:700;">⇄ push / pull</div>
  <div class="arch-node arch-node-warn" style="font-size:14px;">Remote (GitHub)</div>
</div>

<div class="callout callout-yellow" style="font-size:15px; margin-top:10px;">
  <strong>Работайте в своей ветке</strong>, не пушите напрямую в общую <code>main</code>.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/git.md</code></div>
<div class="l3-link">Ур.3: репозиторий курса синхронизируется тем же <code>git pull</code>/<code>push</code></div>

<!-- «Remote — удалённая копия. `git push` отправляет ваши коммиты, `git pull` забирает чужие. Перед push проверьте, что ветка не отстала.» -->

---

## .gitignore: что не попадает в историю

```gitignore
# результаты сборки colcon
build/
install/
log/

# кэш и бинарники
__pycache__/
*.pyc

# секреты — в историю никогда
.env
*.key
*.pem
id_ed25519
```

<div class="callout callout-red" style="font-size:16px; margin-top:10px;">
  <strong>Секрет, попавший в коммит, остаётся в истории навсегда.</strong><br/>
  Исключайте ключи и пароли <em>до</em> первого <code>git add</code>.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/git.md</code></div>
<div class="l3-link">Ур.3: <code>3_Robot/TIAgo_humble/</code> — <code>build/</code>, <code>install/</code>, <code>log/</code> не в истории</div>

<!-- «`build/`, `install/`, `log/` создаёт `colcon build` заново — хранить их в Git вредно. Ключи и пароли исключают сразу: из истории их не вынуть.» -->

---

## Ветки: параллельные линии

<div class="two-col">
<div>

- Ветка — отдельная линия истории
- Для смелого эксперимента — своя ветка
- `git switch -c` — создать и переключиться
- `git merge` — слить обратно

</div>
<div>

```
main       A → B
                ↘
feature/x       C → D
```

```bash
git switch -c feature/sensor
git switch main
git merge feature/sensor
```

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/git.md</code> · <code>2_practice/02_container_git.md</code></div>
<div class="l3-link">Ур.3: работа с кодом TIAgo — только в своей ветке, не в <code>main</code></div>

<!-- «Ветка — отдельная тетрадь для смелого эксперимента: не получилось — выбросили, не трогая основную. Коммит в ветке не виден в `main` до слияния.» -->

---

## Кейс: контейнер робота

<div class="two-col">
<div>

- Уровень 3 — отдельный тяжёлый контейнер
- `postCreateCommand`/`postStartCommand` вызывают скрипты `.devcontainer/post_create.sh` и `post_start.sh`: клонируют пакеты через `vcs import` и собирают `colcon build`
- Внутри — свои изо�ри — свои изолированные процессы ROS2

</div>
<div>

```bash
# на хосте
docker ps
docker exec -it <имя-робота> bash

# внутри
ps aux | grep -i ros | head
ros2 node list
```

<div class="callout" style="font-size:14px; margin-top:8px;">
  <strong>Смелый тест:</strong> <code>pkill -f robot_state_publisher</code> — узел исчезает из <code>ros2 node list</code>, остальные работают.
</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/docker_devcontainer.md</code></div>
<div class="l3-link">Ур.3: <code>3_Robot/TIAgo_humble/README.md</code> · <code>ros2_ws/src/</code></div>

<!-- «Контейнер робота — изолированная система со своими процессами. Полный разбор ROS Graph — на занятии 6, а пока видно: узлы живут и их можно останавливать по отдельности.» -->

---

<!-- _class: lead -->

# Вопросы?

<span class="badge badge-blue">`2_knowledge/docker_devcontainer.md` · `git.md`</span>
<span class="badge badge-green">`2_practice/02_container_git.md`</span>
<span class="badge badge-yellow">`3_Robot/TIAgo_humble/`</span>

**Домашнее задание:** `2_homework/hw_02_setup.md`

