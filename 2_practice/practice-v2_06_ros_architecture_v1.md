# Практика-v2 06: увидеть ROS Graph и изоляцию domain

## Цель

В контейнере ROS 2 Jazzy запустить talker/listener, увидеть их в graph и проверить, что разные `ROS_DOMAIN_ID` разделяют системы.

## Предварительные требования

- Общий Dev Container уровня 2; ROS 2 Jazzy и demo nodes установлены.
- Все команды ниже выполняются внутри контейнера.
- Откройте три терминала контейнера. Перед тестом не запускайте другие talker/listener в используемых доменах.

## Что получится

- Talker и listener видны в одном домене.
- `rqt_graph` показывает `/chatter` или CLI подтверждает topic.
- Listener в домене 41 не получает сообщения от talker домена 40.

## Шаг 1. Проверить окружение (5 минут)

```bash
printenv ROS_DISTRO
printenv RMW_IMPLEMENTATION
ros2 doctor --report
```

Пустой `RMW_IMPLEMENTATION` означает использование настроенного по умолчанию RMW, а не отсутствие middleware.

## Шаг 2. Запустить talker в домене 40 (8 минут)

В терминале 1:

```bash
ROS_DOMAIN_ID=40 ros2 run demo_nodes_cpp talker
```

Ожидаемый результат: узел периодически публикует сообщения `Hello World`.

## Шаг 3. Подключить listener в том же домене (8 минут)

В терминале 2:

```bash
ROS_DOMAIN_ID=40 ros2 run demo_nodes_py listener
```

Ожидаемый результат: listener получает опубликованные строки.

В терминале 3 откройте новую shell-сессию внутри контейнера с доменом 40 и проверьте graph:

```bash
export ROS_DOMAIN_ID=40
ros2 node list
ros2 topic list
ros2 topic info /chatter
```

Узлы и topic могут отображаться с префиксами имён, например `/talker` и `/listener`.

## Шаг 4. Проверить изоляцию (8 минут)

Остановите listener в терминале 2 (`Ctrl+C`). Запустите его в домене 41:

```bash
ROS_DOMAIN_ID=41 ros2 run demo_nodes_py listener
```

Ожидаемый результат: listener не получает сообщения от talker домена 40. Это тест домена при одинаковом RMW, а не проверка несовместимости DDS-вендоров.

## Шаг 5. Вернуть согласованные настройки и очистить процессы (6 минут)

Остановите listener домена 41. Запустите listener в домене 40 и убедитесь, что данные снова поступают.

Остановите оба узла через `Ctrl+C`. Если CLI перестал видеть узлы после смены домена, остановите локальный ROS daemon в том же домене:

```bash
ROS_DOMAIN_ID=40 ros2 daemon stop
ROS_DOMAIN_ID=41 ros2 daemon stop
```

Daemon stop очищает кэш CLI; он не останавливает talker/listener. Узлы следует завершить отдельно.

## Шаг 6. Нарисовать граф (5 минут)

Если GUI доступен:

```bash
ROS_DOMAIN_ID=40 rqt_graph
```

Если GUI недоступен, нарисуйте:

```text
/talker ──publishes String──> /chatter ──subscribes──> /listener
```

## Проверка результата

| Проверка | Результат |
| --- | --- |
| Один домен | Listener получает chatter. |
| Разные домены | Listener домена 41 не получает chatter домена 40. |
| Graph | Видны два узла и topic либо схема нарисована вручную. |
| Очистка | Процессы talker/listener остановлены. |

## Вопросы

1. Что показывает ROS Graph?
2. Какую задачу выполняют RMW и DDS?
3. Почему изменение домена только у одного узла разрывает discovery?
4. Почему тест с разными RMW не следует трактовать как гарантированное отсутствие совместимости?

## Типичные ошибки

| Симптом | Причина | Исправление |
| --- | --- | --- |
| Listener молчит в домене 40 | Talker не запущен или домен отличается | Проверить оба терминала и переменную окружения. |
| `ros2 node list` показывает старое состояние | CLI daemon хранит сведения другого domain | Выполнить `ROS_DOMAIN_ID=N ros2 daemon stop`, повторить команду. |
| Смешались чужие тестовые узлы | Другой процесс использует те же имена/topic/domain | Выбрать свободный безопасный domain ID и закрыть свои прошлые процессы. |

## Ссылки

- Содержание: [`../1_lecture/lecture-v2_content_06_ros_architecture_v1.md`](../1_lecture/lecture-v2_content_06_ros_architecture_v1.md).
- План: [`../1_lecture/lecture-v2_plan_06_ros_architecture_v1.md`](../1_lecture/lecture-v2_plan_06_ros_architecture_v1.md).
- ДЗ: [`../2_homework/homework-v2_06_ros_architecture_v1.md`](../2_homework/homework-v2_06_ros_architecture_v1.md).
- [ROS 2 Domain ID](https://docs.ros.org/en/jazzy/Concepts/Intermediate/About-Domain-ID.html)
