// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roomba_msgs:msg/Movement.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/msg/movement.h"


#ifndef ROOMBA_MSGS__MSG__DETAIL__MOVEMENT__STRUCT_H_
#define ROOMBA_MSGS__MSG__DETAIL__MOVEMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Movement in the package roomba_msgs.
/**
  * Medidas y consigna de movimiento (según OI)
  * Robot.read_sensors() rellena estos campos desde Create2.distance/angle/encoders/velocidades
  * distance/angle vienen de short_response (int16), encoders también (int16).
  * requested_* también son int16 del OI.
 */
typedef struct roomba_msgs__msg__Movement
{
  float distance;
  float angle;
  int32_t left_encoder_counts;
  int32_t right_encoder_counts;
  int16_t requested_left_velocity;
  int16_t requested_right_velocity;
  int16_t requested_radius;
  int16_t requested_velocity;
} roomba_msgs__msg__Movement;

// Struct for a sequence of roomba_msgs__msg__Movement.
typedef struct roomba_msgs__msg__Movement__Sequence
{
  roomba_msgs__msg__Movement * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roomba_msgs__msg__Movement__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROOMBA_MSGS__MSG__DETAIL__MOVEMENT__STRUCT_H_
