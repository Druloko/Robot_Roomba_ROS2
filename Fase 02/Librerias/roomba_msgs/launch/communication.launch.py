from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue

def generate_launch_description():
    # Conexión
    connection_serial = DeclareLaunchArgument(
        'connection_serial', default_value='/dev/ttyUSB0',
        description='Puerto serie del Roomba/Create'
    )
    connection_mode = DeclareLaunchArgument(
        'connection_mode', default_value='FULL',
        description='Modo OI: FULL / SAFE / PASSIVE'
    )

    # Frecuencias (Hz)
    movement_frequency = DeclareLaunchArgument('movement_frequency', default_value='10.0')
    security_frequency = DeclareLaunchArgument('security_frequency', default_value='5.0')
    power_frequency    = DeclareLaunchArgument('power_frequency',    default_value='1.0')
    misc_frequency     = DeclareLaunchArgument('misc_frequency',     default_value='1.0')
    state_comm_freq    = DeclareLaunchArgument('state_communication_frequency', default_value='1.0')

    node = Node(
        package='robot_roomba',
        executable='communication_node',
        name='communication_node',
        output='screen',
        parameters=[{
            'connection_serial':        LaunchConfiguration('connection_serial'),
            'connection_mode':          LaunchConfiguration('connection_mode'),
            'movement_frequency':       ParameterValue(LaunchConfiguration('movement_frequency'), value_type=float),
            'security_frequency':       ParameterValue(LaunchConfiguration('security_frequency'), value_type=float),
            'power_frequency':          ParameterValue(LaunchConfiguration('power_frequency'), value_type=float),
            'misc_frequency':           ParameterValue(LaunchConfiguration('misc_frequency'), value_type=float),
            'state_communication_frequency': ParameterValue(LaunchConfiguration('state_communication_frequency'), value_type=float),
        }]
    )

    return LaunchDescription([
        connection_serial, connection_mode,
        movement_frequency, security_frequency, power_frequency, misc_frequency, state_comm_freq,
        node
    ])

# Uso

# Serial (por defecto):
# ros2 launch robot_roomba communication.launch.py serial_port:=/dev/ttyUSB0 baud:=115200
# TCP:
# ros2 launch robot_roomba communication.launch.py connection_type:=TCP address:=192.168.1.50 port:=8888