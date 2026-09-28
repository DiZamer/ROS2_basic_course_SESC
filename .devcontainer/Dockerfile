FROM osrf/ros:jazzy-desktop

ENV DEBIAN_FRONTEND=noninteractive
ENV PIP_NO_CACHE_DIR=1

ARG USERNAME=ubuntu
ARG USER_UID=1000
ARG USER_GID=$USER_UID

RUN apt-get update && apt-get install -y --no-install-recommends \
    build-essential \
    cmake \
    gdb \
    git \
    curl \
    ca-certificates \
    gnupg \
    lsb-release \
    tree \
    sudo \
    python3-pip \
    python3-colcon-common-extensions \
    python3-rosdep \
    python3-vcstool \
    python3-setuptools \
    python3-wheel \
    python3-venv \
    xvfb \
    x11vnc \
    novnc \
    python3-websockify \
    fluxbox \
    net-tools \
    x11-utils \
    xterm \
    && rm -rf /var/lib/apt/lists/* \
    && apt-get update && apt-get install -y --no-install-recommends \
    ros-jazzy-ros-gz \
    ros-jazzy-robot-state-publisher \
    ros-jazzy-joint-state-publisher \
    ros-jazzy-joint-state-publisher-gui \
    ros-jazzy-xacro \
    ros-jazzy-tf2-tools \
    && rm -rf /var/lib/apt/lists/* \
    && if ! id -u $USER_UID >/dev/null 2>&1; then \
        groupadd --gid $USER_GID $USERNAME && \
        useradd -s /bin/bash --uid $USER_UID --gid $USER_GID -m $USERNAME; \
    fi \
    && echo "$USERNAME ALL=(root) NOPASSWD:ALL" > /etc/sudoers.d/$USERNAME \
    && chmod 0440 /etc/sudoers.d/$USERNAME \
    && usermod --append --groups video,dialout,plugdev $USERNAME

# GUI assets for headless VNC/noVNC access
COPY .devcontainer/start_gui.sh /usr/local/bin/start_gui.sh
COPY .devcontainer/novnc_index.html /usr/share/novnc/index.html
RUN chmod +x /usr/local/bin/start_gui.sh

USER $USERNAME

RUN echo "source /opt/ros/jazzy/setup.bash" >> ~/.bashrc

# Fallback overlay: whenever a workspace overlay exists, source it automatically
# in new terminals, even if postCreateCommand was skipped (e.g. plain Reopen).
RUN echo 'for _d in /workspaces/*/2_code /workspaces/*/2_homework; do [ -f "$_d/install/setup.bash" ] && source "$_d/install/setup.bash"; done; unset _d' >> ~/.bashrc