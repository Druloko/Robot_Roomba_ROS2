// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roomba_msgs:msg/Misc.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/msg/misc.h"


#ifndef ROOMBA_MSGS__MSG__DETAIL__MISC__STRUCT_H_
#define ROOMBA_MSGS__MSG__DETAIL__MISC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Misc in the package roomba_msgs.
/**
  * Datos misceláneos que publica publish_misc_data()
 */
typedef struct roomba_msgs__msg__Misc
{
  bool is_song_playing;
  uint8_t song_number;
  /// botones
  bool button_clean;
  bool button_clock;
  bool button_day;
  bool button_dock;
  bool button_hour;
  bool button_minute;
  bool button_schedule;
  bool button_spot;
} roomba_msgs__msg__Misc;

// Struct for a sequence of roomba_msgs__msg__Misc.
typedef struct roomba_msgs__msg__Misc__Sequence
{
  roomba_msgs__msg__Misc * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roomba_msgs__msg__Misc__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROOMBA_MSGS__MSG__DETAIL__MISC__STRUCT_H_
