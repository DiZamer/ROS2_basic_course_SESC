---
marp: true
theme: default
paginate: true
size: 16:9
footer: 'ROS2 Course • Занятие 4 • 120 мин (40+40+40)'
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

# Проект робота и URDF в RobotCAD

Лекция • 40 минут (уровень 1)

<span class="badge badge-blue">Уровень 1: Лекция</span>
<span class="badge badge-green">Уровень 2: Практика</span>
<span class="badge badge-yellow">Уровень 3: Робот TIAGo</span>

---

<!-- _class: section-break -->

# Часть 1

CAD, link, joint, LCS, URDF

---

## Что такое RobotCAD

<div class="two-col">
<div>

- **Верстак FreeCAD** (набор инструментов для одной задачи)
- Собирает модель робота из CAD-деталей
- Генерирует URDF/Xacro, меши, launch и конфиги `ros2_control`
- Продолжение верстака CROSS

</div>
<div>

<div class="arch-node" style="font-size:14px;">CAD-модель / STEP</div>
<div style="text-align:center; color:var(--accent); font-weight:700;">↓</div>
<div class="arch-node arch-node-warn" style="font-size:14px;">RobotCAD<br/><span style="font-weight:400;font-size:11px;">сборка структуры</span></div>
<div style="text-align:center; color:var(--accent); font-weight:700;">↓</div>
<div class="arch-node arch-node-gray" style="font-size:14px;">URDF/Xacro + меши + launch</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/robotcad.md</code></div>
<div class="l3-link">Ур.3: та же логика собирает URDF TIAgo в <code>tiago_description/</code></div>

<!-- «RobotCAD — верстак FreeCAD, который превращает CAD-модель в описание робота для ROS2. Вы собираете робота из 3D-деталей, а не пишете текст вручную.» -->

---

## Зачем: не писать URDF руками

<div class="two-col">
<div>

- Вручную — руками считать положение, массу и инерцию каждого звена
- RobotCAD делает это автоматически
- Задал материал → масса и инерция рассчитаны

</div>
<div>

| Что считает RobotCAD | Как |
|---|---|
| Положение звеньев | placement по граням/LCS |
| Масса | по материалу |
| Инерция | по геометрии и материалу |
| Центр масс | автоматически |

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/robotcad.md</code></div>
<div class="l3-link">Ур.3: TIAgo — десятки звеньев, все массы/инерции рассчитаны тем же способом</div>

<!-- «Не пишите URDF руками — пусть RobotCAD считает массу и инерцию за вас. Это убирает рутину и ошибки ручного подсчёта.» -->

---

## Понятия: link, joint, LCS

| Понятие | Что это | Пример |
|---|---|---|
| **link** | жёсткая часть робота | платформа, колесо, рука |
| **joint** | подвижная связь | вращение колеса, шарнир руки |
| **LCS** | локальная система координат | точка крепления сочленения |
| Collisions / Visuals / Reals | геометрия: физика / отображение / исходная | — |

<div class="callout callout-red" style="font-size:15px; margin-top:10px;">
  <strong>Link — жёсткая часть, joint — подвижная связь.</strong> Сустав, заданный как звено, не вращается.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/robotcad.md</code></div>
<div class="l3-link">Ур.3: URDF TIAgo разбит на <code>urdf/arm/</code>, <code>urdf/head/</code>, <code>urdf/torso/</code></div>

<!-- «Link — жёсткая часть, joint — подвижная связь, LCS — система координат для привязки. Путать link и joint нельзя — это первая ошибка новичка.» -->

---

## Цепочка: CAD → URDF → Gazebo/RViz

<div style="display:flex; gap:6px; align-items:center; margin-top:10px;">
  <div class="arch-node" style="font-size:13px;">📐 CAD<br/>STEP</div>
  <div style="color:var(--accent); font-size:18px;">→</div>
  <div class="arch-node arch-node-warn" style="font-size:13px;">RobotCAD<br/>links/joints/LCS</div>
  <div style="color:var(--accent); font-size:18px;">→</div>
  <div class="arch-node" style="font-size:13px;">URDF/Xacro</div>
  <div style="color:var(--accent); font-size:18px;">→</div>
  <div class="arch-node arch-node-gray" style="font-size:13px;">Gazebo<br/>RViz</div>
</div>

<div class="two-col" style="margin-top:12px;">
<div>

- CAD — чертёж отдельных деталей
- RobotCAD — сборка деталей в робота с подписанными осями
- URDF — паспорт тела робота

</div>
<div>

<div class="callout callout-green" style="font-size:15px;">
  <strong>Результат занятия 4</strong> станет роботом, который вы оживите в занятиях 17–18.
</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/robotcad.md</code> · <code>2_knowledge/urdf_xacro.md</code></div>
<div class="l3-link">Ур.3: <code>tiago.urdf.xacro</code> → <code>robot_state_publisher</code> → Gazebo/RViz</div>

<!-- «Цепочка одна: CAD → links/joints/LCS → URDF → Gazebo/RViz. Тема 17 вернётся к URDF уже внутри ROS2, а сейчас мы закладываем основу модели.» -->

---

## Что генерирует RobotCAD

```
my_robot/
├── urdf/
│   └── my_robot.urdf.xacro    описание links/joints
├── meshes/
│   └── base_link.stl          меши звеньев
├── launch/
│   ├── gazebo.launch.py       запуск в Gazebo
│   └── rviz.launch.py         запуск в RViz
└── config/
    └── controllers.yaml       конфиг ros2_control
```

<div class="callout callout-yellow" style="font-size:15px; margin-top:8px;">
  <strong>Имена links/joints</strong> должны совпадать с <code>controllers.yaml</code> — иначе контроллер не найдёт сустав.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/robotcad.md</code></div>
<div class="l3-link">Ур.3: <code>tiago_description/</code> — те же <code>urdf/</code>, <code>meshes/</code>, <code>launch/</code></div>

<!-- «RobotCAD генерирует не только URDF, а целый пакет: меши, launch-файлы для Gazebo и RViz, конфиг ros2_control. Имена должны совпадать во всех файлах.» -->

---

## URDF: паспорт тела робота

```xml
<link name="base_link">
  <inertial>
    <mass value="2.5"/>
    <origin xyz="0 0 0.1"/>
  </inertial>
  <visual>
    <geometry>
      <mesh filename="package://my_robot/meshes/base_link.stl"/>
    </geometry>
  </visual>
</link>

<joint name="wheel_joint" type="continuous">
  <parent link="base_link"/>
  <child link="wheel_link"/>
  <axis xyz="0 1 0"/>
</joint>
```

<div class="callout" style="font-size:15px; margin-top:8px;">
  Масса <code>2.5</code> и <code>xyz="0 0 0.1"</code> рассчитаны RobotCAD по материалу.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/urdf_xacro.md</code></div>
<div class="l3-link">Ур.3: <code>tiago_description/robots/tiago.urdf.xacro</code> — тот же язык</div>

<!-- «URDF — паспорт тела робота: звенья, сочленения, геометрия, масса. Прочитав его, вы знаете, из чего собран робот и где его суставы.» -->

---

## Масса и инерция

<div class="two-col">
<div>

- Масса и инерция считаются по **материалу**
- `<inertial>` — масса, центр масс, инерция
- Без них Gazebo не может симулировать физику

</div>
<div>

<div class="callout callout-red" style="font-size:16px;">
  <strong>Без массы и инерции модель «улетает»</strong> или дёргается в симуляции.
</div>

<div class="callout callout-yellow" style="font-size:15px; margin-top:8px;">
  Без <strong>Collisions</strong> симуляция пуста, хотя RViz показывает робота.
</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/robotcad.md</code> — «Типичные ошибки»</div>
<div class="l3-link">Ур.3: без физики TIAgo не может ехать в Gazebo — масса задана всем звеньям</div>

<!-- «Масса и инерция — это то, что делает модель физической. RobotCAD считает их по материалу, но материал нужно назначить. Без Collisions робот не взаимодействует с миром.» -->

---

## Кейс: URDF TIAgo — та же логика, другой масштаб

```bash
cd ~/ros2_ws/src/tiago_robot/tiago_description
grep -rho "<link name=\"" robots/ urdf/ | wc -l
grep -rho "<joint name=\"" robots/ urdf/ | wc -l
```

<div class="two-col" style="margin-top:10px;">
<div>

- `tiago.urdf.xacro` включает подописания `urdf/arm/`, `urdf/head/`, `urdf/torso/`, `urdf/end_effector/`
- Плюс `omni_base_description`
- Десятки links/joints против двух у студента

</div>
<div>

<div class="callout callout-green" style="font-size:15px;">
  <strong>Вывод:</strong> большой робот — это та же структура, разбитая на модули.
</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_practice/04_robotcad.md</code></div>
<div class="l3-link">Ур.3: <code>3_Robot/TIAgo_humble/ros2_ws/src/tiago_robot/tiago_description/</code></div>

<!-- «Сосчитайте звенья TIAgo — их десятки. Это та же логика link/joint/LCS, что и в вашей модели из двух звеньев, но разбитая на модули arm, head, torso.» -->

---

## Смелый тест: сломанный URDF

```bash
cp simple.urdf broken.urdf
sed -i 's/joint name="wheel_joint"/joint name=""/' broken.urdf
check_urdf broken.urdf
rm broken.urdf
```

<div class="callout callout-red" style="font-size:16px; margin-top:10px;">
  <strong>URDF — обычный текст, который проверяет парсер.</strong> Опечатка ломает модель.
</div>

<div class="l2-link">Ур.2: план Б практики <code>2_practice/04_robotcad.md</code></div>
<div class="l3-link">Ур.3: если <code>check_urdf</code> нет — <code>sudo apt install -y liburdfdom-tools</code></div>

<!-- «URDF — не магия, а текст, который парсер проверяет построчно. Удалите имя сочленения — и `check_urdf` сообщит об ошибке. Так же ломается и большой робот.» -->

---

<!-- _class: lead -->

# Вопросы?

<span class="badge badge-blue">`2_knowledge/robotcad.md` · `urdf_xacro.md`</span>
<span class="badge badge-green">`2_practice/04_robotcad.md`</span>
<span class="badge badge-yellow">`3_Robot/TIAgo_humble/tiago_description/`</span>

**Домашнее задание:** `2_homework/hw_04_robotcad.md`

