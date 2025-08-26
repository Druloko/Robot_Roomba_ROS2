# Medidas y consigna de movimiento (según OI)
# Robot.read_sensors() rellena estos campos desde Create2.distance/angle/encoders/velocidades
# distance/angle vienen de short_response (int16), encoders también (int16).
# requested_* también son int16 del OI.

float32 distance
float32 angle
int32   left_encoder_counts
int32   right_encoder_counts
int16   requested_left_velocity
int16   requested_right_velocity
int16   requested_radius
int16   requested_velocity
