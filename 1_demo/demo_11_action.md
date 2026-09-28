# Демонстрация: action server и action client

## Цель

Показать action server и action client на Python (длительная задача через `example_interfaces/action/Fibonacci`), поток feedback, отмену goal и result из CLI. В кейсе робота — отправить goal в `/navigate_to_pose` TIAgo, увидеть feedback, отменить goal и показать разницу topic/service/action на одном роботе.

## Подготовка до занятия

1. Dev Container уровня 2 открыт и готов (`.devcontainer/`, Ubuntu 24.04 + ROS2 Jazzy).
2. Workspace `~/ros2_ws` собран, `source ~/ros2_ws/install/setup.bash` выполнен.
3. Пакет `my_action_pkg` с узлами `fibonacci_action_server`/`fibonacci_action_client` подготовлен заранее (код — в [`../2_practice/11_action.md`](../2_practice/11_action.md)).
4. Для кейса уровня 3 — контейнер `3_Robot/TIAgo_humble/` с запущенной симуляцией и навигацией (`navigation:=True is_public_sim:=True`), либо подготовлен план Б.
5. Три терминала: два для уровня 2, один для кейса TIAgo.

## Контейнер

- Уровень 2: Dev Container `.devcontainer/` — запуск server/client, проверка из CLI.
- Уровень 3: контейнер `3_Robot/TIAgo_humble/` — action `/navigate_to_pose` и смелые тесты.

## Контекст для студентов

> «Topic вещает без ответа, service — мгновенный вопрос-ответ. А если задача длится минуты и нужно видеть прогресс и уметь отменить? Это action. Сейчас увидим goal, feedback, отмену и result на Fibonacci, а потом — на живом роботе TIAgo.»

## Что показать

### 1. Action server и client (уровень 2)

Терминал 1:

```bash
cd ~/ros2_ws && source install/setup.bash
ros2 run my_action_pkg fibonacci_action_server
```

Терминал 2:

```bash
cd ~/ros2_ws && source install/setup.bash
ros2 run my_action_pkg fibonacci_action_client
```

**Что сказать**: «Client отправляет goal `order=20`, server публикует feedback на каждом шаге. Client после трёх feedback вызывает `cancel_goal_async()` и получает частичный result. Вот весь жизненный цикл: goal → feedback → cancel → result.»

### 2. Проверить из CLI (уровень 2)

Пока server работает (перезапустите, если client его завершил), терминал 3:

```bash
ros2 action list -t
ros2 action info /fibonacci
ros2 action send_goal /fibonacci example_interfaces/action/Fibonacci "{order: 10}" --feedback
```

**Что сказать**: «`ros2 action send_goal --feedback` — увидеть весь жизненный цикл action без написания Python. Нажмём `Ctrl+C` — goal отменится, server остановит задачу.»

### 3. Внутренности action (уровень 2)

```bash
ros2 topic list | grep fibonacci
ros2 service list | grep fibonacci
```

**Что сказать**: «Action — не магия, а два топика (feedback, status) и три сервиса (send_goal, get_result, cancel_goal) под капотом.»

### 4. Goal в `/navigate_to_pose` (уровень 3, только в симуляции)

В контейнере TIAgo (симуляция с навигацией запущена, в RViz указан 2D Pose Estimate):

```bash
ros2 action info /navigate_to_pose

ros2 action send_goal /navigate_to_pose nav2_msgs/action/NavigateToPose \
  "{pose: {header: {frame_id: 'map'}, pose: {position: {x: 1.0, y: 0.0, z: 0.0}, orientation: {w: 1.0}}}}" \
  --feedback
```

**Что сказать**: «Goal — точка на карте. Feedback — оставшееся расстояние, робот едет к цели. Нажмём `Ctrl+C` — goal отменён, робот остановился. Навигация — это action.»

### 5. Topic vs service vs action на живом роботе (уровень 3, только в симуляции)

```bash
# topic — поток (скан лидара)
ros2 topic echo /scan_raw --once

# service — команда с ответом (аварийная остановка)
ros2 service call /emergency_stop std_srvs/srv/Trigger "{}"

# action — долгая задача с прогрессом (навигация)
ros2 action send_goal /navigate_to_pose nav2_msgs/action/NavigateToPose \
  "{pose: {header: {frame_id: 'map'}, pose: {position: {x: 1.0, y: 0.0, z: 0.0}, orientation: {w: 1.0}}}}" \
  --feedback
```

**Что сказать**: «Три механизма на одном роботе: `/scan_raw` — поток, `/emergency_stop` — мгновенный ответ, `/navigate_to_pose` — длительная задача с feedback и отменой.»

Возврат в норму: перезапустить симуляцию после E-stop (`Ctrl+C`, затем `ros2 launch tiago_gazebo tiago_gazebo.launch.py navigation:=True is_public_sim:=True`).

## Что сказать

- «Action — длительная задача: goal, feedback, result, cancel.»
- «Server публикует progress через `publish_feedback`, завершает задачу `succeed()` или `canceled()`.»
- «Client отправляет goal через `send_goal_async()` и обрабатывает goal-response, feedback и result.»
- «`ros2 action send_goal --feedback` — увидеть жизненный цикл action без кода.»
- «Навигация TIAgo — это action `/navigate_to_pose`: точка, дистанция, отмена.»

## Ожидаемый результат

- `fibonacci_action_client` видит `Goal accepted`, feedback, отмену и `Result`.
- `ros2 action send_goal ... --feedback` печатает поток feedback; `Ctrl+C` отменяет goal.
- `ros2 action list -t` показывает `/fibonacci [example_interfaces/action/Fibonacci]`.
- В TIAgo: `/navigate_to_pose` ведёт робота к цели с feedback дистанции; `Ctrl+C` останавливает робота.

## Типичные проблемы

| Симптом | Причина | Исправление |
| --- | --- | --- |
| `ros2 run` — «Package not found» | Забыли `source install/setup.bash` | `source ~/ros2_ws/install/setup.bash` |
| Cancel не срабатывает на server | Обычный `spin()` вместо `MultiThreadedExecutor` | `rclpy.spin(node, executor=MultiThreadedExecutor())` |
| `ros2 action send_goal` — «action not found» | Server не запущен или имя различается | Запустить server, сверить `fibonacci` |
| Goal отклонён в `/navigate_to_pose` | Нет карты/навигации или не указан pose | Указать 2D Pose Estimate, проверить `navigation:=True` |
| `ros2 action list` пуст в TIAgo | Симуляция/навигация не запущена | Запустить симуляцию с `navigation:=True` |

## План Б

Если контейнер TIAgo не запускается:

1. Показать таблицу actions TIAgo и схему навигации из [`3_Robot/TIAgo_humble/docs/navigation.md`](../../3_Robot/TIAgo_humble/docs/navigation.md) как текст.
2. Показать типовой вывод `ros2 action send_goal /navigate_to_pose ... --feedback` как пример.
3. Полностью выполнить демонстрацию уровня 2 (server/client + CLI + внутренности action).
4. Нарисовать на доске: client → goal → `/navigate_to_pose` → feedback (дистанция) → result; отмена по `Ctrl+C`.

## Ссылки на материалы курса

- База знаний — [`../2_knowledge/actions.md`](../2_knowledge/actions.md).
- Практика — [`../2_practice/11_action.md`](../2_practice/11_action.md).
- Домашнее задание — [`../2_homework/hw_11_action.md`](../2_homework/hw_11_action.md).
- План занятия — [`../1_lecture/lecture_plan_11_action.md`](../1_lecture/lecture_plan_11_action.md).

## Связь с роботом

- `/navigate_to_pose` (`nav2_msgs/action/NavigateToPose`) — навигация: goal — точка, feedback — дистанция, cancel — остановка.
- `/follow_path` (`nav2_msgs/action/FollowPath`) — движение по пути из waypoints.
- MoveIt2 planning (`moveit_msgs`) — планирование траектории руки.
- Подробнее — [`3_Robot/TIAgo_humble/docs/navigation.md`](../../3_Robot/TIAgo_humble/docs/navigation.md) и [`3_Robot/TIAgo_humble/docs/manipulation.md`](../../3_Robot/TIAgo_humble/docs/manipulation.md).
