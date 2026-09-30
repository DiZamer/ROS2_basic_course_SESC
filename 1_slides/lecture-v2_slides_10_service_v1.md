---
marp: true
theme: default
paginate: true
size: 16:9
title: "Занятие 10: Service и client — lecture-v2"
description: "Запрос, ответ, короткая операция и ограничения service."
footer: 'ROS2 • Занятие 10 • lecture-v2 • лекция 40 мин из 120'
---

<style>
section{font-family:Inter,"Segoe UI",Arial,sans-serif;color:#172033;padding:46px 60px;border-top:7px solid #1d4ed8;font-size:23px}h1,h2,h3{color:#1e40af}h1{font-size:47px}h2{font-size:34px}h3{font-size:22px;margin:0 0 8px}strong{color:#1d4ed8}code{color:#173b7a;background:#edf3ff;padding:2px 6px;border-radius:4px}pre{font-size:18px;line-height:1.25}.lead{display:flex;flex-direction:column;justify-content:center;background:linear-gradient(135deg,#eff6ff,#fff 70%)}.tag{display:inline-block;background:#dbeafe;color:#1e3a8a;padding:6px 13px;border-radius:18px;font-size:15px;margin:4px}.row{display:flex;align-items:center;justify-content:center;gap:12px;margin:22px 0}.box{flex:1;border:2px solid #60a5fa;background:#f8fbff;border-radius:11px;padding:15px;text-align:center;font-weight:700}.arrow{color:#2563eb;font-size:27px;font-weight:800}.grid{display:grid;grid-template-columns:1fr 1fr;gap:15px;margin:18px 0}.card{border:1px solid #bfdbfe;background:#f8fbff;border-radius:11px;padding:14px 18px}.muted{color:#5b6b82;font-size:17px}.call{border-left:6px solid #16a34a;background:#f0fdf4;padding:12px 16px;margin-top:13px}.warn{border-left:6px solid #d97706;background:#fffbeb;padding:12px 16px;margin-top:13px}table{font-size:18px}th{background:#1e40af;color:#fff}td,th{padding:7px 10px}section::after{color:#94a3b8}
</style>

<!-- _class: lead -->
<!-- _paginate: false -->

# Service и client

## Запрос → обработка → ответ

<span class="tag">Лекция · 40 минут</span><span class="tag">Практика · 40 минут</span><span class="tag">TIAGo · 40 минут</span>

---

## Когда потока недостаточно?

<div class="grid"><div class="card"><h3>Topic</h3>«Публикуй измерения постоянно».</div><div class="card"><h3>Service</h3>«Проверь/выполни запрос и верни ответ».</div></div>

Пример: запросить состояние батареи или установить краткую настройку.

---

## Модель service

<div class="row"><div class="box">Client<br>создаёт request</div><div class="arrow">request →</div><div class="box">Service server<br>callback</div><div class="arrow">response →</div><div class="box">Client<br>читает ответ</div></div>

Service — логический запрос-ответ. Ответ не гарантирован, если server недоступен или задача завершилась ошибкой.

---

## Type описывает обе стороны

```text
example_interfaces/srv/AddTwoInts

Request:  a, b
Response: sum
```

Client и server должны использовать один тип service.

---

## Server обрабатывает запрос

```python
def add_two_ints(self, request, response):
    response.sum = request.a + request.b
    return response
```

Callback выполняется, когда server node обслуживает события.

---

## Client ждёт доступность и отправляет запрос

```python
client.wait_for_service(timeout_sec=2.0)
future = client.call_async(request)
```

`call_async()` возвращает Future. Долгий обмен не блокируй внутри callback того же node.

---

## Вызвать service без отдельной программы

```bash
ros2 service list -t
ros2 service type /add_two_ints
ros2 service call /add_two_ints \
  example_interfaces/srv/AddTwoInts "{a: 5, b: 3}"
```

Ожидаемый response: `sum: 8`.

---

## Server не отвечает? Проверь путь

<div class="row"><div class="box">Service name</div><div class="arrow">→</div><div class="box">Server доступен?</div><div class="arrow">→</div><div class="box">Request type</div><div class="arrow">→</div><div class="box">Callback + response</div></div>

Наличие имени в системе не доказывает, что операция завершится успешно.

---

## Topic, service и action — разные задачи

| Topic | Service | Action |
| --- | --- | --- |
| Поток данных | Короткий request/response | Длительная цель, progress, cancel |
| `/scan` | запросить настройку | ехать к цели |

---

## TIAGo: services — только после проверки

<div class="row"><div class="box">ros2 service list -t</div><div class="arrow">→</div><div class="box">Проверить type<br>и назначение</div><div class="arrow">→</div><div class="box">Только затем вызывать</div></div>

E-stop test — только в изолированной симуляции и с инструктором.

---

<!-- _class: lead -->
<!-- _paginate: false -->

# Запрос полезен,
# когда нужен конкретный ответ

---

## Источники

- [ROS 2 services](https://docs.ros.org/en/jazzy/Concepts/Basic/About-Services.html)
- [Python service tutorial](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Service-And-Client.html)
- [Практика](../2_practice/practice-v2_10_service_v1.md) · [ДЗ](../2_homework/homework-v2_10_service_v1.md)
