import threading
from threading import Thread

import dash
from dash import dcc, html
from dash.dependencies import Input, Output
import plotly.graph_objs as go
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32, Bool
from nav_msgs.msg import Odometry
from math import atan2, degrees, sqrt

# Bloqueo para acceso seguro a los datos compartidos
data_lock = threading.Lock()

# Variables globales para almacenar los datos del robot
robot_data = {
    "battery": 0,
    "voltage": 0,
    "current": 0,
    "temperature": 0,
    "velocity": {"linear": 0, "angular": 0},
    "orientation": 0,  # Grados (0 a 360)
    "cliff_left": False,
    "cliff_right": False,
    "bump_left": False,
    "bump_right": False,
    "wall": False,
}


class RoombaMonitorNode(Node):
    def __init__(self):
        super().__init__('roomba_monitor_node')

        # Suscripción a sensores
        self.create_subscription(Float32, '/roomba/sensors/battery', self.battery_callback, 10)
        self.create_subscription(Float32, '/roomba/sensors/voltage', self.voltage_callback, 10)
        self.create_subscription(Float32, '/roomba/sensors/current', self.current_callback, 10)
        self.create_subscription(Float32, '/roomba/sensors/temperature', self.temperature_callback, 10)
        self.create_subscription(Odometry, '/roomba/odom', self.odom_callback, 10)
        self.create_subscription(Bool, '/roomba/sensors/cliff_left', self.cliff_left_callback, 10)
        self.create_subscription(Bool, '/roomba/sensors/cliff_right', self.cliff_right_callback, 10)
        self.create_subscription(Bool, '/roomba/sensors/bump_left', self.bump_left_callback, 10)
        self.create_subscription(Bool, '/roomba/sensors/bump_right', self.bump_right_callback, 10)
        self.create_subscription(Bool, '/roomba/sensors/wall', self.wall_callback, 10)

    # Callbacks con bloqueo para actualizar datos
    def battery_callback(self, msg):
        with data_lock:
            robot_data["battery"] = msg.data

    def voltage_callback(self, msg):
        with data_lock:
            robot_data["voltage"] = msg.data

    def current_callback(self, msg):
        with data_lock:
            robot_data["current"] = msg.data

    def temperature_callback(self, msg):
        with data_lock:
            robot_data["temperature"] = msg.data

    def odom_callback(self, msg):
        with data_lock:
            orientation_quat = msg.pose.pose.orientation
            linear_velocity = msg.twist.twist.linear.x
            angular_velocity = msg.twist.twist.angular.z

            # Calcular orientación en grados
            siny_cosp = 2 * (orientation_quat.w * orientation_quat.z + orientation_quat.x * orientation_quat.y)
            cosy_cosp = 1 - 2 * (orientation_quat.y ** 2 + orientation_quat.z ** 2)
            yaw = atan2(siny_cosp, cosy_cosp)
            orientation_degrees = (degrees(yaw) + 360) % 360  # Normalizar entre 0 y 360

            # Actualizar datos
            robot_data["velocity"] = {"linear": linear_velocity, "angular": angular_velocity}
            robot_data["orientation"] = orientation_degrees

    def cliff_left_callback(self, msg):
        with data_lock:
            robot_data["cliff_left"] = msg.data

    def cliff_right_callback(self, msg):
        with data_lock:
            robot_data["cliff_right"] = msg.data

    def bump_left_callback(self, msg):
        with data_lock:
            robot_data["bump_left"] = msg.data

    def bump_right_callback(self, msg):
        with data_lock:
            robot_data["bump_right"] = msg.data

    def wall_callback(self, msg):
        with data_lock:
            robot_data["wall"] = msg.data


# Inicia el nodo de ROS en un hilo separado
def start_ros_node():
    rclpy.init()
    node = RoombaMonitorNode()
    rclpy.spin(node)


ros_thread = Thread(target=start_ros_node)
ros_thread.start()

# Dash app para visualización
app = dash.Dash(__name__)

app.layout = html.Div([
    html.H1("Estado del Roomba"),
    dcc.Graph(id="battery_graph"),
    dcc.Graph(id="compass_graph"),
    dcc.Graph(id="velocity_graph"),
    html.Div([
        html.P(id="cliff_left_status"),
        html.P(id="cliff_right_status"),
        html.P(id="bump_left_status"),
        html.P(id="bump_right_status"),
        html.P(id="wall_status"),
    ]),
    dcc.Interval(
        id='interval-component',
        interval=1000,  # Actualizar cada 1000 ms
        n_intervals=0
    )
])


@app.callback(
    [Output('battery_graph', 'figure'),
     Output('compass_graph', 'figure'),
     Output('velocity_graph', 'figure'),
     Output('cliff_left_status', 'children'),
     Output('cliff_right_status', 'children'),
     Output('bump_left_status', 'children'),
     Output('bump_right_status', 'children'),
     Output('wall_status', 'children')],
    [Input('interval-component', 'n_intervals')]
)
def update_graphs(n):
    # Asegurarse de leer los datos con el bloqueo
    with data_lock:
        battery_level = robot_data["battery"]
        velocity = robot_data["velocity"]
        orientation = robot_data["orientation"]
        cliff_left = robot_data["cliff_left"]
        cliff_right = robot_data["cliff_right"]
        bump_left = robot_data["bump_left"]
        bump_right = robot_data["bump_right"]
        wall = robot_data["wall"]

    # Gráfico de batería
    battery_fig = go.Figure()
    battery_fig.add_trace(go.Indicator(
        mode="gauge+number",
        value=battery_level,
        title={"text": "Nivel de Batería (%)"},
        gauge={"axis": {"range": [0, 100]}}
    ))

    # Gráfico de brújula (orientación)
    compass_fig = go.Figure()
    compass_fig.add_trace(go.Scatterpolar(
        r=[1],
        theta=[orientation],
        mode='markers',
        marker=dict(size=15, color='blue'),
        name="Orientación"
    ))
    compass_fig.update_layout(
        polar=dict(
            angularaxis=dict(direction='clockwise', rotation=90),
            radialaxis=dict(visible=False)
        ),
        title="Brújula (Orientación)"
    )

    # Gráfico de velocímetro
    velocity_fig = go.Figure()
    velocity_fig.add_trace(go.Indicator(
        mode="gauge+number",
        value=velocity["linear"],  # Mostrar solo la velocidad lineal
        title={"text": "Velocidad Lineal (m/s)"},
        gauge={"axis": {"range": [0, 1.0]}}  # Ajusta el rango según la velocidad máxima esperada
    ))

    # Estados de sensores
    cliff_left_status = f"Cliff Left Detectado: {cliff_left}"
    cliff_right_status = f"Cliff Right Detectado: {cliff_right}"
    bump_left_status = f"Bump Left Detectado: {bump_left}"
    bump_right_status = f"Bump Right Detectado: {bump_right}"
    wall_status = f"Wall Detectado: {wall}"

    return battery_fig, compass_fig, velocity_fig, cliff_left_status, cliff_right_status, bump_left_status, bump_right_status, wall_status


if __name__ == '__main__':
    app.run_server(debug=True)
