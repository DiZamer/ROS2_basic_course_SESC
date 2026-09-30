---
marp: true
theme: default
paginate: true
size: 16:9
title: "Занятие 7: workspace, package и colcon — lecture-v2"
description: "От пустой папки к собранному ROS 2-пакету в контейнере курса."
footer: 'ROS2 • Занятие 7 • lecture-v2 • лекция 40 мин из 120'
---

<style>
section{font-family:Inter,"Segoe UI",Arial,sans-serif;color:#172033;padding:46px 60px;border-top:7px solid #1d4ed8;font-size:23px}h1,h2,h3{color:#1e40af}h1{font-size:47px}h2{font-size:34px}h3{font-size:22px;margin:0 0 8px}strong{color:#1d4ed8}code{color:#173b7a;background:#edf3ff;padding:2px 6px;border-radius:4px}pre{font-size:19px;line-height:1.25}.lead{display:flex;flex-direction:column;justify-content:center;background:linear-gradient(135deg,#eff6ff,#fff 70%)}.tag{display:inline-block;background:#dbeafe;color:#1e3a8a;padding:6px 13px;border-radius:18px;font-size:15px;margin:4px}.row{display:flex;align-items:center;justify-content:center;gap:11px;margin:22px 0}.box{flex:1;border:2px solid #60a5fa;background:#f8fbff;border-radius:11px;padding:14px;text-align:center;font-weight:700}.arrow{color:#2563eb;font-size:26px;font-weight:800}.grid{display:grid;grid-template-columns:1fr 1fr;gap:14px;margin:18px 0}.card{border:1px solid #bfdbfe;background:#f8fbff;border-radius:11px;padding:14px 18px}.muted{color:#5b6b82;font-size:17px}.call{border-left:6px solid #16a34a;background:#f0fdf4;padding:12px 16px;margin-top:13px}.warn{border-left:6px solid #d97706;background:#fffbeb;padding:12px 16px;margin-top:13px}section::after{color:#94a3b8}
</style>

<!-- _class: lead -->
<!-- _paginate: false -->

# Workspace, package и colcon

## Где живут исходники и как они становятся запускаемыми

<span class="tag">Лекция · 40 минут</span><span class="tag">Практика · 40 минут</span><span class="tag">TIAGo · 40 минут</span>

---

## Workspace — мастерская проекта

<div class="row"><div class="box">Workspace<br><span class="muted">вся рабочая область</span></div><div class="arrow">содержит →</div><div class="box">Package<br><span class="muted">отдельный модуль</span></div><div class="arrow">содержит →</div><div class="box">Nodes / config</div></div>

Один workspace может содержать много пакетов.

---

## Четыре каталога — четыре роли

<div class="grid"><div class="card"><h3>`src/`</h3>Исходный код — правит разработчик.</div><div class="card"><h3>`build/`</h3>Промежуточные результаты сборки.</div><div class="card"><h3>`install/`</h3>Установленные файлы и setup-скрипты.</div><div class="card"><h3>`log/`</h3>Отчёты `colcon`.</div></div>

`build`, `install` и `log` создаются инструментами; вручную их обычно не редактируют.

---

## Путь исходника до запуска

<div class="row"><div class="box">`src/my_pkg`<br><span class="muted">исходники</span></div><div class="arrow">→</div><div class="box">`colcon build`<br><span class="muted">сборка workspace</span></div><div class="arrow">→</div><div class="box">`install/`<br><span class="muted">готовые файлы</span></div><div class="arrow">→</div><div class="box">`source setup.bash`<br><span class="muted">подключить</span></div></div>

---

## Underlay и overlay

<div class="grid"><div class="card"><h3>Underlay</h3>Базовая установка ROS 2 в контейнере, например `/opt/ros/jazzy`.</div><div class="card"><h3>Overlay</h3>Собственные пакеты workspace, подключённые поверх underlay.</div></div>

Открыли новый терминал? Убедись, что overlay подключён в этой сессии.

---

## Package — не просто папка

<div class="row"><div class="box">`package.xml`<br><span class="muted">имя + зависимости</span></div><div class="box">`setup.py` /<br>`CMakeLists.txt`</div><div class="box">исходники<br>и ресурсы</div></div>

Build type отвечает за сборку; роль `description`, `bringup` или `node` отвечает за архитектурное назначение.

---

## Пусть skeleton создаст ROS 2 CLI

```bash
cd ~/ros2_ws/src
ros2 pkg create --build-type ament_python ros2_basics \
  --dependencies rclpy
```

Официальный генератор создаёт структуру и metadata. Разработчик добавляет свою логику.

---

## Сборка из корня workspace

```bash
cd ~/ros2_ws
colcon build --symlink-install
source install/setup.bash
ros2 pkg prefix ros2_basics
```

`colcon` упорядочивает сборку по зависимостям; `source` добавляет overlay в окружение терминала.

---

## Что не делать с build output

<div class="grid"><div class="card"><h3>Редактировать</h3>`src/`, конфигурацию, исходные файлы.</div><div class="card"><h3>Не править вручную</h3>`build/`, `install/`, `log/`.</div></div>

Исключи эти каталоги из Git через `.gitignore`.

---

## От пустого workspace к TIAGo

<div class="row"><div class="box">Тренировка<br>1 package</div><div class="arrow">→</div><div class="box">TIAGo<br>десятки packages</div><div class="arrow">→</div><div class="box">colcon собирает<br>по зависимостям</div></div>

Задача уровня 3 — распознать тип пакета и понять структуру, а не пересобрать весь робот на занятии.

---

## На что смотреть в TIAgo workspace?

- `tiago_description` — модель и meshes.
- `tiago_bringup` — файлы запуска и конфигурация.
- Пакеты `*_msgs` — типы интерфейсов.
- `build/install/log` — результат сборки.
- `tiago.repos` — описание внешних исходных репозиториев.

---

<!-- _class: lead -->
<!-- _paginate: false -->

# Создать → собрать → подключить

Сегодня: package в Dev Container Jazzy.

ДЗ: первый package собственной модели.

---

## Источники

- [ROS 2: creating a workspace](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Creating-A-Workspace/Creating-A-Workspace.html)
- [ROS 2: creating a package](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Creating-Your-First-ROS2-Package.html)
- [ROS 2: colcon tutorial](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Colcon-Tutorial.html)
- [Практика](../2_practice/practice-v2_07_workspace_v1.md)
