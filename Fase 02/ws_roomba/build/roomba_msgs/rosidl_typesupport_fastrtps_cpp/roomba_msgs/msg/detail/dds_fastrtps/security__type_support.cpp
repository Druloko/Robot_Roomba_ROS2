// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from roomba_msgs:msg/Security.idl
// generated code does not contain a copyright notice
#include "roomba_msgs/msg/detail/security__rosidl_typesupport_fastrtps_cpp.hpp"
#include "roomba_msgs/msg/detail/security__functions.h"
#include "roomba_msgs/msg/detail/security__struct.hpp"

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
  const roomba_msgs::msg::Security & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: bump_left
  cdr << (ros_message.bump_left ? true : false);

  // Member: bump_right
  cdr << (ros_message.bump_right ? true : false);

  // Member: wheel_drop_left
  cdr << (ros_message.wheel_drop_left ? true : false);

  // Member: wheel_drop_right
  cdr << (ros_message.wheel_drop_right ? true : false);

  // Member: wall
  cdr << (ros_message.wall ? true : false);

  // Member: virtual_wall
  cdr << (ros_message.virtual_wall ? true : false);

  // Member: cliff_left
  cdr << (ros_message.cliff_left ? true : false);

  // Member: cliff_right
  cdr << (ros_message.cliff_right ? true : false);

  // Member: cliff_front_left
  cdr << (ros_message.cliff_front_left ? true : false);

  // Member: cliff_front_right
  cdr << (ros_message.cliff_front_right ? true : false);

  // Member: cliff_left_signal
  cdr << ros_message.cliff_left_signal;

  // Member: cliff_right_signal
  cdr << ros_message.cliff_right_signal;

  // Member: cliff_front_left_signal
  cdr << ros_message.cliff_front_left_signal;

  // Member: cliff_front_right_signal
  cdr << ros_message.cliff_front_right_signal;

  // Member: wall_signal
  cdr << ros_message.wall_signal;

  // Member: light_bumper_left
  cdr << (ros_message.light_bumper_left ? true : false);

  // Member: light_bumper_right
  cdr << (ros_message.light_bumper_right ? true : false);

  // Member: light_bumper_center_left
  cdr << (ros_message.light_bumper_center_left ? true : false);

  // Member: light_bumper_center_right
  cdr << (ros_message.light_bumper_center_right ? true : false);

  // Member: light_bumper_front_left
  cdr << (ros_message.light_bumper_front_left ? true : false);

  // Member: light_bumper_front_right
  cdr << (ros_message.light_bumper_front_right ? true : false);

  // Member: light_bump_left_signal
  cdr << ros_message.light_bump_left_signal;

  // Member: light_bump_right_signal
  cdr << ros_message.light_bump_right_signal;

  // Member: light_bump_center_left_signal
  cdr << ros_message.light_bump_center_left_signal;

  // Member: light_bump_center_right_signal
  cdr << ros_message.light_bump_center_right_signal;

  // Member: light_bump_front_left_signal
  cdr << ros_message.light_bump_front_left_signal;

  // Member: light_bump_front_right_signal
  cdr << ros_message.light_bump_front_right_signal;

  // Member: dirt_detect
  cdr << ros_message.dirt_detect;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roomba_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  roomba_msgs::msg::Security & ros_message)
{
  // Member: bump_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bump_left = tmp ? true : false;
  }

  // Member: bump_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bump_right = tmp ? true : false;
  }

  // Member: wheel_drop_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wheel_drop_left = tmp ? true : false;
  }

  // Member: wheel_drop_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wheel_drop_right = tmp ? true : false;
  }

  // Member: wall
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wall = tmp ? true : false;
  }

  // Member: virtual_wall
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.virtual_wall = tmp ? true : false;
  }

  // Member: cliff_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cliff_left = tmp ? true : false;
  }

  // Member: cliff_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cliff_right = tmp ? true : false;
  }

  // Member: cliff_front_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cliff_front_left = tmp ? true : false;
  }

  // Member: cliff_front_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cliff_front_right = tmp ? true : false;
  }

  // Member: cliff_left_signal
  cdr >> ros_message.cliff_left_signal;

  // Member: cliff_right_signal
  cdr >> ros_message.cliff_right_signal;

  // Member: cliff_front_left_signal
  cdr >> ros_message.cliff_front_left_signal;

  // Member: cliff_front_right_signal
  cdr >> ros_message.cliff_front_right_signal;

  // Member: wall_signal
  cdr >> ros_message.wall_signal;

  // Member: light_bumper_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.light_bumper_left = tmp ? true : false;
  }

  // Member: light_bumper_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.light_bumper_right = tmp ? true : false;
  }

  // Member: light_bumper_center_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.light_bumper_center_left = tmp ? true : false;
  }

  // Member: light_bumper_center_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.light_bumper_center_right = tmp ? true : false;
  }

  // Member: light_bumper_front_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.light_bumper_front_left = tmp ? true : false;
  }

  // Member: light_bumper_front_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.light_bumper_front_right = tmp ? true : false;
  }

  // Member: light_bump_left_signal
  cdr >> ros_message.light_bump_left_signal;

  // Member: light_bump_right_signal
  cdr >> ros_message.light_bump_right_signal;

  // Member: light_bump_center_left_signal
  cdr >> ros_message.light_bump_center_left_signal;

  // Member: light_bump_center_right_signal
  cdr >> ros_message.light_bump_center_right_signal;

  // Member: light_bump_front_left_signal
  cdr >> ros_message.light_bump_front_left_signal;

  // Member: light_bump_front_right_signal
  cdr >> ros_message.light_bump_front_right_signal;

  // Member: dirt_detect
  cdr >> ros_message.dirt_detect;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roomba_msgs
get_serialized_size(
  const roomba_msgs::msg::Security & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: bump_left
  {
    size_t item_size = sizeof(ros_message.bump_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: bump_right
  {
    size_t item_size = sizeof(ros_message.bump_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: wheel_drop_left
  {
    size_t item_size = sizeof(ros_message.wheel_drop_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: wheel_drop_right
  {
    size_t item_size = sizeof(ros_message.wheel_drop_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: wall
  {
    size_t item_size = sizeof(ros_message.wall);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: virtual_wall
  {
    size_t item_size = sizeof(ros_message.virtual_wall);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cliff_left
  {
    size_t item_size = sizeof(ros_message.cliff_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cliff_right
  {
    size_t item_size = sizeof(ros_message.cliff_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cliff_front_left
  {
    size_t item_size = sizeof(ros_message.cliff_front_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cliff_front_right
  {
    size_t item_size = sizeof(ros_message.cliff_front_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cliff_left_signal
  {
    size_t item_size = sizeof(ros_message.cliff_left_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cliff_right_signal
  {
    size_t item_size = sizeof(ros_message.cliff_right_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cliff_front_left_signal
  {
    size_t item_size = sizeof(ros_message.cliff_front_left_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cliff_front_right_signal
  {
    size_t item_size = sizeof(ros_message.cliff_front_right_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: wall_signal
  {
    size_t item_size = sizeof(ros_message.wall_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: light_bumper_left
  {
    size_t item_size = sizeof(ros_message.light_bumper_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: light_bumper_right
  {
    size_t item_size = sizeof(ros_message.light_bumper_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: light_bumper_center_left
  {
    size_t item_size = sizeof(ros_message.light_bumper_center_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: light_bumper_center_right
  {
    size_t item_size = sizeof(ros_message.light_bumper_center_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: light_bumper_front_left
  {
    size_t item_size = sizeof(ros_message.light_bumper_front_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: light_bumper_front_right
  {
    size_t item_size = sizeof(ros_message.light_bumper_front_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: light_bump_left_signal
  {
    size_t item_size = sizeof(ros_message.light_bump_left_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: light_bump_right_signal
  {
    size_t item_size = sizeof(ros_message.light_bump_right_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: light_bump_center_left_signal
  {
    size_t item_size = sizeof(ros_message.light_bump_center_left_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: light_bump_center_right_signal
  {
    size_t item_size = sizeof(ros_message.light_bump_center_right_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: light_bump_front_left_signal
  {
    size_t item_size = sizeof(ros_message.light_bump_front_left_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: light_bump_front_right_signal
  {
    size_t item_size = sizeof(ros_message.light_bump_front_right_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dirt_detect
  {
    size_t item_size = sizeof(ros_message.dirt_detect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roomba_msgs
max_serialized_size_Security(
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

  // Member: bump_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: bump_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: wheel_drop_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: wheel_drop_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: wall
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: virtual_wall
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: cliff_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: cliff_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: cliff_front_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: cliff_front_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: cliff_left_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: cliff_right_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: cliff_front_left_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: cliff_front_right_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: wall_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: light_bumper_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: light_bumper_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: light_bumper_center_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: light_bumper_center_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: light_bumper_front_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: light_bumper_front_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: light_bump_left_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: light_bump_right_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: light_bump_center_left_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: light_bump_center_right_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: light_bump_front_left_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: light_bump_front_right_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: dirt_detect
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = roomba_msgs::msg::Security;
    is_plain =
      (
      offsetof(DataType, dirt_detect) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roomba_msgs
cdr_serialize_key(
  const roomba_msgs::msg::Security & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: bump_left
  cdr << (ros_message.bump_left ? true : false);

  // Member: bump_right
  cdr << (ros_message.bump_right ? true : false);

  // Member: wheel_drop_left
  cdr << (ros_message.wheel_drop_left ? true : false);

  // Member: wheel_drop_right
  cdr << (ros_message.wheel_drop_right ? true : false);

  // Member: wall
  cdr << (ros_message.wall ? true : false);

  // Member: virtual_wall
  cdr << (ros_message.virtual_wall ? true : false);

  // Member: cliff_left
  cdr << (ros_message.cliff_left ? true : false);

  // Member: cliff_right
  cdr << (ros_message.cliff_right ? true : false);

  // Member: cliff_front_left
  cdr << (ros_message.cliff_front_left ? true : false);

  // Member: cliff_front_right
  cdr << (ros_message.cliff_front_right ? true : false);

  // Member: cliff_left_signal
  cdr << ros_message.cliff_left_signal;

  // Member: cliff_right_signal
  cdr << ros_message.cliff_right_signal;

  // Member: cliff_front_left_signal
  cdr << ros_message.cliff_front_left_signal;

  // Member: cliff_front_right_signal
  cdr << ros_message.cliff_front_right_signal;

  // Member: wall_signal
  cdr << ros_message.wall_signal;

  // Member: light_bumper_left
  cdr << (ros_message.light_bumper_left ? true : false);

  // Member: light_bumper_right
  cdr << (ros_message.light_bumper_right ? true : false);

  // Member: light_bumper_center_left
  cdr << (ros_message.light_bumper_center_left ? true : false);

  // Member: light_bumper_center_right
  cdr << (ros_message.light_bumper_center_right ? true : false);

  // Member: light_bumper_front_left
  cdr << (ros_message.light_bumper_front_left ? true : false);

  // Member: light_bumper_front_right
  cdr << (ros_message.light_bumper_front_right ? true : false);

  // Member: light_bump_left_signal
  cdr << ros_message.light_bump_left_signal;

  // Member: light_bump_right_signal
  cdr << ros_message.light_bump_right_signal;

  // Member: light_bump_center_left_signal
  cdr << ros_message.light_bump_center_left_signal;

  // Member: light_bump_center_right_signal
  cdr << ros_message.light_bump_center_right_signal;

  // Member: light_bump_front_left_signal
  cdr << ros_message.light_bump_front_left_signal;

  // Member: light_bump_front_right_signal
  cdr << ros_message.light_bump_front_right_signal;

  // Member: dirt_detect
  cdr << ros_message.dirt_detect;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roomba_msgs
get_serialized_size_key(
  const roomba_msgs::msg::Security & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: bump_left
  {
    size_t item_size = sizeof(ros_message.bump_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: bump_right
  {
    size_t item_size = sizeof(ros_message.bump_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: wheel_drop_left
  {
    size_t item_size = sizeof(ros_message.wheel_drop_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: wheel_drop_right
  {
    size_t item_size = sizeof(ros_message.wheel_drop_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: wall
  {
    size_t item_size = sizeof(ros_message.wall);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: virtual_wall
  {
    size_t item_size = sizeof(ros_message.virtual_wall);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cliff_left
  {
    size_t item_size = sizeof(ros_message.cliff_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cliff_right
  {
    size_t item_size = sizeof(ros_message.cliff_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cliff_front_left
  {
    size_t item_size = sizeof(ros_message.cliff_front_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cliff_front_right
  {
    size_t item_size = sizeof(ros_message.cliff_front_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cliff_left_signal
  {
    size_t item_size = sizeof(ros_message.cliff_left_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cliff_right_signal
  {
    size_t item_size = sizeof(ros_message.cliff_right_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cliff_front_left_signal
  {
    size_t item_size = sizeof(ros_message.cliff_front_left_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cliff_front_right_signal
  {
    size_t item_size = sizeof(ros_message.cliff_front_right_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: wall_signal
  {
    size_t item_size = sizeof(ros_message.wall_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: light_bumper_left
  {
    size_t item_size = sizeof(ros_message.light_bumper_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: light_bumper_right
  {
    size_t item_size = sizeof(ros_message.light_bumper_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: light_bumper_center_left
  {
    size_t item_size = sizeof(ros_message.light_bumper_center_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: light_bumper_center_right
  {
    size_t item_size = sizeof(ros_message.light_bumper_center_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: light_bumper_front_left
  {
    size_t item_size = sizeof(ros_message.light_bumper_front_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: light_bumper_front_right
  {
    size_t item_size = sizeof(ros_message.light_bumper_front_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: light_bump_left_signal
  {
    size_t item_size = sizeof(ros_message.light_bump_left_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: light_bump_right_signal
  {
    size_t item_size = sizeof(ros_message.light_bump_right_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: light_bump_center_left_signal
  {
    size_t item_size = sizeof(ros_message.light_bump_center_left_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: light_bump_center_right_signal
  {
    size_t item_size = sizeof(ros_message.light_bump_center_right_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: light_bump_front_left_signal
  {
    size_t item_size = sizeof(ros_message.light_bump_front_left_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: light_bump_front_right_signal
  {
    size_t item_size = sizeof(ros_message.light_bump_front_right_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dirt_detect
  {
    size_t item_size = sizeof(ros_message.dirt_detect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roomba_msgs
max_serialized_size_key_Security(
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

  // Member: bump_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bump_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wheel_drop_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wheel_drop_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wall
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: virtual_wall
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cliff_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cliff_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cliff_front_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cliff_front_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cliff_left_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: cliff_right_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: cliff_front_left_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: cliff_front_right_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: wall_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: light_bumper_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: light_bumper_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: light_bumper_center_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: light_bumper_center_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: light_bumper_front_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: light_bumper_front_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: light_bump_left_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: light_bump_right_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: light_bump_center_left_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: light_bump_center_right_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: light_bump_front_left_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: light_bump_front_right_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: dirt_detect
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = roomba_msgs::msg::Security;
    is_plain =
      (
      offsetof(DataType, dirt_detect) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _Security__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const roomba_msgs::msg::Security *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Security__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<roomba_msgs::msg::Security *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Security__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const roomba_msgs::msg::Security *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Security__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Security(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Security__callbacks = {
  "roomba_msgs::msg",
  "Security",
  _Security__cdr_serialize,
  _Security__cdr_deserialize,
  _Security__get_serialized_size,
  _Security__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Security__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Security__callbacks,
  get_message_typesupport_handle_function,
  &roomba_msgs__msg__Security__get_type_hash,
  &roomba_msgs__msg__Security__get_type_description,
  &roomba_msgs__msg__Security__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace roomba_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_roomba_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<roomba_msgs::msg::Security>()
{
  return &roomba_msgs::msg::typesupport_fastrtps_cpp::_Security__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roomba_msgs, msg, Security)() {
  return &roomba_msgs::msg::typesupport_fastrtps_cpp::_Security__handle;
}

#ifdef __cplusplus
}
#endif
