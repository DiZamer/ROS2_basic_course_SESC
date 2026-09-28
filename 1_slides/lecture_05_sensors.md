---
marp: true
theme: default
paginate: true
size: 16:9
footer: 'ROS2 Course • Занятие 5 • 120 мин (40+40+40)'
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

# Датчики: виртуальные и реальные сенсоры

Лекция • 40 минут (уровень 1)

<span class="badge badge-blue">Уровень 1: Лекция</span>
<span class="badge badge-green">Уровень 2: Практика</span>
<span class="badge badge-yellow">Уровень 3: Робот TIAGo</span>

---

<!-- _class: section-break -->

# Часть 1

Сенсор, оцифровка, частота, виртуальный vs реальный

---

## Что такое сенсор

<div class="two-col">
<div>

- Сенсор измеряет физическую величину и отдаёт результат **числами**
- Робот не «видит» комнату — он читает показания датчиков
- Без сенсоров робот слеп: не знает, где стена и куда повернуть

</div>
<div>

<div class="arch-node" style="font-size:14px;">🌍 Мир<br/><span style="font-weight:400;font-size:11px;">стена в 0.5 м</span></div>
<div style="text-align:center; color:var(--accent); font-weight:700;">↓</div>
<div class="arch-node arch-node-warn" style="font-size:14px;">📡 Сенсор<br/><span style="font-weight:400;font-size:11px;">измеряет</span></div>
<div style="text-align:center; color:var(--accent); font-weight:700;">↓</div>
<div class="arch-node arch-node-gray" style="font-size:14px;">Данные: «0.5 м»</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/sensors.md</code></div>
<div class="l3-link">Ур.3: TIAgo «видит» через лидар, камеру и IMU</div>

<!-- «Робот видит мир только через сенсоры — как мы через органы чувств. Сенсор превращает физическую величину в числа, которые читает программа робота.» -->

---

## Органы чувств робота

| Сенсор | Орган чувств | Задача |
|---|---|---|
| Камера | 👁️ глаза | видеть объекты |
| Микрофон | 👂 слух | слышать команды |
| IMU | 🧭 вестибулярный аппарат | чувствовать наклон и поворот |
| Дальномер | ✋ рука | проверить, далеко ли стена |

<div class="callout" style="font-size:16px; margin-top:10px;">
  <strong>Мозг (программа) не трогает мир сам</strong> — он читает сигналы органов чувств.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/sensors.md</code></div>
<div class="l3-link">Ур.3: Nav2 «чувствует» мир через <code>/scan</code>, <code>/odom</code>, <code>/tf</code></div>

<!-- «Сенсоры — органы чувств робота: камера — глаза, IMU — вестибулярный аппарат, дальномер — рука. Программа читает сигналы, а не трогает мир напрямую.» -->

---

## Оцифровка и частота

<div class="two-col">
<div>

- **Оцифровка** — превращение непрерывной величины в число
- **Частота** — сколько раз в секунду сенсор выдаёт значение
- 10 Гц = 10 измерений в секунду

</div>
<div>

<div class="arch-node" style="font-size:14px;">Непрерывная величина</div>
<div style="text-align:center; color:var(--accent); font-weight:700;">↓ оцифровка</div>
<div class="arch-node arch-node-warn" style="font-size:14px;">Число «0.43 м»</div>
<div style="text-align:center; color:var(--accent); font-weight:700;">↓ с частотой N Гц</div>
<div class="arch-node arch-node-gray" style="font-size:14px;">Потребитель</div>

<div class="callout callout-yellow" style="font-size:14px; margin-top:8px;">
  Чем выше частота — тем быстрее реакция, но больше данных обрабатывать.
</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/sensors.md</code></div>
<div class="l3-link">Ур.3: лидар TIAgo — <code>update_rate</code> 10; <code>ros2 topic hz</code> это подтверждает</div>

<!-- «Частота — сколько раз в секунду сенсор выдаёт значение. 10 Гц = 10 раз в секунду. Для лидара достаточно 10 Гц, для IMU — сотни, потому что робот должен чувствовать движение мгновенно.» -->

---

## Путь данных

<div style="display:flex; gap:6px; align-items:center; margin-top:10px;">
  <div class="arch-node" style="font-size:13px;">Физическая величина<br/><span style="font-weight:400;font-size:11px;">расстояние, свет, ускорение</span></div>
  <div style="color:var(--accent); font-size:18px;">→</div>
  <div class="arch-node arch-node-warn" style="font-size:13px;">Сенсор<br/><span style="font-weight:400;font-size:11px;">оцифровка</span></div>
  <div style="color:var(--accent); font-size:18px;">→</div>
  <div class="arch-node" style="font-size:13px;">Данные<br/><span style="font-weight:400;font-size:11px;">числа, массивы, кадры</span></div>
  <div style="color:var(--accent); font-size:18px;">→</div>
  <div class="arch-node arch-node-gray" style="font-size:13px;">Потребитель<br/><span style="font-weight:400;font-size:11px;">программа робота</span></div>
</div>

<div class="callout callout-green" style="font-size:16px; margin-top:12px;">
  <strong>Путь всегда один и тот же</strong> — и для реального, и для виртуального сенсора.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/sensors.md</code></div>
<div class="l3-link">Ур.3: те же данные приходят в ROS2-темы — разбор <code>ros2 topic</code> на занятии 9</div>

<!-- «Путь данных всегда один: физическая величина → сенсор → данные → потребитель. Разница между реальным и виртуальным сенсором — только в шаге измерения.» -->

---

## Обзор датчиков робота

| Датчик | Что измеряет | Данные | Частота |
|---|---|---|---|
| LiDAR | расстояние по углам | массив дальностей `ranges[]` | 10–20 Гц |
| RGB-камера | изображение | кадр из пикселей | 15–30 кадров/с |
| RGBD-камера | цвет + глубина | изображение + карта глубины | 15–30 кадров/с |
| IMU | ускорение, поворот | угловая скорость, ускорение | 100–400 Гц |
| Энкодер | вращение колеса | счётчик оборотов / скорость | 100–1000 Гц |

<div class="l2-link">Ур.2: <code>2_knowledge/sensors.md</code> · <code>2_practice/05_sensors.md</code></div>
<div class="l3-link">Ур.3: лидар → <code>LaserScan</code>, камера → <code>Image</code>, IMU → <code>Imu</code></div>

<!-- «Обратите внимание на частоты: IMU и энкодер опрашивают в сотни раз чаще, чем лидар. Частота выбирается под задачу, а не «побольше».» -->

---

## Виртуальный vs реальный

<div class="two-col">
<div>

- **Реальный** измеряет физику напрямую (лазер отражается от стены)
- **Виртуальный** считает по модели мира (луч пересекает стену в симуляции)
- Разница только в шаге измерения — **тип данных одинаковый**

</div>
<div>

```
REAL   физика → сенсор GPIO/I2C/SPI → данные
VIRT   модель мира → плагин Gazebo → данные
                     ↓
              тот же тип данных → потребитель
```

<div class="callout callout-green" style="font-size:14px; margin-top:8px;">
  <strong>Программе-потребителю неважно</strong>, реальный сенсор или виртуальный.
</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/sensors.md</code></div>
<div class="l3-link">Ур.3: на виртуальном лидаре TIAgo учатся до покупки железа</div>

<!-- «Виртуальный сенсор даёт те же данные, что и реальный. Потребителю всё равно. Поэтому на симуляции можно учиться и разрабатывать до покупки железа.» -->

---

## Сенсор в Gazebo: описание

```xml
<sensor name="gpu_lidar" type="gpu_lidar">
  <topic>lidar</topic>
  <update_rate>10</update_rate>
  <ray>
    <scan>
      <horizontal>
        <samples>640</samples>
        <min_angle>-1.396263</min_angle>
        <max_angle>1.396263</max_angle>
      </horizontal>
    </scan>
    <range>
      <min>0.08</min>
      <max>10.0</max>
    </range>
  </ray>
  <always_on>1</always_on>
</sensor>
```

<div class="callout callout-yellow" style="font-size:15px; margin-top:8px;">
  <strong><code>update_rate</code></strong> задаёт частоту, <strong><code>range</code></strong> — границы видимости, <strong><code>topic</code></strong> — куда публикуются данные.
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/sensors.md</code></div>
<div class="l3-link">Ур.3: <code>base_sensors.urdf.xacro</code> — тот же <code>update_rate</code> 10 у лидара TIAgo</div>

<!-- «Виртуальный сенсор объявляется в файле мира (SDF): тип, частота, сектор обзора, границы дальности и имя потока. Это и есть конфигурация сенсора.» -->

---

## Реальные датчики на Raspberry Pi

<div class="two-col">
<div>

- Подключаются по **GPIO / I2C / SPI**
- В Linux появляются как файлы или адреса
- `lsusb` — USB-устройства
- `ls /dev` — файлы устройств

</div>
<div>

```bash
lsusb
ls /dev          # ttyUSB* video* i2c-*
i2cdetect -l
i2cdetect -y 1
```

<div class="callout" style="font-size:14px; margin-top:8px;">
  В контейнере без проброшенного железа списки короткие — это нормально.
</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_practice/05_sensors.md</code></div>
<div class="l3-link">Ур.3: ровер MentorPi M1 — Raspberry Pi, датчики по USB/I2C</div>

<!-- «Реальный датчик в Linux — это файл в `/dev` или адрес на шине I2C. `lsusb` показывает USB-устройства, `i2cdetect` — адреса датчиков на шине. Датчики видно там, где они физически подключены.» -->

---

## Кейс: лидар TIAgo

```bash
ros2 launch tiago_gazebo tiago_gazebo.launch.py is_public_sim:=True
# в другом терминале:
ros2 topic list | grep scan
ros2 topic echo /scan_front_raw --once
ros2 topic hz /scan_front_raw
```

<div class="two-col" style="margin-top:8px;">
<div>

- `echo --once` печатает `ranges[]` — дальности
- `hz` показывает ~10 Гц (совпадает с `update_rate`)

</div>
<div>

<div class="callout callout-green" style="font-size:14px;">
  Полный разбор <code>ros2 topic</code> — на занятии 9.
</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_practice/05_sensors.md</code></div>
<div class="l3-link">Ур.3: <code>scan_front_raw</code> / <code>scan_rear_raw</code> — лидар <code>sick-571</code></div>

<!-- «Подслушаем лидар: `echo --once` показывает массив дальностей, `hz` — частоту. 10 Гц совпадает с `update_rate` из описания сенсора. Это мостик к занятию 9.» -->

---

## Смелый тест: ослепить навигацию

<div class="two-col">
<div>

- На реальном ровере **перекрыть лидар ладонью**
- Наблюдать, как меняются дальности в `/scan`
- Данные сенсора — это физика, а не абстракция

</div>
<div>

<div class="callout callout-red" style="font-size:16px;">
  Дальности в перекрытом секторе резко уменьшаются.
</div>

<div class="callout callout-yellow" style="font-size:15px; margin-top:8px;">
  На занятии 5 — демонстрация инструктора; выполняется на занятиях 25–30.
</div>

</div>
</div>

<div class="l2-link">Ур.2: <code>2_knowledge/sensors.md</code></div>
<div class="l3-link">Ур.3: реальный ровер MentorPi M1 — лидар + RGBD-камера + omni-колёса</div>

<!-- «Перекройте лидар ладонью — и увидите, как дальности в секторе падают. Данные сенсора отражают физический мир, поэтому симуляцию можно переносить на железо.» -->

---

<!-- _class: lead -->

# Вопросы?

<span class="badge badge-blue">`2_knowledge/sensors.md`</span>
<span class="badge badge-green">`2_practice/05_sensors.md`</span>
<span class="badge badge-yellow">`3_Robot/TIAgo_humble/`</span>

**Домашнее задание:** `2_homework/hw_05_sensors.md`

