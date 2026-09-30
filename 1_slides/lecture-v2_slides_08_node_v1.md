---
marp: true
theme: default
paginate: true
size: 16:9
title: "Занятие 8: Node, Executor и callbacks — lecture-v2"
description: "Как работает ROS 2-узел и что запускает обработчик события."
footer: 'ROS2 • Занятие 8 • lecture-v2 • лекция 40 мин из 120'
---

<style>
section{font-family:Inter,"Segoe UI",Arial,sans-serif;color:#172033;padding:46px 60px;border-top:7px solid #1d4ed8;font-size:23px}h1,h2,h3{color:#1e40af}h1{font-size:47px}h2{font-size:34px}h3{font-size:22px;margin:0 0 8px}strong{color:#1d4ed8}code{color:#173b7a;background:#edf3ff;padding:2px 6px;border-radius:4px}pre{font-size:18px;line-height:1.25}.lead{display:flex;flex-direction:column;justify-content:center;background:linear-gradient(135deg,#eff6ff,#fff 70%)}.tag{display:inline-block;background:#dbeafe;color:#1e3a8a;padding:6px 13px;border-radius:18px;font-size:15px;margin:4px}.row{display:flex;align-items:center;justify-content:center;gap:12px;margin:22px 0}.box{flex:1;border:2px solid #60a5fa;background:#f8fbff;border-radius:11px;padding:15px;text-align:center;font-weight:700}.arrow{color:#2563eb;font-size:27px;font-weight:800}.grid{display:grid;grid-template-columns:1fr 1fr;gap:15px;margin:18px 0}.card{border:1px solid #bfdbfe;background:#f8fbff;border-radius:11px;padding:14px 18px}.muted{color:#5b6b82;font-size:17px}.call{border-left:6px solid #16a34a;background:#f0fdf4;padding:12px 16px;margin-top:13px}.warn{border-left:6px solid #d97706;background:#fffbeb;padding:12px 16px;margin-top:13px}section::after{color:#94a3b8}
</style>

<!-- _class: lead -->
<!-- _paginate: false -->

# Node, Executor и callbacks

## От события — к коду, который его обрабатывает

<span class="tag">Лекция · 40 минут</span><span class="tag">Практика · 40 минут</span><span class="tag">TIAGo · 40 минут</span>

---

## Node — работающий компонент с задачей

<div class="row"><div class="box">sensor_node<br><span class="muted">считывает данные</span></div><div class="box">navigator<br><span class="muted">строит движение</span></div><div class="box">motor_controller<br><span class="muted">управляет приводом</span></div></div>

Класс/файл — исходный код. Node появляется в ROS Graph, когда программа работает.

---

## Событие ждёт своего обработчика

<div class="row"><div class="box">Timer<br>1 second</div><div class="arrow">→</div><div class="box">Executor<br><span class="muted">ожидает события</span></div><div class="arrow">→</div><div class="box">Callback<br><span class="muted">ваша функция</span></div></div>

Callback — обработчик события. Executor решает, какой callback запустить.

---

## Lifecycle простого узла

<div class="row"><div class="box">`rclpy.init()`</div><div class="arrow">→</div><div class="box">Создать Node<br>и события</div><div class="arrow">→</div><div class="box">`rclpy.spin()`<br><span class="muted">обрабатывать</span></div><div class="arrow">→</div><div class="box">destroy<br>shutdown</div></div>

---

## Timer: источник событий

```python
self._timer = self.create_timer(1.0, self._tick)

def _tick(self):
    self.get_logger().info('heartbeat')
```

Timer вызывает `_tick` примерно раз в секунду, пока Executor обрабатывает события.

---

## `spin()` удерживает обработку событий

<div class="grid"><div class="card"><h3>Со spin</h3>Процесс остаётся активным и обрабатывает timer/subscription/service.</div><div class="card"><h3>Без spin</h3>Создание Node не запускает callback loop; программа может завершиться.</div></div>

```python
rclpy.spin(node)
```

---

## Чем занят callback?

- Получил timer event → коротко обновил состояние.
- Получил сообщение → проверил поля и передал работу дальше.
- Получил service request → сформировал ответ.

<div class="warn">Долгая блокирующая операция задерживает обработку других событий.</div>

Threading и callback groups пока только обозначаем — не смешиваем с первой моделью node.

---

## Проверить работающий node

```bash
ros2 node list
ros2 node info /heartbeat_node
```

`list` показывает работающие узлы; `info` помогает увидеть их интерфейсы.

---

## Результат практики

<div class="row"><div class="box">ros2 pkg create</div><div class="arrow">→</div><div class="box">heartbeat_node</div><div class="arrow">→</div><div class="box">colcon build</div><div class="arrow">→</div><div class="box">ros2 run</div></div>

Практика: [`practice-v2_08_node_v1.md`](../2_practice/practice-v2_08_node_v1.md)

---

## Уровень 3: TIAGo — десятки работающих nodes

<div class="grid"><div class="card">`robot_state_publisher`<br>модель/TF</div><div class="card">`controller_manager`<br>контроллеры</div><div class="card">Nav2 nodes<br>навигация</div><div class="card">Gazebo plugins<br>симуляция/сенсоры</div></div>

Каждый узел отвечает за часть системы; `ros2 node info` показывает интерфейсы.

---

## Домашний шаг модели

Добавить `robot_state_node` с heartbeat. Следующее занятие даст ему topic для обмена данными.

**Сегодня:** Node и callback.
**Дальше:** publisher/subscriber.

---

<!-- _class: lead -->
<!-- _paginate: false -->

# Событие → callback

`spin()` поддерживает цикл работы узла.

---

## Источники

- [ROS 2 Jazzy: nodes](https://docs.ros.org/en/jazzy/Tutorials/Beginner-CLI-Tools/Understanding-ROS2-Nodes/Understanding-ROS2-Nodes.html)
- [Executors](https://docs.ros.org/en/jazzy/Concepts/Intermediate/About-Executors.html)
- [`nodes.md`](../2_knowledge/nodes.md)
- [`homework-v2_08_node_v1.md`](../2_homework/homework-v2_08_node_v1.md)
