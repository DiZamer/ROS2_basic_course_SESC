# Содержание занятия 9 · lecture-v2

## Паспорт и результат

Тема: topic, publisher, subscriber и message types. Студент создаёт поток typed messages между узлами и проверяет его ROS 2 CLI.

К концу занятия студент:

- объясняет topic как именованный поток сообщений;
- различает publisher, subscriber и message type;
- пишет минимальные узлы publisher/subscriber на Python;
- проверяет имя, тип, endpoints, содержимое и частоту через CLI;
- понимает, что совместимость требует согласованных типов и совместимых QoS;
- выбирает безопасный сценарий публикации команды только в изолированной симуляции.

## Простая модель

**Аналогия:** topic — канал, в который публикуют сообщения, а подписчики их читают. В отличие от чата свободного текста, ROS 2-сообщение имеет определённую структуру и тип.

```text
talker ──publish String──> /chatter ──subscribe String──> listener
                                  └──> ros2 topic echo
```

Publisher и subscriber не вызывают друг друга как обычные функции. Они используют согласованные имя и тип интерфейса; middleware находит совместимые endpoints.

## Message type — форма данных

| Type | Пример назначения |
| --- | --- |
| `std_msgs/msg/String` | простой текстовый статус/учебный пример |
| `geometry_msgs/msg/Twist` | линейная и угловая скорость |
| `sensor_msgs/msg/LaserScan` | данные 2D-лидара |
| `nav_msgs/msg/Odometry` | оценка положения и скорости |

Тип — это контракт структуры, а не гарантия единиц или корректности значения. Например, физический смысл полей определяется интерфейсом и договорённостью приложения.

## Жизненный цикл сообщения

```text
Node создаёт Publisher
      ↓
Собирает объект сообщения заданного типа
      ↓ publish(msg)
Middleware передаёт совместимым Subscribers
      ↓
Callback каждого Subscriber обрабатывает сообщение
```

Один publisher может иметь несколько subscribers; один topic может иметь несколько publishers. Совпадение имени и типа необходимо, QoS тоже должен быть совместим.

## Минимальный код

Publisher отправляет сообщение раз в секунду:

```python
msg = String()
msg.data = 'robot ready'
self.publisher.publish(msg)
```

Subscriber получает его в callback:

```python
def callback(self, msg):
    self.get_logger().info(f'I heard: {msg.data}')
```

В полном примере узлы находятся в practice package и запускаются отдельно.

## CLI — наблюдатель графа

```bash
ros2 topic list -t
ros2 topic info /chatter --verbose
ros2 topic echo /chatter
ros2 topic hz /chatter
ros2 interface show std_msgs/msg/String
```

- `list` — какие topics объявлены;
- `info` — type и endpoints;
- `echo` — увидеть сообщения;
- `hz` — оценить частоту;
- `interface show` — прочитать поля типа.

## ROS names и namespace

`/chatter` — absolute name. `chatter` — relative name, который может получить namespace узла. При отладке сверяй полное имя из `ros2 topic list` с тем, которое использует код.

Пока не углубляем QoS policies: фиксируем, что типы должны совпадать, а настройки доставки могут мешать обмену; QoS подробно рассматривается позже.

## Уровни занятия

- **Уровень 1:** объяснить схему publisher → topic → subscribers и коротко показать тип.
- **Уровень 2:** создать Python package с talker/listener; проверить CLI.
- **Уровень 3:** связать `/scan`, `/odom`, `/cmd_vel` и `/joint_states` с подсистемами TIAGo. Все команды движения — только в симуляции, после проверки действительного subscriber endpoint.
- **ДЗ:** добавить publisher/subscriber в личную модель.

## Безопасная граница движения

`/cmd_vel` может управлять базой. Перед любой публикацией выясни, к какому endpoint подключён topic и в какой среде выполняется команда. Не публикуй команду движения на реальном роботе; в симуляции сначала подготовь остановочную команду.

## Типичные ошибки

| Симптом | Проверить |
| --- | --- |
| Нет соединения | Полное имя topic, type, domain, QoS. |
| `ros2 topic echo` молчит | Есть ли publisher и совместимый endpoint в `topic info`. |
| Topic не тот | Absolute/relative name и namespace. |
| База начала движение | Немедленно прекратить команду; такой тест допустим только в симуляции. |

## Источники и материалы

- [ROS 2 Jazzy: Topics](https://docs.ros.org/en/jazzy/Concepts/Basic/About-Topics.html)
- [Writing a simple publisher and subscriber (Python)](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Publisher-And-Subscriber.html)
- [Understanding ROS 2 topics](https://docs.ros.org/en/jazzy/Tutorials/Beginner-CLI-Tools/Understanding-ROS2-Topics/Understanding-ROS2-Topics.html)
- [`topics.md`](../2_knowledge/topics.md)
- [Практика](../2_practice/practice-v2_09_topic_v1.md)
