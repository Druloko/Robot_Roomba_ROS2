from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, TimerAction
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    pkg_share = FindPackageShare('robot_roomba')
    sim_path = PathJoinSubstitution([pkg_share, 'simulator', 'simulador_roomba.py'])

    connection_serial = DeclareLaunchArgument('connection_serial', default_value='/tmp/roomba_front')
    connection_mode   = DeclareLaunchArgument('connection_mode',   default_value='FULL')

    # Lanza el simulador (script Python, no es un nodo ROS)
    sim = ExecuteProcess(
        cmd=['python3', sim_path],
        output='screen'
    )

    # Lanza el nodo unos segundos después para dar tiempo a crear /tmp/roomba_front
    node = Node(
        package='robot_roomba',
        executable='communication_node',
        name='communication_node',
        output='screen',
        parameters=[{
            'connection_serial': LaunchConfiguration('connection_serial'),
            'connection_mode':   LaunchConfiguration('connection_mode'),
            'movement_frequency': 10.0,
            'security_frequency': 5.0,
            'power_frequency':    1.0,
            'misc_frequency':     1.0,
            'state_communication_frequency': 1.0,
        }]
    )

    delayed_node = TimerAction(period=1.5, actions=[node])

    return LaunchDescription([
        connection_serial, connection_mode,
        sim, delayed_node
    ])
