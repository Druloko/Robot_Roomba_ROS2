// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from roomba_msgs:msg/Power.idl
// generated code does not contain a copyright notice
#include "roomba_msgs/msg/detail/power__rosidl_typesupport_fastrtps_cpp.hpp"
#include "roomba_msgs/msg/detail/power__functions.h"
#include "roomba_msgs/msg/detail/power__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace roomba_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roomba_msgs
cdr_serialize(
  const roomba_msgs::msg::Power & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: voltage
  cdr << ros_message.voltage;

  // Member: current
  cdr << ros_message.current;

  // Member: temperature
  cdr << ros_message.temperature;

  // Member: charge
  cdr << ros_message.charge;

  // Member: capacity
  cdr << ros_message.capacity;

  // Member: home_base
  cdr << (ros_message.home_base ? true : false);

  // Member: internal_charger
  cdr << (ros_message.internal_charger ? true : false);

  // Member: ir_char_omni
  cdr << ros_message.ir_char_omni;

  // Member: ir_char_left
  cdr << ros_message.ir_char_left;

  // Member: ir_char_right
  cdr << ros_message.ir_char_right;

  // Member: left_wheel_overcurrent
  cdr << (ros_message.left_wheel_overcurrent ? true : false);

  // Member: right_wheel_overcurrent
  cdr << (ros_message.right_wheel_overcurrent ? true : false);

  // Member: main_brush_overcurrent
  cdr << (ros_message.main_brush_overcurrent ? true : false);

  // Member: side_brush_overcurrent
  cdr << (ros_message.side_brush_overcurrent ? true : false);

  // Member: left_motor_current
  cdr << ros_message.left_motor_current;

  // Member: right_motor_current
  cdr << ros_message.right_motor_current;

  // Member: main_brush_motor_current
  cdr << ros_message.main_brush_motor_current;

  // Member: side_brush_motor_current
  cdr << ros_message.side_brush_motor_current;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roomba_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  roomba_msgs::msg::Power & ros_message)
{
  // Member: voltage
  cdr >> ros_message.voltage;

  // Member: current
  cdr >> ros_message.current;

  // Member: temperature
  cdr >> ros_message.temperature;

  // Member: charge
  cdr >> ros_message.charge;

  // Member: capacity
  cdr >> ros_message.capacity;

  // Member: home_base
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.home_base = tmp ? true : false;
  }

  // Member: internal_charger
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.internal_charger = tmp ? true : false;
  }

  // Member: ir_char_omni
  cdr >> ros_message.ir_char_omni;

  // Member: ir_char_left
  cdr >> ros_message.ir_char_left;

  // Member: ir_char_right
  cdr >> ros_message.ir_char_right;

  // Member: left_wheel_overcurrent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.left_wheel_overcurrent = tmp ? true : false;
  }

  // Member: right_wheel_overcurrent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.right_wheel_overcurrent = tmp ? true : false;
  }

  // Member: main_brush_overcurrent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.main_brush_overcurrent = tmp ? true : false;
  }

  // Member: side_brush_overcurrent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.side_brush_overcurrent = tmp ? true : false;
  }

  // Member: left_motor_current
  cdr >> ros_message.left_motor_current;

  // Member: right_motor_current
  cdr >> ros_message.right_motor_current;

  // Member: main_brush_motor_current
  cdr >> ros_message.main_brush_motor_current;

  // Member: side_brush_motor_current
  cdr >> ros_message.side_brush_motor_current;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roomba_msgs
get_serialized_size(
  const roomba_msgs::msg::Power & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: voltage
  {
    size_t item_size = sizeof(ros_message.voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: current
  {
    size_t item_size = sizeof(ros_message.current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: temperature
  {
    size_t item_size = sizeof(ros_message.temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: charge
  {
    size_t item_size = sizeof(ros_message.charge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: capacity
  {
    size_t item_size = sizeof(ros_message.capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: home_base
  {
    size_t item_size = sizeof(ros_message.home_base);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: internal_charger
  {
    size_t item_size = sizeof(ros_message.internal_charger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ir_char_omni
  {
    size_t item_size = sizeof(ros_message.ir_char_omni);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ir_char_left
  {
    size_t item_size = sizeof(ros_message.ir_char_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ir_char_right
  {
    size_t item_size = sizeof(ros_message.ir_char_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: left_wheel_overcurrent
  {
    size_t item_size = sizeof(ros_message.left_wheel_overcurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: right_wheel_overcurrent
  {
    size_t item_size = sizeof(ros_message.right_wheel_overcurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: main_brush_overcurrent
  {
    size_t item_size = sizeof(ros_message.main_brush_overcurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: side_brush_overcurrent
  {
    size_t item_size = sizeof(ros_message.side_brush_overcurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: left_motor_current
  {
    size_t item_size = sizeof(ros_message.left_motor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: right_motor_current
  {
    size_t item_size = sizeof(ros_message.right_motor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: main_brush_motor_current
  {
    size_t item_size = sizeof(ros_message.main_brush_motor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: side_brush_motor_current
  {
    size_t item_size = sizeof(ros_message.side_brush_motor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roomba_msgs
max_serialized_size_Power(
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

  // Member: voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: charge
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: capacity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: home_base
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: internal_charger
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: ir_char_omni
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: ir_char_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: ir_char_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: left_wheel_overcurrent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: right_wheel_overcurrent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: main_brush_overcurrent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: side_brush_overcurrent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: left_motor_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: right_motor_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: main_brush_motor_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: side_brush_motor_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = roomba_msgs::msg::Power;
    is_plain =
      (
      offsetof(DataType, side_brush_motor_current) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roomba_msgs
cdr_serialize_key(
  const roomba_msgs::msg::Power & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: voltage
  cdr << ros_message.voltage;

  // Member: current
  cdr << ros_message.current;

  // Member: temperature
  cdr << ros_message.temperature;

  // Member: charge
  cdr << ros_message.charge;

  // Member: capacity
  cdr << ros_message.capacity;

  // Member: home_base
  cdr << (ros_message.home_base ? true : false);

  // Member: internal_charger
  cdr << (ros_message.internal_charger ? true : false);

  // Member: ir_char_omni
  cdr << ros_message.ir_char_omni;

  // Member: ir_char_left
  cdr << ros_message.ir_char_left;

  // Member: ir_char_right
  cdr << ros_message.ir_char_right;

  // Member: left_wheel_overcurrent
  cdr << (ros_message.left_wheel_overcurrent ? true : false);

  // Member: right_wheel_overcurrent
  cdr << (ros_message.right_wheel_overcurrent ? true : false);

  // Member: main_brush_overcurrent
  cdr << (ros_message.main_brush_overcurrent ? true : false);

  // Member: side_brush_overcurrent
  cdr << (ros_message.side_brush_overcurrent ? true : false);

  // Member: left_motor_current
  cdr << ros_message.left_motor_current;

  // Member: right_motor_current
  cdr << ros_message.right_motor_current;

  // Member: main_brush_motor_current
  cdr << ros_message.main_brush_motor_current;

  // Member: side_brush_motor_current
  cdr << ros_message.side_brush_motor_current;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roomba_msgs
get_serialized_size_key(
  const roomba_msgs::msg::Power & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: voltage
  {
    size_t item_size = sizeof(ros_message.voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: current
  {
    size_t item_size = sizeof(ros_message.current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: temperature
  {
    size_t item_size = sizeof(ros_message.temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: charge
  {
    size_t item_size = sizeof(ros_message.charge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: capacity
  {
    size_t item_size = sizeof(ros_message.capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: home_base
  {
    size_t item_size = sizeof(ros_message.home_base);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: internal_charger
  {
    size_t item_size = sizeof(ros_message.internal_charger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ir_char_omni
  {
    size_t item_size = sizeof(ros_message.ir_char_omni);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ir_char_left
  {
    size_t item_size = sizeof(ros_message.ir_char_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ir_char_right
  {
    size_t item_size = sizeof(ros_message.ir_char_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: left_wheel_overcurrent
  {
    size_t item_size = sizeof(ros_message.left_wheel_overcurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: right_wheel_overcurrent
  {
    size_t item_size = sizeof(ros_message.right_wheel_overcurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: main_brush_overcurrent
  {
    size_t item_size = sizeof(ros_message.main_brush_overcurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: side_brush_overcurrent
  {
    size_t item_size = sizeof(ros_message.side_brush_overcurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: left_motor_current
  {
    size_t item_size = sizeof(ros_message.left_motor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: right_motor_current
  {
    size_t item_size = sizeof(ros_message.right_motor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: main_brush_motor_current
  {
    size_t item_size = sizeof(ros_message.main_brush_motor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: side_brush_motor_current
  {
    size_t item_size = sizeof(ros_message.side_brush_motor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roomba_msgs
max_serialized_size_key_Power(
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

  // Member: voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: charge
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: capacity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: home_base
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: internal_charger
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ir_char_omni
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ir_char_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ir_char_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: left_wheel_overcurrent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: right_wheel_overcurrent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: main_brush_overcurrent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: side_brush_overcurrent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: left_motor_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_motor_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: main_brush_motor_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: side_brush_motor_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = roomba_msgs::msg::Power;
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
  auto typed_message =
    static_cast<const roomba_msgs::msg::Power *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Power__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<roomba_msgs::msg::Power *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Power__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const roomba_msgs::msg::Power *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Power__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Power(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Power__callbacks = {
  "roomba_msgs::msg",
  "Power",
  _Power__cdr_serialize,
  _Power__cdr_deserialize,
  _Power__get_serialized_size,
  _Power__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Power__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Power__callbacks,
  get_message_typesupport_handle_function,
  &roomba_msgs__msg__Power__get_type_hash,
  &roomba_msgs__msg__Power__get_type_description,
  &roomba_msgs__msg__Power__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace roomba_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_roomba_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<roomba_msgs::msg::Power>()
{
  return &roomba_msgs::msg::typesupport_fastrtps_cpp::_Power__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roomba_msgs, msg, Power)() {
  return &roomba_msgs::msg::typesupport_fastrtps_cpp::_Power__handle;
}

#ifdef __cplusplus
}
#endif
