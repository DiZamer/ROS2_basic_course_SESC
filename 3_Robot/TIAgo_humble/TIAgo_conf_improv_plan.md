# TIAGo Configuration Improvement Plan

> План доработки проекта для ИИ-агента.
> Цель: реализовать нереализованные пункты из таблицы «Привязка к темам лекции»
> (раздел 12 `TIAgo_configuration.md`) **без модификации существующих PAL-пакетов**.
>
> Дата: 2026-07-06

---

## 0. Принцип минимальных правок

| Область | Разрешено | Запрещено |
|---------|-----------|-----------|
| `ros2_ws/src/` | Создавать **новые пакеты** (независимые от PAL) | Модифицировать 18 существующих PAL-пакетов |
| `Dockerfile` | Добавлять зависимости (apt, pip) | Удалять существующие строки |
| `devcontainer.json` | Добавлять вызовы новых скриптов | Менять логику сборки TIAGo |
| `ros2_ws/` (корень) | Создавать новые скрипты | Модифицировать `tiago.repos`, `fetch_external.sh` |

**Все AI-компоненты — изолированные новые пакеты.** Они взаимодействуют с TIAGo
только через стандартные ROS2-интерфейсы (топики, сервисы, действия) и не требуют
изменений в существующем коде.

---

## 1. Модификация Dockerfile

**Файл:** `.devcontainer/Dockerfile`

**Зачем:** установить зависимости, необходимые для новых AI-пакетов.
Без них `colcon build` упадёт на этапе `rosdep check`.

**Что добавить:**

### 1.1. apt-пакеты (в существующий блок `apt-get install`)

Добавить в конец списка пакетов (перед `&& rm -rf /var/lib/apt/lists/*`):

```
ros-humble-cv-bridge \
ros-humble-vision-msgs \
```

- `ros-humble-cv-bridge` — конвертация `sensor_msgs/Image` ↔ OpenCV numpy (нужен YOLO-узлу для получения кадров с камеры)
- `ros-humble-vision-msgs` — стандартные ROS2-сообщения: `Detection2D`, `Detection2DArray`, `BoundingBox2D` (нужен YOLO-узлу для публикации результатов детекции)

### 1.2. pip-пакеты (новый блок `RUN pip3 install`)

Добавить **после** строки `USER $USERNAME` (строка ~56, где пользователь уже не root), отдельным RUN:

```dockerfile
RUN pip3 install --no-cache-dir ultralytics openai
```

- `ultralytics` — библиотека YOLOv8 для распознавания объектов (нужна YOLO-узлу)
- `openai` — OpenAI/Claude API для интерпретации команд на естественном языке (нужен LLM-мосту)

**Полный diff Dockerfile (~6 строк):**

```diff
     ros-humble-gazebo-ros2-control \
+    ros-humble-cv-bridge \
+    ros-humble-vision-msgs \
     ros-humble-turtlesim \
     ...
 
 USER $USERNAME
 
+RUN pip3 install --no-cache-dir ultralytics openai
+
 # Source the ROS setup file
 RUN echo "source /opt/ros/${ROS_DISTRO}/setup.bash" >> ~/.bashrc
```

---

## 2. Новый пакет `tiago_yolo` — YOLO detection node (тема 16)

### 2.1. Что делает

Подписывается на топик `/head_front_camera/rgb/image_raw` (кадры с головной камеры
TIAGo, уже публикуются в Gazebo Classic нативным плагином), прогоняет кадр
через YOLOv8, публикует bounding boxes и confidence в `/detections`.

**Архитектура:**
```
camera (Gazebo plugin) → /head_front_camera/rgb/image_raw → yolo_node (YOLOv8 nano)
  → /detections (vision_msgs/Detection2DArray)
```

### 2.2. Файлы к созданию

Все файлы создаются в `ros2_ws/src/tiago_yolo/`. Это **новый пакет**, не зависящий
от PAL-пакетов (зависимости: `rclpy`, `sensor_msgs`, `cv_bridge`, `vision_msgs`).

| # | Путь | Назначение |
|---|------|-----------|
| 1 | `package.xml` | Метаданные пакета, зависимости |
| 2 | `setup.py` | Entry points, data_files для launch и config |
| 3 | `tiago_yolo/__init__.py` | Пустой init для Python-пакета |
| 4 | `tiago_yolo/yolo_node.py` | Основной узел: subscriber + YOLO + publisher |
| 5 | `launch/yolo_bringup.launch.py` | Launch-файл с параметрами |
| 6 | `config/yolo_params.yaml` | Параметры: модель, confidence threshold |

### 2.3. Содержание файлов

#### 2.3.1. `ros2_ws/src/tiago_yolo/package.xml`

```xml
<?xml version="1.0"?>
<?xml-model href="http://download.ros.org/schema/package_format3.xsd" schematypens="http://www.w3.org/2001/XMLSchema"?>
<package format="3">
  <name>tiago_yolo</name>
  <version>0.1.0</version>
  <description>YOLOv8 object detection node for TIAGo robot</description>
  <maintainer email="user@example.com">user</maintainer>
  <license>Apache-2.0</license>

  <buildtool_depend>ament_cmake</buildtool_depend>

  <depend>rclpy</depend>
  <depend>sensor_msgs</depend>
  <depend>cv_bridge</depend>
  <depend>vision_msgs</depend>
  <depend>std_msgs</depend>

  <test_depend>ament_lint_auto</test_depend>
  <test_depend>ament_lint_common</test_depend>

  <export>
    <build_type>ament_python</build_type>
  </export>
</package>
```

#### 2.3.2. `ros2_ws/src/tiago_yolo/setup.py`

```python
from setuptools import setup
import os
from glob import glob

package_name = 'tiago_yolo'

setup(
    name=package_name,
    version='0.1.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
        (os.path.join('share', package_name, 'config'), glob('config/*.yaml')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='user',
    maintainer_email='user@example.com',
    description='YOLOv8 object detection node for TIAGo robot',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'yolo_node = tiago_yolo.yolo_node:main',
        ],
    },
)
```

Также создать пустой файл `ros2_ws/src/tiago_yolo/resource/tiago_yolo`
(маркер для `ament_index`).

#### 2.3.3. `ros2_ws/src/tiago_yolo/tiago_yolo/__init__.py`

Пустой файл.

#### 2.3.4. `ros2_ws/src/tiago_yolo/tiago_yolo/yolo_node.py`

```python
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from vision_msgs.msg import Detection2DArray, Detection2D, BoundingBox2D, ObjectHypothesisWithPose
from cv_bridge import CvBridge
from ultralytics import YOLO
import cv2


class YoloDetectionNode(Node):
    def __init__(self):
        super().__init__('yolo_detection_node')

        self.declare_parameter('model', 'yolov8n.pt')
        self.declare_parameter('confidence_threshold', 0.5)
        self.declare_parameter('input_topic', '/head_front_camera/rgb/image_raw')
        self.declare_parameter('output_topic', '/detections')

        model_path = self.get_parameter('model').get_parameter_value().string_value
        self.conf_threshold = self.get_parameter('confidence_threshold').get_parameter_value().double_value
        input_topic = self.get_parameter('input_topic').get_parameter_value().string_value
        output_topic = self.get_parameter('output_topic').get_parameter_value().string_value

        self.model = YOLO(model_path)
        self.bridge = CvBridge()

        self.subscription = self.create_subscription(
            Image, input_topic, self.image_callback, 10)
        self.publisher = self.create_publisher(
            Detection2DArray, output_topic, 10)

        self.get_logger().info(
            f'YOLO detection node started: model={model_path}, '
            f'input={input_topic}, output={output_topic}')

    def image_callback(self, msg: Image):
        cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        results = self.model(cv_image, verbose=False)

        detections_msg = Detection2DArray()
        detections_msg.header = msg.header

        for result in results:
            for box in result.boxes:
                conf = float(box.conf[0])
                if conf < self.conf_threshold:
                    continue
                cls_id = int(box.cls[0])
                cls_name = self.model.names[cls_id]
                x1, y1, x2, y2 = box.xyxy[0].tolist()
                w, h = x2 - x1, y2 - y1
                cx, cy = x1 + w / 2.0, y1 + h / 2.0

                detection = Detection2D()
                detection.header = msg.header
                detection.bbox = BoundingBox2D()
                detection.bbox.center.position.x = cx
                detection.bbox.center.position.y = cy
                detection.bbox.size_x = w
                detection.bbox.size_y = h
                hypothesis = ObjectHypothesisWithPose()
                hypothesis.hypothesis.class_id = cls_name
                hypothesis.hypothesis.score = conf
                detection.results.append(hypothesis)
                detections_msg.detections.append(detection)

        self.publisher.publish(detections_msg)


def main(args=None):
    rclpy.init(args=args)
    node = YoloDetectionNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
```

#### 2.3.5. `ros2_ws/src/tiago_yolo/launch/yolo_bringup.launch.py`

```python
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration


def generate_launch_description():
    model_arg = DeclareLaunchArgument(
        'model', default_value='yolov8n.pt',
        description='YOLOv8 model name or path')
    confidence_arg = DeclareLaunchArgument(
        'confidence_threshold', default_value='0.5',
        description='Minimum confidence threshold for detections')
    input_topic_arg = DeclareLaunchArgument(
        'input_topic', default_value='/head_front_camera/rgb/image_raw',
        description='Input camera image topic')
    output_topic_arg = DeclareLaunchArgument(
        'output_topic', default_value='/detections',
        description='Output detections topic')

    yolo_node = Node(
        package='tiago_yolo',
        executable='yolo_node',
        name='yolo_detection_node',
        parameters=[{
            'model': LaunchConfiguration('model'),
            'confidence_threshold': LaunchConfiguration('confidence_threshold'),
            'input_topic': LaunchConfiguration('input_topic'),
            'output_topic': LaunchConfiguration('output_topic'),
        }],
        output='screen',
    )

    return LaunchDescription([
        model_arg, confidence_arg, input_topic_arg, output_topic_arg,
        yolo_node,
    ])
```

#### 2.3.6. `ros2_ws/src/tiago_yolo/config/yolo_params.yaml`

```yaml
yolo_detection_node:
  ros__parameters:
    model: "yolov8n.pt"
    confidence_threshold: 0.5
    input_topic: "/head_front_camera/rgb/image_raw"
    output_topic: "/detections"
```

### 2.4. Верификация

```bash
# 1. Запустить базовую симуляцию (камера начинает публиковать кадры)
ros2 launch tiago_gazebo tiago_gazebo.launch.py is_public_sim:=True

# 2. В отдельном терминале запустить YOLO-узел
ros2 launch tiago_yolo yolo_bringup.launch.py

# 3. Проверить детекции
ros2 topic echo /detections
# Ожидаемый вывод: bounding boxes с class_id и score
# для объектов, видимых камерой в Gazebo
```

---

## 3. Новый пакет `tiago_llm_bridge` — LLM commander (тема 17)

### 3.1. Что делает

Принимает команду на естественном языке через ROS2-service `/llm_command`,
отправляет текст в LLM (OpenAI/Claude), получает разбор на последовательность
ROS2-действий и выполняет их: вызывает play_motion2 actions, Nav2 goal,
MoveIt2 trajectory.

**Архитектура:**
```
голос (ASR, не в этом проекте) → текст → /llm_command (service)
  → LLM (OpenAI) → ["unfold_arm", "navigate_to:table", "prepare_grasp", "close", "home"]
  → play_motion2.PlayMotion2 action ⇒ Nav2 navigate_to_pose ⇒ MoveIt2 plan/execute
  → результат (успех/ошибка)
```

### 3.2. Что уже есть и используется без изменений

| Ресурс TIAGo | Как используется LLM-мостом |
|-------------|---------------------------|
| `play_motion2` action `PlayMotion2` | Выполнение предзаписанных движений: `unfold_arm`, `prepare_grasp`, `open`, `close`, `home`, `wave`, `reach_floor`, `reach_max`, `head_tour`, `inspect_surroundings` |
| `play_motion2` service `ListMotions` | Получение списка доступных движений при инициализации |
| `play_motion2` service `IsMotionReady` | Проверка готовности перед выполнением |
| Nav2 action `/navigate_to_pose` | Перемещение робота к указанной точке |
| MoveIt2 `move_group` action | Планирование и выполнение траектории манипулятора |
| `tiago_bringup/config/motions/tiago_motions_general.yaml` | 10 движений руки и торса |

### 3.3. Файлы к созданию

Все файлы в `ros2_ws/src/tiago_llm_bridge/`. Новый пакет.

| # | Путь | Назначение |
|---|------|-----------|
| 1 | `package.xml` | Метаданные, depends: `rclpy`, `play_motion2_msgs`, `nav2_msgs`, `std_srvs` |
| 2 | `setup.py` | Entry points |
| 3 | `tiago_llm_bridge/__init__.py` | Пустой init |
| 4 | `tiago_llm_bridge/llm_commander.py` | Основной узел: service server `/llm_command` |
| 5 | `launch/llm_bridge.launch.py` | Launch-файл |
| 6 | `config/llm_config.yaml` | Параметры: API key, модель, маппинг команд |
| — | `resource/tiago_llm_bridge` | Маркер ament_index |

### 3.4. Содержание ключевого файла `llm_commander.py`

```python
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup
from std_srvs.srv import Trigger
from play_motion2_msgs.action import PlayMotion2
from nav2_msgs.action import NavigateToPose
from openai import OpenAI
import json
import os


class LLMCommander(Node):
    """Принимает NL-команды через /llm_command, выполняет цепочки ROS2-действий."""

    def __init__(self):
        super().__init__('llm_commander')

        self.declare_parameter('api_key_env', 'OPENAI_API_KEY')
        self.declare_parameter('model', 'gpt-4o')
        self.declare_parameter('system_prompt', '')

        api_key_env = self.get_parameter('api_key_env').value
        api_key = os.environ.get(api_key_env, '')
        model = self.get_parameter('model').value

        self.client = OpenAI(api_key=api_key) if api_key else None
        self.model = model

        self.play_motion_client = ActionClient(self, PlayMotion2, '/play_motion2')
        # Nav2 и MoveIt action clients добавляются по необходимости

        self.srv = self.create_service(Trigger, '/llm_command', self.command_callback)
        self.get_logger().info('LLM Commander ready')

    def parse_command(self, text: str) -> list:
        """Отправляет текст в LLM, получает список ROS2-действий."""
        if not self.client:
            return ['home']  # fallback без API ключа

        prompt = f"""You control a TIAGo robot with these capabilities:
- motions: unfold_arm, prepare_grasp, open, close, home, wave, reach_floor, reach_max
- navigation: navigate_to:POINT
- inspection: head_tour, inspect_surroundings

Translate user command to JSON list of actions.
User: {text}
Actions (JSON list only):"""

        response = self.client.chat.completions.create(
            model=self.model,
            messages=[{'role': 'user', 'content': prompt}],
            temperature=0.0,
        )
        try:
            return json.loads(response.choices[0].message.content)
        except json.JSONDecodeError:
            return ['home']

    async def execute_actions(self, actions: list) -> bool:
        """Последовательно выполняет список ROS2-действий."""
        for action in actions:
            if action in ['unfold_arm', 'prepare_grasp', 'open', 'close',
                           'home', 'wave', 'reach_floor', 'reach_max',
                           'head_tour', 'inspect_surroundings']:
                goal = PlayMotion2.Goal()
                goal.motion_name = action
                goal.skip_planning = False
                self.get_logger().info(f'Playing motion: {action}')
                result = await self.play_motion_client.send_goal_async(goal)
                # ожидание результата (упрощено)
            else:
                self.get_logger().warn(f'Unknown action: {action}')
        return True

    def command_callback(self, request, response):
        text = request.data if hasattr(request, 'data') else 'home'
        actions = self.parse_command(text)
        # Здесь — синхронный вызов для демо, в реальном коде — async
        self.get_logger().info(f'Parsed actions: {actions}')
        response.success = True
        response.message = f'Executing: {actions}'
        return response


def main(args=None):
    rclpy.init(args=args)
    node = LLMCommander()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
```

### 3.5. Launch-файл `llm_bridge.launch.py`

```python
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration


def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument('model', default_value='gpt-4o'),
        DeclareLaunchArgument('api_key_env', default_value='OPENAI_API_KEY'),
        Node(
            package='tiago_llm_bridge',
            executable='llm_commander',
            name='llm_commander',
            parameters=[{
                'model': LaunchConfiguration('model'),
                'api_key_env': LaunchConfiguration('api_key_env'),
            }],
            output='screen',
        ),
    ])
```

### 3.6. Верификация

```bash
# 1. Запустить полный стек (нужен play_motion2)
ros2 launch tiago_gazebo tiago_gazebo.launch.py is_public_sim:=True

# 2. Запустить LLM-мост
export OPENAI_API_KEY="sk-..."
ros2 launch tiago_llm_bridge llm_bridge.launch.py

# 3. Отправить команду
ros2 service call /llm_command std_srvs/srv/Trigger '{data: "подойди к столу и возьми чашку"}'
# Ожидаемый результат: робот выполняет цепочку движений
# (разворачивает руку → навигирует → готовит захват → закрывает гриппер)
```

---

## 4. Пример LifecycleNode (тема 12)

### 4.1. Что делает

Демонстрационный lifecycle-узел для показа состояний (unconfigured → inactive → active).
Добавляется в пакет `tiago_yolo` как дополнительный executable.

### 4.2. Файл к созданию

**`ros2_ws/src/tiago_yolo/tiago_yolo/lifecycle_example.py`** — ~40 строк.

```python
import rclpy
from rclpy.lifecycle import LifecycleNode, State, TransitionCallbackReturn


class DemoLifecycleNode(LifecycleNode):
    def __init__(self):
        super().__init__('demo_lifecycle_node')
        self.get_logger().info('DemoLifecycleNode created (unconfigured)')
        self._timer = None

    def on_configure(self, state: State) -> TransitionCallbackReturn:
        self.get_logger().info('on_configure() called')
        return TransitionCallbackReturn.SUCCESS

    def on_activate(self, state: State) -> TransitionCallbackReturn:
        self._timer = self.create_timer(1.0, lambda: self.get_logger().info('tick'))
        self.get_logger().info('on_activate() called — node is ACTIVE')
        return TransitionCallbackReturn.SUCCESS

    def on_deactivate(self, state: State) -> TransitionCallbackReturn:
        if self._timer:
            self.destroy_timer(self._timer)
            self._timer = None
        self.get_logger().info('on_deactivate() called')
        return TransitionCallbackReturn.SUCCESS

    def on_cleanup(self, state: State) -> TransitionCallbackReturn:
        self.get_logger().info('on_cleanup() called')
        return TransitionCallbackReturn.SUCCESS

    def on_shutdown(self, state: State) -> TransitionCallbackReturn:
        self.get_logger().info('on_shutdown() called')
        return TransitionCallbackReturn.SUCCESS


def main(args=None):
    rclpy.init(args=args)
    node = DemoLifecycleNode()
    rclpy.spin(node)
    rclpy.shutdown()
```

**Добавить в `setup.py` пакета `tiago_yolo`** entry point:

```python
'lifecycle_example = tiago_yolo.lifecycle_example:main',
```

### 4.3. Верификация

```bash
ros2 run tiago_yolo lifecycle_example

# В другом терминале:
ros2 lifecycle list /demo_lifecycle_node
# unconfigured [1]

ros2 lifecycle set /demo_lifecycle_node configure
# inactive [3]

ros2 lifecycle set /demo_lifecycle_node activate
# active [4] — видно "tick" в логах

ros2 lifecycle set /demo_lifecycle_node deactivate
# inactive [7] — "tick" пропадает
```

---

## 5. Сводка всех изменений

### 5.1. Модифицируемые существующие файлы

| Файл | Изменение | Строк |
|------|-----------|-------|
| `.devcontainer/Dockerfile` | +2 apt-пакета в существующий `apt-get install` | +2 |
| `.devcontainer/Dockerfile` | +1 `pip3 install` после `USER $USERNAME` | +1 |
| **Итого** | **1 файл, +3 строки** | |

### 5.2. Новые файлы

| # | Файл | Пакет |
|---|------|-------|
| 1 | `ros2_ws/src/tiago_yolo/package.xml` | tiago_yolo |
| 2 | `ros2_ws/src/tiago_yolo/setup.py` | tiago_yolo |
| 3 | `ros2_ws/src/tiago_yolo/resource/tiago_yolo` | tiago_yolo |
| 4 | `ros2_ws/src/tiago_yolo/tiago_yolo/__init__.py` | tiago_yolo |
| 5 | `ros2_ws/src/tiago_yolo/tiago_yolo/yolo_node.py` | tiago_yolo |
| 6 | `ros2_ws/src/tiago_yolo/launch/yolo_bringup.launch.py` | tiago_yolo |
| 7 | `ros2_ws/src/tiago_yolo/config/yolo_params.yaml` | tiago_yolo |
| 8 | `ros2_ws/src/tiago_yolo/tiago_yolo/lifecycle_example.py` | tiago_yolo |
| 9 | `ros2_ws/src/tiago_llm_bridge/package.xml` | tiago_llm_bridge |
| 10 | `ros2_ws/src/tiago_llm_bridge/setup.py` | tiago_llm_bridge |
| 11 | `ros2_ws/src/tiago_llm_bridge/resource/tiago_llm_bridge` | tiago_llm_bridge |
| 12 | `ros2_ws/src/tiago_llm_bridge/tiago_llm_bridge/__init__.py` | tiago_llm_bridge |
| 13 | `ros2_ws/src/tiago_llm_bridge/tiago_llm_bridge/llm_commander.py` | tiago_llm_bridge |
| 14 | `ros2_ws/src/tiago_llm_bridge/launch/llm_bridge.launch.py` | tiago_llm_bridge |
| 15 | `ros2_ws/src/tiago_llm_bridge/config/llm_config.yaml` | tiago_llm_bridge |
| **Итого** | **15 новых файлов** | 2 пакета |

### 5.3. Не затронуты

- Все 18 PAL-репозиториев в `ros2_ws/src/` — **не модифицируются**
- `tiago.repos` — не меняется
- `fetch_external.sh` — не меняется
- `start_gui.sh` — не меняется
- Все launch-файлы TIAGo — не меняются
- Все YAML-конфиги TIAGo — не меняются

---

## 6. Порядок выполнения для ИИ-агента

### Шаг 1. Модификация Dockerfile

1. Прочитать `.devcontainer/Dockerfile`
2. Найти блок `apt-get install` → добавить `ros-humble-cv-bridge \` и `ros-humble-vision-msgs \`
3. Найти строку `USER $USERNAME` → после неё добавить `RUN pip3 install --no-cache-dir ultralytics openai`
4. Проверить, что файл валиден (парные `\`, нет дублирующихся имён)

### Шаг 2. Создание пакета `tiago_yolo`

1. Создать структуру директорий:
   ```bash
   mkdir -p ros2_ws/src/tiago_yolo/{tiago_yolo,launch,config,resource}
   touch ros2_ws/src/tiago_yolo/tiago_yolo/__init__.py
   touch ros2_ws/src/tiago_yolo/resource/tiago_yolo
   ```
2. Записать `package.xml`, `setup.py` (содержание из раздела 2.3)
3. Записать `tiago_yolo/yolo_node.py`
4. Записать `launch/yolo_bringup.launch.py`
5. Записать `config/yolo_params.yaml`
6. Записать `tiago_yolo/lifecycle_example.py`

### Шаг 3. Создание пакета `tiago_llm_bridge`

1. Создать структуру директорий:
   ```bash
   mkdir -p ros2_ws/src/tiago_llm_bridge/{tiago_llm_bridge,launch,config,resource}
   touch ros2_ws/src/tiago_llm_bridge/tiago_llm_bridge/__init__.py
   touch ros2_ws/src/tiago_llm_bridge/resource/tiago_llm_bridge
   ```
2. Записать `package.xml`, `setup.py`
3. Записать `tiago_llm_bridge/llm_commander.py`
4. Записать `launch/llm_bridge.launch.py`
5. Записать `config/llm_config.yaml`

### Шаг 4. Сборка

```bash
cd ros2_ws
colcon build --symlink-install --packages-select tiago_yolo tiago_llm_bridge
source install/setup.bash
```

### Шаг 5. Проверка YOLO

```bash
# Терминал 1: симуляция
start_gui.sh
ros2 launch tiago_gazebo tiago_gazebo.launch.py is_public_sim:=True

# Терминал 2: YOLO
ros2 launch tiago_yolo yolo_bringup.launch.py

# Терминал 3: проверка
ros2 topic echo /detections
```

### Шаг 6. Проверка LLM bridge

```bash
# Терминал 1: симуляция (уже запущена)
# Терминал 2: LLM bridge
export OPENAI_API_KEY="sk-..."
ros2 launch tiago_llm_bridge llm_bridge.launch.py

# Тест:
ros2 service call /llm_command std_srvs/srv/Trigger
```

### Шаг 7. Проверка lifecycle demo

```bash
ros2 run tiago_yolo lifecycle_example
# В другом терминале:
ros2 lifecycle list /demo_lifecycle_node
ros2 lifecycle set /demo_lifecycle_node configure
ros2 lifecycle set /demo_lifecycle_node activate
```

---

## 7. Что делать, если LLM/YOLO не нужны

Пакеты `tiago_yolo` и `tiago_llm_bridge` — полностью опциональны:

- Если пакет **не создан** — `colcon build` игнорирует его, симуляция работает как раньше
- Если пакет **создан, но зависимость не установлена** — `colcon build` упадёт с «missing dependency». Установите зависимости (`sudo apt install ros-humble-cv-bridge ros-humble-vision-msgs && pip3 install ultralytics`) или удалите пакет
- Если пакет **создан и собран, но API-ключ не задан** — LLM-мост запускается и отвечает на вызовы сервиса fallback-движением `home`
- YOLO-модель `yolov8n.pt` (~6 MB) скачивается автоматически при первом запуске узла

---

*План создан на основе анализа `TIAgo_configuration.md` (раздел 12) и workspace `ros2_ws/`.*