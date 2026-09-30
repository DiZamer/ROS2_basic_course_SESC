---
marp: true
theme: default
paginate: true
size: 16:9
title: "Занятие 4: проект робота и RobotCAD — lecture-v2"
description: "От CAD-деталей к звеньям, сочленениям и проверяемому URDF/Xacro."
footer: 'ROS2 • Занятие 4 • lecture-v2 • лекция 40 мин из 120'
---

<style>
section{font-family:Inter,"Segoe UI",Arial,sans-serif;color:#172033;padding:46px 60px;border-top:7px solid #1d4ed8;font-size:23px}h1,h2,h3{color:#1e40af}h1{font-size:47px}h2{font-size:34px}h3{font-size:22px;margin:0 0 8px}strong{color:#1d4ed8}code{color:#173b7a;background:#edf3ff;padding:2px 6px;border-radius:4px}pre{font-size:18px;line-height:1.25}.lead{display:flex;flex-direction:column;justify-content:center;background:linear-gradient(135deg,#eff6ff,#fff 70%)}.tag{display:inline-block;background:#dbeafe;color:#1e3a8a;padding:6px 13px;border-radius:18px;font-size:15px;margin:4px}.row{display:flex;align-items:center;justify-content:center;gap:12px;margin:22px 0}.box{flex:1;border:2px solid #60a5fa;background:#f8fbff;border-radius:11px;padding:15px;text-align:center;font-weight:700}.arrow{color:#2563eb;font-size:27px;font-weight:800}.grid{display:grid;grid-template-columns:1fr 1fr;gap:15px;margin:18px 0}.card{border:1px solid #bfdbfe;background:#f8fbff;border-radius:11px;padding:14px 18px}.muted{color:#5b6b82;font-size:17px}.call{border-left:6px solid #16a34a;background:#f0fdf4;padding:12px 16px;margin-top:13px}.warn{border-left:6px solid #d97706;background:#fffbeb;padding:12px 16px;margin-top:13px}.small{font-size:17px}section::after{color:#94a3b8}
</style>

<!-- _class: lead -->
<!-- _paginate: false -->

# Проект робота и RobotCAD

## От формы детали — к структуре робота

<span class="tag">Лекция · 40 минут</span><span class="tag">Практика · 40 минут</span><span class="tag">Кейс TIAGo · 40 минут</span>

**Результат:** платформа с колёсами и проверяемым URDF/Xacro.

---

## Одной 3D-формы недостаточно

<div class="grid"><div class="card"><h3>CAD показывает</h3>Геометрию и размеры деталей.</div><div class="card"><h3>Модели робота нужны ещё</h3>Связи, оси, движение и физические свойства.</div></div>

<div class="row"><div class="box">Детали</div><div class="arrow">→</div><div class="box">Структура</div><div class="arrow">→</div><div class="box">URDF/Xacro</div><div class="arrow">→</div><div class="box">ROS-инструменты</div></div>

---

## Link: жёсткая часть

<div class="row"><div class="box">`base_link`<br><span class="muted">корпус</span></div><div class="box">`wheel_left_link`<br><span class="muted">левое колесо</span></div><div class="box">`wheel_right_link`<br><span class="muted">правое колесо</span></div></div>

Каждый link — отдельная часть модели с собственной системой координат.

**Вопрос:** будет ли колесо вращаться, если просто добавить цилиндр в CAD?

---

## Joint: как части соединены

<div class="row"><div class="box">base_link</div><div class="arrow">↔ joint</div><div class="box">wheel_link</div></div>

| Тип | Что означает |
| --- | --- |
| `fixed` | Детали не двигаются друг относительно друга. |
| `continuous` | Вращение без конечного углового предела. |
| `revolute` | Вращение с пределами. |

Для колеса нужна ось, совпадающая с его механическим вращением.

---

## LCS задаёт точку и локальные оси

<div class="grid"><div class="card"><h3>Без осмысленной привязки</h3>Joint может оказаться не в центре оси или вращаться не в той плоскости.</div><div class="card"><h3>С LCS</h3>Есть локальная точка и направление осей для соединения деталей.</div></div>

<div class="call">Перед экспортом проверь placement и направление оси обоих колёс.</div>

---

## Две геометрии — две разные задачи

<div class="grid"><div class="card"><h3>Visual</h3>Как звено выглядит в визуализаторе.</div><div class="card"><h3>Collision</h3>Как форма участвует в проверке столкновений.</div></div>

Коллизионная форма может быть проще детальной CAD-геометрии. В RobotCAD проверь, что генератор создал оба нужных представления.

---

## RobotCAD ускоряет генерацию, но входы надо проверить

<div class="row"><div class="box">CAD-геометрия</div><div class="arrow">+</div><div class="box">links / joints / LCS</div><div class="arrow">+</div><div class="box">материалы</div><div class="arrow">→</div><div class="box">URDF/Xacro + meshes</div></div>

Расчёт массы и инерции зависит от выбранного материала, единиц и геометрии.

<div class="warn">Автоматически рассчитанное значение всё равно нужно проверить на правдоподобие.</div>

---

## Что искать в экспортированном описании

```xml
<link name="base_link">
  <visual>...</visual>
  <collision>...</collision>
  <inertial>...</inertial>
</link>
<joint name="wheel_joint" type="continuous">
  <parent link="base_link"/>
  <child link="wheel_link"/>
  <axis xyz="0 1 0"/>
</joint>
```

Фрагмент показывает структуру, а не законченный URDF для запуска.

---

## Путь создания модели

<div class="row"><div class="box">Создать CAD-тела</div><div class="arrow">→</div><div class="box">Назначить links</div><div class="arrow">→</div><div class="box">Добавить joints + LCS</div><div class="arrow">→</div><div class="box">Проверить геометрию и массу</div><div class="arrow">→</div><div class="box">Экспортировать</div></div>

**Проверка:** имя, parent/child, ось и mesh-путь в экспорте соответствуют исходной модели.

---

## Где нужна осторожность?

- Единицы длины должны быть согласованы.
- Инерция зависит от геометрии и материала.
- Collision-геометрия не обязана повторять каждый декоративный элемент.
- Имена links/joints должны быть стабильными для будущих конфигов.

---

## Уровень 3: TIAGo использует ту же идею

<div class="row"><div class="box">base + колёса</div><div class="arrow">→</div><div class="box">много модулей<br><span class="muted">arm / head / torso</span></div><div class="arrow">→</div><div class="box">Xacro + meshes</div></div>

Задача на кейсе — проследить один модуль в `tiago_description`, не переписывая исходники робота.

---

## Шаг к собственной модели

Сегодня: корпус и два колеса.

Дальше: сенсоры → URDF/Xacro → симуляция в RViz/Gazebo.

<div class="call">Сохрани проект FreeCAD и экспорт: оба нужны для следующих итераций.</div>

---

<!-- _class: lead -->
<!-- _paginate: false -->

# Модель должна быть проверяемой

**Link:** какая часть?  **Joint:** как движется?  **LCS:** где ось?

Практика · [`practice-v2_04_robotcad_v1.md`](../2_practice/practice-v2_04_robotcad_v1.md)

---

## Источники

- [RobotCAD upstream](https://github.com/drfenixion/freecad.robotcad)
- [RobotCAD Common Usage Plan](https://github.com/drfenixion/freecad.robotcad/wiki)
- [FreeCAD Addon Manager](https://wiki.freecad.org/Addon_Manager)
- [ROS 2 URDF tutorial](https://docs.ros.org/en/jazzy/Tutorials/Intermediate/URDF/URDF-Main.html)
- [ДЗ: своя модель](../2_homework/homework-v2_04_robotcad_v1.md)
