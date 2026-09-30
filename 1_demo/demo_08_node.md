# Демонстрация: node, Executor и callbacks

## Цель

Показать минимальный узел с timer callback, роль `spin()`, и как увидеть узел со стороны через `ros2 node list` и `ros2 node info`. В кейсе робота — разобрать узлы TIAgo и провести смелые тесты.

## Подготовка до занятия

1. Dev Container уровня 2 открыт и готов (`.devcontainer/`, Ubuntu 24.04 + ROS2 Jazzy).
2. Workspace и пакет `my_first_pkg` из занятия 7 собраны; `source ~/ros2_ws/install/setup.bash` выполнен.
3. Файл узла `timer_node.py` и точка входа в `setup.py` подготовлены заранее (код — в [`../2_practice/08_node.md`](../2_practice/08_node.md)).
4. Для кейса уровня 3 — контейнер `3_Robot/TIAgo_humble/` с запущенной симуляцией, либо подготовлен план Б.
5. Два терминала: один для уровня 2, один для кейса TIAgo.

## Контейнер

- Уровень 2: Dev Container `.devcontainer/` — создание и запуск узла, эффект без `spin()`.
- Уровень 3: контейнер `3_Robot/TIAgo_humble/` — `ros2 node list`/`ros2 node info` узлов, смелые тесты.

## Контекст для студентов

> «Узел — программа с одной задачей. Но сам по себе узел ничего не делает: события обрабатывает Executor, а включается он вызовом `spin()`. Сейчас посмотрим узел изнутри и со стороны.»

## Что показать

### 1. Запустить узел (уровень 2)

```bash
cd ~/ros2_ws && source install/setup.bash
ros2 run my_first_pkg timer_node
```

**Что сказать**: «Каждую секунду таймер дёргает `_timer_callback`, и узел печатает `Tick`. Это и есть работа Executor'а.»

### 2. Увидеть узел в графе

Во втором терминале (уровень 2):

```bash
source ~/ros2_ws/install/setup.bash
ros2 node list            # /timer_node
ros2 node info /timer_node
```

**Что сказать**: «`ros2 node list` — кто жив в графе. `ros2 node info` — что узел делает. Publishers/Subscribers пока пусты — они появятся, когда узел начнёт публиковать и подписываться (занятие 9).»

### 3. Эффект отсутствия spin()

Остановите первый узел (`Ctrl+C`) и запустите вариант без `spin()`:

```bash
ros2 run my_first_pkg no_spin_node
```

**Что сказать**: «Узел создан, таймер зарегистрирован, но Executor не запущен — `spin()` нет. Программа напечатала приветствие и сразу вышла. Таймер так и не сработал. Узел "молчит".»

### 4. Смелый тест: кто жив в TIAgo (уровень 3)

В контейнере TIAgo (симуляция запущена):

```bash
ros2 node list
ros2 node list | wc -l
```

**Что сказать**: «Работающий робот — это ~15 независимых узлов, а не одна программа. Каждый — отдельный Executor со своими callbacks.»

### 5. Смелый тест: кто за что отвечает

```bash
ros2 node info /DiffDriveController
ros2 node info /robot_state_publisher
ros2 node info /twist_mux
```

**Что сказать**: «По publishers и subscribers видно, за что отвечает узел: у `DiffDriveController` в Subscribers `/cmd_vel`, в Publishers `/odom` — это привод базы. У `robot_state_publisher` в Publishers `/robot_description` и `/tf` — это описание тела и координат.»

### 6. Смелый тест: убить узел и посмотреть discovery

```bash
ros2 node list          # запомнить список
# в терминале запуска остановить один узел (Ctrl+C)
ros2 node list          # снова — узел исчез, остальные работают
```

**Что сказать**: «Узлы независимы. Остановили один — discovery за пару секунд убрал его из графа, остальные продолжают работать.»

### 7. rqt_graph

```bash
rqt_graph
```

**Что сказать**: «Прямоугольники — узлы, овалы — топики, стрелки — связи. Это и есть ROS Graph.»

## Что сказать

- «Узел — работающая программа с одной задачей, а не файл.»
- «Executor — секретарь узла: разбирает события и вызывает нужный callback.»
- «`spin()` — кнопка "работать". Без неё callback не вызовется.»
- «Callback должен быть быстрым — иначе весь узел стоит.»
- «`ros2 node list` — кто жив; `ros2 node info` — чем занят; `rqt_graph` — как связан.»

## Ожидаемый результат

- `timer_node` печатает `Tick #N` раз в секунду.
- `ros2 node list` показывает `/timer_node`; `ros2 node info` — его имя и пустые Publishers/Subscribers.
- `no_spin_node` печатает только приветствие и завершается.
- В TIAgo `ros2 node list` даёт ~15 узлов; студент объясняет задачу `DiffDriveController`, `robot_state_publisher`, `twist_mux`.
- После остановки узла он исчезает из `ros2 node list`.

## Типичные проблемы

| Симптом | Причина | Исправление |
| --- | --- | --- |
| `ros2 run` — «Package not found» | Забыли `source install/setup.bash` | `source ~/ros2_ws/install/setup.bash` |
| Узел печатает `started` и выходит | Забыли `spin()` | Добавить `rclpy.spin(node)` |
| `ros2 node list` пуст в TIAgo | Симуляция не запущена или не выполнен `source` | Запустить симуляцию, `source` в контейнере TIAgo |
| `rqt_graph` не открывается | Нет GUI-доступа (Xvfb/noVNC) | Открыть через noVNC (`http://localhost:6080`) или показать `ros2 node list` |

## План Б

Если контейнер TIAgo не запускается:

1. Показать схему подсистем и список узлов из [`3_Robot/TIAgo_humble/docs/tiago_architecture.md`](../3_Robot/TIAgo_humble/docs/tiago_architecture.md) как текст.
2. Показать типовой вывод `ros2 node info /DiffDriveController` (Subscribers `/cmd_vel`, Publishers `/odom`) как текст.
3. Полностью выполнить демонстрацию уровня 2 (создать и запустить узел, показать эффект без `spin()`).
4. Нарисовать граф узлов на доске: узел → Executor → callbacks → событие.

## Ссылки на материалы курса

- База знаний — [`../2_knowledge/nodes.md`](../2_knowledge/nodes.md).
- Практика — [`../2_practice/08_node.md`](../2_practice/08_node.md).
- Домашнее задание — [`../2_homework/hw_08_node.md`](../2_homework/hw_08_node.md).
- План занятия — [`../1_lecture/lecture_plan_08_node.md`](../1_lecture/lecture_plan_08_node.md).
- Вариант lecture-v2 — [`../1_lecture/lecture-v2_plan_08_node_v1.md`](../1_lecture/lecture-v2_plan_08_node_v1.md).

## Связь с роботом

- TIAgo — ~15 узлов с узкой ответственностью: `DiffDriveController` (привод базы), `joint_state_broadcaster` (`/joint_states`), `twist_mux` (приоритет скорости), `robot_state_publisher` (`/robot_description` и TF).
- Каждый узел — отдельный Executor со своими callbacks: таймеры, подписки, сервисы.
- Подробнее — [`3_Robot/TIAgo_humble/docs/tiago_architecture.md`](../3_Robot/TIAgo_humble/docs/tiago_architecture.md).
