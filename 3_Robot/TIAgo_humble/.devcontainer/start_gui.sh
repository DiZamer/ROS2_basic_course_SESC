#!/usr/bin/env bash
# Start virtual displays for headless GUI access via VNC/noVNC.
# Allows GUI applications (RViz2, Gazebo, etc.) to render without a physical X11 display.
#
# Idempotent: stale Xvfb/x11vnc/websockify/fluxbox for the requested displays
# are stopped first, so re-running the script does not pile up duplicate processes.
#
# Usage:
#   start_gui.sh                    — one display (:99, VNC 5900, Web 6080)
#   start_gui.sh --displays N       — N displays (:99.., VNC 5900.., Web 6080..)

set -u

# Parse arguments
NUM_DISPLAYS=1
while [ $# -gt 0 ]; do
    case "$1" in
        --displays)
            NUM_DISPLAYS="${2:-}"
            shift 2
            ;;
        *)
            echo "Usage: $0 [--displays N]"
            exit 1
            ;;
    esac
done

# Validate
if ! [[ "$NUM_DISPLAYS" =~ ^[1-9][0-9]*$ ]]; then
    echo "Error: --displays must be a positive integer"
    exit 1
fi

ALL_PIDS=""

# Create fluxbox config once (shared by all displays)
setup_fluxbox_config() {
    mkdir -p ~/.fluxbox
    cat > ~/.fluxbox/menu << 'FBMENU'
[begin] (ROS2)
  [exec] (Terminal) { x-terminal-emulator }
  [exec] (RViz2) { rviz2 }
  [exec] (Gazebo) { gzclient }
  [separator]
  [exec] (Reload config) { fluxbox-remote reconfigure }
  [exec] (Restart fluxbox) { fluxbox-remote restart }
  [exec] (Exit) { fluxbox-remote exit }
[end]
FBMENU
    if ! grep -q "toolbar.onTop" ~/.fluxbox/init 2>/dev/null; then
        echo "session.screen0.toolbar.onTop: false" >> ~/.fluxbox/init
        echo "session.screen0.toolbar.visible: true" >> ~/.fluxbox/init
    fi
}

# Stop any previous instance for the requested displays
stop_display() {
    local i="$1"
    local dnum="$((99 + i))"
    local vnc_port="$((5900 + i))"
    local web_port="$((6080 + i))"
    pkill -f "websockify --web /usr/share/novnc ${web_port} " 2>/dev/null
    pkill -f "x11vnc -display :${dnum}" 2>/dev/null
    pkill -f "Xvfb :${dnum} " 2>/dev/null
}

echo "Stopping previous GUI server (displays: $NUM_DISPLAYS) ..."
for i in $(seq 0 $((NUM_DISPLAYS - 1))); do
    stop_display "$i"
done
pkill -x fluxbox 2>/dev/null
sleep 1

setup_fluxbox_config

start_display() {
    local i="$1"
    local dnum="$((99 + i))"
    local vnc_port="$((5900 + i))"
    local web_port="$((6080 + i))"

    # ── Xvfb ──
    echo "[$i] Starting Xvfb on display :$dnum ..."
    mkdir -p "/tmp/xvfb-$dnum"
    Xvfb ":$dnum" -screen 0 1920x1080x24 -nolisten tcp -fbdir "/tmp/xvfb-$dnum" &
    ALL_PIDS="$ALL_PIDS $!"
    sleep 0.5

    # ── x11vnc (-shared: allow several viewers / clean reconnect) ──
    echo "[$i] Starting x11vnc on port $vnc_port ..."
    x11vnc -display ":$dnum" -forever -shared -nopw -quiet -rfbport "$vnc_port" &
    ALL_PIDS="$ALL_PIDS $!"

    # ── noVNC web proxy ──
    echo "[$i] Starting noVNC on port $web_port (http://localhost:$web_port) ..."
    websockify --web /usr/share/novnc "$web_port" localhost:"$vnc_port" &
    ALL_PIDS="$ALL_PIDS $!"

    # ── fluxbox window manager ──
    DISPLAY=":$dnum" fluxbox 2>/dev/null &
    ALL_PIDS="$ALL_PIDS $!"
}

# Start all displays
for i in $(seq 0 $((NUM_DISPLAYS - 1))); do
    start_display "$i"
done

# Wait a moment for everything to settle
sleep 0.5

echo ""
echo "GUI server ready — $NUM_DISPLAYS display(s)"
for i in $(seq 0 $((NUM_DISPLAYS - 1))); do
    echo "  [$i] DISPLAY=:$((99 + i))  Web: http://localhost:$((6080 + i))"
done
echo ""
echo "Open the Web URL above (auto-connect, auto-scaling)."
echo "Press Ctrl+C to stop all"

# Trap Ctrl+C and clean up
cleanup() {
    kill $ALL_PIDS 2>/dev/null
    wait
}
trap cleanup INT TERM

# Wait for any process to exit
wait
