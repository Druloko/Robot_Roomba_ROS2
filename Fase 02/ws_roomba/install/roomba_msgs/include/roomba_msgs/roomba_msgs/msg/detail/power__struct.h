// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roomba_msgs:msg/Power.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/msg/power.h"


#ifndef ROOMBA_MSGS__MSG__DETAIL__POWER__STRUCT_H_
#define ROOMBA_MSGS__MSG__DETAIL__POWER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Power in the package roomba_msgs.
/**
  * Datos de energía que publica publish_power_data()
 */
typedef struct roomba_msgs__msg__Power
{
  float voltage;
  float current;
  float temperature;
  float charge;
  float capacity;
  bool home_base;
  bool internal_charger;
  uint8_t ir_char_omni;
  uint8_t ir_char_left;
  uint8_t ir_char_right;
  bool left_wheel_overcurrent;
  bool right_wheel_overcurrent;
  bool main_brush_overcurrent;
  bool side_brush_overcurrent;
  int32_t left_motor_current;
  int32_t right_motor_current;
  int32_t main_brush_motor_current;
  int32_t side_brush_motor_current;
} roomba_msgs__msg__Power;

// Struct for a sequence of roomba_msgs__msg__Power.
typedef struct roomba_msgs__msg__Power__Sequence
{
  roomba_msgs__msg__Power * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roomba_msgs__msg__Power__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROOMBA_MSGS__MSG__DETAIL__POWER__STRUCT_H_
