# Содержание занятия 10 · lecture-v2

## Паспорт и результат

Тема: service и client. Студент пишет простой сервер и клиент, отправляет запрос из CLI и понимает, когда запрос-ответ уместнее, чем поток topic.

## Результаты

- различает service server и client;
- объясняет Request и Response;
- создаёт `rclpy` service на `example_interfaces/srv/AddTwoInts`;
- вызывает его через асинхронный client и ROS 2 CLI;
- объясняет, что наличие service в интерфейсе не гарантирует, что сервер запущен или ответит;
- отличает короткий запрос-ответ от topic и длительного action.

## Простая модель

**Аналогия:** звонок в справочную. Клиент задаёт конкретный вопрос, сервер возвращает ответ. Аналогия не означает, что ответ гарантирован при отключённом сервере: client может ждать, завершиться по timeout или получить ошибку.

```text
client ── request ──> service server
client <─ response ── service server
```

Service — логический интерфейс Request/Response. ROS 2 передаёт запрос и ответ через middleware; service не является обычным локальным вызовом функции.

## Структура типа service

Например, `example_interfaces/srv/AddTwoInts` содержит:

```text
Request:  int64 a, int64 b
Response: int64 sum
```

Server реализует callback; client создаёт запрос и обрабатывает Future с ответом. В `rclpy` асинхронный метод `call_async()` возвращает объект Future.

## Короткий пример server callback

```python
def add_two_ints(self, request, response):
    response.sum = request.a + request.b
    return response
```

Чтобы callback был обработан, server node должен участвовать в работающем Executor, обычно через `rclpy.spin(node)`.

## Клиент и ожидание ответа

```python
client = node.create_client(AddTwoInts, '/add_two_ints')
client.wait_for_service(timeout_sec=2.0)
future = client.call_async(request)
```

Перед запросом проверь доступность server. Не блокируй callback через `spin_until_future_complete` на том же node: это может привести к deadlock.

## Как выбрать механизм связи

| Нужен… | Механизм | Пример |
| --- | --- | --- |
| Поток данных, несколько потребителей | Topic | `/scan` |
| Короткий ответ на конкретный запрос | Service | запросить параметры устройства |
| Длительная задача с прогрессом/отменой | Action | ехать к цели |

Не используй service для длительной задачи только потому, что она имеет client и server.

## CLI для исследования

```bash
ros2 service list -t
ros2 service type /add_two_ints
ros2 service call /add_two_ints example_interfaces/srv/AddTwoInts "{a: 5, b: 3}"
```

Ожидаемая логика: запрос 5 и 3 → response sum равен 8.

## Три уровня

- **Уровень 1:** request → callback → response; ограничение по длительности и доступности server.
- **Уровень 2:** AddTwoInts server/client в practice package и вызов из CLI.
- **Уровень 3:** изучить services TIAGo; реальный emergency stop не вызывать, допустим только в изолированной симуляции по инструкции преподавателя.
- **ДЗ:** добавить в модель простой service управления учебным сенсором.

## Типичные ошибки

| Ошибка | Коррекция |
| --- | --- |
| Client запущен первым и ждёт бесконечно | Использовать timeout/polling и сначала проверить, поднят ли server. |
| Service list есть, но ответа нет | Проверить server node, executor, domain и request type. |
| Клиент блокирует свой callback | Не вызывать `spin_until_future_complete` внутри callback того же node. |
| Считать service гарантированным ответом | Server может быть недоступен, ответ задержан или запрос завершится ошибкой. |

## Источники и материалы

- [ROS 2 Jazzy: Services](https://docs.ros.org/en/jazzy/Concepts/Basic/About-Services.html)
- [Writing a simple service and client (Python)](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Service-And-Client.html)
- [Understanding services CLI](https://docs.ros.org/en/jazzy/Tutorials/Beginner-CLI-Tools/Understanding-ROS2-Services/Understanding-ROS2-Services.html)
- [`services.md`](../2_knowledge/services.md)
