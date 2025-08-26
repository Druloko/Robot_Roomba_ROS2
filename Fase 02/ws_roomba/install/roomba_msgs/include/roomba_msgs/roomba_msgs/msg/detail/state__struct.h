// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roomba_msgs:msg/State.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/msg/state.h"


#ifndef ROOMBA_MSGS__MSG__DETAIL__STATE__STRUCT_H_
#define ROOMBA_MSGS__MSG__DETAIL__STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'oi_mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/State in the package roomba_msgs.
/**
  * Estado que publica publish_state_data()
 */
typedef struct roomba_msgs__msg__State
{
  rosidl_runtime_c__String oi_mode;
  bool is_charging;
  float battery_charge;
} roomba_msgs__msg__State;

// Struct for a sequence of roomba_msgs__msg__State.
typedef struct roomba_msgs__msg__State__Sequence
{
  roomba_msgs__msg__State * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roomba_msgs__msg__State__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROOMBA_MSGS__MSG__DETAIL__STATE__STRUCT_H_
