---
marp: true
theme: default
paginate: true
size: 16:9
title: "Занятие 9: Topic, publisher и subscriber — lecture-v2"
description: "Поток сообщений, типы и диагностика ROS 2 topic."
footer: 'ROS2 • Занятие 9 • lecture-v2 • лекция 40 мин из 120'
---

<style>
section{font-family:Inter,"Segoe UI",Arial,sans-serif;color:#172033;padding:46px 60px;border-top:7px solid #1d4ed8;font-size:23px}h1,h2,h3{color:#1e40af}h1{font-size:47px}h2{font-size:34px}h3{font-size:22px;margin:0 0 8px}strong{color:#1d4ed8}code{color:#173b7a;background:#edf3ff;padding:2px 6px;border-radius:4px}pre{font-size:18px;line-height:1.25}.lead{display:flex;flex-direction:column;justify-content:center;background:linear-gradient(135deg,#eff6ff,#fff 70%)}.tag{display:inline-block;background:#dbeafe;color:#1e3a8a;padding:6px 13px;border-radius:18px;font-size:15px;margin:4px}.row{display:flex;align-items:center;justify-content:center;gap:12px;margin:22px 0}.box{flex:1;border:2px solid #60a5fa;background:#f8fbff;border-radius:11px;padding:15px;text-align:center;font-weight:700}.arrow{color:#2563eb;font-size:27px;font-weight:800}.grid{display:grid;grid-template-columns:1fr 1fr;gap:15px;margin:18px 0}.card{border:1px solid #bfdbfe;background:#f8fbff;border-radius:11px;padding:14px 18px}.muted{color:#5b6b82;font-size:17px}.call{border-left:6px solid #16a34a;background:#f0fdf4;padding:12px 16px;margin-top:13px}.warn{border-left:6px solid #dc2626;background:#fef2f2;padding:12px 16px;margin-top:13px}table{font-size:18px}th{background:#1e40af;color:#fff}td,th{padding:7px 10px}section::after{color:#94a3b8}
</style>

<!-- _class: lead -->
<!-- _paginate: false -->

# Topic: поток сообщений

## Publisher отправляет. Subscriber получает.

<span class="tag">Лекция · 40 минут</span><span class="tag">Практика · 40 минут</span><span class="tag">TIAGo · 40 минут</span>

---

## Один канал — несколько участников

<div class="row"><div class="box">camera_node<br>publisher</div><div class="arrow">→</div><div class="box">`/camera/image_raw`<br><span class="muted">Image</span></div><div class="arrow">→</div><div class="box">detector_node<br>subscriber</div></div>

Publisher и subscriber знают имя и тип интерфейса, но не вызывают друг друга напрямую.

---

## Один topic может иметь несколько readers

<div class="row"><div class="box">lidar_node</div><div class="arrow">→</div><div class="box">`/scan`<br><span class="muted">LaserScan</span></div><div class="arrow">→</div><div class="box">SLAM</div></div>
<div class="row"><div class="box"> </div><div class="arrow"> </div><div class="box">тот же поток</div><div class="arrow">→</div><div class="box">RViz / safety</div></div>

---

## Message type задаёт форму данных

<table><thead><tr><th>Тип</th><th>Пример</th></tr></thead><tbody><tr><td><code>String</code></td><td>Статус или учебный текст</td></tr><tr><td><code>Twist</code></td><td>Линейная и угловая скорость</td></tr><tr><td><code>LaserScan</code></td><td>Углы и массив дальностей</td></tr><tr><td><code>Odometry</code></td><td>Положение и скорость</td></tr></tbody></table>

Тип — контракт полей. QoS и namespace тоже влияют на соединение.

---

## Publisher публикует сообщение

```python
msg = String()
msg.data = 'robot ready'
self.publisher.publish(msg)
```

Узел формирует значение и отправляет объект нужного типа.

---

## Subscriber обрабатывает callback

```python
def callback(self, msg):
    self.get_logger().info(msg.data)
```

ROS вызывает callback при поступлении совместимого сообщения.

---

## Проверить topic со стороны CLI

```bash
ros2 topic list -t
ros2 topic info /chatter --verbose
ros2 topic echo /chatter --once
ros2 topic hz /chatter
```

Порядок диагностики: имя → type → endpoints → данные → частота.

---

## Имя и namespace

<div class="grid"><div class="card"><h3>Absolute</h3><code>/robot1/scan</code><br>полное имя с корнем</div><div class="card"><h3>Relative</h3><code>scan</code><br>разрешается с namespace узла</div></div>

Если topic «не найден», сверить фактическое полное имя через `ros2 topic list`.

---

## Несовпадение типа или QoS

<div class="grid"><div class="card"><h3>Разный type</h3>Publisher `String`, subscriber ожидает `Twist` → совместимости нет.</div><div class="card"><h3>QoS</h3>Тип может совпадать, но политики доставки должны быть совместимы.</div></div>

---

## Команда в topic может двигать робота

`/cmd_vel` — не безопасный учебный канал сам по себе.

<div class="warn">Любой motion test — только после проверки subscriber и только в изолированной симуляции. На реальный робот `topic pub` не запускать.</div>

---

## TIAGo: от датчика к подписчику

<div class="row"><div class="box">LiDAR</div><div class="arrow">→</div><div class="box">`/scan`<br>LaserScan</div><div class="arrow">→</div><div class="box">SLAM / RViz / safety</div></div>

Имена и endpoints проверяй в фактическом графе запущенной симуляции.

---

<!-- _class: lead -->
<!-- _paginate: false -->

# Имя + тип + совместимая доставка

Так узлы ROS 2 находят общий topic.

---

## Источники

- [ROS 2: About Topics](https://docs.ros.org/en/jazzy/Concepts/Basic/About-Topics.html)
- [Python publisher/subscriber](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Publisher-And-Subscriber.html)
- [ROS 2 CLI: topics](https://docs.ros.org/en/jazzy/Tutorials/Beginner-CLI-Tools/Understanding-ROS2-Topics/Understanding-ROS2-Topics.html)
- [Практика](../2_practice/practice-v2_09_topic_v1.md)
