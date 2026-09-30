# Содержание занятия 11 · lecture-v2

## Паспорт и результат

Тема: ROS 2 actions для длительных задач. Студент объясняет жизненный цикл goal, читает feedback/result и понимает, кто обрабатывает запрос отмены.

## Результаты обучения

- объяснить разницу Topic, Service и Action;
- назвать Goal, Feedback, Result и Cancel;
- запустить Action Server для учебной длительной задачи;
- отправить goal CLI или Python ActionClient;
- наблюдать feedback и подтверждённый result;
- запросить отмену и проверить, что server корректно перешёл в canceled state.

## Когда нужен Action

Task может выполняться секунды или минуты. Клиенту важно отправить цель, наблюдать прогресс и иметь возможность попросить об отмене.

```text
Client ── goal ──> Server
Client <─ feedback ─ Server (0..N раз)
Client <─ result ─── Server
Client ── cancel ──> Server (пока goal выполняется)
```

**Аналогия:** доставка с отслеживанием — заказ, статусы, итог, возможность отменить. Но ROS Action ещё и задаёт типы данных и состояния протокола.

## Четыре части Action

| Элемент | Назначение | Пример навигации |
| --- | --- | --- |
| Goal | Запросить задачу | Доехать до координаты на карте. |
| Feedback | Сообщать промежуточный ход | Расстояние/этап навигации. |
| Result | Вернуть итог выполнения | Успешно, отменено или завершено с ошибкой. |
| Cancel | Запросить отмену активной goal | Клиент просит остановить навигационную задачу. |

Server решает, принять ли goal/cancel и как завершить работу. Запрос отмены сам по себе не мгновенно останавливает аппаратный привод: callback сервера обязан корректно обработать его.

## Серверный цикл

```text
ActionServer принимает goal
       ↓
Выполняет задачу шагами
       ├── публикует feedback
       ├── проверяет cancel request
       └── возвращает result со статусом
```

В `rclpy` callback должен периодически отдавать управление обработке событий. Для учебного сервера с паузами используется `ReentrantCallbackGroup` и `MultiThreadedExecutor`, чтобы сервер мог обработать cancel параллельно с выполнением.

## Учебный пример: Fibonacci

`example_interfaces/action/Fibonacci` содержит goal `order`, feedback `sequence` и result `sequence`. Это учебная задача с видимым прогрессом, а не алгоритм управления роботом.

Сокращённый фрагмент сервера:

```python
if goal_handle.is_cancel_requested:
    goal_handle.canceled()
    return Fibonacci.Result(sequence=sequence)

goal_handle.publish_feedback(
    Fibonacci.Feedback(sequence=sequence))
```

Для реального робота action goal представляет безопасную высокоуровневую задачу, а не прямую команду PWM.

## ROS CLI и отмена

```bash
ros2 action list -t
ros2 action info /fibonacci
ros2 action send_goal /fibonacci example_interfaces/action/Fibonacci "{order: 30}" --feedback
```

`Ctrl+C` в Jazzy CLI отправляет cancel активной goal, если она ещё выполняется. Server должен принять запрос, периодически проверить `is_cancel_requested`, вызвать `canceled()` и корректно завершить execute callback.

Для проверки обязательно использовать сервер, который реализует cancel callback. Иначе goal может продолжить выполняться до завершения.

## Выбор интерфейса

| Сценарий | Интерфейс | Почему |
| --- | --- | --- |
| Поток сканов LiDAR | Topic | Данные обновляются многократно, читают несколько узлов. |
| Запросить состояние контроллера | Service | Короткий запрос и короткий ответ. |
| Доехать до pose | Action | Длительная задача, есть прогресс и отмена. |

## Три уровня занятия

- **Уровень 1:** схема жизненного цикла Action и сравнение с topic/service.
- **Уровень 2:** Fibonacci action server, Python client и ROS CLI; тест отмены на учебной задаче.
- **Уровень 3:** `/navigate_to_pose` TIAGo как реальный тип длительной задачи; любое отправление goal — только в изолированной симуляции и под наблюдением.
- **ДЗ:** добавить в модель учебный Action workflow, не связывая его с физическим движением.

## Безопасность и границы

- Не отправлять `/navigate_to_pose` на реальный робот в рамках этого задания.
- Перед goal проверить endpoint/type и убедиться, что запущена учебная симуляция.
- `Ctrl+C` cancel в CLI не является аварийной остановкой привода.
- Для настоящей остановки используются отдельные safety mechanisms и их подтверждённый контракт.

## Источники

- [ROS 2 Jazzy: About Actions](https://docs.ros.org/en/jazzy/Concepts/Basic/About-Actions.html)
- [Writing an action server and client (Python)](https://docs.ros.org/en/jazzy/Tutorials/Intermediate/Writing-an-Action-Server-Client/Py.html)
- [ROS 2 examples: minimal Python Action Server](https://github.com/ros2/examples/tree/jazzy/rclpy/actions/minimal_action_server)
- [ROS 2 CLI: Understanding Actions](https://docs.ros.org/en/jazzy/Tutorials/Beginner-CLI-Tools/Understanding-ROS2-Actions/Understanding-ROS2-Actions.html)
- [`actions.md`](../2_knowledge/actions.md)
