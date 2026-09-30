---
marp: true
theme: default
paginate: true
size: 16:9
title: "Занятие 11: Action server и client — lecture-v2"
description: "Жизненный цикл ROS 2 Action: goal, feedback, result, cancel."
footer: 'ROS2 • Занятие 11 • lecture-v2 • лекция 40 мин из 120'
---

<style>
section{font-family:Inter,"Segoe UI",Arial,sans-serif;color:#172033;padding:46px 60px;border-top:7px solid #1d4ed8;font-size:23px}h1,h2,h3{color:#1e40af}h1{font-size:47px}h2{font-size:34px}h3{font-size:22px;margin:0 0 8px}strong{color:#1d4ed8}code{color:#173b7a;background:#edf3ff;padding:2px 6px;border-radius:4px}pre{font-size:18px;line-height:1.25}.lead{display:flex;flex-direction:column;justify-content:center;background:linear-gradient(135deg,#eff6ff,#fff 70%)}.tag{display:inline-block;background:#dbeafe;color:#1e3a8a;padding:6px 13px;border-radius:18px;font-size:15px;margin:4px}.row{display:flex;align-items:center;justify-content:center;gap:12px;margin:22px 0}.box{flex:1;border:2px solid #60a5fa;background:#f8fbff;border-radius:11px;padding:14px;text-align:center;font-weight:700}.arrow{color:#2563eb;font-size:27px;font-weight:800}.grid{display:grid;grid-template-columns:1fr 1fr;gap:15px;margin:18px 0}.card{border:1px solid #bfdbfe;background:#f8fbff;border-radius:11px;padding:14px 18px}.muted{color:#5b6b82;font-size:17px}.call{border-left:6px solid #16a34a;background:#f0fdf4;padding:12px 16px;margin-top:13px}.warn{border-left:6px solid #dc2626;background:#fef2f2;padding:12px 16px;margin-top:13px}table{font-size:18px}th{background:#1e40af;color:#fff}td,th{padding:7px 10px}section::after{color:#94a3b8}
</style>

<!-- _class: lead -->
<!-- _paginate: false -->

# Action: длительная задача

## Цель, прогресс, итог и отмена

<span class="tag">Лекция · 40 минут</span><span class="tag">Практика · 40 минут</span><span class="tag">TIAGo · 40 минут</span>

---

## Когда задача длится дольше запроса?

<div class="grid"><div class="card"><h3>Service</h3>Короткий запрос, ждём один ответ.</div><div class="card"><h3>Action</h3>Задача выполняется долго; нужен прогресс и отмена.</div></div>

---

## Четыре части Action

<div class="row"><div class="box">Goal<br><span class="muted">что сделать?</span></div><div class="arrow">→</div><div class="box">Feedback<br><span class="muted">как продвигается?</span></div><div class="arrow">→</div><div class="box">Result<br><span class="muted">чем закончилось?</span></div></div>

Отдельная дорожка: client может запросить **Cancel** пока задача активна.

---

## Lifecycle: client просит, server решает и выполняет

<div class="row"><div class="box">Отправить goal</div><div class="arrow">→</div><div class="box">Accept / reject</div><div class="arrow">→</div><div class="box">Выполнить + feedback</div><div class="arrow">→</div><div class="box">Success / canceled / aborted</div></div>

Cancel — запрос серверу, не мгновенная остановка привода.

---

## Учебный Action: Fibonacci

```text
Goal: order = 8
Feedback: [0, 1, 1, 2, ...]
Result: итоговая последовательность
```

Задача специально безопасна: нет движения робота, легко увидеть шаги прогресса.

---

## CLI как Action Client

```bash
ros2 action list -t
ros2 action info /fibonacci
ros2 action send_goal /fibonacci \
  example_interfaces/action/Fibonacci "{order: 30}" --feedback
```

`Ctrl+C` в Jazzy CLI запрашивает cancel активной goal.

---

## Server должен обработать отмену

```python
if goal_handle.is_cancel_requested:
    goal_handle.canceled()
    return result
```

Server проверяет cancel во время выполнения и корректно завершает goal.

---

## Как устроены роли

<div class="row"><div class="box">Action Client<br><span class="muted">goal / feedback / result</span></div><div class="arrow">⇄</div><div class="box">Action Server<br><span class="muted">accept / execute / cancel</span></div></div>

Внутри протокол сочетает feedback/status topics и goal/result/cancel services; приложению обычно удобен единый Action API.

---

## Какой интерфейс выбрать?

| Задача | Механизм |
| --- | --- |
| Поток LiDAR | Topic |
| Короткий запрос состояния | Service |
| Поехать к координате с прогрессом | Action |

---

## TIAGo: `/navigate_to_pose`

<div class="row"><div class="box">Goal<br><span class="muted">pose в map</span></div><div class="arrow">→</div><div class="box">Nav2 планирует</div><div class="arrow">→</div><div class="box">Feedback</div><div class="arrow">→</div><div class="box">Result / cancel</div></div>

На занятии читаем interface. Отправляем goal только в изолированной симуляции с инструктором.

---

## Безопасная граница

<div class="warn">Action cancel не заменяет E-stop. Не отправляй навигационную goal физическому роботу для учебного теста.</div>

Сначала проверь server, type, frame, map и среду выполнения.

---

## Переход к зачёту 1

Topic = поток · Service = короткий ответ · Action = длительная цель.

Следом: зачёт по архитектуре и механизмам связи занятий 6–11.

---

<!-- _class: lead -->
<!-- _paginate: false -->

# Цель → прогресс → результат

…и корректная обработка отмены.

---

## Источники

- [ROS 2 Jazzy: actions](https://docs.ros.org/en/jazzy/Concepts/Basic/About-Actions.html)
- [Python action server/client](https://docs.ros.org/en/jazzy/Tutorials/Intermediate/Writing-an-Action-Server-Client/Py.html)
- [ROS 2 examples action server](https://github.com/ros2/examples/tree/jazzy/rclpy/actions/minimal_action_server)
- [Практика](../2_practice/practice-v2_11_action_v1.md) · [ДЗ](../2_homework/homework-v2_11_action_v1.md)
