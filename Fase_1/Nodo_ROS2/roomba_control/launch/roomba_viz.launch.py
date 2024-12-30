from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{'robot_description': Command(['xacro ', LaunchConfiguration('model')])}],
            arguments=['--ros-args', '--param', 'robot_description', 'file:/home/jetson/ros2_dev_ws/src/roomba_control/rviz/roomba.urdf']
        ),
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            output='screen',
            arguments=['-d', '/home/jetson/ros2_dev_ws/src/roomba_control/rviz/roomba.urdf']
        )
    ])