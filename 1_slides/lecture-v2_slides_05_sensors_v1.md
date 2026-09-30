---
marp: true
theme: default
paginate: true
size: 16:9
title: "Занятие 5: датчики — lecture-v2"
description: "Путь от физического измерения до потребителя данных, реальные и виртуальные сенсоры."
footer: 'ROS2 • Занятие 5 • lecture-v2 • лекция 40 мин из 120'
---

<style>
section{font-family:Inter,"Segoe UI",Arial,sans-serif;color:#172033;padding:46px 60px;border-top:7px solid #1d4ed8;font-size:23px}h1,h2,h3{color:#1e40af}h1{font-size:47px}h2{font-size:34px}h3{font-size:22px;margin:0 0 8px}strong{color:#1d4ed8}code{color:#173b7a;background:#edf3ff;padding:2px 6px;border-radius:4px}pre{font-size:18px;line-height:1.25}.lead{display:flex;flex-direction:column;justify-content:center;background:linear-gradient(135deg,#eff6ff,#fff 70%)}.tag{display:inline-block;background:#dbeafe;color:#1e3a8a;padding:6px 13px;border-radius:18px;font-size:15px;margin:4px}.row{display:flex;align-items:center;justify-content:center;gap:12px;margin:22px 0}.box{flex:1;border:2px solid #60a5fa;background:#f8fbff;border-radius:11px;padding:15px;text-align:center;font-weight:700}.arrow{color:#2563eb;font-size:27px;font-weight:800}.grid{display:grid;grid-template-columns:1fr 1fr;gap:15px;margin:18px 0}.card{border:1px solid #bfdbfe;background:#f8fbff;border-radius:11px;padding:14px 18px}.muted{color:#5b6b82;font-size:17px}.call{border-left:6px solid #16a34a;background:#f0fdf4;padding:12px 16px;margin-top:13px}.warn{border-left:6px solid #d97706;background:#fffbeb;padding:12px 16px;margin-top:13px}.small{font-size:17px}table{font-size:18px}th{background:#1e40af;color:#fff}td,th{padding:7px 10px}section::after{color:#94a3b8}
</style>

<!-- _class: lead -->
<!-- _paginate: false -->

# Датчики: реальные и виртуальные

## Робот не видит мир напрямую — он измеряет

<span class="tag">Лекция · 40 минут</span><span class="tag">Практика · 40 минут</span><span class="tag">TIAGo · 40 минут</span>

---

## От вопроса робота к сенсору

**Задача:** не задеть стену в коридоре.

<div class="row"><div class="box">Какой вопрос<br><span class="muted">«Как далеко стена?»</span></div><div class="arrow">→</div><div class="box">Что измерить<br><span class="muted">расстояние</span></div><div class="arrow">→</div><div class="box">Какой сенсор<br><span class="muted">LiDAR</span></div></div>

Датчик выбирают под задачу, а не «на всякий случай».

---

## Измерение проходит несколько этапов

<div class="row"><div class="box">Физический мир</div><div class="arrow">→</div><div class="box">Сенсор +<br>электроника</div><div class="arrow">→</div><div class="box">Драйвер</div><div class="arrow">→</div><div class="box">Данные</div><div class="arrow">→</div><div class="box">Потребитель</div></div>

Потребитель может быть компонентом локализации, навигации или восприятия.

---

## Четыре датчика — четыре вида измерений

| Сенсор | Измеряет | Пример данных |
| --- | --- | --- |
| LiDAR | Расстояние по направлениям | Массив дальностей |
| RGB/RGB-D камера | Свет/цвет/глубину | Кадр или кадр + depth |
| IMU | Угловую скорость, ускорение | Векторы + метаданные |
| Энкодер | Вращение колеса | Положение/скорость сустава |

---

## Частота говорит, как часто обновляются данные

<div class="row"><div class="box">10 Гц</div><div class="arrow">→</div><div class="box">10 измерений/с</div><div class="arrow">→</div><div class="box">Период ≈ 100 мс</div></div>

```text
Период: T = 1 / частота
50 Гц → 0,02 с = 20 мс
```

Частота выше — быстрее обновление, но обычно больше вычислительная и сетевая нагрузка.

---

## Частота — только одна характеристика

<div class="grid"><div class="card"><h3>Что ещё измерить?</h3>Диапазон, разрешение, поле зрения.</div><div class="card"><h3>Когда?</h3>Задержка, timestamp, частота.</div><div class="card"><h3>Насколько надёжно?</h3>Шум, калибровка, пропуски.</div><div class="card"><h3>Откуда?</h3>Координатный frame и расположение.</div></div>

---

## Реальный датчик: устройство + драйвер

<div class="row"><div class="box">LiDAR<br><span class="muted">USB / Ethernet</span></div><div class="arrow">→</div><div class="box">Linux +<br>драйвер</div><div class="arrow">→</div><div class="box">ROS 2 node</div><div class="arrow">→</div><div class="box">Сообщение</div></div>

Контейнер не обязательно видит USB/I2C host автоматически: нужны устройство, права и явный проброс.

---

## Тип сообщения — структура, не гарантия точности

<div class="grid"><div class="card"><h3>`LaserScan`</h3>Углы, шаг, диапазон, массив значений.</div><div class="card"><h3>`Image`</h3>Размеры, encoding, шаг и байты изображения.</div><div class="card"><h3>`Imu`</h3>Ориентация, угловая скорость, ускорение.</div><div class="card"><h3>Общее</h3>Header может содержать время и frame.</div></div>

Тип задаёт поля интерфейса. Он не говорит, насколько измерение близко к реальному миру.

---

## Виртуальный и реальный путь

<div class="row"><div class="box">Реальная сцена</div><div class="arrow">→</div><div class="box">Датчик<br>+ драйвер</div><div class="arrow">↘</div><div class="box">Совместимый<br>ROS-интерфейс</div></div>
<div class="row"><div class="box">Модель мира</div><div class="arrow">→</div><div class="box">Сенсорный<br>плагин/bridge</div><div class="arrow">↗</div><div class="box">Тот же consumer*</div></div>

<span class="small">* Если сообщение и настройка совместимы. Физика, шум, калибровка и задержка могут отличаться.</span>

---

## Что проверять при переносе sim → real

<div class="grid"><div class="card">Диапазон и разрешение</div><div class="card">Частоту и задержку</div><div class="card">Шум и пропуски</div><div class="card">Калибровку, frame и timestamps</div></div>

<div class="warn">«Одинаковый тип сообщения» не означает «одинаковые измерения».</div>

---

## Сенсорный план TIAGo

<div class="row"><div class="box">LiDAR</div><div class="arrow">→</div><div class="box">Описание базы<br><span class="muted">Xacro/config</span></div><div class="arrow">→</div><div class="box">ROS interface<br><span class="muted">проверить topic</span></div></div>
<div class="row"><div class="box">Камера головы</div><div class="arrow">→</div><div class="box">Описание сенсора</div><div class="arrow">→</div><div class="box">Данные для perception</div></div>

Имена интерфейсов проверяем в реально запущенной конфигурации, не угадываем.

---

## Практика: заполнить sensor inventory

| Сенсор | Величина | Данные | Частота/период | Потребитель |
| --- | --- | --- | --- | --- |
| LiDAR | ? | ? | ? | ? |
| IMU | ? | ? | ? | ? |
| Энкодер | ? | ? | ? | ? |

Практика: [`practice-v2_05_sensors_v1.md`](../2_practice/practice-v2_05_sensors_v1.md)

---

<!-- _class: lead -->
<!-- _paginate: false -->

# Измерение → данные → решение

**ДЗ:** добавь сенсоры к собственной модели, опиши ограничения и будущих потребителей.

[`homework-v2_05_sensors_v1.md`](../2_homework/homework-v2_05_sensors_v1.md)

---

## Источники

- [ROS 2 Jazzy sensor_msgs](https://docs.ros.org/en/jazzy/p/sensor_msgs/interfaces.html)
- [Gazebo Sensors](https://gazebosim.org/docs/latest/sensors/)
- [Raspberry Pi documentation](https://www.raspberrypi.com/documentation/)
- [База знаний курса: sensors.md](../2_knowledge/sensors.md)
- [TIAGo README](../3_Robot/TIAgo_humble/README.md)
