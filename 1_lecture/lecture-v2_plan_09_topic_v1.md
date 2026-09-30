# Занятие 9 — план lecture-v2: Topic, publisher и subscriber

Содержание: [`lecture-v2_content_09_topic_v1.md`](lecture-v2_content_09_topic_v1.md). Слайды: [`../1_slides/lecture-v2_slides_09_topic_v1.md`](../1_slides/lecture-v2_slides_09_topic_v1.md).

## Цель

Студент строит поток сообщений между Python-узлами, выбирает существующий тип и проверяет graph со стороны CLI.

## Подготовка

- Dev Container Jazzy собран; `rclpy`, `std_msgs`, `colcon` доступны.
- Подготовить чистый workspace `~/ros2_ws` или уточнить, продолжает ли группа пакет с прошлого занятия.
- Для уровня 3 проверить симуляцию TIAGo и текущие фактические topic names/endpoints.
- Для движения в симуляции подготовить остановочную команду; к реальному роботу публиковать velocity запрещено.

## Тайминг

| Время | Часть | Результат |
| --- | --- | --- |
| 0–40 | Лекция | Понятна структура topic и typed message. |
| 40–80 | Практика | Talker/listener обмениваются строками; CLI показывает graph. |
| 80–120 | TIAGo | Сенсорные и командные topics отнесены к подсистемам. |

## Уровень 1 — лекция (0–40)

| Минуты | Блок | Объяснить / показать | Проверка |
| --- | --- | --- | --- |
| 0–5 | Задача потока | Камера/лидар публикует много измерений, несколько узлов читают их | Почему не вызывать потребителя напрямую? |
| 5–12 | Topic, publisher, subscriber | Канал и endpoints; направление сообщений | Нарисовать sender → channel → readers. |
| 12–18 | Many-to-many | Один publisher → много subscribers; не путать с функцией | Назвать два потребителя `/scan`. |
| 18–25 | Тип сообщения | `String`, `Twist`, `LaserScan`; структура как контракт | Как посмотреть поля `String`? |
| 25–31 | Минимальный код | create_publisher, publish, subscription callback | Где вызывается callback? |
| 31–36 | CLI и имя | list/type/info/echo/hz; absolute vs relative | Найти type и endpoints. |
| 36–40 | Граница безопасного управления | `/cmd_vel` может двигать платформу | В какой среде допустим test pub? |

## Уровень 2 — практика (40–80)

Инструкция: [`../2_practice/practice-v2_09_topic_v1.md`](../2_practice/practice-v2_09_topic_v1.md).

| Время | Работа | Проверка |
| --- | --- | --- |
| 40–45 | Создать `topic_demo_pkg` генератором | Package появляется в `src/`. |
| 45–55 | Добавить publisher code и entry point | Code syntax/type correct. |
| 55–64 | Добавить subscriber code and callback | Subscriber stores/logs `String.data`. |
| 64–69 | Build, source, run both nodes | Listener hears publisher. |
| 69–76 | CLI: `list -t`, `info`, `echo`, `hz`, `interface show` | Type/endpoints/content interpreted. |
| 76–80 | Manual publish/exit ticket | CLI injects one test message; no motor topic. |

## Уровень 3 — TIAGo (80–120)

| Минуты | Действие | Условие |
| --- | --- | --- |
| 80–88 | Открыть ROS Graph/список topics | Симуляция уже работает, используем read-only команды. |
| 88–98 | Найти LiDAR/odom/joint state | Фактические topic names подтверждаются списком. |
| 98–105 | Сопоставить type и потребителей | Проверить через `ros2 topic info --verbose`. |
| 105–113 | Показать `Twist` CLI message | Не публиковать в командный topic до проверки симуляции. |
| 113–118 | Демонстрационный motion, только если среда готова | Низкая скорость и заранее подготовленная остановка. |
| 118–120 | Exit ticket | Как узнать, кто получает сообщение? |

Если среда движения не изолирована, не проводить motion test: разбирать graph статически.

## Домашняя работа и план Б

ДЗ: [`../2_homework/homework-v2_09_topic_v1.md`](../2_homework/homework-v2_09_topic_v1.md). Если CLI/контейнер недоступен, студенты разбирают подготовленный вывод и проверяют код в practice file; ROS 2 на host не устанавливают.

Материалы: [`../2_knowledge/topics.md`](../2_knowledge/topics.md), [`../1_demo/demo_09_topics.md`](../1_demo/demo_09_topics.md), ROS 2 Jazzy topic tutorial.
