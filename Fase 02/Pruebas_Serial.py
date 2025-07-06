from Librerias.irobot.robots.create2 import Create2
from Librerias.irobot.openinterface.constants import MODES
import time


print("START")  
# instantiate robot

#robot = Create2("/dev/ttyS100")
#robot = Create2("COM3")
robot = Create2("/tmp/roomba_front")  # Para usar con el simulador


def print_sensor_full():
    print("-------------SENSORES-----------")  
    print("enable_quirks: " + str(robot.enable_quirks))
    print("auto_wake: " + str(robot.auto_wake))
    print("bumps_and_wheel_drops: ")
    print("      (bump_left) " + str(robot.bumps_and_wheel_drops.bump_left))
    print("      (bump_right) " + str(robot.bumps_and_wheel_drops.bump_right))
    print("      (wheel_drop_left) " + str(robot.bumps_and_wheel_drops.wheel_drop_left))
    print("      (wheel_drop_right) " + str(robot.bumps_and_wheel_drops.wheel_drop_right))
    print("wall_sensor: " + str(robot.wall_sensor))
    print("cliff_left: " + str(robot.cliff_left))
    print("cliff_front_left: " + str(robot.cliff_front_left))
    print("cliff_front_right: " + str(robot.cliff_front_right))
    print("cliff_right: " + str(robot.cliff_right))
    print("virtual_wall: " + str(robot.virtual_wall))
    print("wheel_overcurrents: ")
    print("     (left_wheel_overcurrent) " + str(robot.wheel_overcurrents.left_wheel_overcurrent))
    print("     (main_brush_overcurrent) " + str(robot.wheel_overcurrents.main_brush_overcurrent))
    print("     (right_wheel_overcurrent) " + str(robot.wheel_overcurrents.right_wheel_overcurrent))
    print("     (side_brush_overcurrent) " + str(robot.wheel_overcurrents.side_brush_overcurrent))
    print("dirt_detect: " + str(robot.dirt_detect))
    print("ir_char_omni: " + str(robot.ir_char_omni))
    print("ir_char_left: " + str(robot.ir_char_left))
    print("ir_char_right: " + str(robot.ir_char_right))
    print("buttons: ")
    print("     (clean) " + str(robot.buttons.clean))
    print("     (clock) " + str(robot.buttons.clock))
    print("     (day) " + str(robot.buttons.day))
    print("     (dock)) " + str(robot.buttons.dock))
    print("     (hour) " + str(robot.buttons.hour))
    print("     (minute)) " + str(robot.buttons.minute))
    print("     (schedule)) " + str(robot.buttons.schedule))
    print("     (spot) " + str(robot.buttons.spot))
    print("distance: " + str(robot.distance))
    print("angle: " + str(robot.angle))
    print("charging_state: " + str(robot.charging_state))
    print("voltage: " + str(robot.voltage))
    print("current: " + str(robot.current))
    print("temperature: " + str(robot.temperature))
    print("battery_charge: " + str(robot.battery_charge))
    print("battery_capacity: " + str(robot.battery_capacity))
    print("wall_signal: " + str(robot.wall_signal))
    print("cliff_front_left_signal: " + str(robot.cliff_front_left_signal))
    print("cliff_front_right_signal: " + str(robot.cliff_front_right_signal))
    print("cliff_left_signal: " + str(robot.cliff_left_signal))
    print("cliff_right_signal: " + str(robot.cliff_right_signal))
    print("charging_sources: ")
    print("     (home_base) " + str(robot.charging_sources.home_base))
    print("     (internal_charger) " + str(robot.charging_sources.internal_charger))
    print("oi_mode: " + str(robot.oi_mode))
    print("song_number: " + str(robot.song_number))
    print("is_song_playing: " + str(robot.is_song_playing))
    print("number_stream_packets: " + str(robot.number_stream_packets))
    print("requested_velocity: " + str(robot.requested_velocity))
    print("requested_radius: " + str(robot.requested_radius))
    print("requested_right_velocity: " + str(robot.requested_right_velocity))
    print("requested_left_velocity: " + str(robot.requested_left_velocity))
    print("left_encoder_counts: " + str(robot.left_encoder_counts))
    print("right_encoder_counts: " + str(robot.right_encoder_counts))
    print("light_bumper: ")
    print("     (center_left) " + str(robot.light_bumper.center_left))
    print("     (center_right) " + str(robot.light_bumper.center_right))
    print("     (front_left) " + str(robot.light_bumper.front_left))
    print("     (front_right) " + str(robot.light_bumper.front_right))
    print("     (left " + str(robot.light_bumper.left))
    print("     (right)) " + str(robot.light_bumper.right))
    print("light_bump_left_signal: " + str(robot.light_bump_left_signal))
    print("light_bump_front_left_signal: " + str(robot.light_bump_front_left_signal))
    print("light_bump_center_left_signal: " + str(robot.light_bump_center_left_signal))
    print("light_bump_center_right_signal: " + str(robot.light_bump_center_right_signal))
    print("light_bump_front_right_signal: " + str(robot.light_bump_front_right_signal))
    print("light_bump_right_signal: " + str(robot.light_bump_right_signal))
    print("left_motor_current: " + str(robot.left_motor_current))
    print("right_motor_current: " + str(robot.right_motor_current))
    print("main_brush_motor_current: " + str(robot.main_brush_motor_current))
    print("side_brush_motor_current: " + str(robot.side_brush_motor_current))
    print("stasis: ")
    print("     (disabled) " + str(robot.stasis.disabled))
    print("     (toggling) " + str(robot.stasis.toggling))
    
    print("sensor_group0: ")
    print("     (angle) " + str(robot.sensor_group0.angle))
    print("     (bapattery_cacity) " + str(robot.sensor_group0.battery_capacity))
    print("     (battery_charge) " + str(robot.sensor_group0.battery_charge))
    print("     (bumps_and_wheel_drops) ")
    print("          (bump_left) " + str(robot.sensor_group0.bumps_and_wheel_drops.bump_left))
    print("          (bump_right) " + str(robot.sensor_group0.bumps_and_wheel_drops.bump_right))
    print("          (wheel_drop_left) " + str(robot.sensor_group0.bumps_and_wheel_drops.wheel_drop_left))
    print("          (wheel_drop_right) " + str(robot.sensor_group0.bumps_and_wheel_drops.wheel_drop_right))
    print("     (buttons) ")
    print("          (clean) " + str(robot.sensor_group0.buttons.clean))
    print("          (clock) " + str(robot.sensor_group0.buttons.clock))
    print("          (day) " + str(robot.sensor_group0.buttons.day))
    print("          (dock)) " + str(robot.sensor_group0.buttons.dock))
    print("          (hour) " + str(robot.sensor_group0.buttons.hour))
    print("          (minute)) " + str(robot.sensor_group0.buttons.minute))
    print("          (schedule)) " + str(robot.sensor_group0.buttons.schedule))
    print("          (spot) " + str(robot.sensor_group0.buttons.spot))
    print("     (charging_state)) " + str(robot.sensor_group0.charging_state))
    print("     (cliff_front_left_sensor) " + str(robot.sensor_group0.cliff_front_left_sensor))
    print("     (cliff_front_right_sensor) " + str(robot.sensor_group0.cliff_front_right_sensor))
    print("     (cliff_left_sensor) " + str(robot.sensor_group0.cliff_left_sensor))
    print("     (cliff_right_sensor)) " + str(robot.sensor_group0.cliff_right_sensor))
    print("     (current) " + str(robot.sensor_group0.current))
    print("     (dirt_detect_sensor) " + str(robot.sensor_group0.dirt_detect_sensor))
    print("     (distance)) " + str(robot.sensor_group0.distance))
    print("     (ir_char_omni_sensor) " + str(robot.sensor_group0.ir_char_omni_sensor))
    print("     (temperature) " + str(robot.sensor_group0.temperature))
    print("     (virtual_wall_sensor)) " + str(robot.sensor_group0.virtual_wall_sensor))
    print("     (voltage)) " + str(robot.sensor_group0.voltage))
    print("     (wall_sensor) " + str(robot.sensor_group0.wall_sensor))
    print("     (wheel_overcurrents)) ")
    print("          (left_wheel_overcurrent) " + str(robot.sensor_group0.wheel_overcurrents.left_wheel_overcurrent))
    print("          (main_brush_overcurrent) " + str(robot.sensor_group0.wheel_overcurrents.main_brush_overcurrent))
    print("          (right_wheel_overcurrent) " + str(robot.sensor_group0.wheel_overcurrents.right_wheel_overcurrent))
    print("          (side_brush_overcurrent) " + str(robot.sensor_group0.wheel_overcurrents.side_brush_overcurrent))
    
    print("sensor_group1: ")
    print("     (bumps_and_wheel_drops) ")
    print("          (bump_left) " + str(robot.sensor_group1.bumps_and_wheel_drops.bump_left))
    print("          (bump_right) " + str(robot.sensor_group1.bumps_and_wheel_drops.bump_right))
    print("          (wheel_drop_left) " + str(robot.sensor_group1.bumps_and_wheel_drops.wheel_drop_left))
    print("          (wheel_drop_right) " + str(robot.sensor_group1.bumps_and_wheel_drops.wheel_drop_right))
    print("     (cliff_front_left_sensor) " + str(robot.sensor_group1.cliff_front_left_sensor))
    print("     (cliff_front_right_sensor) " + str(robot.sensor_group1.cliff_front_right_sensor))
    print("     (cliff_left_sensor) " + str(robot.sensor_group1.cliff_left_sensor))
    print("     (cliff_right_sensor)) " + str(robot.sensor_group1.cliff_right_sensor))
    print("     (dirt_detect_sensor) " + str(robot.sensor_group1.dirt_detect_sensor))
    print("     (virtual_wall_sensor) " + str(robot.sensor_group1.virtual_wall_sensor))
    print("     (wall_sensor) " + str(robot.sensor_group1.wall_sensor))
    print("     (wheel_overcurrents) ")   
    print("          (left_wheel_overcurrent) " + str(robot.sensor_group1.wheel_overcurrents.left_wheel_overcurrent))
    print("          (main_brush_overcurrent) " + str(robot.sensor_group1.wheel_overcurrents.main_brush_overcurrent))
    print("          (right_wheel_overcurrent) " + str(robot.sensor_group1.wheel_overcurrents.right_wheel_overcurrent))
    print("          (side_brush_overcurrent) " + str(robot.sensor_group1.wheel_overcurrents.side_brush_overcurrent))

    
    print("sensor_group2: ")
    print("     (angle) " + str(robot.sensor_group2.angle))
    print("     (buttons)) ")
    print("          (clean) " + str(robot.sensor_group2.buttons.clean))
    print("          (clock) " + str(robot.sensor_group2.buttons.clock))
    print("          (day) " + str(robot.sensor_group2.buttons.day))
    print("          (dock)) " + str(robot.sensor_group2.buttons.dock))
    print("          (hour) " + str(robot.sensor_group2.buttons.hour))
    print("          (minute)) " + str(robot.sensor_group2.buttons.minute))
    print("          (schedule)) " + str(robot.sensor_group2.buttons.schedule))
    print("          (spot) " + str(robot.sensor_group2.buttons.spot))
    print("     (distance)) " + str(robot.sensor_group2.distance))
    print("     (ir_char_omni_sensor)) " + str(robot.sensor_group2.ir_char_omni_sensor))
    
    print("sensor_group3: ")
    print("     (battery_capacity)) " + str(robot.sensor_group3.battery_capacity))
    print("     (battery_charge)) " + str(robot.sensor_group3.battery_charge))
    print("     (charging_state)) " + str(robot.sensor_group3.charging_state))
    print("     (current)) " + str(robot.sensor_group3.current))
    print("     (temperature) " + str(robot.sensor_group3.temperature))
    print("     (voltage)) " + str(robot.sensor_group3.voltage))
    
    print("sensor_group4: ")
    print("     (charging_sources) ")
    print("          (home_base) " + str(robot.sensor_group4.charging_sources.home_base))
    print("          (internal_charger) " + str(robot.sensor_group4.charging_sources.internal_charger))
    print("     (cliff_front_left_signal) " + str(robot.sensor_group4.cliff_front_left_signal))
    print("     (cliff_front_right_signal) " + str(robot.sensor_group4.cliff_front_right_signal))
    print("     (cliff_left_signal) " + str(robot.sensor_group4.cliff_left_signal))
    print("     (cliff_right_signal) " + str(robot.sensor_group4.cliff_right_signal))
    print("     (wall_signal) " + str(robot.sensor_group4.wall_signal))
    
    print("sensor_group5: ")
    print("     (is_song_playing) " + str(robot.sensor_group5.is_song_playing))
    print("     (number_of_stream_packets) " + str(robot.sensor_group5.number_of_stream_packets))
    print("     (oi_mode) " + str(robot.sensor_group5.oi_mode))
    print("     (requested_left_velocity) " + str(robot.sensor_group5.requested_left_velocity))
    print("     (requested_radius) " + str(robot.sensor_group5.requested_radius))
    print("     (requested_right_velocity) " + str(robot.sensor_group5.requested_right_velocity))
    print("     (requested_velocity) " + str(robot.sensor_group5.requested_velocity))
    print("     (song_number) " + str(robot.sensor_group5.song_number))
    
    print("sensor_group6: ")
    print("     (angle) " + str(robot.sensor_group6.angle))
    print("     (battery_capacity) " + str(robot.sensor_group6.battery_capacity))
    print("     (battery_charge) " + str(robot.sensor_group6.battery_charge))
    print("     (bumps_and_wheel_drops) ")
    print("          (bump_left) " + str(robot.sensor_group6.bumps_and_wheel_drops.bump_left))
    print("          (bump_right) " + str(robot.sensor_group6.bumps_and_wheel_drops.bump_right))
    print("          (wheel_drop_left) " + str(robot.sensor_group6.bumps_and_wheel_drops.wheel_drop_left))
    print("          (wheel_drop_right) " + str(robot.sensor_group6.bumps_and_wheel_drops.wheel_drop_right))
    print("     (buttons) ")
    print("          (clean) " + str(robot.sensor_group6.buttons.clean))
    print("          (clock) " + str(robot.sensor_group6.buttons.clock))
    print("          (day) " + str(robot.sensor_group6.buttons.day))
    print("          (dock)) " + str(robot.sensor_group6.buttons.dock))
    print("          (hour) " + str(robot.sensor_group6.buttons.hour))
    print("          (minute)) " + str(robot.sensor_group6.buttons.minute))
    print("          (schedule)) " + str(robot.sensor_group6.buttons.schedule))
    print("          (spot) " + str(robot.sensor_group6.buttons.spot))
    print("     (charging_sources)) ")
    print("          (home_base) " + str(robot.sensor_group6.charging_sources.home_base))
    print("          (internal_charger) " + str(robot.sensor_group6.charging_sources.internal_charger))
    print("     (charging_state) " + str(robot.sensor_group6.charging_state))
    print("     (cliff_front_left_sensor) " + str(robot.sensor_group6.cliff_front_left_sensor))
    print("     (cliff_front_left_signal) " + str(robot.sensor_group6.cliff_front_left_signal))
    print("     (cliff_front_right_sensor) " + str(robot.sensor_group6.cliff_front_right_sensor))
    print("     (cliff_front_right_signal) " + str(robot.sensor_group6.cliff_front_right_signal))
    print("     (cliff_left_sensor)) " + str(robot.sensor_group6.cliff_left_sensor))
    print("     (cliff_left_signal) " + str(robot.sensor_group6.cliff_left_signal))
    print("     (current) " + str(robot.sensor_group6.current))
    print("     (dirt_detect_sensor) " + str(robot.sensor_group6.dirt_detect_sensor))
    print("     (distance) " + str(robot.sensor_group6.distance))
    print("     (ir_char_omni_sensor) " + str(robot.sensor_group6.ir_char_omni_sensor))
    print("     (is_song_playing)) " + str(robot.sensor_group6.is_song_playing))
    print("     (number_of_stream_packets) " + str(robot.sensor_group6.number_of_stream_packets))
    print("     (oi_mode) " + str(robot.sensor_group6.oi_mode))
    print("     (requested_left_velocity)) " + str(robot.sensor_group6.requested_left_velocity))
    print("     (requested_radius)) " + str(robot.sensor_group6.requested_radius))
    print("     (requested_right_velocity) " + str(robot.sensor_group6.requested_right_velocity))
    print("     (requested_velocity) " + str(robot.sensor_group6.requested_velocity))
    print("     (song_number) " + str(robot.sensor_group6.song_number))
    print("     (temperature) " + str(robot.sensor_group6.temperature))
    print("     (virtual_wall_sensor) " + str(robot.sensor_group6.virtual_wall_sensor))
    print("     (voltage) " + str(robot.sensor_group6.voltage))
    print("     (wall_sensor) " + str(robot.sensor_group6.wall_sensor))
    print("     (wall_signal) " + str(robot.sensor_group6.wall_signal))
    print("     (wheel_overcurrents) ")  
    print("          (left_wheel_overcurrent) " + str(robot.sensor_group6.wheel_overcurrents.left_wheel_overcurrent))
    print("          (main_brush_overcurrent) " + str(robot.sensor_group6.wheel_overcurrents.main_brush_overcurrent))
    print("          (right_wheel_overcurrent) " + str(robot.sensor_group6.wheel_overcurrents.right_wheel_overcurrent))
    print("          (side_brush_overcurrent) " + str(robot.sensor_group6.wheel_overcurrents.side_brush_overcurrent))
    
#    print("sensor_group100: " + str(robot.sensor_group100.)) //Da un error con el modo SAFE
    
    print("sensor_group101: ")
    print("     (ir_character_left) " + str(robot.sensor_group101.ir_character_left))
    print("     (ir_character_right) " + str(robot.sensor_group101.ir_character_right))
    print("     (left_encoder_counts) " + str(robot.sensor_group101.left_encoder_counts))
    print("     (left_motor_current) " + str(robot.sensor_group101.left_motor_current))
    print("     (light_bump_center_left_signal) " + str(robot.sensor_group101.light_bump_center_left_signal))
    print("     (light_bump_center_right_signal) " + str(robot.sensor_group101.light_bump_center_right_signal))
    print("     (light_bump_front_left_signal) " + str(robot.sensor_group101.light_bump_front_left_signal))
    print("     (light_bump_front_right_signal) " + str(robot.sensor_group101.light_bump_front_right_signal))
    print("     (light_bump_left_signal) " + str(robot.sensor_group101.light_bump_left_signal))
    print("     (light_bump_right_signal) " + str(robot.sensor_group101.light_bump_right_signal))
    print("     (light_bumper) ")
    print("          (center_left) " + str(robot.sensor_group101.light_bumper.center_left))
    print("          (center_right) " + str(robot.sensor_group101.light_bumper.center_right))
    print("          (front_left) " + str(robot.sensor_group101.light_bumper.front_left))
    print("          (front_right) " + str(robot.sensor_group101.light_bumper.front_right))
    print("          (left " + str(robot.sensor_group101.light_bumper.left))
    print("          (right)) " + str(robot.sensor_group101.light_bumper.right))
    print("     (main_brush_motor_current)) " + str(robot.sensor_group101.main_brush_motor_current))
    print("     (right_encoder_counts) " + str(robot.sensor_group101.right_encoder_counts))
    print("     (right_motor_current) " + str(robot.sensor_group101.right_motor_current))
    print("     (side_brush_motor_current) " + str(robot.sensor_group101.side_brush_motor_current))
    print("     (stasis) ")
    print("          (disabled) " + str(robot.sensor_group101.stasis.disabled))
    print("          (toggling) " + str(robot.sensor_group101.stasis.toggling))
    
    print("sensor_group106:")
    print("     (light_bump_center_left_signal) " + str(robot.sensor_group106.light_bump_center_left_signal))
    print("     (light_bump_center_right_signal) " + str(robot.sensor_group106.light_bump_center_right_signal))
    print("     (light_bump_front_left_signal) " + str(robot.sensor_group106.light_bump_front_left_signal))
    print("     (light_bump_front_right_signal)) " + str(robot.sensor_group106.light_bump_front_right_signal))
    print("     (light_bump_left_signal) " + str(robot.sensor_group106.light_bump_left_signal))
    print("     (light_bump_right_signal) " + str(robot.sensor_group106.light_bump_right_signal))
    
    print("sensor_group107:")
    print("     (left_motor_current) " + str(robot.sensor_group107.left_motor_current))
    print("     (main_brush_motor_current) " + str(robot.sensor_group107.main_brush_motor_current))
    print("     (right_motor_current)) " + str(robot.sensor_group107.right_motor_current))
    print("     (side_brush_motor_current) " + str(robot.sensor_group107.side_brush_motor_current))
    print("     (stasis)) ")
    print("          (disabled) " + str(robot.sensor_group107.stasis.disabled))
    print("          (toggling) " + str(robot.sensor_group107.stasis.toggling))
    
#    print("firmware_version: " + str(robot.firmware_version)) //RESET al robot despues de revisar la version el firmware
    print("---------------------------------")  

def print_sensor(): 
    print("light_bumper: ")
    print("light_bump_left_signal: " + str(robot.light_bump_left_signal))
    print("light_bump_front_left_signal: " + str(robot.light_bump_front_left_signal))
    print("light_bump_center_left_signal: " + str(robot.light_bump_center_left_signal))
    print("light_bump_center_right_signal: " + str(robot.light_bump_center_right_signal))
    print("light_bump_front_right_signal: " + str(robot.light_bump_front_right_signal))
    print("light_bump_right_signal: " + str(robot.light_bump_right_signal))
    print(" --- " + str(i) + " --- ")

# change mode to drive (SAFE|FULL)
print("Entrado en modo SAFE / FULL")  
robot.oi_mode = MODES.FULL

print_sensor_full()
#i=0
#robot.enable_quirks = False
#robot.drive_pwm(40, 40)
#for i in range(30):    
#    print_sensor()
#    time.sleep(1)
#    i=+1
#Leer el puerto serie
#print(robot._serial_port.read(1024).decode('utf-8'))
  
# change mode to drive (SAFE|FULL)
#print("Entrado en modo SEFE / FULL")  
#robot.oi_mode = MODES.FULL

#print("Despertar el Roomba")  V - No se para que vale
#robot.wake()

#print("START Roomba")#V - No se para que vale  
#robot.start()

#print("RESET Roomba")V - RESET el motor Roomba, necesita su tiepo para el proceso
#robot.reset()
#time.sleep(5)

#print("STOP Roomba")#V - No se para que vale  
#robot.stop()

######  set_baud   #####################

#print("Modo limieza NORMAL")#V - Pone el robot en modo limpieza NORMAL, empieza a funcionar  
#robot.clean() 

#print("Modo limieza MAX")#V - Pone el robot en modo limpieza MAX, empieza a funcionar  
#robot.clean_max()

#print("Modo limieza SPORT")#V - Pone el robot en modo limpieza SPOT, empieza a funcionar  
#robot.clean_spot()

######  seek_dock   #####################
######  power_down   #####################
######  set_schedule   #####################
######  clear_schedule   #####################
######  set_day_time   #####################

#print("Drive")#(velocity, radius) V - Moueve el robot a traves de la velocidad y el radio de giro
#robot.drive(50, 10)
#time.sleep(5)

#print("Encender los motores")#V - Enciende los dos motores del roomba a una velocidad 
#robot.drive_straight(-200)
#time.sleep(5)

#print("Girar robot")#V - Gira izquierda (En valores positivo, derecha en negativos) el roomba a una velocidad 
#robot.spin_left(200)
#time.sleep(5)

#print("Girar robot")#V - Gira derecha(En valores positivo, izquierda en negativos) el roomba a una velocidad 
#robot.spin_right(200)
#time.sleep(5)

#print("Parar los motores")#V - Para los motores del roomba  
#robot.drive_straight(0)

#print("Girar robot")#(Vel izquierda, PWM derecha) V - Gira el roomba a dos velocidades, una por rueda 
#robot.drive_direct(500,500)
#time.sleep(5)

#print("drive_pwm")#(PWM izquierda, PWM derecha) V - Movemos los motores a traves de PWM
#robot.drive_pwm(40, -40)
#time.sleep(5)

#print("set_motors")#(main_brush_on=False, main_brush_reverse=False, side_brush=False, side_brush_reverse=False, vacuum=False) V - Movemos los motores a traves de PWM
#robot.set_motors(main_brush_on=True, main_brush_reverse=True, side_brush=False, side_brush_reverse=False, vacuum=True)
#time.sleep(5)

#print("set_motors PWM")#(main_brush_pwm, side_brush_pwm, vacuum_pwm) V - Movemos los motores a traves de PWM
#robot.set_motors_pwm(100, 100, 100)
#time.sleep(5)

#print("LED")#(debris=False, spot=False, dock=False, check_robot=False, power_color=0, power_intensity=0) V - Control de led 
#robot.set_leds(debris=False, spot=False, dock=False, check_robot=True, power_color=255, power_intensity=200)
#time.sleep(5)

#print("LED scheduling")#(sun=False, mon=False, tues=False, wed=False, thurs=False, fri=False, sat=False,schedule=False, clock=False, am=False, pm=False, colon=False) V - Control de led 
#robot.set_scheduling_leds(sun=False, mon=False, tues=False, wed=False, thurs=False, fri=False, sat=False,schedule=False, clock=False, am=False, pm=False, colon=False)
#time.sleep(5)

#print("LED raw")#(digit1=0, digit2=0, digit3=0, digit4=0) V - Muestra los numeros por los los Led de segmento
#robot.set_raw_leds(digit1=4, digit2=3, digit3=2, digit4=1)
#time.sleep(5)

#print("LED ascii")#(char1=32, char2=32, char3=32, char4=32) V - Muestra letras por los Led de segmento
#robot.set_ascii_leds(char1=53, char2=54, char3=41, char4=52)
#time.sleep(5)

#print("trigger_buttons")#(clean=False, spot=False, dock=False, minute=False, hour=False, day=False, schedule=False, clock=False) V - 
#robot.trigger_buttons(clean=False, spot=False, dock=False, minute=False, hour=False, day=False, schedule=False, clock=False)
#time.sleep(5)

#print("set_song")#(song_number, notes) V - Crea una musica
#robot.set_song(0, [(57,32),(59,32),(60,32)])
#robot.set_song(1, [(76,16),(76,16),(76,32),(76,16),(76,16),(76,32),(76,16),(79,16),(72,16),(74,16),(76,32),(77,16),(77,16),(77,16),(77,32),(77,16)])
#robot.set_song(2, [(76,16),(76,32),(79,16),(79,16),(77,16),(74,16),(72,32)])
#time.sleep(1)

#print("play_song 1")#(song_number) V - Reproduce una musica previamente creada
#robot.play_song(1)
#print("play_song 2")
#robot.play_song(2)
#time.sleep(5)

#print("Giro derecha - Giro izquierda")#V - Script para mover un poco el robot de derecha a izquierda
#robot.spin_right(50)
#time.sleep(2)
#robot.spin_left(50)
#time.sleep(2)

#Open Interface goes to sleep after 5 minutes of inactivity when in Passive mode
#print("auto_wake 1: " + str(robot.auto_wake))
#robot.auto_wake = True
#print("auto_wake 2: " + str(robot.auto_wake))

#eturn an incorrect value for distance and angle.
#print("enable_quirks 1: " + str(robot.enable_quirks))
#robot.enable_quirks = False
#print("enable_quirks 2: " + str(robot.enable_quirks))


# return to passive mode
print("Entrado en modo PASSIVE ")  
robot.oi_mode = MODES.PASSIVE

# shutdown OI
print("STOP")  
robot.stop()
