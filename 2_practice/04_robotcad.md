# Практика: модель робота в RobotCAD

## Цель

Через 10 минут студент открывает RobotCAD, собирает простую модель (платформа + колесо), задаёт link/joint/LCS и выгружает URDF. Если GUI недоступен — разбирает готовый пример URDF по плану Б.

## Предварительные требования

- FreeCAD 1.x с установленным верстаком RobotCAD (через Addon Manager или Docker-скрипт — см. [`../2_knowledge/robotcad.md`](../2_knowledge/robotcad.md)).
- Для плана Б достаточно терминала и статьи [`../2_knowledge/urdf_xacro.md`](../2_knowledge/urdf_xacro.md).
- ROS2 не устанавливается на хост; генерация кода — задача RobotCAD, запуск в Gazebo — уже в контейнере.

## Что получится

- Модель из двух звеньев (платформа и колесо) с одним вращательным сочленением.
- Сгенерированный URDF/Xacro, который можно прочитать.

## Шаг 1. Открыть RobotCAD

Запустите FreeCAD и переключитесь на верстак RobotCAD (выпадающий список верстаков). Если верстака нет в списке — вернитесь к установке.

## Шаг 2. Создать две детали

В RobotCAD (или в Part/PartDesign) создайте примитивы:

- платформа — `Box` (например, 0.4 × 0.3 × 0.1 м);
- колесо — `Cylinder` (радиус 0.05 м).

## Шаг 3. Задать link и joint

- Выделите платформу → создайте **link** `base_link`.
- Выделите колесо → создайте **link** `wheel_link`.
- Создайте **joint** `wheel_joint` между ними (тип `continuous` — бесконечное вращение).
- Привяжите placement сочленения по грани или через **LCS** (локальную систему координат).

Точные названия пунктов меню зависят от версии RobotCAD — сверяйтесь с [Wiki: Common usage plan](https://github.com/drfenixion/freecad.robotcad/wiki).

## Шаг 4. Назначить материал и рассчитать массу

Задайте материал звеньям и запустите расчёт массы/инерции. Без этого Gazebo не сможет симулировать физику.

## Шаг 5. Сгенерировать URDF

Запустите генерацию кода (Code generator). Выберите, что выгрузить: URDF/Xacro, меши, launch-файлы. Укажите папку для сгенерированного пакета.

## Шаг 6. Открыть результат

Откройте сгенерированный файл `urdf/*.urdf.xacro` и найдите:

```xml
<link name="base_link"> ... </link>
<link name="wheel_link"> ... </link>
<joint name="wheel_joint" type="continuous"> ... </joint>
```

Проверьте, что масса и инерция появились в `<inertial>`.

## План Б: разобрать готовый URDF

Если GUI недоступен, разберите структуру на готовом примере. Создайте файл `simple.urdf`:

```xml
<robot name="simple_bot">
  <link name="base_link">
    <inertial>
      <mass value="2.0"/>
      <origin xyz="0 0 0.05"/>
    </inertial>
    <visual>
      <geometry><box size="0.4 0.3 0.1"/></geometry>
    </visual>
  </link>

  <joint name="wheel_joint" type="continuous">
    <parent link="base_link"/>
    <child link="wheel_link"/>
    <origin xyz="0 0.2 0"/>
    <axis xyz="0 1 0"/>
  </joint>

  <link name="wheel_link">
    <inertial>
      <mass value="0.1"/>
    </inertial>
    <visual>
      <geometry><cylinder radius="0.05" length="0.02"/></geometry>
    </visual>
  </link>
</robot>
```

Ответьте: сколько здесь links, сколько joints, где ось вращения колеса, что описывает `<origin>`.

## Проверка результата

| Действие | Ожидаемый результат |
| --- | --- |
| Открыт RobotCAD | верстак доступен в списке |
| Созданы 2 link + 1 joint | в структуре видно `base_link`, `wheel_link`, `wheel_joint` |
| Задан материал | масса/инерция рассчитаны |
| Генерация URDF | файл `.urdf.xacro` с links/joints и `<inertial>` |
| План Б | студент называет links/joints и ось вращения |

## Вопросы студентам

1. Чем link отличается от joint?
2. Зачем нужна LCS при задании сочленения?
3. Что произойдёт в Gazebo, если не задать массу/инерцию?
4. Почему меши выгружаются отдельными файлами, а не встраиваются в URDF?

## Типичные ошибки

| Симптом | Причина | Исправление |
| --- | --- | --- |
| Верстак не появляется | Не перезапущен FreeCAD после установки | Перезапустить FreeCAD |
| Нет массы в URDF | Не назначен материал | Задать материал и пересчитать массу/инерцию |
| Сустав не вращается | Тип joint выбран неверно | Для колеса — `continuous`, для шарнира с пределом — `revolute` |
| Симуляция пуста | Не заданы Collisions | Добавить Collisions для звеньев |

## Дополнительное задание

Добавьте второе колесо и проверьте, как изменился сгенерированный URDF (появился ли второй `wheel_*_joint`).

## Ссылки

- Статья базы знаний — [`../2_knowledge/robotcad.md`](../2_knowledge/robotcad.md).
- URDF/Xacro — [`../2_knowledge/urdf_xacro.md`](../2_knowledge/urdf_xacro.md).
- Домашнее задание 4 — [`../2_homework/hw_04_robotcad.md`](../2_homework/hw_04_robotcad.md).
- [RobotCAD (freecad.robotcad)](https://github.com/drfenixion/freecad.robotcad)
- [RobotCAD Wiki: Common usage plan](https://github.com/drfenixion/freecad.robotcad/wiki)
- [URDF — ROS2 docs](https://docs.ros.org/en/jazzy/Tutorials/Intermediate/URDF/URDF-Main.html)
