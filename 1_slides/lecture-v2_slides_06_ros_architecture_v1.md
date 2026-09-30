---
marp: true
theme: default
paginate: true
size: 16:9
title: "Занятие 6: архитектура ROS 2 — lecture-v2"
description: "Простая карта узлов, ROS Graph, middleware и domain ID."
footer: 'ROS2 • Занятие 6 • lecture-v2 • лекция 40 мин из 120'
---

<style>
section{font-family:Inter,"Segoe UI",Arial,sans-serif;color:#172033;padding:46px 60px;border-top:7px solid #1d4ed8;font-size:23px}h1,h2,h3{color:#1e40af}h1{font-size:47px}h2{font-size:34px}h3{font-size:22px;margin:0 0 8px}strong{color:#1d4ed8}code{color:#173b7a;background:#edf3ff;padding:2px 6px;border-radius:4px}pre{font-size:19px;line-height:1.25}.lead{display:flex;flex-direction:column;justify-content:center;background:linear-gradient(135deg,#eff6ff,#fff 70%)}.tag{display:inline-block;background:#dbeafe;color:#1e3a8a;padding:6px 13px;border-radius:18px;font-size:15px;margin:4px}.row{display:flex;align-items:center;justify-content:center;gap:11px;margin:22px 0}.box{flex:1;border:2px solid #60a5fa;background:#f8fbff;border-radius:11px;padding:14px;text-align:center;font-weight:700}.arrow{color:#2563eb;font-size:26px;font-weight:800}.grid{display:grid;grid-template-columns:1fr 1fr;gap:14px;margin:18px 0}.card{border:1px solid #bfdbfe;background:#f8fbff;border-radius:11px;padding:14px 18px}.muted{color:#5b6b82;font-size:17px}.call{border-left:6px solid #16a34a;background:#f0fdf4;padding:12px 16px;margin-top:13px}.warn{border-left:6px solid #d97706;background:#fffbeb;padding:12px 16px;margin-top:13px}table{font-size:18px}th{background:#1e40af;color:#fff}td,th{padding:7px 10px}section::after{color:#94a3b8}
</style>

<!-- _class: lead -->
<!-- _paginate: false -->

# Что такое ROS 2?

## Как отдельные программы становятся системой робота

<span class="tag">Лекция · 40 минут</span><span class="tag">Практика · 40 минут</span><span class="tag">TIAGo · 40 минут</span>

---

## Робот — это много программ

<div class="row"><div class="box">LiDAR<br><span class="muted">измеряет</span></div><div class="arrow">→</div><div class="box">Локализация<br><span class="muted">оценивает позицию</span></div><div class="arrow">→</div><div class="box">Навигация<br><span class="muted">выбирает движение</span></div><div class="arrow">→</div><div class="box">Привод<br><span class="muted">двигает колёса</span></div></div>

ROS 2 даёт этим программам общие механизмы связи.

---

## Node и ROS Graph

<div class="row"><div class="box">Node<br><span class="muted">отдельная работающая программа</span></div><div class="arrow">→</div><div class="box">ROS Graph<br><span class="muted">карта узлов и связей во время работы</span></div></div>

Граф показывает, кто с кем связан через ROS-интерфейсы.

---

## ROS Graph: поток данных

<div class="row"><div class="box">lidar_node<br>publisher</div><div class="arrow">→</div><div class="box">`/scan`<br><span class="muted">LaserScan</span></div><div class="arrow">→</div><div class="box">localization<br>subscriber</div></div>

Интерфейс описывает связь; он не раскрывает, как DDS отправляет данные внутри.

---

## Путь сообщения: слои выполняют разные задачи

<div class="row"><div class="box">`publish()`<br>ROS API</div><div class="arrow">→</div><div class="box">RMW<br><span class="muted">адаптер</span></div><div class="arrow">→</div><div class="box">DDS implementation<br><span class="muted">discovery / transport</span></div><div class="arrow">→</div><div class="box">callback</div></div>

`rclpy` — API для Python. RMW соединяет его с реализацией middleware.

---

## DDS и RMW — не одно и то же

<div class="grid"><div class="card"><h3>DDS</h3>Middleware/стандарт доставки и обнаружения участников.</div><div class="card"><h3>RMW</h3>ROS-слой, который подключает client library к конкретной реализации.</div></div>

`RMW_IMPLEMENTATION` задаёт предпочтительную реализацию, если она установлена.

<div class="warn">Не делай вывод «разные RMW никогда не общаются»: совместимость зависит от реализации и настроек.</div>

---

## Discovery: узлы объявляют себя

<div class="row"><div class="box">Узел стартует</div><div class="arrow">→</div><div class="box">Discovery<br><span class="muted">по сетевым настройкам</span></div><div class="arrow">→</div><div class="box">Участники находят интерфейсы</div></div>

Одинаковая Wi-Fi-иконка не гарантирует связь: влияют domain, маршрутизация, firewall и конфигурация middleware.

---

## Domain ID делит ROS-графы

<div class="grid"><div class="card"><h3>Domain 40</h3>talker ↔ listener</div><div class="card"><h3>Domain 41</h3>свой listener; не видит talker домена 40</div></div>

Для обмена участников значение domain должно совпадать. Domain ID — логическая изоляция, не физическая сеть.

---

## Один граф, несколько интерфейсов

<table><thead><tr><th>Интерфейс</th><th>Для чего</th><th>Пример</th></tr></thead><tbody><tr><td>Topic</td><td>Поток данных</td><td><code>/scan</code></td></tr><tr><td>Service</td><td>Запрос и короткий ответ</td><td>получить состояние</td></tr><tr><td>Action</td><td>Длительная задача</td><td>ехать к цели</td></tr></tbody></table>

Детально разберём в занятиях 9–11.

---

## Архитектура робота — группы узлов

<div class="row"><div class="box">Sensors<br><span class="muted">/scan, /image</span></div><div class="arrow">→</div><div class="box">Perception</div><div class="arrow">→</div><div class="box">Navigation</div><div class="arrow">→</div><div class="box">Mobile Base<br><span class="muted">/cmd_vel</span></div></div>

Схема показывает границы задач, а не все внутренние узлы.

---

## Диагностика из терминала

```bash
ros2 doctor --report
printenv RMW_IMPLEMENTATION
ros2 node list
ros2 topic list
rqt_graph
```

Пустой `RMW_IMPLEMENTATION` не означает отсутствие middleware: используется настройка по умолчанию.

---

## Уровень 3: те же идеи в TIAGo

В контейнере TIAGo ROS 2 Humble подсистемы реализованы отдельными пакетами и узлами. Мы смотрим карту архитектуры и настройки RMW; команды с изменением domain запускаем только в чистых учебных сессиях.

---

<!-- _class: lead -->
<!-- _paginate: false -->

# ROS 2 связывает компоненты.
# Архитектуру выбирает инженер.

Практика · [`practice-v2_06_ros_architecture_v1.md`](../2_practice/practice-v2_06_ros_architecture_v1.md)

---

## Источники

- [ROS 2 Concepts](https://docs.ros.org/en/jazzy/Concepts.html)
- [DDS/RMW vendors](https://docs.ros.org/en/jazzy/Concepts/Intermediate/About-Different-Middleware-Vendors.html)
- [Discovery](https://docs.ros.org/en/jazzy/Concepts/Intermediate/About-Discovery.html)
- [Domain ID](https://docs.ros.org/en/jazzy/Concepts/Intermediate/About-Domain-ID.html)
- [`homework-v2_06_ros_architecture_v1.md`](../2_homework/homework-v2_06_ros_architecture_v1.md)
