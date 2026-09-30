# Демонстрация: service server и client

## Цель

Показать service server и client на Python (сложение двух чисел через `example_interfaces/srv/AddTwoInts`) и вызов из CLI (`ros2 service list/type/call/find`). В кейсе робота — разобрать service TIAgo и провести смелые тесты: вызов `/emergency_stop`, вызов service на несуществующий server, полный цикл «едет → стоп → возврат в норму».

## Подготовка до занятия

1. Dev Container уровня 2 открыт и готов (`.devcontainer/`, Ubuntu 24.04 + ROS2 Jazzy).
2. Workspace `~/ros2_ws` собран, `source ~/ros2_ws/install/setup.bash` выполнен.
3. Пакет `my_service_pkg` с узлами `add_two_ints_server`/`add_two_ints_client` подготовлен заранее (код — в [`../2_practice/10_service.md`](../2_practice/10_service.md)).
4. Для кейса уровня 3 — контейнер `3_Robot/TIAgo_humble/` с запущенной симуляцией (`is_public_sim:=True`), либо подготовлен план Б.
5. Три терминала: два для уровня 2, один для кейса TIAgo.

## Контейнер

- Уровень 2: Dev Container `.devcontainer/` — запуск server/client, проверка из CLI.
- Уровень 3: контейнер `3_Robot/TIAgo_humble/` — services робота и смелые тесты.

## Контекст для студентов

> «Topic из прошлого занятия вещает без ответа. Но есть команды, где нужен ответ и подтверждение: "останови робота", "какое состояние батареи?". Сейчас мы увидим service — запрос и ответ. А потом вызовем аварийную остановку TIAgo как service.»

## Что показать

### 1. Service server и client (уровень 2)

Терминал 1:

```bash
cd ~/ros2_ws && source install/setup.bash
ros2 run my_service_pkg add_two_ints_server
```

Терминал 2:

```bash
cd ~/ros2_ws && source install/setup.bash
ros2 run my_service_pkg add_two_ints_client
```

**Что сказать**: «`add_two_ints_client` отправляет запрос `5 + 3` и ждёт ответ. Server в callback вычисляет сумму и возвращает `8`. Клиент печатает `Result: 8`. Один запрос — один ответ, связь завершена.»

### 2. Проверить из CLI

Терминал 3 (уровень 2), пока server работает:

```bash
ros2 service list -t
ros2 service type /add_two_ints
ros2 service call /add_two_ints example_interfaces/srv/AddTwoInts "{a: 2, b: 3}"
ros2 service find example_interfaces/srv/AddTwoInts
```

**Что сказать**: «`ros2 service call` — ручной вызов любого service без написания Python. Видим `sum=5`. `find` находит все services с заданным типом.»

### 3. Вызов service на несуществующий server (уровень 2)

```bash
ros2 service type /nonexistent_service
ros2 service call /add_two_ints example_interfaces/srv/AddTwoInts "{a: 1, b: 2}"
```

**Что сказать**: «`ros2 service type` на несуществующее имя сразу печатает ошибку. А `ros2 service call` с типом, но без запущенного server, зависает в ожидании — ответа нет, пока server не появится. Это и есть причина `wait_for_service()` в коде.»

Возврат в норму: `Ctrl+C`.

### 4. Вызов `/emergency_stop` (уровень 3, только в симуляции)

В контейнере TIAgo (симуляция запущена):

```bash
ros2 service list | grep -i stop
ros2 service type /emergency_stop
ros2 service call /emergency_stop std_srvs/srv/Trigger "{}"
```

**Что сказать**: «Аварийная остановка — это service. Вызов возвращает ответ, а `twist_mux` поднимает приоритет до максимума: робот не едет ни при каких обстоятельствах. Только в симуляции.»

Возврат в норму: перезапустить симуляцию (`Ctrl+C`, затем `ros2 launch tiago_gazebo tiago_gazebo.launch.py is_public_sim:=True`).

### 5. Стоп и возврат в норму (уровень 3, только в симуляции)

```bash
# 1. робот едет
ros2 topic pub /cmd_vel geometry_msgs/msg/Twist "{linear: {x: 0.2}, angular: {z: 0.0}}" --rate 10

# 2. стоп по service
ros2 service call /emergency_stop std_srvs/srv/Trigger "{}"

# 3. возврат в норму
Ctrl+C
ros2 topic pub /cmd_vel geometry_msgs/msg/Twist "{linear: {x: 0.0}, angular: {z: 0.0}}" --once
```

**Что сказать**: «Полный цикл: команда скорости двигает робота, service останавливает его, нулевая скорость сбрасывает остаток. Движение — данные в topic, остановка — команда через service.»

## Что сказать

- «Service — модель запроса и ответа. Ответ можно получить, если server доступен и успешно обработал запрос; при недоступности нужен timeout/error handling.»
- «Server обрабатывает запрос в callback и возвращает response. Client отправляет request и ждёт.»
- «`ros2 service call` — ручной вызов service, чтобы увидеть ответ без написания кода.»
- «Клиент должен дождаться готовности server — иначе вызов уйдёт в пустоту.»
- «Аварийная остановка TIAgo — это service `/emergency_stop`, а не topic.»

## Ожидаемый результат

- `add_two_ints_server` и `add_two_ints_client` обмениваются запросом и ответом: `Result: 8`.
- `ros2 service call` возвращает `sum=5`; `ros2 service find` показывает `/add_two_ints`.
- `ros2 service type /nonexistent_service` печатает ошибку; `ros2 service call` без server зависает.
- В TIAgo: `ros2 service call /emergency_stop std_srvs/srv/Trigger "{}"` останавливает робота.

## Типичные проблемы

| Симптом | Причина | Исправление |
| --- | --- | --- |
| `ros2 run` — «Package not found» | Забыли `source install/setup.bash` | `source ~/ros2_ws/install/setup.bash` |
| Client вечно печатает `waiting for service...` | Server не запущен или имя различается | Запустить server, сверить `add_two_ints` |
| `ros2 service call` возвращает `0` | Неправильные имена полей запроса | Сверить `a`, `b` (не `x`, `y`) |
| `ros2 service list` пуст в TIAgo | Симуляция не запущена или не выполнен `source` | Запустить симуляцию, `source` в контейнере TIAgo |
| `/emergency_stop` не найден | Имя service отличается | Искать по `ros2 service list \| grep -i stop` |

## План Б

Если контейнер TIAgo не запускается:

1. Показать таблицу services TIAgo и схему E-stop из [`3_Robot/TIAgo_humble/docs/safety.md`](../3_Robot/TIAgo_humble/docs/safety.md) как текст.
2. Показать типовой вывод `ros2 service call /emergency_stop std_srvs/srv/Trigger "{}"` как пример.
3. Полностью выполнить демонстрацию уровня 2 (server/client + CLI).
4. Выполнить тест «несуществующий server» в контейнере уровня 2 — он не требует симуляции.
5. Нарисовать на доске: client → `/emergency_stop` → `twist_mux` → блокировка `/cmd_vel`.

## Ссылки на материалы курса

- База знаний — [`../2_knowledge/services.md`](../2_knowledge/services.md).
- Практика — [`../2_practice/10_service.md`](../2_practice/10_service.md).
- Домашнее задание — [`../2_homework/hw_10_service.md`](../2_homework/hw_10_service.md).
- План занятия — [`../1_lecture/lecture_plan_10_service.md`](../1_lecture/lecture_plan_10_service.md).
- Вариант lecture-v2 — [`../1_lecture/lecture-v2_plan_10_service_v1.md`](../1_lecture/lecture-v2_plan_10_service_v1.md).

## Связь с роботом

- `/emergency_stop` (`std_srvs/srv/Trigger`) — аварийная остановка: поднимает приоритет `twist_mux` до максимума.
- `/controller_manager/list_controllers` и `/controller_manager/switch_controller` (`controller_manager_msgs`) — управление контроллерами приводов через `ros2_control`.
- Подробнее — [`3_Robot/TIAgo_humble/docs/safety.md`](../3_Robot/TIAgo_humble/docs/safety.md) и [`3_Robot/TIAgo_humble/docs/ros2_control.md`](../3_Robot/TIAgo_humble/docs/ros2_control.md).
