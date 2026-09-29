#!/usr/bin/env bash
# Runs on every Dev Container start.
# 1. Клонирует TIAGo-пакеты (vcs import), если src/ ещё не заполнен.
# 2. Ставит внешние пакеты (fetch_external.sh) и системные зависимости (rosdep).
# 3. Собирает workspace (colcon build), если сборки ещё нет.
# 4. Подключает overlay в ~/.bashrc.
#
# Повторный старт с готовым install/ завершается мгновенно.
# NOTE: no `set -u` — ROS setup.bash references unset variables internally.

WS_BASENAME="${1:-$(basename "$(pwd)")}"
WS="/workspaces/${WS_BASENAME}"

echo "=== post_start: workspace ${WS} ==="

if [ -f /opt/ros/humble/setup.bash ]; then
    # shellcheck disable=SC1091
    source /opt/ros/humble/setup.bash
fi

for tool in vcs colcon rosdep; do
    if ! command -v "$tool" >/dev/null 2>&1; then
        echo "=== ERROR: '$tool' not found in container ===" >&2
        exit 1
    fi
done

mkdir -p "$WS/src"

if [ ! -d "$WS/src/tiago_simulation" ]; then
    echo "=== Cloning TIAGo repositories... ==="
    vcs import "$WS/src" < "$WS/tiago.repos"

    echo "=== Fetching external packages not available via apt... ==="
    bash "$WS/fetch_external.sh" "$WS/src"

    echo "=== Installing dependencies... ==="
    sudo apt-get update
    rosdep update
    rosdep install --from-paths "$WS/src" --ignore-src -r -y
else
    echo "=== TIAGo repositories already present, skipping clone ==="
fi

if [ ! -f "$WS/install/setup.bash" ]; then
    echo "=== Building TIAGo workspace... ==="
    ( cd "$WS" && colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release )
else
    echo "=== Workspace already built, skipping colcon build ==="
fi

grep -qxF "source $WS/install/setup.bash" ~/.bashrc || \
    echo "source $WS/install/setup.bash" >> ~/.bashrc

echo "=== post_start: done ==="
