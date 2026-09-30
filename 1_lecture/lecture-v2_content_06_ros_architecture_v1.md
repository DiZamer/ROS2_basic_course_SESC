# Содержание занятия 6 · lecture-v2

## Паспорт и результат

Занятие 6 открывает практическое изучение ROS 2. Студент объясняет, как программы робота связаны в ROS Graph и какие слои участвуют в обмене сообщениями.

К концу занятия студент:

- отличает ROS 2 от операционной системы и отдельной библиотеки;
- показывает node, topic и связь между ними на схеме;
- на базовом уровне различает ROS client API, RMW и DDS;
- знает назначение discovery и `ROS_DOMAIN_ID`;
- читает простой ROS Graph через CLI и `rqt_graph`.

Формат: уровень 1 — 40 минут; уровень 2 — 40 минут; уровень 3 — 40 минут; затем домашняя работа.

## Зачем нужна архитектурная модель

Робот — не одна программа. Камера, управление базой, локализация и навигация выполняются отдельными компонентами. ROS 2 даёт им общие способы обмена и запуска.

**Аналогия:** ROS 2 похож на городскую инфраструктуру, по которой взаимодействуют отдельные участники. Аналогия не означает, что ROS 2 сам выбирает маршрут робота или принимает инженерные решения.

## Слои ROS 2

```text
Логика программы: publish(msg), callback
                ↓
ROS client library / ROS API (например, rclpy)
                ↓
RMW — адаптер между ROS API и middleware
                ↓
DDS implementation — discovery, сериализация, доставка, QoS
                ↓
Локальная сеть / shared memory / другой транспорт
```

- **Node (узел)** — работающий компонент ROS 2 с именем и интерфейсами.
- **ROS Graph** — видимая сеть работающих узлов и их связей через topics, services и actions.
- **DDS** — стандарт и реализации middleware, которые обеспечивают обнаружение и обмен данными.
- **RMW** — ROS Middleware Interface: слой-адаптер, чтобы ROS API работал с выбранной реализацией middleware.
- `launch`, `tf2` и `colcon` входят в экосистему ROS 2, но не являются частями DDS или RMW.

## Модель сообщения

```text
sensor_node (publisher)
        │ publish LaserScan
        ▼
      /scan (topic)
        │ subscribe LaserScan
        ├──────────────► localization_node
        └──────────────► rviz2
```

Publisher и subscriber договариваются об имени интерфейса и совместимых настройках доставки. Внутренний транспорт скрыт за middleware.

## Discovery и `ROS_DOMAIN_ID`

**Discovery** — автоматическое обнаружение ROS-участников, разрешённое настройками сети и middleware. Это не гарантия, что любые машины и firewall обнаружат друг друга.

`ROS_DOMAIN_ID` отделяет логические ROS-группы в сети. Узлы одной группы используют согласованное значение; разные значения обычно изолируют discovery/data plane. Для учебных примеров используем `40` и `41`, а не меняем домен работающего TIAGo.

Разные RMW не следует преподавать как правило «всегда несовместимы»: связь зависит от выбранных реализаций, протокола и настройки. Для простого deterministic теста меняем `ROS_DOMAIN_ID`, сохраняя тот же RMW.

## Подсистемы робота

```text
Sensors → Perception → Navigation → Mobile Base
   └────────── ROS Graph / shared interfaces ───────────┘
Manipulation, Safety и Simulation связываются теми же механизмами.
```

Покажи робота как набор границ ответственности. Не своди весь граф TIAGo к одной схеме на этом первом занятии: детализация узлов и интерфейсов придёт в темах 7–11.

## Три уровня

- **Уровень 1:** схема слоёв и ROS Graph из двух-трёх узлов.
- **Уровень 2:** запускаемые `talker`/`listener`, CLI и тест изоляции доменов в контейнере Jazzy.
- **Уровень 3:** карта подсистем TIAGo; фактическая настройка Cyclone DDS в Humble-контейнере — через просмотр конфигурации, без эксперимента с работающими сервисами.
- **ДЗ:** нарисовать свою систему и определить, какие части модели общаются через ROS 2.

## Ошибки понимания

| Ошибка | Коррекция |
| --- | --- |
| «ROS 2 — операционная система» | Это набор библиотек и инструментов построения ROS-приложений. |
| «ROS Graph — схема исходников» | Это представление работающей системы и её интерфейсов. |
| «RMW сам передаёт байты по сети» | RMW связывает ROS API с выбранным middleware; конкретная реализация выполняет transport/discovery. |
| «Все компьютеры в сети автоматически видят друг друга» | Discovery зависит от domain, network, firewall и конфигурации middleware. |
| «Каждый вызов автоматически вызывает функцию соседа» | ROS 2 использует явные интерфейсы и передачу сообщений/запросов. |

## Источники и материалы курса

- [ROS 2 Jazzy Concepts](https://docs.ros.org/en/jazzy/Concepts.html)
- [Different middleware vendors](https://docs.ros.org/en/jazzy/Concepts/Intermediate/About-Different-Middleware-Vendors.html)
- [Discovery](https://docs.ros.org/en/jazzy/Concepts/Intermediate/About-Discovery.html)
- [Domain ID](https://docs.ros.org/en/jazzy/Concepts/Intermediate/About-Domain-ID.html)
- [`ros_architecture.md`](../2_knowledge/ros_architecture.md), [`dds_protocol.md`](../2_knowledge/dds_protocol.md), [`rmw.md`](../2_knowledge/rmw.md), [`discovery.md`](../2_knowledge/discovery.md)
- [`lecture-v2_plan_06_ros_architecture_v1.md`](lecture-v2_plan_06_ros_architecture_v1.md)
