# Занятие 10 — план lecture-v2: Service и client

Содержание: [`lecture-v2_content_10_service_v1.md`](lecture-v2_content_10_service_v1.md). Слайды: [`../1_slides/lecture-v2_slides_10_service_v1.md`](../1_slides/lecture-v2_slides_10_service_v1.md).

## Цель

Студент реализует простой Request/Response, вызывает service программно и из CLI, отличает его от topic/action.

## Подготовка

- Dev Container Jazzy готов; `rclpy`, `example_interfaces`, `colcon` доступны.
- Практика создаёт отдельный `service_demo_pkg`.
- Уровень 3 выполняется на уже работающей симуляции либо по подтверждённому списку services TIAGo.
- Не активировать E-stop на физическом роботе.

## Тайминг

| Время | Часть | Итог |
| --- | --- | --- |
| 0–40 | Лекция | Понятны server/client, request/response и ограничения. |
| 40–80 | Практика | AddTwoInts server/client работают, CLI получает ответ. |
| 80–120 | TIAGo | Изучены реальные services и их типы, без опасного вызова. |

## Уровень 1 — лекция (0–40)

| Минуты | Блок | Объяснить | Проверка |
| --- | --- | --- | --- |
| 0–5 | Topic не всегда подходит | Поток sensor data не отвечает на конкретный вопрос | «Как запросить текущую настройку?» |
| 5–12 | Service model | Client → request → server callback → response | Показать два направления. |
| 12–18 | Service type | AddTwoInts request fields и response field | Найти `sum`. |
| 18–25 | Server/client в rclpy | `create_service`, `create_client`, `call_async`, Future | Что происходит, если server не запущен? |
| 25–31 | CLI | list/type/call; наблюдение результата | Вручную запросить 5+3. |
| 31–36 | Ограничения | Короткая операция; timeout/availability; не блокировать callback | Когда выбрать Action? |
| 36–40 | Итог | Сравнить Topic/Service/Action | Выбрать интерфейс для трёх ситуаций. |

## Уровень 2 — практика

Инструкция: [`../2_practice/practice-v2_10_service_v1.md`](../2_practice/practice-v2_10_service_v1.md).

| Время | Действие | Проверка |
| --- | --- | --- |
| 40–45 | Создать `service_demo_pkg` официальным CLI | Package skeleton в `src`. |
| 45–54 | Добавить server и entry point | Callback заполняет `response.sum`. |
| 54–64 | Добавить client | Клиент ждёт server с timeout и отправляет запрос. |
| 64–70 | Сборка и source | Package виден в install. |
| 70–76 | Запустить server, client, проверить CLI | Результат `sum=8`. |
| 76–80 | Проверить тип/ошибки | Участник объясняет, почему server нужно запускать первым. |

## Уровень 3 — TIAGo (80–120)

| Минуты | Действие | Условие |
| --- | --- | --- |
| 80–88 | Найти services TIAGo | `ros2 service list -t` в контейнере Humble. |
| 88–98 | Изучить безопасный сервис статуса/контроллера | Сверить тип и назначение по package/config. |
| 98–108 | Обсудить emergency stop интерфейс | Только схема/код; запускать лишь в симуляции с инструктором. |
| 108–116 | Сопоставить service/topic/action | Привести пример из TIAGo для каждого. |
| 116–120 | Exit ticket | Выбрать интерфейс и объяснить ограничение. |

Не называть конкретный service доступным, пока он не найден в текущем графе и не подтверждён тип.

## План Б и домашняя работа

- Если TIAGo не запущен, разбирать `safety.md` и интерфейсный package статически.
- Если нет GUI, достаточно CLI.
- ДЗ: [`../2_homework/homework-v2_10_service_v1.md`](../2_homework/homework-v2_10_service_v1.md).

Источники: [Services concepts](https://docs.ros.org/en/jazzy/Concepts/Basic/About-Services.html), [Python service tutorial](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Service-And-Client.html).
