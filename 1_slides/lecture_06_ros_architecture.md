---
marp: true
theme: default
paginate: true
size: 16:9
footer: 'ROS2 Course • Занятие 6 • 120 мин (40+40+40)'
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

# Что такое ROS2: архитектура, ROS Graph и middleware

Лекция • 40 минут (уровень 1)

<span class="badge badge-blue">Уровень 1: Лекция</span>
<span class="badge badge-green">Уровень 2: Практика</span>
<span class="badge badge-yellow">Уровень 3: Робот TIAGo</span>

---

<!-- _class: section-break -->

# Часть 1

Среда обмена сообщениями, node, ROS Graph, middleware

---

## Что такое ROS2

<div class="two-col">
<div>

- **Не** библиотека вроде OpenCV
- **Не** операционная система
- **Среда**, где программы робота обмениваются сообщениями и командами

</div>
<div>

<div class="arch-node arch-node-danger" style="font-size:14px;">❌ НЕ «установить как Windows»</div>
<div style="height:10px;"></div>
<div class="arch-node arch-node-danger" style="font-size:14px;">❌ НЕ `import ros2`</div>
<div style="height:10px;"></div>
<div class="arch-node" style="font-size:14px;">✅ Среда для связи программ робота</div>

</div>
</div>

<div class="callout" style="font-size:16px;">
  Без ROS2 каждый раз пишем <strong>свой протокол, сериализацию и обнаружение узлов</strong>.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/ros_architecture.md</code></div>
<div class="l3-link">Ур.3: TIAGo — десятки программ, общающихся через ROS2</div>

<!-- «ROS2 — это не программа, а инфраструктура, по которой программы робота общаются. Без неё пришлось бы каждый раз писать свой протокол и обнаружение.» -->

---

## Аналогия: городская инфраструктура

| Инфраструктура города | Элемент ROS2 |
|---|---|
| Дороги | DDS — транспорт сообщений |
| Почта (служба доставки) | RMW — адаптер к доставке |
| Адреса | Topics — именованные каналы |
| Светофоры | QoS — правила движения |
| Жители | Программы робота (узлы) |

<div class="callout" style="font-size:16px;">
  Жители <strong>пользуются</strong> инфраструктурой, а не строят дороги и почту заново для каждой поездки.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/ros_architecture.md</code></div>
<div class="l3-link">Ур.3: TIAgo пользуется «городом» — DDS, RMW, topics</div>

<!-- «ROS2 — городская инфраструктура: дороги, почта, адреса, светофоры. Программы робота — жители, которые ею пользуются.» -->

---

## Node и ROS Graph

<div class="two-col">
<div>

- **Node** — программа, решающая одну задачу
- **ROS Graph** — карта узлов и связей между ними
- Граф виден командой `ros2 node list` и `rqt_graph`

</div>
<div>

<div class="arch-node" style="font-size:14px;">camera_node</div>
<div style="text-align:center; color:var(--accent); font-weight:700;">↓ /camera/image_raw</div>
<div class="arch-node arch-node-warn" style="font-size:14px;">detector_node</div>
<div style="text-align:center; color:var(--accent); font-weight:700;">↓ /detections</div>
<div class="arch-node" style="font-size:14px;">planner_node</div>
<div style="text-align:center; color:var(--accent); font-weight:700;">↓ /cmd_vel</div>
<div class="arch-node arch-node-gray" style="font-size:14px;">motor_controller</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/ros_architecture.md</code> · <code>2_practice/06_ros_architecture.md</code></div>
<div class="l3-link">Ур.3: граф TIAgo — ~15 узлов в базовом запуске</div>

<!-- «Узел — одна программа с одной задачей. Граф — карта того, кто с кем говорит. Всё это можно увидеть глазами через ros2 node list и rqt_graph.» -->

---

## Три способа связи

| Механизм | Когда | Аналогия | Пример |
|---|---|---|---|
| **Topic** | поток данных, много получателей | Telegram-канал | `/scan`, `/cmd_vel` |
| **Service** | короткий запрос-ответ | звонок в справочную | `/emergency_stop` |
| **Action** | длительная задача, прогресс, отмена | доставка пиццы | `/navigate_to_pose` |

<div class="callout callout-yellow" style="font-size:16px;">
  Topic — поток, Service — вопрос-ответ, Action — задача с прогрессом и отменой.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/ros_architecture.md</code></div>
<div class="l3-link">Ур.3: TIAgo — `/scan` (topic), `/emergency_stop` (service), `/navigate_to_pose` (action)</div>

<!-- «Три способа связи под разные задачи: поток данных, короткий запрос и длительная задача с прогрессом. Подробно — в занятиях 9–11.» -->

---

## Путь сообщения

<div style="display:flex; gap:6px; align-items:center; margin-top:10px;">
  <div class="arch-node" style="font-size:13px;">publish(msg)</div>
  <div style="color:var(--accent); font-size:18px;">→</div>
  <div class="arch-node arch-node-warn" style="font-size:13px;">RMW<br/><span style="font-weight:400;font-size:11px;">адаптер</span></div>
  <div style="color:var(--accent); font-size:18px;">→</div>
  <div class="arch-node" style="font-size:13px;">DDS<br/><span style="font-weight:400;font-size:11px;">сериализация + QoS</span></div>
  <div style="color:var(--accent); font-size:18px;">→</div>
  <div class="arch-node arch-node-gray" style="font-size:13px;">сеть UDP</div>
  <div style="color:var(--accent); font-size:18px;">→</div>
  <div class="arch-node arch-node-gray" style="font-size:13px;">DDS</div>
  <div style="color:var(--accent); font-size:18px;">→</div>
  <div class="arch-node arch-node-gray" style="font-size:13px;">RMW</div>
  <div style="color:var(--accent); font-size:18px;">→</div>
  <div class="arch-node arch-node-danger" style="font-size:13px;">callback</div>
</div>

<div class="callout callout-green" style="font-size:16px; margin-top:12px;">
  Вы пишете только <strong>логику в callback</strong>. Сеть делает middleware.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/ros_architecture.md</code> · <code>dds_protocol.md</code></div>
<div class="l3-link">Ур.3: TIAGo — тот же путь через CycloneDDS</div>

<!-- «Сообщение не летит напрямую: его сериализует DDS, доставляет сеть, а на той стороне срабатывает ваш callback. Студент пишет только бизнес-логику.» -->

---

## Executor — кто вызывает callbacks

<div class="two-col">
<div>

- **Callback** — функция, которую ROS2 вызывает при событии
- **Executor** — диспетчер: решает, какой callback вызвать и когда
- Узел сам не «крутит» бесконечный цикл

</div>
<div>

<div class="arch-node" style="font-size:14px;">очередь событий узла</div>
<div style="text-align:center; color:var(--accent); font-weight:700;">↓ по очереди</div>
<div class="arch-node arch-node-warn" style="font-size:14px;">Executor</div>
<div style="text-align:center; color:var(--accent); font-weight:700;">↓ вызывает</div>
<div class="arch-node arch-node-gray" style="font-size:14px;">callback 1, callback 2, …</div>

</div>
</div>

<div class="callout callout-yellow" style="font-size:16px;">
  Подробно Executor разбирается на занятии 8.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/ros_architecture.md</code></div>
<div class="l3-link">Ур.3: каждый узел TIAgo — свой Executor</div>

<!-- «Студент пишет только логику в callbacks. Порядок их вызова решает Executor. Подробно — на занятии 8.» -->

---

## Подсистемы робота

<div class="two-col">
<div>

Крупный робот делится на подсистемы — каждая с зоной ответственности и чёткими интерфейсами:

- **Mobile Base** — приводы, `/cmd_vel`, `/odom`
- **Navigation** — маршрут, `/navigate_to_pose`
- **Manipulation** — движение руки
- **Perception** — `/detections`
- **Safety** — `/emergency_stop`
- **LLM Bridge** — команда → действие
- **Simulation** — Gazebo, сенсоры

</div>
<div>

<div class="callout callout-green" style="font-size:15px;">
  <strong>Интерфейс не меняется</strong>, когда меняются внутренности подсистемы.
</div>

<div class="callout" style="font-size:15px;">
  Замена SLAM не трогает <code>motor_controller</code>.
</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/subsystem.md</code></div>
<div class="l3-link">Ур.3: TIAgo — 5 слоёв, на которые накладываются подсистемы</div>

<!-- «Робот делится на подсистемы: каждая — группа узлов с чёткими интерфейсами. Внутренности можно менять независимо, если интерфейс не меняется.» -->

---

## DDS, RMW, discovery

| Слой | Роль | Аналогия |
|---|---|---|
| **DDS** | сериализация, транспорт, QoS | служба доставки |
| **RMW** | адаптер ROS2 ↔ конкретный DDS | стойка приёма в офисе |
| **Discovery** | узлы находят друг друга | участники знакомятся в зале |

```bash
printenv RMW_IMPLEMENTATION     # пусто = Fast DDS (дефолт)
export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
ros2 doctor --report            # какой middleware выбран
```

<div class="callout callout-yellow" style="font-size:15px;">
  Узлы на <strong>разных RMW не видят друг друга</strong> — все узлы системы используют один middleware.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/rmw.md</code> · <code>dds_protocol.md</code> · <code>discovery.md</code></div>
<div class="l3-link">Ур.3: TIAgo — <code>rmw_cyclonedds_cpp</code> (CycloneDDS)</div>

<!-- «DDS передаёт данные, RMW — адаптер к конкретной реализации, discovery находит узлы. Сменить RMW можно, не меняя код узлов.» -->

---

<!-- _class: section-break -->

# Часть 2

Подсистемы, DOMAIN ID и несколько роботов

---

## ROS_DOMAIN_ID — изоляция графа

<div class="two-col">
<div>

- **`ROS_DOMAIN_ID`** — номер логической сети DDS (0–101)
- Узлы с одинаковым ID видят друг друга
- Узлы с разными ID — **нет**
- Роботы в одной сети по умолчанию видят друг друга (домен 0)

</div>
<div>

```bash
# терминал 1
export ROS_DOMAIN_ID=0
ros2 run demo_nodes_cpp talker

# терминал 2 — тишина
export ROS_DOMAIN_ID=1
ros2 run demo_nodes_cpp listener
```

</div>
</div>

<div class="callout" style="font-size:16px;">
  `ROS_DOMAIN_ID` — <strong>этаж в здании</strong>: соседи по этажу слышат друг друга, с других этажей — нет.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/robots_communication.md</code></div>
<div class="l3-link">Ур.3: два экземпляра TIAgo изолируют разными доменами</div>

<!-- «ROS_DOMAIN_ID — номер логической сети DDS. Узлы из разных доменов не видят друг друга, даже в одной физической сети.» -->

---

## Один домен или разные?

| Сценарий | Настройка | Почему |
|---|---|---|
| Один робот | один домен | все части видят друг друга |
| Роботы обмениваются данными | один домен + namespace `/robot1`, `/robot2` | видят друг друга, не путают темы |
| Роботы работают независимо | разные домены (1, 2, 3, …) | изоляция: нет чужих `/cmd_vel` |
| Учебная группа в классе | каждому студенту свой домен | не мешают друг другу |

<div class="callout callout-green" style="font-size:16px;">
  <strong>Правило:</strong> кому нужно общаться — в один домен; кому нельзя мешать друг другу — в разные.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/robots_communication.md</code></div>
<div class="l3-link">Ур.3: в классе каждый студент запускает своего робота в своём домене</div>

<!-- «Один домен — когда роботам нужно общаться (координация флота). Разные — когда они не должны мешать друг другу, например в учебном классе.» -->

---

## Кейс: подсистемы TIAgo

<div class="two-col">
<div>

- **Планирование** — Nav2, MoveIt2
- **Восприятие** — YOLO, LiDAR, камера
- **Координация** — twist_mux, ros2_control
- **Сенсоры/симуляция** — Gazebo
- Middleware — **CycloneDDS**

</div>
<div>

```bash
# в контейнере TIAgo
ros2 node list | grep -E 'controller|slam|planner|twist'
ros2 topic info /cmd_vel
ros2 action info /navigate_to_pose
```

</div>
</div>

<div class="callout" style="font-size:16px;">
  Каждый узел относится к своей подсистеме — это и есть «архитектура» робота.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/subsystem.md</code></div>
<div class="l3-link">Ур.3: карта — <code>3_Robot/TIAgo_humble/docs/tiago_architecture.md</code></div>

<!-- «TIAGo — полный пример: десятки узлов, разделённых на подсистемы, и CycloneDDS как middleware.» -->

---

## Смелый тест: граф «исчез»

<div class="two-col">
<div>

- Симуляция TIAgo в домене 0
- В другом терминале меняем домен на 56
- **Весь граф «исчезает»**

</div>
<div>

```bash
# терминал 3
export ROS_DOMAIN_ID=56
ros2 daemon stop
ros2 node list   # пусто!
```

<div class="callout callout-red" style="font-size:15px; margin-top:8px;">
  Десятки узлов TIAgo не видны из другого домена.
</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_practice/06_ros_architecture.md</code></div>
<div class="l3-link">Ур.3: так два TIAgo в одной сети не путают темы</div>

<!-- «Смените ROS_DOMAIN_ID — и весь граф TIAgo «исчезнет» из ros2 node list. Это и есть изоляция групп роботов.» -->

---

<!-- _class: lead -->

# Вопросы?

<span class="badge badge-blue">`2_knowledge/ros_architecture.md`</span>
<span class="badge badge-green">`2_practice/06_ros_architecture.md`</span>
<span class="badge badge-yellow">`3_Robot/TIAgo_humble/`</span>

**Домашнее задание:** `2_homework/hw_06_ros_architecture.md`
