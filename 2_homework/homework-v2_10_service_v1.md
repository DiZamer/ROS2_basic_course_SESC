# Домашняя работа-v2 10: service управления сенсором

## Цель

Добавить к своей ROS-модели короткий Request/Response для включения или отключения виртуального сенсорного компонента.

## Предварительные требования

- Личный workspace и package созданы в занятии 7.
- ROS 2 Jazzy запускается только в Dev Container.
- `std_srvs` доступен в контейнерном underlay.

## Шаг к модели

У модели появляется команда с подтверждением: client просит изменить режим сенсора, server возвращает результат. Это учебный state toggle, не управление физическим датчиком.

## Шаг 1. Подготовить package

Если `my_robot_core` уже есть, добавьте зависимость `std_srvs` в `package.xml`. Иначе создайте пакет официальным генератором:

```bash
cd ~/my_robot/ros2_ws/src
ros2 pkg create --build-type ament_python --license Apache-2.0 my_robot_core --dependencies rclpy std_srvs
```

## Шаг 2. Создать server

Создайте `my_robot_core/sensor_enable_server.py`:

```python
import rclpy
from rclpy.node import Node
from std_srvs.srv import SetBool


class SensorEnableServer(Node):
    def __init__(self):
        super().__init__('sensor_enable_server')
        self._enabled = False
        self._service = self.create_service(
            SetBool, '/sensor_enable', self._set_enabled)

    def _set_enabled(self, request, response):
        self._enabled = request.data
        response.success = True
        response.message = f'sensor enabled: {self._enabled}'
        self.get_logger().info(response.message)
        return response


def main(args=None):
    rclpy.init(args=args)
    node = SensorEnableServer()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
```

Добавьте console entry point:

```python
'sensor_enable_server = my_robot_core.sensor_enable_server:main',
```

## Шаг 3. Собрать и проверить

```bash
cd ~/my_robot/ros2_ws
colcon build --symlink-install --packages-select my_robot_core
source install/setup.bash
```

В терминале 1 запустите server:

```bash
ros2 run my_robot_core sensor_enable_server
```

В терминале 2 вызовите:

```bash
ros2 service type /sensor_enable
ros2 service call /sensor_enable std_srvs/srv/SetBool "{data: true}"
ros2 service call /sensor_enable std_srvs/srv/SetBool "{data: false}"
```

Ожидается `success: true` и сообщения о текущем режиме.

## Шаг 4. Записать контракт

В дневник добавьте service name/type, поля request/response и то, что в реальном драйвере нужно отдельно обработать аппаратную ошибку.

## Критерии выполнения

- Server отвечает на true и false.
- CLI показывает `std_srvs/srv/SetBool`.
- Service не используется для длительной работы с progress.
- Результат не заявляет, что физический датчик действительно включён.

## Вопросы для самопроверки

1. Что возвращает server помимо изменения внутреннего флага?
2. Как отличить ошибку service server от `success: false`?
3. Когда ту же задачу лучше оформить action?

## Связанные материалы

- [`../2_practice/practice-v2_10_service_v1.md`](../2_practice/practice-v2_10_service_v1.md)
- [`../2_knowledge/services.md`](../2_knowledge/services.md)
- [ROS 2 services](https://docs.ros.org/en/jazzy/Concepts/Basic/About-Services.html)
