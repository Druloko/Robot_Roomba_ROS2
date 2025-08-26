from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Nodo para el robot_state_publisher
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{'robot_description': open(r'/mnt/c/Users/Druloko/Documents/ros2_dev_ws/src/roomba_control/rviz/roomba.urdf').read()}]
        ),
        # Nodo para RViz2
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            output='screen',
            arguments=['-d', r'/mnt/c/Users/Druloko/Documents/ros2_dev_ws/src/roomba_control/rviz/roomba_viz.rviz']
        ),
        # Nodo para roomba_node
        Node(
            package='roomba_control',
            executable='roomba_node',
            name='roomba_node',
            output='screen',
            parameters=[r'/mnt/c/Users/Druloko/Documents/ros2_dev_ws/src/roomba_control/config/roomba_params.yaml']
        ),
        # Nodo para lanzar RQT
        Node(
            package='rqt_gui',
            executable='rqt_gui',
            name='rqt',
            output='screen'
        )
    ])
