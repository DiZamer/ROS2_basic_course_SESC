---
marp: true
theme: default
paginate: true
size: 16:9
footer: 'ROS2 Course • Занятие 1 • 120 мин (40+40+40)'
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

# Ubuntu и командная строка

Лекция • 40 минут (уровень 1)

<span class="badge badge-blue">Уровень 1: Лекция</span>
<span class="badge badge-green">Уровень 2: Практика</span>
<span class="badge badge-yellow">Уровень 3: Робот TIAGo</span>

---

<!-- _class: section-break -->

# Часть 1

Терминал, файловая система, права, пакеты, SSH

---

## Зачем терминал в робототехнике

<div class="two-col">
<div>

- **Робот — компьютер без графики**
- Его настраивают, запускают и отлаживают **командами**
- Все инструменты ROS2 запускаются из командной строки
- К роботу подключаются **удалённо по SSH**

</div>
<div>

<div style="display:flex; flex-direction:column; gap:6px; margin-top:6px;">
  <div class="arch-node" style="font-size:14px;">Пользователь вводит команду</div>
  <div style="text-align:center; color:var(--accent); font-weight:700;">↓</div>
  <div class="arch-node arch-node-warn" style="font-size:14px;">Shell: bash<br/><span style="font-weight:400;font-size:11px;">читает и запускает</span></div>
  <div style="text-align:center; color:var(--accent); font-weight:700;">↓</div>
  <div class="arch-node arch-node-gray" style="font-size:14px;">Программа → результат</div>
</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/ubuntu_cli.md</code> · <code>2_practice/01_ubuntu_cli.md</code></div>
<div class="l3-link">Ур.3: 3_Robot/ TIAGo · тот же bash, но с ROS2 Humble</div>

<!-- «Робот — это компьютер без графики. Вы будете управлять им командами, а не мышью. Все инструменты ROS2 запускаются из этой же командной строки — начиная с занятия 6.» -->

---

## Навигация и файлы

<div class="two-col">
<div>

- `pwd` — где я сейчас
- `ls -la` — что в папке (и скрытое)
- `cd` — перейти, `mkdir -p` — создать
- `cp` / `mv` / `rm` — копировать / переместить / удалить
- `cat` / `grep` — показать / найти

</div>
<div>

```bash
pwd          # /home/ubuntu
ls -la
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws/src
cat /etc/os-release
```

<div class="callout callout-red" style="font-size:15px; margin-top:8px;">
  <strong><code>rm</code> удаляет навсегда</strong> — без корзины. Проверяйте путь.
</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/ubuntu_cli.md</code></div>
<div class="l3-link">Ур.3: 3_Robot/ workspace робота — <code>~/ros2_ws/src/</code></div>

<!-- «`cd` — переход, `ls` — просмотр; путать их нельзя. `rm` удаляет навсегда, поэтому перед удалением проверяйте `pwd` и путь.» -->

---

## Файловая система — дерево

<div class="two-col">
<div>

- Корень — `/`
- Ваша папка — `~` (= `/home/ubuntu`)
- Программы — в `bin/`, `usr/bin/`
- Настройки — в `etc/`

**Аналогия**: каталог в библиотеке.

</div>
<div>

```
/                    корень
├── home/ubuntu      ~ (домашняя папка)
├── etc/             системные настройки
├── bin/, usr/bin/   программы
└── var/, tmp/       данные и временное
```

<div class="callout" style="font-size:15px; margin-top:8px;">
  <strong><code>pwd</code></strong> всегда подскажет, где вы оказались.
</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/ubuntu_cli.md</code></div>
<div class="l3-link">Ур.3: ROS2 установлен в <code>/opt/ros/humble/</code> — обычные файлы на диске</div>

<!-- «Файловая система — дерево с корнем `/`. `pwd` — где я, `cd` — куда перейти. По установленному ROS2 можно безопасно „гулять“: это просто файлы.» -->

---

## Права доступа и sudo

<div class="two-col">
<div>

- Три пары прав: **владелец / группа / остальные**
- `r` читать · `w` писать · `x` выполнять
- `chmod +x` — добавить право
- `sudo` — временные права администратора

</div>
<div>

```
-rwxr--r--  1 ubuntu ubuntu
 ││││││││
 │└┬┘└┬┘└┬┘  rwx  r--  r--
 │  │   │    влад группа остальные
 │  │   └── права остальных
 └── тип файла (- обычный)
```

<div class="callout callout-red" style="font-size:15px; margin-top:8px;">
  <strong>Не работайте постоянно под root</strong> — случайная ошибка сломает систему.
</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/ubuntu_cli.md</code> · <code>2_practice/01_ubuntu_cli.md</code></div>
<div class="l3-link">Ур.3: в контейнере робота тоже пользователь, а не root</div>

<!-- «`sudo` даёт временные права администратора, а не способ навигации: `sudo cd` не работает. Права показывают, кто может читать, писать и запускать файл.» -->

---

## Пакеты и справка

<div class="two-col">
<div>

- `apt` — магазин программ
- `apt update` — обновить список
- `apt install` — поставить пакет
- `--help` и `man` — справка двумя способами

</div>
<div>

```bash
sudo apt update
sudo apt install -y tree
tree -L 2 ~
tree --help
man tree     # выход — q
```

<div class="callout callout-green" style="font-size:15px; margin-top:8px;">
  <strong><code>man</code> и <code>--help</code></strong> — первый шаг, когда команда «не работает».
</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/ubuntu_cli.md</code></div>
<div class="l3-link">Ур.3: зависимости TIAgo ставятся в контейнер через <code>apt</code>/<code>rosdep</code></div>

<!-- «`apt` — магазин программ. Прежде чем спрашивать „почему не работает“, прочитайте `--help` или `man` — там ответ на большинство вопросов.» -->

---

## PATH и переменные окружения

<div class="two-col">
<div>

- `PATH` — список папок, где shell ищет программы
- `which` — откуда запускается программа
- `export` — задать переменную для сессии
- `bash: foo: command not found` — программы нет в `PATH`

</div>
<div>

```bash
echo $PATH
which bash        # /usr/bin/bash
export ROBOT_NAME=tiago
echo $ROBOT_NAME  # tiago
```

<div class="callout callout-yellow" style="font-size:15px; margin-top:8px;">
  <strong>«command not found»</strong> = программы нет в <code>PATH</code> или она не установлена.
</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/ubuntu_cli.md</code></div>
<div class="l3-link">Ур.3: <code>source /opt/ros/humble/setup.bash</code> добавляет ROS2 в <code>PATH</code></div>

<!-- «`PATH` — список папок, где shell ищет программы. Когда ROS2 активируют через `setup.bash`, в `PATH` добавляется путь к его командам.» -->

---

## SSH: дверь в другую машину

<div class="two-col">
<div>

- **IP** — номер дома
- **Порт** — квартира
- **Ключ** — ключ от двери
- `ssh-copy-id` кладёт публичный ключ на машину

</div>
<div>

```bash
ssh-keygen -t ed25519 -C "student@laptop"
ssh-copy-id user@host
ssh user@host
ssh -p 2222 user@host
scp file.txt user@host:/путь/
```

<div style="display:flex; gap:6px; margin-top:8px;">
  <div class="arch-node" style="font-size:13px;">Ноутбук<br/>студента</div>
  <div style="display:flex;align-items:center;color:var(--accent);font-weight:700;">⇄</div>
  <div class="arch-node arch-node-warn" style="font-size:13px;">Робот<br/>Raspberry Pi</div>
</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/ubuntu_cli.md</code></div>
<div class="l3-link">Ур.3: реальный ровер MentorPi M1 — <code>ssh student@&lt;ip-робота&gt;</code></div>

<!-- «SSH — дверь в другую машину. IP — номер дома, порт — квартира, ключ — ключ от двери. Публичный ключ можно показывать, приватный — нет.» -->

---

## Разбор отказов SSH

| Симптом | Причина | Исправление |
|---|---|---|
| `Connection refused` | `sshd` не запущен или не тот порт | `service ssh status`, `ssh -p PORT` |
| `Permission denied` | Публичный ключ не на целевой машине | `ssh-copy-id user@host` |
| `command not found` | Программы нет в `PATH` | установить или указать полный путь |

<div class="callout callout-green" style="font-size:17px; margin-top:10px;">
  <strong>Два отказа — две причины.</strong> «Refused» — некому отвечать, «Denied» — вас не пускают.
</div>

<div class="l2-link">Ур.2: <code>2_practice/01_ubuntu_cli.md</code> · разбор на <code>ssh localhost</code></div>
<div class="l3-link">Ур.3: 3_Robot/ TIAGo · <code>ssh student@localhost -p 2222</code> → «Connection refused»</div>

<!-- «Научитесь читать отказ по его тексту: `Connection refused` значит — нет сервера или не тот порт, `Permission denied` — ключ не принят. Это разные проблемы и разные решения.» -->

---

## ROS2 запускается из терминала

<div class="two-col">
<div>

- Все команды ROS2 — через единую точку входа `ros2`
- Установленный ROS2 — файлы в `/opt/ros/`
- Команды выполняются **внутри контейнера**, не на хосте

</div>
<div>

```bash
ros2 --help
ros2 run demo_nodes_cpp talker
ros2 node list
```

<div class="callout" style="font-size:15px; margin-top:8px;">
  <strong>С занятия 6</strong> мы будем работать с этими командами постоянно.
</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_practice/01_ubuntu_cli.md</code> · проверка <code>ros2 --help</code></div>
<div class="l3-link">Ур.3: <code>du -sh /opt/ros/humble</code> — ROS2 это просто файлы</div>

<!-- «Терминал — это база для всего курса. Уже сейчас видно: ROS2 — не абстракция, а команды, которые запускаются из этой же командной строки.» -->

---

<!-- _class: lead -->

# Вопросы?

<span class="badge badge-blue">`2_knowledge/ubuntu_cli.md`</span>
<span class="badge badge-green">`2_practice/01_ubuntu_cli.md`</span>
<span class="badge badge-yellow">`3_Robot/TIAgo_humble/`</span>

**Домашнее задание:** `2_homework/hw_01_ubuntu.md`

