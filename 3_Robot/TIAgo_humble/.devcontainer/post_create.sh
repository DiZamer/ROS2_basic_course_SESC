#!/usr/bin/env bash
# Runs once when the Dev Container is created/rebuilt.
# Подготовка окружения: создаёт src/ и подключает overlay в ~/.bashrc.
# Тяжёлая работа (vcs import, rosdep, colcon build) — в post_start.sh.
#
# Idempotent: строки в ~/.bashrc не дублируются.
# NOTE: no `set -u` — ROS setup.bash references unset variables internally.

WS_BASENAME="${1:-$(basename "$(pwd)")}"
WS="/workspaces/${WS_BASENAME}"

echo "=== post_create: workspace ${WS} ==="

# ROS2 underlay
if [ -f /opt/ros/humble/setup.bash ]; then
    # shellcheck disable=SC1091
    source /opt/ros/humble/setup.bash
fi

mkdir -p "$WS/src"

# Идемпотентно подключаем overlay в каждый новый терминал
grep -qxF "source $WS/install/setup.bash" ~/.bashrc || \
    echo "source $WS/install/setup.bash" >> ~/.bashrc

echo "=== post_create: done ==="
