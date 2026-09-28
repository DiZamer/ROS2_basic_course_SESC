---
marp: true
theme: default
paginate: true
size: 16:9
footer: 'ROS2 Course • Занятие 7 • 120 мин (40+40+40)'
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

# Workspace, package и сборка через colcon

Лекция • 40 минут (уровень 1)

<span class="badge badge-blue">Уровень 1: Лекция</span>
<span class="badge badge-green">Уровень 2: Практика</span>
<span class="badge badge-yellow">Уровень 3: Робот TIAGo</span>

---

<!-- _class: section-break -->

# Часть 1

Workspace, пакет и сборка

---

## Где живёт код робота

<div class="two-col">
<div>

- ROS2 **не ставится на хост** — всё в контейнере
- Код организован в **workspace** — папку с исходниками и результатами сборки
- Сборку делает **`colcon`**

</div>
<div>

<div class="arch-node" style="font-size:14px;">Хост</div>
<div style="text-align:center; color:var(--accent); font-weight:700;">↓ Docker</div>
<div class="arch-node arch-node-warn" style="font-size:14px;">Dev Container (ROS2 Jazzy)</div>
<div style="text-align:center; color:var(--accent); font-weight:700;">↓</div>
<div class="arch-node arch-node-gray" style="font-size:14px;">workspace → colcon</div>

</div>
</div>

<div class="callout" style="font-size:16px;">
  Workspace — <strong>мастерская</strong>: <code>src/</code> — чертежи, <code>colcon build</code> — сборка, <code>install/</code> — готовое.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/workspace.md</code></div>
<div class="l3-link">Ур.3: TIAgo — тот же workspace в контейнере</div>

<!-- «ROS2 не ставится на хост. Код робота живёт в контейнере и организован в workspace, который собирает colcon.» -->

---

## Структура workspace

| Папка | Что внутри | Кто создаёт |
|---|---|---|
| `src/` | исходники пакетов | вы |
| `build/` | промежуточные файлы | `colcon build` |
| `install/` | готовые пакеты | `colcon build` |
| `log/` | логи сборки | `colcon build` |

<div class="callout callout-red" style="font-size:16px;">
  <code>build/</code>, <code>install/</code>, <code>log/</code> — <strong>не редактировать вручную</strong>. Работаете только в <code>src/</code>.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/workspace.md</code></div>
<div class="l3-link">Ур.3: TIAgo — <code>ros2_ws/</code> с теми же четырьмя папками</div>

<!-- «Workspace — четыре папки: src для исходников, build/install/log — результаты сборки, которыми управляет colcon.» -->

---

## Underlay и overlay

<div class="two-col">
<div>

- **Underlay** — базовая установка ROS2 (`/opt/ros/jazzy`)
- **Overlay** — ваш workspace поверх underlay
- Overlay **добавляет** пакеты и может **перекрывать** пакеты underlay

</div>
<div>

<div class="arch-node arch-node-gray" style="font-size:14px;">Underlay: ros2 CLI, rclpy</div>
<div style="height:8px;"></div>
<div class="arch-node arch-node-warn" style="font-size:14px;">Overlay: my_first_pkg</div>

```bash
source /opt/ros/jazzy/setup.bash
source install/setup.bash
```

</div>
</div>

<div class="callout" style="font-size:16px;">
  Underlay — базовый набор инструментов, overlay — <strong>ваша личная полка</strong>.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/workspace.md</code></div>
<div class="l3-link">Ур.3: контейнер TIAgo активирует и underlay, и overlay</div>

<!-- «Базовая установка ROS2 — underlay. Ваш workspace поверх неё — overlay. Overlay добавляет ваши пакеты, не трогая базу.» -->

---

## Пакет — минимальная единица

<div class="two-col">
<div>

- Одна папка с одной зоной ответственности
- Обязательный файл **`package.xml`**
- Создаётся только `ros2 pkg create`

</div>
<div>

```bash
ros2 pkg create \
  --build-type ament_python \
  my_first_pkg --destination-directory src
```

```text
my_first_pkg/
├── package.xml
├── setup.py
├── resource/
└── my_first_pkg/
```

</div>
</div>

<div class="callout callout-yellow" style="font-size:16px;">
  Пакет вручную <strong>не пишут</strong> — генерируют официальной командой.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/packages.md</code></div>
<div class="l3-link">Ур.3: все пакеты TIAgo созданы так же</div>

<!-- «Пакет — минимальная единица кода и зависимостей. Создаётся ros2 pkg create, вручную структуру не пишут.» -->

---

## ament_python vs ament_cmake

| | `ament_python` | `ament_cmake` |
|---|---|---|
| Язык | Python | C++ |
| Сборка | `setup.py` | `CMakeLists.txt` |
| В курсе | **основной** | ссылкой; интерфейсы, библиотеки, мета-пакеты |

```bash
ros2 pkg create --build-type ament_python my_pkg --destination-directory src
ros2 pkg create --build-type ament_cmake  my_cpp_pkg --destination-directory src
```

<div class="callout callout-yellow" style="font-size:16px;">
  Без <code>--build-type</code> по умолчанию создаётся <code>ament_cmake</code>.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/packages.md</code></div>
<div class="l3-link">Ур.3: TIAgo — почти всё <code>ament_cmake</code></div>

<!-- «ament_python для Python, ament_cmake для C++ и пакетов интерфейсов. В курсе начинаем с ament_python.» -->

---

## Типы пакетов по назначению

| Тип | Что внутри | Пример в TIAgo |
|---|---|---|
| **Интерфейсы** | `.msg` / `.srv` / `.action` | `pal_msgs` |
| **Узлы** | исполняемые программы | `play_motion2`, `pal_gripper` |
| **Описание** | URDF/Xacro, meshes | `tiago_description` |
| **Bringup** | launch-файлы, параметры | `tiago_bringup` |
| **Конфиги** | YAML контроллеров | `tiago_moveit_config` |
| **Мета-пакет** | список зависимостей | `tiago_robot` |

<div class="callout callout-green" style="font-size:16px;">
  Один пакет — одна зона ответственности, чтобы части <strong>менялись независимо</strong>.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/packages.md</code></div>
<div class="l3-link">Ур.3: TIAgo — все типы сразу в одном <code>ros2_ws/src/</code></div>

<!-- «Пакеты делятся по назначению: интерфейсы, узлы, описание, запуск, конфиги, мета-пакеты. Разделение позволяет менять части независимо.» -->

---

## Мета-пакет

<div class="two-col">
<div>

- Пакет **без кода**: только `package.xml` + пустой `CMakeLists.txt`
- Объединяет несколько пакетов под одним именем
- В `package.xml` — список `exec_depend`

</div>
<div>

```xml
<package format="3">
  <name>tiago_robot</name>
  <exec_depend>tiago_description</exec_depend>
  <exec_depend>tiago_bringup</exec_depend>
</package>
```

```cmake
cmake_minimum_required(VERSION 3.8)
project(tiago_robot)
find_package(ament_cmake REQUIRED)
ament_package()
```

</div>
</div>

<div class="callout" style="font-size:16px;">
  Мета-пакет — <strong>готовый набор инструментов</strong>: покупаешь весь набор по одному названию.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/packages.md</code></div>
<div class="l3-link">Ур.3: <code>tiago_robot</code>, <code>pmb2_robot</code>, <code>tiago_navigation</code> — мета-пакеты</div>

<!-- «Мета-пакет — это пакет без кода, который объединяет другие пакеты под одним именем.» -->

---

## colcon — сборка workspace

```bash
colcon build                        # собрать всё
colcon build --packages-select pkg  # один пакет
colcon build --packages-up-to pkg   # пакет и его зависимости
colcon build --symlink-install      # Python без пересборки
```

<div class="two-col">
<div>

- Сам определяет **порядок по зависимостям**
- Раскладывает результат по `build/`, `install/`, `log/`

</div>
<div>

<div class="arch-node" style="font-size:14px;">src/</div>
<div style="text-align:center;color:var(--accent);font-weight:700;">↓ colcon build</div>
<div class="arch-node arch-node-warn" style="font-size:14px;">build/ install/ log/</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/colcon.md</code></div>
<div class="l3-link">Ур.3: <code>colcon build</code> собирает весь TIAgo одной командой</div>

<!-- «colcon собирает все пакеты workspace, сам определяя порядок по зависимостям.» -->

---

## source install/setup.bash

<div class="two-col">
<div>

- После сборки пакеты **установлены**, но **не видны**
- `source install/setup.bash` подключает workspace
- Нужно в **каждом новом терминале**

</div>
<div>

```bash
colcon build
source install/setup.bash
ros2 pkg list | grep my_first_pkg
```

<div class="arch-node arch-node-danger" style="font-size:14px;">забыли source → пакет не виден</div>

</div>
</div>

<div class="callout callout-green" style="font-size:16px;">
  Правило: <strong>собрал — подключи</strong>.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/workspace.md</code></div>
<div class="l3-link">Ур.3: <code>source install/setup.bash</code> — и в контейнере TIAgo</div>

<!-- «source install/setup.bash добавляет пути к пакетам в окружение. Без него ros2 не видит собранный пакет.» -->

---

<!-- _class: section-break -->

# Часть 2

Кейс робота TIAgo

---

## Workspace TIAgo в масштабе

<div class="two-col">
<div>

- `ros2_ws/` — те же `src/`, `build/`, `install/`, `log/`
- В `src/` — **десятки пакетов** из репозиториев PAL Robotics
- Загрузка пакетов — `tiago.repos` (`vcs import`)

</div>
<div>

```bash
cd ~/ros2_ws
colcon list | wc -l
colcon list --names-only
```

```text
src/
├── tiago_robot/   → bringup, description
├── pmb2_robot/
├── pal_msgs/      → интерфейсы
├── tiago_navigation/
└── tiago_simulation/
```

</div>
</div>

<div class="callout" style="font-size:16px;">
  Реальный робот — это <strong>десятки пакетов</strong>, собранных одной командой.
</div>

<div class="l2-link">Ур.2: <code>2_practice/07_workspace.md</code></div>
<div class="l3-link">Ур.3: карта — <code>3_Robot/TIAgo_humble/docs/tiago_architecture.md</code></div>

<!-- «У TIAgo тот же workspace, но в масштабе: десятки пакетов, собранных одной командой colcon build.» -->

---

## Смелый тест: типы пакетов TIAgo

<div class="two-col">
<div>

- `tiago_description` → `urdf/`, `meshes/` — **описание**
- `tiago_bringup` → `launch/`, `config/` — **запуск**
- `pal_msgs` → `pal_*_msgs` — **интерфейсы**
- `tiago_robot` → мета-пакет

</div>
<div>

```bash
cd ~/ros2_ws/src
ls tiago_robot/tiago_description
# urdf meshes robots

ls tiago_robot/tiago_bringup
# launch config

ls pal_msgs
# pal_common_msgs pal_detection_msgs ...
```

</div>
</div>

<div class="callout callout-green" style="font-size:16px;">
  Один репозиторий `tiago_robot` — пакеты <strong>разных типов</strong>.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/packages.md</code></div>
<div class="l3-link">Ур.3: <code>3_Robot/TIAgo_humble/ros2_ws/src/</code></div>

<!-- «В одном репозитории tiago_robot лежат пакеты разных типов: описание, запуск и мета-пакет.» -->

---

## Смелый тест: пересобрать один пакет

```bash
cd ~/ros2_ws
colcon build --packages-select tiago_description
# Summary: 1 package finished
```

<div class="callout" style="font-size:16px;">
  <code>colcon</code> собирает <strong>один пакет</strong>, беря зависимости из уже собранного <code>install/</code>.
</div>

<div class="callout callout-green" style="font-size:16px;">
  Отладка одного пакета не требует полной пересборки.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/colcon.md</code></div>
<div class="l3-link">Ур.3: так отлаживают отдельные пакеты TIAgo</div>

<!-- «colcon умеет пересобрать один пакет, взяв зависимости из install. Полная пересборка не нужна.» -->

---

## Итог: путь «workspace → пакет → сборка»

<div style="display:flex; gap:6px; align-items:center; margin-top:10px;">
  <div class="arch-node" style="font-size:13px;">mkdir src</div>
  <div style="color:var(--accent); font-size:18px;">→</div>
  <div class="arch-node arch-node-warn" style="font-size:13px;">ros2 pkg create</div>
  <div style="color:var(--accent); font-size:18px;">→</div>
  <div class="arch-node" style="font-size:13px;">colcon build</div>
  <div style="color:var(--accent); font-size:18px;">→</div>
  <div class="arch-node arch-node-gray" style="font-size:13px;">source setup.bash</div>
  <div style="color:var(--accent); font-size:18px;">→</div>
  <div class="arch-node arch-node-danger" style="font-size:13px;">ros2 run</div>
</div>

<div class="callout callout-green" style="font-size:16px; margin-top:12px;">
  Это фундамент: в занятиях 8–9 в пакеты лягут <strong>первые узлы</strong>.
</div>

<div class="l2-link">Ур.2: <code>2_practice/07_workspace.md</code> · <code>2_homework/hw_07_workspace.md</code></div>
<div class="l3-link">Ур.3: тот же путь в <code>3_Robot/TIAgo_humble/</code></div>

<!-- «Путь workspace → пакет → сборка → подключение — фундамент всех следующих занятий. Дома — свой workspace и первый пакет модели.» -->

---

<!-- _class: lead -->

# Вопросы?

<span class="badge badge-blue">`2_knowledge/workspace.md`</span>
<span class="badge badge-blue">`2_knowledge/packages.md`</span>
<span class="badge badge-blue">`2_knowledge/colcon.md`</span>
<span class="badge badge-green">`2_practice/07_workspace.md`</span>
<span class="badge badge-yellow">`3_Robot/TIAgo_humble/`</span>

**Домашнее задание:** `2_homework/hw_07_workspace.md`
