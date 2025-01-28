class Robot:
    def __init__(self):
        self.connected = False
        self.oi_mode = "FULL"
        # Inicializar valores de los sensore
        self._sensors = {
            # Sensore de movimiento
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
                'stasis.disabled': {'value': False, 'enabled': True},
                'stasis.toggling': {'value': False, 'enabled': True},
                'number_stream_packets': {'value': 0, 'enabled': True},
                'auto_wake': {'value': False, 'enabled': True},
            },   
        }
    
    def read_sensors(self):
        """Lee los sensores activados según el filtro."""
        active_sensors = {}
        for category, sensors in self.sensors.items():
            active_sensors[category] = {}
            for sensor, data in sensors.items():
                if isinstance(data, dict) and data.get('enabled', False):
                    active_sensors[category][sensor] = data['value']
        return active_sensors
    
    def update_sensors(self, robot):
        """Actualiza solo los valores habilitados desde el robot."""
        for category, sensors in self.sensors.items():
            for sensor, data in sensors.items():
                if isinstance(data, dict) and data.get('enabled', False):
                    # Actualizar valores dependiendo del sensor
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
                    elif category == 'misc':
                        if sensor == 'is_song_playing':
                            data['value'] = robot.is_song_playing
                        elif sensor == 'song_number':
                            data['value'] = robot.song_number
                        elif sensor == 'botones':
                            for button, button_data in data['value'].items():
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
                active_sensors[category][sensor] = data['value']
        return active_sensors

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
        try:
            if connection_type == 'TCP':
                if not address or not port:
                    raise ValueError("Debe proporcionar dirección IP y puerto para TCP.")
                import subprocess
                # Crear puerto serie virtual con socat
                virtual_port = '/dev/roomba'
                command = f"socat -d -d PTY,link={virtual_port},raw TCP:{address}:{port} &"
                subprocess.run(command, shell=True, check=True)
                robot = Create2(virtual_port)
            elif connection_type == 'Serial':
                if not serial_port:
                    raise ValueError("Debe proporcionar el nombre del puerto serie.")
                robot = Create2(serial_port)
            else:
                raise ValueError("Tipo de conexión inválido. Use 'TCP' o 'Serial'.")

            # Configurar modo de conexión
            if connection_mode == 'FULL':
                robot.oi_mode = MODES.FULL
            elif connection_mode == 'SAFE':
                robot.oi_mode = MODES.SAFE
            elif connection_mode == 'PASSIVE':
                robot.oi_mode = MODES.PASSIVE
            else:
                raise ValueError("Modo de conexión inválido. Use 'FULL', 'SAFE' o 'PASSIVE'.")

            print("Conexión exitosa al robot.")
            return robot

        except Exception as e:
            print(f"Error al conectar con el robot: {e}")
            return None
    
    def wake(self): ###################################################################
        """Despierta el robot si está en modo inactivo."""
        pass  # Implementar función para despertar el robot

# Desactivar sensores específicos
robot.sensors['movement']['distance']['enabled'] = False
robot.sensors['security']['bump_left']['enabled'] = False

# Leer solo los sensores activados
sensores_leidos = robot.leer_sensores()
print(sensores_leidos)