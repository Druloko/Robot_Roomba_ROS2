from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{'robot_description': open(r'/mnt/c/Users/Druloko/Documents/ros2_dev_ws/src/roomba_control/rviz/roomba.urdf').read()}]
        ),
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            output='screen',
            arguments=['-d', r'/mnt/c/Users/Druloko/Documents/ros2_dev_ws/src/roomba_control/rviz/roomba_viz.rviz']
        )
    ])

