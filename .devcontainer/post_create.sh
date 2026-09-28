#!/usr/bin/env bash
# Runs once when the Dev Container is created/rebuilt.
# 1. Sources the ROS2 underlay.
# 2. Builds every package found in 2_code/ and 2_homework/ (if any).
# 3. Adds an idempotent "source <dir>/install/setup.bash" line to ~/.bashrc
#    so the overlay is available in every new terminal.
#
# Idempotent and non-destructive: nothing is removed, lines are not duplicated.
# NOTE: no `set -u` — ROS setup.bash references unset variables internally.

WS_BASENAME="${1:-$(basename "$(pwd)")}"
WS="/workspaces/${WS_BASENAME}"

echo "=== post_create: workspace ${WS} ==="

# ROS2 underlay
if [ -f /opt/ros/jazzy/setup.bash ]; then
    # shellcheck disable=SC1091
    source /opt/ros/jazzy/setup.bash
fi

for d in "$WS/2_code" "$WS/2_homework"; do
    if ls "$d"/*/package.xml >/dev/null 2>&1; then
        echo "=== Building packages in $d ==="
        ( cd "$d" && colcon build --symlink-install ) || true

        if [ -f "$d/install/setup.bash" ]; then
            grep -qxF "source $d/install/setup.bash" ~/.bashrc || \
                echo "source $d/install/setup.bash" >> ~/.bashrc
            echo "=== Overlay enabled: $d/install/setup.bash ==="
        fi
    else
        echo "=== No packages in $d, skipping ==="
    fi
done

echo "=== post_create: done ==="
