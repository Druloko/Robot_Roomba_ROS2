from robot_roomba.irobot.robots.create2 import Create2
from robot_roomba.irobot.openinterface.constants import MODES
import time

class Robot:
    # 🛠️ Inicialización
    def __init__(self, node):
        self._node = node
        self.connected = False
        # self.oi_mode = "FULL"
        self._default_oi_mode = "FULL"
        self._socat_process = None
        self._command_count = 0
        self._last_reconnect_time = None
        self._connected_since = None
        # Inicializar valores de los sensore
        self._sensors = {
            # Sensores de movimiento
            'movement': {
                'distance': {'value': 0.0, 'enabled': True},
                'angle': {'value': 0.0, 'enabled': True},
                'left_encoder_counts': {'value': 0, 'enabled': True},
                'right_encoder_counts': {'value': 0, 'enabled': True},
                'requested_left_velocity': {'value': 0, 'enabled': True},
                'requested_right_velocity': {'value': 0, 'enabled': True},
                'requested_radius': {'value': 0, 'enabled': True},
                'requested_velocity': {'value': 0, 'enabled': True},
            },
            # Sensores de seguridad
            'security': {
                'bump_left': {'value': False, 'enabled': True},
                'bump_right': {'value': False, 'enabled': True},
                'wheel_drop_left': {'value': False, 'enabled': True},
                'wheel_drop_right': {'value': False, 'enabled': True},
                'cliff_left': {'value': 0, 'enabled': True},
                'cliff_right': {'value': 0, 'enabled': True},
                'cliff_front_left': {'value': 0, 'enabled': True},
                'cliff_front_right': {'value': 0, 'enabled': True},
                'cliff_front_left_signal': {'value': 0, 'enabled': True},
                'cliff_front_right_signal': {'value': 0, 'enabled': True},
                'cliff_left_signal': {'value': 0, 'enabled': True},
                'cliff_right_signal': {'value': 0, 'enabled': True},
                'wall_signal': {'value': 0, 'enabled': True},
                'wall_sensor': {'value': False, 'enabled': True},
                'virtual_wall': {'value': False, 'enabled': True},
                'light_bumper_left': {'value': 0, 'enabled': True},
                'light_bumper_right': {'value': 0, 'enabled': True},
                'light_bumper_center_left': {'value': 0, 'enabled': True},
                'light_bumper_center_right': {'value': 0, 'enabled': True},
                'light_bumper_front_left': {'value': 0, 'enabled': True},
                'light_bumper_front_right': {'value': 0, 'enabled': True},
                'dirt_detect': {'value': 0, 'enabled': True},
                'light_bump_left_signal': {'value': 0, 'enabled': True},
                'light_bump_front_left_signal': {'value': 0, 'enabled': True},
                'light_bump_center_left_signal': {'value': 0, 'enabled': True},
                'light_bump_center_right_signal': {'value': 0, 'enabled': True},
                'light_bump_front_right_signal': {'value': 0, 'enabled': True},
                'light_bump_right_signal': {'value': 0, 'enabled': True},
            },
            # Energía
            'power': {
                'voltage': {'value': 12.0, 'enabled': True},
                'current': {'value': 1.0, 'enabled': True},
                'temperature': {'value': 25.0, 'enabled': True},
                'battery_charge': {'value': 100.0, 'enabled': True},
                'battery_capacity': {'value': 2000.0, 'enabled': True},
                'home_base': {'value': False, 'enabled': True},
                'internal_charger': {'value': False, 'enabled': True},
                'ir_char_omni': {'value': 0, 'enabled': True},
                'ir_char_left': {'value': 0, 'enabled': True},
                'ir_char_right': {'value': 0, 'enabled': True},
                'left_wheel_overcurrent': {'value': False, 'enabled': True},
                'right_wheel_overcurrent': {'value': False, 'enabled': True},
                'main_brush_overcurrent': {'value': False, 'enabled': True},
                'side_brush_overcurrent': {'value': False, 'enabled': True},
                'left_motor_current': {'value': 0, 'enabled': True},
                'right_motor_current': {'value': 0, 'enabled': True},
                'main_brush_motor_current': {'value': 0, 'enabled': True},
                'side_brush_motor_current': {'value': 0, 'enabled': True},
            },
            'misc': {
                'is_song_playing': {'value': False, 'enabled': True},
                'song_number': {'value': 0, 'enabled': True},
                'botones': {
                    'clean': {'value': False, 'enabled': True},
                    'clock': {'value': False, 'enabled': True},
                    'day': {'value': False, 'enabled': True},
                    'dock': {'value': False, 'enabled': True},
                    'hour': {'value': False, 'enabled': True},
                    'minute': {'value': False, 'enabled': True},
                    'schedule': {'value': False, 'enabled': True},
                    'spot': {'value': False, 'enabled': True},
                },
            },
            'state': {
                'oi_mode': {'value': 0, 'enabled': True},
                'stasis_disabled': {'value': False, 'enabled': True},
                'stasis_toggling': {'value': False, 'enabled': True},
                'number_stream_packets': {'value': 0, 'enabled': True},
                'auto_wake': {'value': False, 'enabled': True},
            },   
        }
        # Estado interno de actuadores
        self._actuators = {
            'movement': {
                'enabled': True,
                'state': 'stopped'  # stopped, moving, turning
            },
            'cleaning': {
                'enabled': True,
                'mode': 'off'  # off, clean, max
            },
            'brushes': {
                'enabled': True,
                'main_brush': False,
                'side_brush': False,
                'vacuum': False
            },
            'leds': {
                'enabled': True,
                'color': 0,
                'intensity': 0
            },
            'music': {
                'enabled': True,
                'is_playing': False,
                'current_song': None
            },
            'dock': {
                'enabled': True,
                'seeking': False
            }
        }
        self._node.get_logger().debug("Robot inicializado correctamente")
    @property
    def oi_mode(self):
        """
        Devuelve el modo operativo actual del robot (FULL, SAFE, PASSIVE).
        """
        if self._robot:
            return self._robot.oi_mode
        return None
    # 👀 Lectura de Sensores
    def read_sensors(self):
        """Lee los sensores activados según el filtro."""
        active_sensors = {}
        for category, sensors in self._sensors.items():
            active_sensors[category] = {}
            for sensor, data in sensors.items():
                if isinstance(data, dict) and data.get('enabled', False):
                    active_sensors[category][sensor] = data['value']
        self._node.get_logger().debug("Sensores leídos correctamente")
        return active_sensors
    # ♻️ Actualización de Sensores
    def update_sensors(self, categories=None):
        """
        Actualiza solo los valores habilitados desde el robot.
        Si 'categories' es None, actualiza todo.
        Si 'categories' es una lista, actualiza solo esas categorías.
        """
        robot = self._robot

        # Determinar categorías a actualizar
        if categories is None:
            categories_to_update = list(self._sensors.keys())
        else:
            categories_to_update = list(categories)
            for cat in categories_to_update:
                if cat not in self._sensors:
                    self._node.get_logger().warn(f"Categoría desconocida '{cat}' en update_sensors(). Ignorando.")

        # Recorrer categorías
        for category, sensors in self._sensors.items():
            if category not in categories_to_update:
                continue

            # Recorrer sensores de la categoría
            for sensor, data in sensors.items():
                if not (isinstance(data, dict) and data.get('enabled', False)):
                    continue
                try:
                    if category == 'movement':
                        if sensor == 'distance':
                            data['value'] = robot.distance
                        elif sensor == 'angle':
                            data['value'] = robot.angle
                        elif sensor == 'left_encoder_counts':
                            data['value'] = robot.left_encoder_counts
                        elif sensor == 'right_encoder_counts':
                            data['value'] = robot.right_encoder_counts
                        elif sensor == 'requested_left_velocity':
                            data['value'] = robot.requested_left_velocity
                        elif sensor == 'requested_right_velocity':
                            data['value'] = robot.requested_right_velocity
                        elif sensor == 'requested_radius':
                            data['value'] = robot.requested_radius
                        elif sensor == 'requested_velocity':
                            data['value'] = robot.requested_velocity

                    elif category == 'security':
                        if sensor == 'bump_left':
                            data['value'] = robot.bumps_and_wheel_drops.bump_left
                        elif sensor == 'bump_right':
                            data['value'] = robot.bumps_and_wheel_drops.bump_right
                        elif sensor == 'wheel_drop_left':
                            data['value'] = robot.bumps_and_wheel_drops.wheel_drop_left
                        elif sensor == 'wheel_drop_right':
                            data['value'] = robot.bumps_and_wheel_drops.wheel_drop_right
                        elif sensor == 'wall_sensor':
                            data['value'] = robot.wall_sensor
                        elif sensor == 'cliff_left':
                            data['value'] = robot.cliff_left
                        elif sensor == 'cliff_right':
                            data['value'] = robot.cliff_right
                        elif sensor == 'cliff_front_left':
                            data['value'] = robot.cliff_front_left
                        elif sensor == 'cliff_front_right':
                            data['value'] = robot.cliff_front_right
                        elif sensor == 'virtual_wall':
                            data['value'] = robot.virtual_wall
                        elif sensor == 'cliff_front_left_signal':
                            data['value'] = robot.cliff_front_left_signal
                        elif sensor == 'cliff_front_right_signal':
                            data['value'] = robot.cliff_front_right_signal
                        elif sensor == 'cliff_left_signal':
                            data['value'] = robot.cliff_left_signal
                        elif sensor == 'cliff_right_signal':
                            data['value'] = robot.cliff_right_signal
                        elif sensor == 'wall_signal':
                            data['value'] = robot.wall_signal
                        elif sensor == 'light_bumper_left':
                            data['value'] = robot.light_bumper_left
                        elif sensor == 'light_bumper_right':
                            data['value'] = robot.light_bumper_right
                        elif sensor == 'light_bumper_center_left':
                            data['value'] = robot.light_bumper_center_left
                        elif sensor == 'light_bumper_center_right':
                            data['value'] = robot.light_bumper_center_right
                        elif sensor == 'light_bumper_front_left':
                            data['value'] = robot.light_bumper_front_left
                        elif sensor == 'light_bumper_front_right':
                            data['value'] = robot.light_bumper_front_right
                        elif sensor == 'dirt_detect':
                            data['value'] = robot.dirt_detect
                        elif sensor == 'light_bump_left_signal':
                            data['value'] = robot.light_bump_left_signal
                        elif sensor == 'light_bump_front_left_signal':
                            data['value'] = robot.light_bump_front_left_signal
                        elif sensor == 'light_bump_center_left_signal':
                            data['value'] = robot.light_bump_center_left_signal
                        elif sensor == 'light_bump_center_right_signal':
                            data['value'] = robot.light_bump_center_right_signal
                        elif sensor == 'light_bump_front_right_signal':
                            data['value'] = robot.light_bump_front_right_signal
                        elif sensor == 'light_bump_right_signal':
                            data['value'] = robot.light_bump_right_signal

                    elif category == 'power':
                        if sensor == 'voltage':
                            data['value'] = robot.voltage
                        elif sensor == 'current':
                            data['value'] = robot.current
                        elif sensor == 'temperature':
                            data['value'] = robot.temperature
                        elif sensor == 'battery_charge':
                            data['value'] = robot.battery_charge
                        elif sensor == 'battery_capacity':
                            data['value'] = robot.battery_capacity
                        elif sensor == 'home_base':
                            data['value'] = robot.charging_sources.home_base
                        elif sensor == 'internal_charger':
                            data['value'] = robot.charging_sources.internal_charger
                        elif sensor == 'ir_char_omni':
                            data['value'] = robot.ir_character_omni
                        elif sensor == 'ir_char_left':
                            data['value'] = robot.ir_character_left
                        elif sensor == 'ir_char_right':
                            data['value'] = robot.ir_character_right
                        elif sensor == 'left_wheel_overcurrent':
                            data['value'] = robot.left_wheel_overcurrent
                        elif sensor == 'right_wheel_overcurrent':
                            data['value'] = robot.right_wheel_overcurrent
                        elif sensor == 'main_brush_overcurrent':
                            data['value'] = robot.main_brush_overcurrent
                        elif sensor == 'side_brush_overcurrent':
                            data['value'] = robot.side_brush_overcurrent
                        elif sensor == 'left_motor_current':
                            data['value'] = robot.left_motor_current
                        elif sensor == 'right_motor_current':
                            data['value'] = robot.right_motor_current
                        elif sensor == 'main_brush_motor_current':
                            data['value'] = robot.main_brush_motor_current
                        elif sensor == 'side_brush_motor_current':
                            data['value'] = robot.side_brush_motor_current

                    elif category == 'misc':
                        if sensor == 'is_song_playing':
                            data['value'] = robot.is_song_playing
                        elif sensor == 'song_number':
                            data['value'] = robot.song_number
                        elif sensor == 'botones':
                            for button, button_data in data['value'].items():
                                try:
                                    if button == 'clean':
                                        button_data['value'] = robot.buttons.clean
                                    elif button == 'clock':
                                        button_data['value'] = robot.buttons.clock
                                    elif button == 'day':
                                        button_data['value'] = robot.buttons.day
                                    elif button == 'dock':
                                        button_data['value'] = robot.buttons.dock
                                    elif button == 'hour':
                                        button_data['value'] = robot.buttons.hour
                                    elif button == 'minute':
                                        button_data['value'] = robot.buttons.minute
                                    elif button == 'schedule':
                                        button_data['value'] = robot.buttons.schedule
                                    elif button == 'spot':
                                        button_data['value'] = robot.buttons.spot
                                except Exception as btn_err:
                                    self._node.get_logger().error(
                                        f"Error al leer botón '{button}' en 'misc': {btn_err}"
                                    )

                    elif category == 'state':
                        if sensor == 'oi_mode':
                            data['value'] = robot.oi_mode
                        elif sensor == 'stasis_disabled':
                            data['value'] = robot.stasis.disabled
                        elif sensor == 'stasis_toggling':
                            data['value'] = robot.stasis.toggling
                        elif sensor == 'number_stream_packets':
                            data['value'] = robot.number_stream_packets
                        elif sensor == 'auto_wake':
                            data['value'] = self._auto_wake

                except Exception as sensor_err:
                    self._node.get_logger().error(
                        f"Error al leer sensor '{sensor}' en categoría '{category}': {sensor_err}"
                    )

        self._node.get_logger().debug("Parámetros de sensores actualizados correctamente")

    # 🚗 Movimiento
    def drive_forward(self, speed, duration):
        if not -500 <= speed <= 500:
            self._node.get_logger().error("Velocidad fuera de rango (-500 a 500). Comando ignorado.")
            return
        if duration <= 0:
            self._node.get_logger().error("Duración debe ser >0. Comando ignorado.")
            return
        self._command_count +=1
        robot = self._robot
        if robot is None or not self.connected:
            self._node.get_logger().error("Robot no conectado o no inicializado")
            return
        else:
            if not self._actuators['movement']['enabled']:
                self._node.get_logger().warn("Movimiento deshabilitado")
                return
            self._node.get_logger().debug(f"Moviendo hacia adelante a velocidad {speed} durante {duration} segundos")
            try:
                robot.drive_straight(speed)
                self._actuators['movement']['state'] = 'moving'
                time.sleep(duration)
                robot.drive_straight(0)
                self._actuators['movement']['state'] = 'stopped'
                self._node.get_logger().debug("Movimiento hacia adelante completado")
            except Exception as e:
                self._node.get_logger().error(f"Error durante el movimiento: {e}")
                self.connected = False
                # Intentar reconexión
                robot = self.reconnect()
                if robot:
                    try:
                        # Intentar detener el robot tras reconexión
                        robot.drive_straight(0)
                        self._node.get_logger().info("Robot detenido tras reconexión")
                    except Exception as stop_err:
                        self._node.get_logger().error(f"No se pudo detener el robot tras reconexión: {stop_err}")
                else:
                    self._node.get_logger().error("No se pudo reconectar.")
                return
    def spin(self, direction, speed, duration):
        if direction not in ["left", "right"]:
            self._node.get_logger().error("Dirección inválida (use 'left' o 'right'). Comando ignorado.")
            return
        if not -500 <= speed <= 500:
            self._node.get_logger().error("Velocidad fuera de rango (-500 a 500). Comando ignorado.")
            return
        if duration <= 0:
            self._node.get_logger().error("Duración debe ser >0. Comando ignorado.")
            return
        self._command_count +=1
        robot = self._robot
        if robot is None or not self.connected:
            self._node.get_logger().error("Robot no conectado o no inicializado")
            return

        if not self._actuators['movement']['enabled']:
            self._node.get_logger().warn("Movimiento deshabilitado")
            return

        try:
            if direction == 'left':
                robot.spin_left(speed)
                self._node.get_logger().debug(f"Iniciando giro a la izquierda a velocidad {speed}")
            elif direction == 'right':
                robot.spin_right(speed)
                self._node.get_logger().debug(f"Iniciando giro a la derecha a velocidad {speed}")
            else:
                self._node.get_logger().error("Dirección inválida")
                return

            self._actuators['movement']['state'] = 'turning'
            time.sleep(duration)
            robot.drive_straight(0)
            self._actuators['movement']['state'] = 'stopped'
            self._node.get_logger().debug("Movimiento giratorio completado")

        except Exception as e:
            self._node.get_logger().error(f"Error durante el giro: {e}")
            self.connected = False
            # Intentar reconexión
            robot = self.reconnect()
            if robot:
                try:
                    robot.drive_straight(0)
                    self._node.get_logger().info("Robot detenido tras reconexión")
                except Exception as stop_err:
                    self._node.get_logger().error(f"No se pudo detener el robot tras reconexión: {stop_err}")
            else:
                self._node.get_logger().error("No se pudo reconectar.")
            return
    def drive_backward(self, speed, duration):
        if not -500 <= speed <= 500:
            self._node.get_logger().error("Velocidad fuera de rango (-500 a 500). Comando ignorado.")
            return
        if duration <= 0:
            self._node.get_logger().error("Duración debe ser >0. Comando ignorado.")
            return
        self._command_count +=1
        robot = self._robot
        if robot is None or not self.connected:
            self._node.get_logger().error("Robot no conectado o no inicializado")
            return

        if not self._actuators['movement']['enabled']:
            self._node.get_logger().warn("Movimiento deshabilitado")
            return

        try:
            self._node.get_logger().debug(f"Moviendo hacia atrás a velocidad {speed} durante {duration} segundos")
            robot.drive_straight(-speed)
            self._actuators['movement']['state'] = 'moving'
            time.sleep(duration)
            robot.drive_straight(0)
            self._actuators['movement']['state'] = 'stopped'
            self._node.get_logger().debug("Movimiento hacia atrás completado")

        except Exception as e:
            self._node.get_logger().error(f"Error durante el movimiento hacia atrás: {e}")
            self.connected = False
            # Intentar reconexión
            robot = self.reconnect()
            if robot:
                try:
                    robot.drive_straight(0)
                    self._node.get_logger().info("Robot detenido tras reconexión")
                except Exception as stop_err:
                    self._node.get_logger().error(f"No se pudo detener el robot tras reconexión: {stop_err}")
            else:
                self._node.get_logger().error("No se pudo reconectar.")
            return
    def drive_manual(self, left_speed, right_speed, duration):
        if not -500 <= left_speed <= 500 or not -500 <= right_speed <= 500:
            self._node.get_logger().error("Velocidades fuera de rango (-500 a 500). Comando ignorado.")
            return
        if duration <= 0:
            self._node.get_logger().error("Duración debe ser >0. Comando ignorado.")
            return
        self._command_count +=1
        robot = self._robot
        if robot is None or not self.connected:
            self._node.get_logger().error("Robot no conectado o no inicializado")
            return

        if not self._actuators['movement']['enabled']:
            self._node.get_logger().warn("Movimiento deshabilitado")
            return

        try:
            self._node.get_logger().debug(
                f"Movimiento manual iniciado: velocidad izquierda={left_speed}, derecha={right_speed}, duración={duration}s"
            )
            robot.drive_direct(left_speed, right_speed)
            self._actuators['movement']['state'] = 'moving'
            time.sleep(duration)
            robot.drive_direct(0, 0)
            self._actuators['movement']['state'] = 'stopped'
            self._node.get_logger().debug("Movimiento manual completado")

        except Exception as e:
            self._node.get_logger().error(f"Error durante el movimiento manual: {e}")
            self.connected = False
            # Intentar reconexión
            robot = self.reconnect()
            if robot:
                try:
                    robot.drive_direct(0, 0)
                    self._node.get_logger().info("Robot detenido tras reconexión")
                except Exception as stop_err:
                    self._node.get_logger().error(f"No se pudo detener el robot tras reconexión: {stop_err}")
            else:
                self._node.get_logger().error("No se pudo reconectar.")
            return
    # 🧹 Limpieza
    def start_cleaning(self):
        self._command_count +=1
        robot = self._robot
        if robot is None or not self.connected:
            self._node.get_logger().error("Robot no conectado o no inicializado")
            return

        if not self._actuators['cleaning']['enabled']:
            self._node.get_logger().warn("Limpieza deshabilitada")
            return

        try:
            self._node.get_logger().debug("Iniciando limpieza estándar")
            robot.clean()
            self._actuators['cleaning']['mode'] = 'clean'
            self._node.get_logger().debug("Limpieza iniciada correctamente")

        except Exception as e:
            self._node.get_logger().error(f"Error al iniciar la limpieza: {e}")
            self.connected = False
            # Intentar reconexión
            robot = self.reconnect()
            if robot:
                try:
                    robot.clean()
                    self._actuators['cleaning']['mode'] = 'clean'
                    self._node.get_logger().info("Limpieza iniciada tras reconexión")
                except Exception as retry_err:
                    self._node.get_logger().error(f"No se pudo iniciar la limpieza tras reconexión: {retry_err}")
            else:
                self._node.get_logger().error("No se pudo reconectar.")
            return
    def start_max_cleaning(self):
        self._command_count +=1
        robot = self._robot
        if robot is None or not self.connected:
            self._node.get_logger().error("Robot no conectado o no inicializado")
            return

        if not self._actuators['cleaning']['enabled']:
            self._node.get_logger().warn("Limpieza deshabilitada")
            return

        try:
            self._node.get_logger().debug("Iniciando limpieza máxima")
            robot.clean_max()
            self._actuators['cleaning']['mode'] = 'max'
            self._node.get_logger().debug("Limpieza máxima iniciada correctamente")

        except Exception as e:
            self._node.get_logger().error(f"Error al iniciar la limpieza máxima: {e}")
            self.connected = False
            # Intentar reconexión
            robot = self.reconnect()
            if robot:
                try:
                    robot.clean_max()
                    self._actuators['cleaning']['mode'] = 'max'
                    self._node.get_logger().info("Limpieza máxima iniciada tras reconexión")
                except Exception as retry_err:
                    self._node.get_logger().error(f"No se pudo iniciar la limpieza máxima tras reconexión: {retry_err}")
            else:
                self._node.get_logger().error("No se pudo reconectar.")
            return
    def stop_cleaning(self):
        self._command_count +=1
        robot = self._robot
        if robot is None or not self.connected:
            self._node.get_logger().error("Robot no conectado o no inicializado")
            return

        if not self._actuators['cleaning']['enabled']:
            self._node.get_logger().warn("Limpieza deshabilitada")
            return

        try:
            self._node.get_logger().debug("Deteniendo limpieza")
            robot.clean_stop()
            self._actuators['cleaning']['mode'] = 'off'
            self._node.get_logger().debug("Limpieza detenida correctamente")

        except Exception as e:
            self._node.get_logger().error(f"Error al detener la limpieza: {e}")
            self.connected = False
            # Intentar reconexión
            robot = self.reconnect()
            if robot:
                try:
                    robot.clean_stop()
                    self._actuators['cleaning']['mode'] = 'off'
                    self._node.get_logger().info("Limpieza detenida tras reconexión")
                except Exception as retry_err:
                    self._node.get_logger().error(f"No se pudo detener la limpieza tras reconexión: {retry_err}")
            else:
                self._node.get_logger().error("No se pudo reconectar.")
            return
    # 🌀 Cepillos y aspiradora
    def set_brushes(self, main_brush=True, side_brush=True, vacuum=True):
        self._command_count +=1
        robot = self._robot
        if robot is None or not self.connected:
            self._node.get_logger().error("Robot no conectado o no inicializado")
            return

        if not self._actuators['brushes']['enabled']:
            self._node.get_logger().warn("Cepillos deshabilitados")
            return

        try:
            self._node.get_logger().debug(
                f"Configurando cepillos: main_brush={main_brush}, side_brush={side_brush}, vacuum={vacuum}"
            )
            robot.set_motors(
                main_brush_on=main_brush,
                side_brush=side_brush,
                vacuum=vacuum
            )
            self._actuators['brushes']['main_brush'] = main_brush
            self._actuators['brushes']['side_brush'] = side_brush
            self._actuators['brushes']['vacuum'] = vacuum
            self._node.get_logger().debug("Cepillos y aspiradora configurados correctamente")

        except Exception as e:
            self._node.get_logger().error(f"Error al configurar los cepillos: {e}")
            self.connected = False
            # Intentar reconexión
            robot = self.reconnect()
            if robot:
                try:
                    robot.set_motors(
                        main_brush_on=main_brush,
                        side_brush=side_brush,
                        vacuum=vacuum
                    )
                    self._actuators['brushes']['main_brush'] = main_brush
                    self._actuators['brushes']['side_brush'] = side_brush
                    self._actuators['brushes']['vacuum'] = vacuum
                    self._node.get_logger().info("Cepillos configurados tras reconexión")
                except Exception as retry_err:
                    self._node.get_logger().error(f"No se pudo configurar los cepillos tras reconexión: {retry_err}")
            else:
                self._node.get_logger().error("No se pudo reconectar.")
            return
    def stop_brushes(self):
        self._command_count +=1
        robot = self._robot
        if robot is None or not self.connected:
            self._node.get_logger().error("Robot no conectado o no inicializado")
            return

        if not self._actuators['brushes']['enabled']:
            self._node.get_logger().warn("Cepillos deshabilitados")
            return

        try:
            self._node.get_logger().debug("Deteniendo cepillos y aspiradora")
            robot.set_motors(False, False, False)
            self._actuators['brushes']['main_brush'] = False
            self._actuators['brushes']['side_brush'] = False
            self._actuators['brushes']['vacuum'] = False
            self._node.get_logger().debug("Cepillos y aspiradora detenidos correctamente")

        except Exception as e:
            self._node.get_logger().error(f"Error al detener los cepillos: {e}")
            self.connected = False
            # Intentar reconexión
            robot = self.reconnect()
            if robot:
                try:
                    robot.set_motors(False, False, False)
                    self._actuators['brushes']['main_brush'] = False
                    self._actuators['brushes']['side_brush'] = False
                    self._actuators['brushes']['vacuum'] = False
                    self._node.get_logger().info("Cepillos detenidos tras reconexión")
                except Exception as retry_err:
                    self._node.get_logger().error(f"No se pudieron detener los cepillos tras reconexión: {retry_err}")
            else:
                self._node.get_logger().error("No se pudo reconectar.")
            return
    # 🔔 LEDs
    def set_leds(self, color, intensity):
        if not 0 <= color <= 255 or not 0 <= intensity <= 255:
            self._node.get_logger().error("Valores de LEDs fuera de rango (0-255). Comando ignorado.")
            return
        self._command_count +=1
        robot = self._robot
        if robot is None or not self.connected:
            self._node.get_logger().error("Robot no conectado o no inicializado")
            return

        if not self._actuators['leds']['enabled']:
            self._node.get_logger().warn("LEDs deshabilitados")
            return

        try:
            self._node.get_logger().debug(f"Configurando LEDs: color={color}, intensidad={intensity}")
            robot.set_leds(power_color=color, power_intensity=intensity)
            self._actuators['leds']['color'] = color
            self._actuators['leds']['intensity'] = intensity
            self._node.get_logger().debug("LEDs configurados correctamente")

        except Exception as e:
            self._node.get_logger().error(f"Error al configurar los LEDs: {e}")
            self.connected = False
            # Intentar reconexión
            robot = self.reconnect()
            if robot:
                try:
                    robot.set_leds(power_color=color, power_intensity=intensity)
                    self._actuators['leds']['color'] = color
                    self._actuators['leds']['intensity'] = intensity
                    self._node.get_logger().info("LEDs configurados tras reconexión")
                except Exception as retry_err:
                    self._node.get_logger().error(f"No se pudieron configurar los LEDs tras reconexión: {retry_err}")
            else:
                self._node.get_logger().error("No se pudo reconectar.")
            return
    # 🎵 Música
    def play_song(self, song_number, notes):
        if not 0 <= song_number <= 3:
            self._node.get_logger().error("Número de canción fuera de rango (0-3). Comando ignorado.")
            return
        if not (0 < len(notes) <= 16):
            self._node.get_logger().error("Cantidad de notas fuera de rango (1-16). Comando ignorado.")
            return
        for i, note in enumerate(notes):
            if not (isinstance(note, (list, tuple)) and len(note) == 2):
                self._node.get_logger().error(f"Formato inválido en nota {i}. Comando ignorado.")
                return
            pitch, duration = note
            if not 31 <= pitch <= 127:
                self._node.get_logger().error(f"Tono de nota {i} fuera de rango (31-127). Comando ignorado.")
                return
            if not 0 <= duration <= 255:
                self._node.get_logger().error(f"Duración de nota {i} fuera de rango (0-255). Comando ignorado.")
                return
        self._command_count +=1
        robot = self._robot
        if robot is None or not self.connected:
            self._node.get_logger().error("Robot no conectado o no inicializado")
            return

        if not self._actuators['music']['enabled']:
            self._node.get_logger().warn("Música deshabilitada")
            return

        try:
            self._node.get_logger().debug(f"Reproduciendo canción {song_number} con notas {notes}")
            robot.set_song(song_number, notes)
            robot.play_song(song_number)
            self._actuators['music']['is_playing'] = True
            self._actuators['music']['current_song'] = song_number
            self._node.get_logger().debug("Canción reproducida correctamente")

        except Exception as e:
            self._node.get_logger().error(f"Error al reproducir la canción: {e}")
            self.connected = False
            # Intentar reconexión
            robot = self.reconnect()
            if robot:
                try:
                    robot.set_song(song_number, notes)
                    robot.play_song(song_number)
                    self._actuators['music']['is_playing'] = True
                    self._actuators['music']['current_song'] = song_number
                    self._node.get_logger().info("Canción reproducida tras reconexión")
                except Exception as retry_err:
                    self._node.get_logger().error(f"No se pudo reproducir la canción tras reconexión: {retry_err}")
            else:
                self._node.get_logger().error("No se pudo reconectar.")
            return
    def stop_song(self):
        self._command_count +=1
        robot = self._robot
        if robot is None or not self.connected:
            self._node.get_logger().error("Robot no conectado o no inicializado")
            return

        if not self._actuators['music']['enabled']:
            self._node.get_logger().warn("Música deshabilitada")
            return

        try:
            self._node.get_logger().debug("Deteniendo reproducción de canción")
            # No hay un método directo para parar la canción, se usa canción vacía
            robot.set_song(1, [])
            robot.play_song(1)
            self._actuators['music']['is_playing'] = False
            self._actuators['music']['current_song'] = None
            self._node.get_logger().debug("Canción detenida correctamente")

        except Exception as e:
            self._node.get_logger().error(f"Error al detener la canción: {e}")
            self.connected = False
            # Intentar reconexión
            robot = self.reconnect()
            if robot:
                try:
                    robot.set_song(1, [])
                    robot.play_song(1)
                    self._actuators['music']['is_playing'] = False
                    self._actuators['music']['current_song'] = None
                    self._node.get_logger().info("Canción detenida tras reconexión")
                except Exception as retry_err:
                    self._node.get_logger().error(f"No se pudo detener la canción tras reconexión: {retry_err}")
            else:
                self._node.get_logger().error("No se pudo reconectar.")
            return
    # ⚓ Docking
    def seek_dock(self):
        self._command_count +=1
        robot = self._robot
        if robot is None or not self.connected:
            self._node.get_logger().error("Robot no conectado o no inicializado")
            return

        if not self._actuators['dock']['enabled']:
            self._node.get_logger().warn("Docking deshabilitado")
            return

        try:
            self._node.get_logger().debug("Iniciando proceso de búsqueda de base de carga")
            robot.seek_dock()
            self._actuators['dock']['seeking'] = True
            self._node.get_logger().debug("Proceso de docking iniciado correctamente")

        except Exception as e:
            self._node.get_logger().error(f"Error al iniciar el docking: {e}")
            self.connected = False
            # Intentar reconexión
            robot = self.reconnect()
            if robot:
                try:
                    robot.seek_dock()
                    self._actuators['dock']['seeking'] = True
                    self._node.get_logger().info("Docking iniciado tras reconexión")
                except Exception as retry_err:
                    self._node.get_logger().error(f"No se pudo iniciar el docking tras reconexión: {retry_err}")
            else:
                self._node.get_logger().error("No se pudo reconectar.")
            return
    # 🔌 Conexión al Robot
    def connect_robot(self, connection_type='TCP', address=None, port=None, serial_port=None, connection_mode='FULL'):
        """
        Conecta al robot usando TCP o un puerto serie.

        Args:
            connection_type (str): 'TCP' o 'Serial'.
            address (str): Dirección IP si es TCP.
            port (int): Puerto si es TCP.
            serial_port (str): Nombre del puerto si es Serial.
            connection_mode (str): Modo de conexión ('SAFE', 'FULL', 'PASSIVE').

        Returns:
            object: Instancia del robot conectado o None si falla.
        """
        self._command_count +=1
        self._connection_params = {
            "connection_type": connection_type,
            "address": address,
            "port": port,
            "serial_port": serial_port,
            "connection_mode": connection_mode,
        }
        self._node.get_logger().debug(f"Conectando al robot con parámetros: {self._connection_params}")

        try:
            if connection_type == 'TCP':
                if not address or not port:
                    self._node.get_logger().debug("Conexión TCP requiere dirección IP y puerto.")
                    raise ValueError("Debe proporcionar dirección IP y puerto para TCP.")
                import subprocess
                # Crear puerto serie virtual con socat
                virtual_port = '/dev/roomba'
                command = f"socat -d -d PTY,link={virtual_port},raw TCP:{address}:{port} &"
                self._socat_process = subprocess.Popen(command, shell=True)
                robot = Create2(virtual_port)
            elif connection_type == 'Serial':
                if not serial_port:
                    self._node.get_logger().debug("Conexión Serial requiere nombre del puerto serie.")
                    raise ValueError("Debe proporcionar el nombre del puerto serie.")
                robot = Create2(serial_port)
            else:
                self._node.get_logger().debug("Tipo de conexión inválido. Use 'TCP' o 'Serial'.")
                raise ValueError("Tipo de conexión inválido. Use 'TCP' o 'Serial'.")

            # Configurar modo de conexión
            if connection_mode == 'FULL':
                robot.oi_mode = MODES.FULL
                self._node.get_logger().debug("Modo de conexión: FULL")
            elif connection_mode == 'SAFE':
                robot.oi_mode = MODES.SAFE
                self._node.get_logger().debug("Modo de conexión: SAFE")
            elif connection_mode == 'PASSIVE':
                robot.oi_mode = MODES.PASSIVE
                self._node.get_logger().debug("Modo de conexión: PASSIVE")
            else:
                self._node.get_logger().debug("Modo de conexión inválido. Use 'FULL', 'SAFE' o 'PASSIVE'.")
                raise ValueError("Modo de conexión inválido. Use 'FULL', 'SAFE' o 'PASSIVE'.")

            # Despertar el robot si es necesario
            #if not robot.is_awake():
            #    self.wake(robot)

            is_awake = True
            try:
                attr = getattr(robot, 'is_awake', None)
                if callable(attr):
                    is_awake = bool(attr())       # método is_awake()
                elif attr is not None:
                    is_awake = bool(attr)         # atributo is_awake
                else:
                    is_awake = True               # si no existe, asumir despierto
            except Exception as e:
                self._node.get_logger().debug(f"is_awake no disponible: {e}")
                is_awake = True

            if not is_awake:
                woke = False
                for name in ('wake', 'wake_up'):
                    fn = getattr(robot, name, None)
                    if callable(fn):
                        try:
                            fn()
                            woke = True
                            break
                        except Exception as e:
                            self._node.get_logger().warn(f"No se pudo despertar el robot con {name}(): {e}")
                if not woke:
                    self._node.get_logger().warn("No hay método para despertar el robot; continuando de todos modos.")

            self._node.get_logger().info("Conexión exitosa al robot.")
            self._connected_since = time.time()
            self._robot = robot
            self.connected = True
            return robot

        except Exception as e:
            self._node.get_logger().error(f"Error al conectar con el robot: {e}")
            self.connected = False
            return None
    def reconnect(self):
        """
        Reintenta la conexión con los mismos parámetros.
        """
        self._command_count +=1
        params = self._connection_params
        self._node.get_logger().warn("Intentando reconexión con el robot...")
        self._robot = self.connect_robot(
            connection_type=params["connection_type"],
            address=params["address"],
            port=params["port"],
            serial_port=params["serial_port"],
            connection_mode=params["connection_mode"]
        )
        if self._robot:
            self._node.get_logger().info("Reconexión exitosa.")
            self._last_reconnect_time = time.time()
        else:
            self._node.get_logger().error("Fallo al reconectar.")
        return self._robot
    def disconnect(self):
        """
        Desconecta el robot de forma segura.
        - Cambia estado interno de actuadores.
        - Cierra el puerto serie si existe.
        - Mata el proceso de socat si existe.
        """
        self._command_count +=1
        if not self.connected:
            self._node.get_logger().warn("El robot ya estaba desconectado.")
            return

        # Poner todos los actuadores en estado seguro
        for actuator, data in self._actuators.items():
            if "state" in data:
                data["state"] = "stopped"
            if "mode" in data:
                data["mode"] = "off"
            if "main_brush" in data:
                data["main_brush"] = False
            if "side_brush" in data:
                data["side_brush"] = False
            if "vacuum" in data:
                data["vacuum"] = False
            if "is_playing" in data:
                data["is_playing"] = False
            if "current_song" in data:
                data["current_song"] = None
            if "seeking" in data:
                data["seeking"] = False

        # Cerrar puerto serie si existe
        if hasattr(self, "_robot") and self._robot:
            try:
                if hasattr(self._robot, "serial"):
                    self._robot.serial.close()
                    self._node.get_logger().info("Puerto serie cerrado correctamente.")
                elif hasattr(self._robot, "_serial"):
                    self._robot._serial.close()
                    self._node.get_logger().info("Puerto serie cerrado correctamente.")
            except Exception as e:
                self._node.get_logger().error(f"No se pudo cerrar el puerto serie: {e}")

        # Cerrar proceso socat si existe
        if hasattr(self, "_socat_process") and self._socat_process:
            try:
                self._socat_process.terminate()
                self._socat_process.wait(timeout=5)
                self._node.get_logger().info("Proceso socat detenido correctamente.")
            except Exception as e:
                self._node.get_logger().error(f"No se pudo detener socat: {e}")

        # Marcar como desconectado
        self.connected = False
        self._robot = None
        self._node.get_logger().info("El robot se ha desconectado y se ha puesto en estado seguro.")

    # 🌙 Despertar Robot
    def wake(self):
        self._command_count +=1
        if not self.connected or self._robot is None:
            self._node.get_logger().error("Robot no conectado o no inicializado.")
            return

        # Comprobación robusta de awake
        is_awake = True
        try:
            attr = getattr(self._robot, 'is_awake', None)
            if callable(attr):
                is_awake = bool(attr())
            elif attr is not None:
                is_awake = bool(attr)
            else:
                is_awake = True
        except Exception as e:
            self._node.get_logger().debug(f"is_awake no disponible: {e}")
            is_awake = True

        if is_awake:
            self._node.get_logger().info("El robot ya está despierto.")
            return

        try:
            fn = getattr(self._robot, 'wake', None) or getattr(self._robot, 'wake_up', None)
            if callable(fn):
                fn()
            oi_mode = self.oi_mode
            self._robot.oi_mode = MODES.FULL
            self.connected = True
            self._node.get_logger().info("Robot despertado y modo OI cambiado a FULL.")
            self._robot.oi_mode = oi_mode
        except Exception as e:
            self._node.get_logger().error(f"Error al despertar el robot: {e}")
            self.connected = False

    # 📊 Estado General del Robot
    def get_status(self, include_sensors=False):
        """
        Devuelve un diccionario con el estado del robot.

        Args:
            include_sensors (bool): Si True, lee sensores activos.

        Returns:
            dict con la información.
        """
        self._command_count +=1
        status = {
            "connected": self.connected,
            "oi_mode": self.oi_mode,
            "actuators": self._actuators.copy()
        }

        if include_sensors:
            try:
                self._node.get_logger().debug("Actualizando y leyendo sensores...")
                self.update_sensors()
                sensors = self.read_sensors()
                status["sensors"] = sensors
                self._node.get_logger().debug("Sensores leídos correctamente")
            except Exception as e:
                self._node.get_logger().error(f"Error al obtener los sensores: {e}")
                status["sensors"] = "Error al obtener datos"

        status["metrics"] = {
            "command_count": self._command_count,
            "last_reconnect_time": self._last_reconnect_time,
            "connected_since": self._connected_since,
        }

        self._node.get_logger().debug(f"Estado del robot: {status}")

        return status

##### Ejemplo de uso completo #####

# from irobot.robots.create2 import Create2
# from lib_robot_roomba import Robot

# Crear instancia de tu clase Robot
# roomba = Robot(node=self)  # si estás dentro de un Node ROS2

# 1️⃣ Conectar al robot por Serial (puedes cambiar a TCP si prefieres)
# roomba.connect_robot(
#     connection_type='Serial',
#     serial_port='/dev/ttyUSB0',  # Cambia al puerto correcto
#     connection_mode='FULL'
# )

# 2️⃣ Desactivar algún actuador si quieres
# roomba._actuators['music']['enabled'] = False  # Desactivar música
# roomba._actuators['leds']['enabled'] = True    # Activar LEDs

# 3️⃣ Mover adelante
# roomba.drive_forward(speed=200, duration=2)

# 4️⃣ Girar a la derecha
# roomba.spin(direction='right', speed=100, duration=1)

# 5️⃣ Activar limpieza máxima
# roomba.start_max_cleaning()

# 6️⃣ Encender LEDs
# roomba.set_leds(color=128, intensity=255)

# 7️⃣ Reproducir una canción
# roomba.play_song(song_number=1, notes=[(64, 16), (67, 16)])

# 8️⃣ Detener cepillos
# roomba.stop_brushes()

# 9️⃣ Buscar la base de carga
# roomba.seek_dock()

# 1️⃣0️⃣ Leer sensores habilitados
# roomba.update_sensors()
# sensors = roomba.read_sensors()
# print("Sensores activos:", sensors)

# 1️⃣1️⃣ Obtener estado sin sensores
# estado = roomba.get_status()
# print(estado)

# 1️⃣2️⃣ Obtener estado incluyendo sensores
# estado_completo = roomba.get_status(include_sensors=True)
# print(estado_completo)