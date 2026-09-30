# Занятие 11 — план lecture-v2: Action server и Action client

Содержание: [`lecture-v2_content_11_action_v1.md`](lecture-v2_content_11_action_v1.md). Слайды: [`../1_slides/lecture-v2_slides_11_action_v1.md`](../1_slides/lecture-v2_slides_11_action_v1.md).

## Цель

Студент реализует учебный Action Server, получает goal/feedback/result, а затем проверяет cancel на длинной учебной Fibonacci goal.

## Подготовка

- Dev Container Jazzy; `rclpy`, `example_interfaces`, `colcon` доступны.
- Проверить action server/client заранее по Jazzy tutorial.
- Подготовить запуск в двух-трёх terminal tabs.
- Уровень 3 проводить только на симуляции TIAGo; никакого goal реальному роботу.
- Из-за рубежа занятия 12 — повторить отличие topic/service/action.

## Тайминг 40+40+40

| Время | Уровень | Результат |
| --- | --- | --- |
| 0–40 | Лекция | Понятен жизненный цикл goal и четыре сообщения/статуса. |
| 40–80 | Практика | Fibonacci goal выполняется, выдаёт feedback и умеет принять cancel. |
| 80–120 | TIAGo | `/navigate_to_pose` рассмотрен как архитектурный action; goal отправляется только при готовой симуляции. |

## Уровень 1 — лекция, 0–40

| Минуты | Блок | Объяснить / показать | Проверка |
| --- | --- | --- | --- |
| 0–5 | Сценарий длительной задачи | Роботу надо доехать к цели; клиенту нужен прогресс | Почему service не показывает промежуточный ход? |
| 5–12 | Четыре понятия | Goal, feedback, result, cancel | Распределить четыре сообщения на схеме. |
| 12–19 | Lifecycle | Accepted → executing → succeeded/canceled/aborted | Что решает server? |
| 19–26 | Action Server | Goal callback, execute callback, feedback, cancel handling | Где надо проверять cancel? |
| 26–32 | Action Client | Отправка goal, feedback callback, получение result | Какие события получает client? |
| 32–36 | CLI | `list`, `info`, `send_goal --feedback`, Ctrl+C cancellation | Чем CLI остаётся client? |
| 36–40 | Interface choice | Topic/service/action decision table | Выбрать интерфейс для 3 кейсов. |

Ключевая реплика: «Cancel — запрос серверу, а не мгновенный аппаратный E-stop».

## Уровень 2 — практика, 40–80

Инструкция: [`../2_practice/practice-v2_11_action_v1.md`](../2_practice/practice-v2_11_action_v1.md).

| Минуты | Действие | Проверка |
| --- | --- | --- |
| 40–45 | Создать `action_demo_pkg` | Официальный package skeleton. |
| 45–58 | Добавить Fibonacci Action Server | Есть accept goal/cancel callbacks и execute loop с feedback. |
| 58–64 | Добавить короткий Python client | Goal отправлен, feedback/result читаются. |
| 64–70 | Собрать package | `colcon build`, source overlay. |
| 70–75 | Запустить server и CLI client | Feedback виден. |
| 75–78 | Отменить длинную goal через Ctrl+C | CLI отправляет cancel; server подтверждает `CANCELED`. |
| 78–80 | Exit ticket | Студент различает cancel и result. |

## Уровень 3 — TIAGo, 80–120

| Минуты | Действие | Условие/результат |
| --- | --- | --- |
| 80–87 | Показать `/navigate_to_pose` как интерфейс | Динамически проверить наличие и тип в graph. |
| 87–95 | Найти Action Server и подсистему Navigation | Сопоставить endpoint с planner/controller/behavior tree. |
| 95–105 | Если симуляция полностью готова — подготовить безопасную цель | Проверить локализацию, frame, карту, stop procedure. |
| 105–112 | Только с инструктором отправить goal/observe feedback | Не запускать на реальном роботе; остановить/cancel по протоколу. |
| 112–120 | Обсудить архитектуру | Goal — high-level navigation task, не motor low-level command. |

Если граф или симуляция не готовы, весь блок — чтение `navigation.md`, ожидаемых interfaces и схемы action flow.

## План Б и домашняя работа

- Нет action server: выполнить практику на Fibonacci package.
- Нет TIAGo: схема action из Nav2 и разбор документации.
- ДЗ: [`../2_homework/homework-v2_11_action_v1.md`](../2_homework/homework-v2_11_action_v1.md).
- На занятии 12 — зачёт по темам 6–11.

Источники: [ROS 2 Actions](https://docs.ros.org/en/jazzy/Concepts/Basic/About-Actions.html), [Python server/client tutorial](https://docs.ros.org/en/jazzy/Tutorials/Intermediate/Writing-an-Action-Server-Client/Py.html), [Nav2](https://docs.nav2.org/).
