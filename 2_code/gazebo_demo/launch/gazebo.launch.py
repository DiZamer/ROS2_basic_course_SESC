import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, Command
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue


def generate_launch_description():
    pkg_share = get_package_share_directory('gazebo_demo')

    world = os.path.join(pkg_share, 'world', 'empty.sdf')
    xacro_file = os.path.join(pkg_share, 'urdf', 'simple_robot.urdf.xacro')
    rviz_config = os.path.join(pkg_share, 'rviz', 'gazebo_demo.rviz')

    robot_description = ParameterValue(
        Command(['xacro ', xacro_file]), value_type=str
    )

    use_rviz = LaunchConfiguration('rviz')

    # Render engine is chosen without changing the launch command:
    #   - default: ogre (GLX) — safe for VNC/CPU (devcontainer Variant 1)
    #   - GPU/X11: set GZ_RENDER_ENGINE=ogre2 in the devcontainer Variant 5
    # Can also be overridden explicitly: render_engine:=ogre2
    render_engine = LaunchConfiguration('render_engine')

    gz_sim = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory('ros_gz_sim'),
                'launch', 'gz_sim.launch.py',
            )
        ),
        launch_arguments={
            'gz_args': ['-r --render-engine ', render_engine, ' ', world],
        }.items(),
    )

    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_description, 'use_sim_time': True}],
    )

    spawn_robot = Node(
        package='ros_gz_sim',
        executable='create',
        output='screen',
        arguments=[
            '-name', 'simple_robot',
            '-topic', 'robot_description',
            '-z', '0.1',
        ],
    )

    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        output='screen',
        arguments=[
            '/cmd_vel@geometry_msgs/msg/Twist@gz.msgs.Twist',
            '/odom@nav_msgs/msg/Odometry@gz.msgs.Odometry',
            '/scan@sensor_msgs/msg/LaserScan@gz.msgs.LaserScan',
            '/camera/image_raw@sensor_msgs/msg/Image@gz.msgs.Image',
        ],
        parameters=[{'use_sim_time': True}],
    )

    tf_bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        output='screen',
        arguments=[
            '/tf@tf2_msgs/msg/TFMessage@gz.msgs.Pose_V',
        ],
        remappings=[('/tf', '/tf')],
        parameters=[{'use_sim_time': True}],
    )

    rviz = Node(
        package='rviz2',
        executable='rviz2',
        output='screen',
        arguments=['-d', rviz_config],
        parameters=[{'use_sim_time': True}],
        condition=IfCondition(use_rviz),
    )

    return LaunchDescription([
        DeclareLaunchArgument('rviz', default_value='true',
                              description='Run RViz2 as well'),
        DeclareLaunchArgument(
            'render_engine',
            default_value=os.environ.get('GZ_RENDER_ENGINE', 'ogre'),
            description='Gazebo render engine: ogre (VNC/CPU) or ogre2 (GPU)'),
        gz_sim,
        robot_state_publisher,
        spawn_robot,
        bridge,
        tf_bridge,
        rviz,
    ])
