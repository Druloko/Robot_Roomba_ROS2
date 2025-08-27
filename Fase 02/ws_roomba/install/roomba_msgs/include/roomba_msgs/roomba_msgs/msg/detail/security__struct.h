// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roomba_msgs:msg/Security.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/msg/security.h"


#ifndef ROOMBA_MSGS__MSG__DETAIL__SECURITY__STRUCT_H_
#define ROOMBA_MSGS__MSG__DETAIL__SECURITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Security in the package roomba_msgs.
/**
  * Datos de seguridad que publica publish_security_data()
 */
typedef struct roomba_msgs__msg__Security
{
  bool bump_left;
  bool bump_right;
  bool wheel_drop_left;
  bool wheel_drop_right;
  /// pared, virtual wall
  bool wall;
  bool virtual_wall;
  /// cliffs (tu código usa 0/1; los modelamos como bool)
  bool cliff_left;
  bool cliff_right;
  bool cliff_front_left;
  bool cliff_front_right;
  /// señales (unsigned short en OI)
  uint16_t cliff_left_signal;
  uint16_t cliff_right_signal;
  uint16_t cliff_front_left_signal;
  uint16_t cliff_front_right_signal;
  uint16_t wall_signal;
  /// light bumpers (tu código usa 0/1 → bool)
  bool light_bumper_left;
  bool light_bumper_right;
  bool light_bumper_center_left;
  bool light_bumper_center_right;
  bool light_bumper_front_left;
  bool light_bumper_front_right;
  /// light bumper signals (valores analógicos de 2 bytes, 0–4095)
  uint16_t light_bump_left_signal;
  uint16_t light_bump_right_signal;
  uint16_t light_bump_center_left_signal;
  uint16_t light_bump_center_right_signal;
  uint16_t light_bump_front_left_signal;
  uint16_t light_bump_front_right_signal;
  /// suciedad
  uint8_t dirt_detect;
} roomba_msgs__msg__Security;

// Struct for a sequence of roomba_msgs__msg__Security.
typedef struct roomba_msgs__msg__Security__Sequence
{
  roomba_msgs__msg__Security * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roomba_msgs__msg__Security__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROOMBA_MSGS__MSG__DETAIL__SECURITY__STRUCT_H_
