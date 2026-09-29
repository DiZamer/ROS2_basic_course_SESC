#!/usr/bin/env bash
# Runs once when the Dev Container is created/rebuilt.
# 1. Sources the ROS2 underlay.
# 2. Builds every package found in 2_code/ and 2_homework/ (if any).
# 3. Adds an idempotent "source <dir>/install/setup.bash" line to ~/.bashrc
#    so the overlay is available in every new terminal.
#
# Idempotent: bashrc lines are not duplicated. Source files are never touched;
# only regenerable colcon dirs (build/install/log) are cleaned if they contain
# broken symlinks (e.g. after the project folder was renamed).
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
        # A renamed workspace leaves absolute symlinks in install/ pointing to the
        # old mount path. Detect broken symlinks and clean the regenerable dirs.
        if [ -d "$d/install" ] && find -L "$d/install" -type l 2>/dev/null | grep -q .; then
            echo "=== Stale artifacts in $d (broken symlinks) — clean rebuild ==="
            rm -rf "$d/build" "$d/install" "$d/log"
        fi

        echo "=== Building packages in $d ==="
        ( cd "$d" && colcon build ) || true

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
