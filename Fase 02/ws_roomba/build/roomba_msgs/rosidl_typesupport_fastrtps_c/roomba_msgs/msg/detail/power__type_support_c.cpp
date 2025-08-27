// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from roomba_msgs:msg/Power.idl
// generated code does not contain a copyright notice
#include "roomba_msgs/msg/detail/power__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "roomba_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "roomba_msgs/msg/detail/power__struct.h"
#include "roomba_msgs/msg/detail/power__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Power__ros_msg_type = roomba_msgs__msg__Power;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
bool cdr_serialize_roomba_msgs__msg__Power(
  const roomba_msgs__msg__Power * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: voltage
  {
    cdr << ros_message->voltage;
  }

  // Field name: current
  {
    cdr << ros_message->current;
  }

  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  // Field name: charge
  {
    cdr << ros_message->charge;
  }

  // Field name: capacity
  {
    cdr << ros_message->capacity;
  }

  // Field name: home_base
  {
    cdr << (ros_message->home_base ? true : false);
  }

  // Field name: internal_charger
  {
    cdr << (ros_message->internal_charger ? true : false);
  }

  // Field name: ir_char_omni
  {
    cdr << ros_message->ir_char_omni;
  }

  // Field name: ir_char_left
  {
    cdr << ros_message->ir_char_left;
  }

  // Field name: ir_char_right
  {
    cdr << ros_message->ir_char_right;
  }

  // Field name: left_wheel_overcurrent
  {
    cdr << (ros_message->left_wheel_overcurrent ? true : false);
  }

  // Field name: right_wheel_overcurrent
  {
    cdr << (ros_message->right_wheel_overcurrent ? true : false);
  }

  // Field name: main_brush_overcurrent
  {
    cdr << (ros_message->main_brush_overcurrent ? true : false);
  }

  // Field name: side_brush_overcurrent
  {
    cdr << (ros_message->side_brush_overcurrent ? true : false);
  }

  // Field name: left_motor_current
  {
    cdr << ros_message->left_motor_current;
  }

  // Field name: right_motor_current
  {
    cdr << ros_message->right_motor_current;
  }

  // Field name: main_brush_motor_current
  {
    cdr << ros_message->main_brush_motor_current;
  }

  // Field name: side_brush_motor_current
  {
    cdr << ros_message->side_brush_motor_current;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
bool cdr_deserialize_roomba_msgs__msg__Power(
  eprosima::fastcdr::Cdr & cdr,
  roomba_msgs__msg__Power * ros_message)
{
  // Field name: voltage
  {
    cdr >> ros_message->voltage;
  }

  // Field name: current
  {
    cdr >> ros_message->current;
  }

  // Field name: temperature
  {
    cdr >> ros_message->temperature;
  }

  // Field name: charge
  {
    cdr >> ros_message->charge;
  }

  // Field name: capacity
  {
    cdr >> ros_message->capacity;
  }

  // Field name: home_base
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->home_base = tmp ? true : false;
  }

  // Field name: internal_charger
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->internal_charger = tmp ? true : false;
  }

  // Field name: ir_char_omni
  {
    cdr >> ros_message->ir_char_omni;
  }

  // Field name: ir_char_left
  {
    cdr >> ros_message->ir_char_left;
  }

  // Field name: ir_char_right
  {
    cdr >> ros_message->ir_char_right;
  }

  // Field name: left_wheel_overcurrent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->left_wheel_overcurrent = tmp ? true : false;
  }

  // Field name: right_wheel_overcurrent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->right_wheel_overcurrent = tmp ? true : false;
  }

  // Field name: main_brush_overcurrent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->main_brush_overcurrent = tmp ? true : false;
  }

  // Field name: side_brush_overcurrent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->side_brush_overcurrent = tmp ? true : false;
  }

  // Field name: left_motor_current
  {
    cdr >> ros_message->left_motor_current;
  }

  // Field name: right_motor_current
  {
    cdr >> ros_message->right_motor_current;
  }

  // Field name: main_brush_motor_current
  {
    cdr >> ros_message->main_brush_motor_current;
  }

  // Field name: side_brush_motor_current
  {
    cdr >> ros_message->side_brush_motor_current;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
size_t get_serialized_size_roomba_msgs__msg__Power(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Power__ros_msg_type * ros_message = static_cast<const _Power__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: voltage
  {
    size_t item_size = sizeof(ros_message->voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: current
  {
    size_t item_size = sizeof(ros_message->current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: charge
  {
    size_t item_size = sizeof(ros_message->charge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: capacity
  {
    size_t item_size = sizeof(ros_message->capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: home_base
  {
    size_t item_size = sizeof(ros_message->home_base);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: internal_charger
  {
    size_t item_size = sizeof(ros_message->internal_charger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ir_char_omni
  {
    size_t item_size = sizeof(ros_message->ir_char_omni);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ir_char_left
  {
    size_t item_size = sizeof(ros_message->ir_char_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ir_char_right
  {
    size_t item_size = sizeof(ros_message->ir_char_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: left_wheel_overcurrent
  {
    size_t item_size = sizeof(ros_message->left_wheel_overcurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: right_wheel_overcurrent
  {
    size_t item_size = sizeof(ros_message->right_wheel_overcurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: main_brush_overcurrent
  {
    size_t item_size = sizeof(ros_message->main_brush_overcurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: side_brush_overcurrent
  {
    size_t item_size = sizeof(ros_message->side_brush_overcurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: left_motor_current
  {
    size_t item_size = sizeof(ros_message->left_motor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: right_motor_current
  {
    size_t item_size = sizeof(ros_message->right_motor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: main_brush_motor_current
  {
    size_t item_size = sizeof(ros_message->main_brush_motor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: side_brush_motor_current
  {
    size_t item_size = sizeof(ros_message->side_brush_motor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
size_t max_serialized_size_roomba_msgs__msg__Power(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: charge
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: capacity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: home_base
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: internal_charger
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: ir_char_omni
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: ir_char_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: ir_char_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: left_wheel_overcurrent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: right_wheel_overcurrent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: main_brush_overcurrent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: side_brush_overcurrent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: left_motor_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: right_motor_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: main_brush_motor_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: side_brush_motor_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = roomba_msgs__msg__Power;
    is_plain =
      (
      offsetof(DataType, side_brush_motor_current) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
bool cdr_serialize_key_roomba_msgs__msg__Power(
  const roomba_msgs__msg__Power * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: voltage
  {
    cdr << ros_message->voltage;
  }

  // Field name: current
  {
    cdr << ros_message->current;
  }

  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  // Field name: charge
  {
    cdr << ros_message->charge;
  }

  // Field name: capacity
  {
    cdr << ros_message->capacity;
  }

  // Field name: home_base
  {
    cdr << (ros_message->home_base ? true : false);
  }

  // Field name: internal_charger
  {
    cdr << (ros_message->internal_charger ? true : false);
  }

  // Field name: ir_char_omni
  {
    cdr << ros_message->ir_char_omni;
  }

  // Field name: ir_char_left
  {
    cdr << ros_message->ir_char_left;
  }

  // Field name: ir_char_right
  {
    cdr << ros_message->ir_char_right;
  }

  // Field name: left_wheel_overcurrent
  {
    cdr << (ros_message->left_wheel_overcurrent ? true : false);
  }

  // Field name: right_wheel_overcurrent
  {
    cdr << (ros_message->right_wheel_overcurrent ? true : false);
  }

  // Field name: main_brush_overcurrent
  {
    cdr << (ros_message->main_brush_overcurrent ? true : false);
  }

  // Field name: side_brush_overcurrent
  {
    cdr << (ros_message->side_brush_overcurrent ? true : false);
  }

  // Field name: left_motor_current
  {
    cdr << ros_message->left_motor_current;
  }

  // Field name: right_motor_current
  {
    cdr << ros_message->right_motor_current;
  }

  // Field name: main_brush_motor_current
  {
    cdr << ros_message->main_brush_motor_current;
  }

  // Field name: side_brush_motor_current
  {
    cdr << ros_message->side_brush_motor_current;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
size_t get_serialized_size_key_roomba_msgs__msg__Power(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Power__ros_msg_type * ros_message = static_cast<const _Power__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: voltage
  {
    size_t item_size = sizeof(ros_message->voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: current
  {
    size_t item_size = sizeof(ros_message->current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: charge
  {
    size_t item_size = sizeof(ros_message->charge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: capacity
  {
    size_t item_size = sizeof(ros_message->capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: home_base
  {
    size_t item_size = sizeof(ros_message->home_base);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: internal_charger
  {
    size_t item_size = sizeof(ros_message->internal_charger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ir_char_omni
  {
    size_t item_size = sizeof(ros_message->ir_char_omni);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ir_char_left
  {
    size_t item_size = sizeof(ros_message->ir_char_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ir_char_right
  {
    size_t item_size = sizeof(ros_message->ir_char_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: left_wheel_overcurrent
  {
    size_t item_size = sizeof(ros_message->left_wheel_overcurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: right_wheel_overcurrent
  {
    size_t item_size = sizeof(ros_message->right_wheel_overcurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: main_brush_overcurrent
  {
    size_t item_size = sizeof(ros_message->main_brush_overcurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: side_brush_overcurrent
  {
    size_t item_size = sizeof(ros_message->side_brush_overcurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: left_motor_current
  {
    size_t item_size = sizeof(ros_message->left_motor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: right_motor_current
  {
    size_t item_size = sizeof(ros_message->right_motor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: main_brush_motor_current
  {
    size_t item_size = sizeof(ros_message->main_brush_motor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: side_brush_motor_current
  {
    size_t item_size = sizeof(ros_message->side_brush_motor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
size_t max_serialized_size_key_roomba_msgs__msg__Power(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: charge
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: capacity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: home_base
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: internal_charger
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: ir_char_omni
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: ir_char_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: ir_char_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: left_wheel_overcurrent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: right_wheel_overcurrent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: main_brush_overcurrent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: side_brush_overcurrent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: left_motor_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: right_motor_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: main_brush_motor_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: side_brush_motor_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = roomba_msgs__msg__Power;
    is_plain =
      (
      offsetof(DataType, side_brush_motor_current) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Power__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const roomba_msgs__msg__Power * ros_message = static_cast<const roomba_msgs__msg__Power *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_roomba_msgs__msg__Power(ros_message, cdr);
}

static bool _Power__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  roomba_msgs__msg__Power * ros_message = static_cast<roomba_msgs__msg__Power *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_roomba_msgs__msg__Power(cdr, ros_message);
}

static uint32_t _Power__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_roomba_msgs__msg__Power(
      untyped_ros_message, 0));
}

static size_t _Power__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_roomba_msgs__msg__Power(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Power = {
  "roomba_msgs::msg",
  "Power",
  _Power__cdr_serialize,
  _Power__cdr_deserialize,
  _Power__get_serialized_size,
  _Power__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Power__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Power,
  get_message_typesupport_handle_function,
  &roomba_msgs__msg__Power__get_type_hash,
  &roomba_msgs__msg__Power__get_type_description,
  &roomba_msgs__msg__Power__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roomba_msgs, msg, Power)() {
  return &_Power__type_support;
}

#if defined(__cplusplus)
}
#endif
