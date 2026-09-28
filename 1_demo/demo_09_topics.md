# Демонстрация: topic, publisher, subscriber и message types

## Цель

Показать publisher и subscriber на Python, обмен `std_msgs/msg/String` и проверку из CLI (`ros2 topic echo/hz/info/pub`). В кейсе робота — разобрать topics TIAgo (`/cmd_vel`, `/odom`, `/scan`) и провести смелые тесты: прямая команда в `/cmd_vel`, заглушение `/scan`, конфликт источников через `twist_mux`.

## Подготовка до занятия

1. Dev Container уровня 2 открыт и готов (`.devcontainer/`, Ubuntu 24.04 + ROS2 Jazzy).
2. Workspace `~/ros2_ws` собран, `source ~/ros2_ws/install/setup.bash` выполнен.
3. Пакет `my_topic_pkg` с узлами `talker`/`listener` подготовлен заранее (код — в [`../2_practice/09_topic.md`](../2_practice/09_topic.md)).
4. Для кейса уровня 3 — контейнер `3_Robot/TIAgo_humble/` с запущенной симуляцией (`is_public_sim:=True`), либо подготовлен план Б.
5. Три терминала: два для уровня 2, один для кейса TIAgo.

## Контейнер

- Уровень 2: Dev Container `.devcontainer/` — запуск `talker`/`listener`, проверка из CLI.
- Уровень 3: контейнер `3_Robot/TIAgo_humble/` — topics робота и смелые тесты.

## Контекст для студентов

> «Узел из прошлого занятия пока "молчит" — он не публикует и не читает данные. Сейчас мы свяжем узлы через topic: один публикует, другой подписывается. А потом увидим, что движение TIAgo — это просто данные в `/cmd_vel`.»

## Что показать

### 1. Publisher и subscriber (уровень 2)

Терминал 1:

```bash
cd ~/ros2_ws && source install/setup.bash
ros2 run my_topic_pkg talker
```

Терминал 2:

```bash
cd ~/ros2_ws && source install/setup.bash
ros2 run my_topic_pkg listener
```

**Что сказать**: «`talker` публикует строку в `/chatter` раз в секунду, `listener` подписан и печатает её. Они не знают друг о друге — только об имени канала и типе.»

### 2. Проверить из CLI

Терминал 3 (уровень 2):

```bash
ros2 topic list -t
ros2 topic echo /chatter
ros2 topic hz /chatter
ros2 topic info /chatter --verbose
```

**Что сказать**: «`echo` читает канал, `hz` считает частоту, `info` показывает тип и число отправителей/получателей. Всё это можно делать без написания своего узла.»

### 3. Публикация из CLI

Остановите `talker` (`Ctrl+C`), оставьте `listener`:

```bash
ros2 topic pub --once /chatter std_msgs/msg/String "data: 'Hello from CLI'"
```

**Что сказать**: «`listener` напечатал сообщение, хотя `talker` остановлен. `ros2 topic pub` — ручная вставка сообщения в канал.»

### 4. Прямая команда в `/cmd_vel` (уровень 3, только в симуляции)

В контейнере TIAgo (симуляция запущена):

```bash
ros2 topic list | grep cmd
ros2 topic info /cmd_vel --verbose
ros2 topic pub /cmd_vel geometry_msgs/msg/Twist "{linear: {x: 0.2}, angular: {z: 0.0}}" --rate 10
```

**Что сказать**: «Движение — это просто данные в topic. Мы публикуем `Twist` со скоростью 0.2 м/с — и робот в Gazebo едет вперёд. Остановим нулевой скоростью.»

Возврат в норму:

```bash
ros2 topic pub /cmd_vel geometry_msgs/msg/Twist "{linear: {x: 0.0}, angular: {z: 0.0}}" --once
```

### 5. Заглушить `/scan`

```bash
ros2 topic echo /scan --once
ros2 topic hz /scan
```

**Что сказать**: «Лидар публикует измерения ~10 раз в секунду. Если остановить публикатор `/scan`, частота упадёт до 0 — SLAM и визуализатор "слепнут". Возврат в норму — перезапустить симуляцию.»

### 6. Конфликт источников через `twist_mux` (уровень 3, только в симуляции)

```bash
ros2 topic info /cmd_vel --verbose
ros2 topic list | grep cmd_vel
rqt_graph
```

**Что сказать**: «`twist_mux` получает команды скорости от Nav2, телеопа и джойстика и пропускает одну по приоритету. Если публиковать в разные входы одновременно, побеждает источник с более высоким приоритетом. Это слой безопасности — только в симуляции, не на реальном ровере без инструктора.»

## Что сказать

- «Topic — именованный канал с фиксированным типом сообщений.»
- «Publisher и subscriber не знают друг о друге — только имя канала и тип.»
- «`ros2 topic pub` — ручная вставка сообщения, чтобы посмотреть, как реагирует система.»
- «Движение TIAgo — это `Twist` в `/cmd_vel`; картина вокруг — `LaserScan` в `/scan`.»
- «`twist_mux` выбирает, чья команда скорости победит, — это слой безопасности.»

## Ожидаемый результат

- `talker` и `listener` обмениваются строками; `ros2 topic echo` видит их.
- `ros2 topic hz /chatter` даёт `average rate: 1.000`.
- `ros2 topic pub --once` доставляет сообщение в работающий `listener`.
- В TIAgo: публикация в `/cmd_vel` двигает робота; `ros2 topic info /cmd_vel --verbose` показывает тип `Twist` и QoS; `rqt_graph` показывает `twist_mux` между издателями и приводом.

## Типичные проблемы

| Симптом | Причина | Исправление |
| --- | --- | --- |
| `ros2 run` — «Package not found» | Забыли `source install/setup.bash` | `source ~/ros2_ws/install/setup.bash` |
| `listener` молчит | Разные имена topic или типы | Сверить `chatter` и `String` |
| `ros2 topic list` пуст в TIAgo | Симуляция не запущена или не выполнен `source` | Запустить симуляцию, `source` в контейнере TIAgo |
| Робот не едет от `/cmd_vel` | Не тот тип или нет subscriber'а | `ros2 topic info /cmd_vel --verbose`, проверить `geometry_msgs/msg/Twist` |
| `rqt_graph` не открывается | Нет GUI-доступа (Xvfb/noVNC) | Открыть через noVNC (`http://localhost:6080`) или показать `ros2 topic list` |

## План Б

Если контейнер TIAgo не запускается:

1. Показать таблицу topics TIAgo (`/cmd_vel`, `/odom`, `/scan`, `/joint_states`) и схему `twist_mux` из [`3_Robot/TIAgo_humble/docs/tiago_architecture.md`](../../3_Robot/TIAgo_humble/docs/tiago_architecture.md) как текст.
2. Показать типовой вывод `ros2 topic info /cmd_vel --verbose` (тип `Twist`, QoS `RELIABLE`) как текст.
3. Полностью выполнить демонстрацию уровня 2 (publisher/subscriber + CLI).
4. Нарисовать на доске: publisher → `/cmd_vel` → `twist_mux` → привод.

## Ссылки на материалы курса

- База знаний — [`../2_knowledge/topics.md`](../2_knowledge/topics.md).
- Практика — [`../2_practice/09_topic.md`](../2_practice/09_topic.md).
- Домашнее задание — [`../2_homework/hw_09_topic.md`](../2_homework/hw_09_topic.md).
- План занятия — [`../1_lecture/lecture_plan_09_topic.md`](../1_lecture/lecture_plan_09_topic.md).

## Связь с роботом

- `/scan` (`sensor_msgs/msg/LaserScan`) — лидар; читают SLAM, safety, rviz2.
- `/odom` (`nav_msgs/msg/Odometry`) — `DiffDriveController`.
- `/cmd_vel` (`geometry_msgs/msg/Twist`) — команды скорости: Nav2/teleop → `velocity_smoother` → `twist_mux` → `/cmd_vel_unstamped` → `DiffDriveController`.
- `twist_mux` — диспетчер скорости с 4 приоритетами (Nav2 < teleop < joy < E-stop).
- Подробнее — [`3_Robot/TIAgo_humble/docs/tiago_architecture.md`](../../3_Robot/TIAgo_humble/docs/tiago_architecture.md) и [`3_Robot/TIAgo_humble/docs/navigation.md`](../../3_Robot/TIAgo_humble/docs/navigation.md).
