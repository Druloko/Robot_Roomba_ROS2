// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from roomba_msgs:msg/Security.idl
// generated code does not contain a copyright notice
#include "roomba_msgs/msg/detail/security__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "roomba_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "roomba_msgs/msg/detail/security__struct.h"
#include "roomba_msgs/msg/detail/security__functions.h"
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


using _Security__ros_msg_type = roomba_msgs__msg__Security;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
bool cdr_serialize_roomba_msgs__msg__Security(
  const roomba_msgs__msg__Security * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: bump_left
  {
    cdr << (ros_message->bump_left ? true : false);
  }

  // Field name: bump_right
  {
    cdr << (ros_message->bump_right ? true : false);
  }

  // Field name: wheel_drop_left
  {
    cdr << (ros_message->wheel_drop_left ? true : false);
  }

  // Field name: wheel_drop_right
  {
    cdr << (ros_message->wheel_drop_right ? true : false);
  }

  // Field name: wall
  {
    cdr << (ros_message->wall ? true : false);
  }

  // Field name: virtual_wall
  {
    cdr << (ros_message->virtual_wall ? true : false);
  }

  // Field name: cliff_left
  {
    cdr << (ros_message->cliff_left ? true : false);
  }

  // Field name: cliff_right
  {
    cdr << (ros_message->cliff_right ? true : false);
  }

  // Field name: cliff_front_left
  {
    cdr << (ros_message->cliff_front_left ? true : false);
  }

  // Field name: cliff_front_right
  {
    cdr << (ros_message->cliff_front_right ? true : false);
  }

  // Field name: cliff_left_signal
  {
    cdr << ros_message->cliff_left_signal;
  }

  // Field name: cliff_right_signal
  {
    cdr << ros_message->cliff_right_signal;
  }

  // Field name: cliff_front_left_signal
  {
    cdr << ros_message->cliff_front_left_signal;
  }

  // Field name: cliff_front_right_signal
  {
    cdr << ros_message->cliff_front_right_signal;
  }

  // Field name: wall_signal
  {
    cdr << ros_message->wall_signal;
  }

  // Field name: light_bumper_left
  {
    cdr << (ros_message->light_bumper_left ? true : false);
  }

  // Field name: light_bumper_right
  {
    cdr << (ros_message->light_bumper_right ? true : false);
  }

  // Field name: light_bumper_center_left
  {
    cdr << (ros_message->light_bumper_center_left ? true : false);
  }

  // Field name: light_bumper_center_right
  {
    cdr << (ros_message->light_bumper_center_right ? true : false);
  }

  // Field name: light_bumper_front_left
  {
    cdr << (ros_message->light_bumper_front_left ? true : false);
  }

  // Field name: light_bumper_front_right
  {
    cdr << (ros_message->light_bumper_front_right ? true : false);
  }

  // Field name: light_bump_left_signal
  {
    cdr << ros_message->light_bump_left_signal;
  }

  // Field name: light_bump_right_signal
  {
    cdr << ros_message->light_bump_right_signal;
  }

  // Field name: light_bump_center_left_signal
  {
    cdr << ros_message->light_bump_center_left_signal;
  }

  // Field name: light_bump_center_right_signal
  {
    cdr << ros_message->light_bump_center_right_signal;
  }

  // Field name: light_bump_front_left_signal
  {
    cdr << ros_message->light_bump_front_left_signal;
  }

  // Field name: light_bump_front_right_signal
  {
    cdr << ros_message->light_bump_front_right_signal;
  }

  // Field name: dirt_detect
  {
    cdr << ros_message->dirt_detect;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
bool cdr_deserialize_roomba_msgs__msg__Security(
  eprosima::fastcdr::Cdr & cdr,
  roomba_msgs__msg__Security * ros_message)
{
  // Field name: bump_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->bump_left = tmp ? true : false;
  }

  // Field name: bump_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->bump_right = tmp ? true : false;
  }

  // Field name: wheel_drop_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wheel_drop_left = tmp ? true : false;
  }

  // Field name: wheel_drop_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wheel_drop_right = tmp ? true : false;
  }

  // Field name: wall
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wall = tmp ? true : false;
  }

  // Field name: virtual_wall
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->virtual_wall = tmp ? true : false;
  }

  // Field name: cliff_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cliff_left = tmp ? true : false;
  }

  // Field name: cliff_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cliff_right = tmp ? true : false;
  }

  // Field name: cliff_front_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cliff_front_left = tmp ? true : false;
  }

  // Field name: cliff_front_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cliff_front_right = tmp ? true : false;
  }

  // Field name: cliff_left_signal
  {
    cdr >> ros_message->cliff_left_signal;
  }

  // Field name: cliff_right_signal
  {
    cdr >> ros_message->cliff_right_signal;
  }

  // Field name: cliff_front_left_signal
  {
    cdr >> ros_message->cliff_front_left_signal;
  }

  // Field name: cliff_front_right_signal
  {
    cdr >> ros_message->cliff_front_right_signal;
  }

  // Field name: wall_signal
  {
    cdr >> ros_message->wall_signal;
  }

  // Field name: light_bumper_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->light_bumper_left = tmp ? true : false;
  }

  // Field name: light_bumper_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->light_bumper_right = tmp ? true : false;
  }

  // Field name: light_bumper_center_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->light_bumper_center_left = tmp ? true : false;
  }

  // Field name: light_bumper_center_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->light_bumper_center_right = tmp ? true : false;
  }

  // Field name: light_bumper_front_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->light_bumper_front_left = tmp ? true : false;
  }

  // Field name: light_bumper_front_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->light_bumper_front_right = tmp ? true : false;
  }

  // Field name: light_bump_left_signal
  {
    cdr >> ros_message->light_bump_left_signal;
  }

  // Field name: light_bump_right_signal
  {
    cdr >> ros_message->light_bump_right_signal;
  }

  // Field name: light_bump_center_left_signal
  {
    cdr >> ros_message->light_bump_center_left_signal;
  }

  // Field name: light_bump_center_right_signal
  {
    cdr >> ros_message->light_bump_center_right_signal;
  }

  // Field name: light_bump_front_left_signal
  {
    cdr >> ros_message->light_bump_front_left_signal;
  }

  // Field name: light_bump_front_right_signal
  {
    cdr >> ros_message->light_bump_front_right_signal;
  }

  // Field name: dirt_detect
  {
    cdr >> ros_message->dirt_detect;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
size_t get_serialized_size_roomba_msgs__msg__Security(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Security__ros_msg_type * ros_message = static_cast<const _Security__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: bump_left
  {
    size_t item_size = sizeof(ros_message->bump_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bump_right
  {
    size_t item_size = sizeof(ros_message->bump_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wheel_drop_left
  {
    size_t item_size = sizeof(ros_message->wheel_drop_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wheel_drop_right
  {
    size_t item_size = sizeof(ros_message->wheel_drop_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wall
  {
    size_t item_size = sizeof(ros_message->wall);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: virtual_wall
  {
    size_t item_size = sizeof(ros_message->virtual_wall);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cliff_left
  {
    size_t item_size = sizeof(ros_message->cliff_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cliff_right
  {
    size_t item_size = sizeof(ros_message->cliff_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cliff_front_left
  {
    size_t item_size = sizeof(ros_message->cliff_front_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cliff_front_right
  {
    size_t item_size = sizeof(ros_message->cliff_front_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cliff_left_signal
  {
    size_t item_size = sizeof(ros_message->cliff_left_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cliff_right_signal
  {
    size_t item_size = sizeof(ros_message->cliff_right_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cliff_front_left_signal
  {
    size_t item_size = sizeof(ros_message->cliff_front_left_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cliff_front_right_signal
  {
    size_t item_size = sizeof(ros_message->cliff_front_right_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wall_signal
  {
    size_t item_size = sizeof(ros_message->wall_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: light_bumper_left
  {
    size_t item_size = sizeof(ros_message->light_bumper_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: light_bumper_right
  {
    size_t item_size = sizeof(ros_message->light_bumper_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: light_bumper_center_left
  {
    size_t item_size = sizeof(ros_message->light_bumper_center_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: light_bumper_center_right
  {
    size_t item_size = sizeof(ros_message->light_bumper_center_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: light_bumper_front_left
  {
    size_t item_size = sizeof(ros_message->light_bumper_front_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: light_bumper_front_right
  {
    size_t item_size = sizeof(ros_message->light_bumper_front_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: light_bump_left_signal
  {
    size_t item_size = sizeof(ros_message->light_bump_left_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: light_bump_right_signal
  {
    size_t item_size = sizeof(ros_message->light_bump_right_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: light_bump_center_left_signal
  {
    size_t item_size = sizeof(ros_message->light_bump_center_left_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: light_bump_center_right_signal
  {
    size_t item_size = sizeof(ros_message->light_bump_center_right_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: light_bump_front_left_signal
  {
    size_t item_size = sizeof(ros_message->light_bump_front_left_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: light_bump_front_right_signal
  {
    size_t item_size = sizeof(ros_message->light_bump_front_right_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dirt_detect
  {
    size_t item_size = sizeof(ros_message->dirt_detect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
size_t max_serialized_size_roomba_msgs__msg__Security(
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

  // Field name: bump_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: bump_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: wheel_drop_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: wheel_drop_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: wall
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: virtual_wall
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: cliff_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: cliff_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: cliff_front_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: cliff_front_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: cliff_left_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: cliff_right_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: cliff_front_left_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: cliff_front_right_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: wall_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: light_bumper_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: light_bumper_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: light_bumper_center_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: light_bumper_center_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: light_bumper_front_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: light_bumper_front_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: light_bump_left_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: light_bump_right_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: light_bump_center_left_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: light_bump_center_right_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: light_bump_front_left_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: light_bump_front_right_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: dirt_detect
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
    using DataType = roomba_msgs__msg__Security;
    is_plain =
      (
      offsetof(DataType, dirt_detect) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
bool cdr_serialize_key_roomba_msgs__msg__Security(
  const roomba_msgs__msg__Security * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: bump_left
  {
    cdr << (ros_message->bump_left ? true : false);
  }

  // Field name: bump_right
  {
    cdr << (ros_message->bump_right ? true : false);
  }

  // Field name: wheel_drop_left
  {
    cdr << (ros_message->wheel_drop_left ? true : false);
  }

  // Field name: wheel_drop_right
  {
    cdr << (ros_message->wheel_drop_right ? true : false);
  }

  // Field name: wall
  {
    cdr << (ros_message->wall ? true : false);
  }

  // Field name: virtual_wall
  {
    cdr << (ros_message->virtual_wall ? true : false);
  }

  // Field name: cliff_left
  {
    cdr << (ros_message->cliff_left ? true : false);
  }

  // Field name: cliff_right
  {
    cdr << (ros_message->cliff_right ? true : false);
  }

  // Field name: cliff_front_left
  {
    cdr << (ros_message->cliff_front_left ? true : false);
  }

  // Field name: cliff_front_right
  {
    cdr << (ros_message->cliff_front_right ? true : false);
  }

  // Field name: cliff_left_signal
  {
    cdr << ros_message->cliff_left_signal;
  }

  // Field name: cliff_right_signal
  {
    cdr << ros_message->cliff_right_signal;
  }

  // Field name: cliff_front_left_signal
  {
    cdr << ros_message->cliff_front_left_signal;
  }

  // Field name: cliff_front_right_signal
  {
    cdr << ros_message->cliff_front_right_signal;
  }

  // Field name: wall_signal
  {
    cdr << ros_message->wall_signal;
  }

  // Field name: light_bumper_left
  {
    cdr << (ros_message->light_bumper_left ? true : false);
  }

  // Field name: light_bumper_right
  {
    cdr << (ros_message->light_bumper_right ? true : false);
  }

  // Field name: light_bumper_center_left
  {
    cdr << (ros_message->light_bumper_center_left ? true : false);
  }

  // Field name: light_bumper_center_right
  {
    cdr << (ros_message->light_bumper_center_right ? true : false);
  }

  // Field name: light_bumper_front_left
  {
    cdr << (ros_message->light_bumper_front_left ? true : false);
  }

  // Field name: light_bumper_front_right
  {
    cdr << (ros_message->light_bumper_front_right ? true : false);
  }

  // Field name: light_bump_left_signal
  {
    cdr << ros_message->light_bump_left_signal;
  }

  // Field name: light_bump_right_signal
  {
    cdr << ros_message->light_bump_right_signal;
  }

  // Field name: light_bump_center_left_signal
  {
    cdr << ros_message->light_bump_center_left_signal;
  }

  // Field name: light_bump_center_right_signal
  {
    cdr << ros_message->light_bump_center_right_signal;
  }

  // Field name: light_bump_front_left_signal
  {
    cdr << ros_message->light_bump_front_left_signal;
  }

  // Field name: light_bump_front_right_signal
  {
    cdr << ros_message->light_bump_front_right_signal;
  }

  // Field name: dirt_detect
  {
    cdr << ros_message->dirt_detect;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
size_t get_serialized_size_key_roomba_msgs__msg__Security(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Security__ros_msg_type * ros_message = static_cast<const _Security__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: bump_left
  {
    size_t item_size = sizeof(ros_message->bump_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bump_right
  {
    size_t item_size = sizeof(ros_message->bump_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wheel_drop_left
  {
    size_t item_size = sizeof(ros_message->wheel_drop_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wheel_drop_right
  {
    size_t item_size = sizeof(ros_message->wheel_drop_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wall
  {
    size_t item_size = sizeof(ros_message->wall);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: virtual_wall
  {
    size_t item_size = sizeof(ros_message->virtual_wall);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cliff_left
  {
    size_t item_size = sizeof(ros_message->cliff_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cliff_right
  {
    size_t item_size = sizeof(ros_message->cliff_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cliff_front_left
  {
    size_t item_size = sizeof(ros_message->cliff_front_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cliff_front_right
  {
    size_t item_size = sizeof(ros_message->cliff_front_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cliff_left_signal
  {
    size_t item_size = sizeof(ros_message->cliff_left_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cliff_right_signal
  {
    size_t item_size = sizeof(ros_message->cliff_right_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cliff_front_left_signal
  {
    size_t item_size = sizeof(ros_message->cliff_front_left_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cliff_front_right_signal
  {
    size_t item_size = sizeof(ros_message->cliff_front_right_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wall_signal
  {
    size_t item_size = sizeof(ros_message->wall_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: light_bumper_left
  {
    size_t item_size = sizeof(ros_message->light_bumper_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: light_bumper_right
  {
    size_t item_size = sizeof(ros_message->light_bumper_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: light_bumper_center_left
  {
    size_t item_size = sizeof(ros_message->light_bumper_center_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: light_bumper_center_right
  {
    size_t item_size = sizeof(ros_message->light_bumper_center_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: light_bumper_front_left
  {
    size_t item_size = sizeof(ros_message->light_bumper_front_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: light_bumper_front_right
  {
    size_t item_size = sizeof(ros_message->light_bumper_front_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: light_bump_left_signal
  {
    size_t item_size = sizeof(ros_message->light_bump_left_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: light_bump_right_signal
  {
    size_t item_size = sizeof(ros_message->light_bump_right_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: light_bump_center_left_signal
  {
    size_t item_size = sizeof(ros_message->light_bump_center_left_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: light_bump_center_right_signal
  {
    size_t item_size = sizeof(ros_message->light_bump_center_right_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: light_bump_front_left_signal
  {
    size_t item_size = sizeof(ros_message->light_bump_front_left_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: light_bump_front_right_signal
  {
    size_t item_size = sizeof(ros_message->light_bump_front_right_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dirt_detect
  {
    size_t item_size = sizeof(ros_message->dirt_detect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
size_t max_serialized_size_key_roomba_msgs__msg__Security(
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
  // Field name: bump_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: bump_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: wheel_drop_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: wheel_drop_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: wall
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: virtual_wall
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: cliff_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: cliff_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: cliff_front_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: cliff_front_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: cliff_left_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: cliff_right_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: cliff_front_left_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: cliff_front_right_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: wall_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: light_bumper_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: light_bumper_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: light_bumper_center_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: light_bumper_center_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: light_bumper_front_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: light_bumper_front_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: light_bump_left_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: light_bump_right_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: light_bump_center_left_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: light_bump_center_right_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: light_bump_front_left_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: light_bump_front_right_signal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: dirt_detect
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
    using DataType = roomba_msgs__msg__Security;
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
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const roomba_msgs__msg__Security * ros_message = static_cast<const roomba_msgs__msg__Security *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_roomba_msgs__msg__Security(ros_message, cdr);
}

static bool _Security__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  roomba_msgs__msg__Security * ros_message = static_cast<roomba_msgs__msg__Security *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_roomba_msgs__msg__Security(cdr, ros_message);
}

static uint32_t _Security__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_roomba_msgs__msg__Security(
      untyped_ros_message, 0));
}

static size_t _Security__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_roomba_msgs__msg__Security(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Security = {
  "roomba_msgs::msg",
  "Security",
  _Security__cdr_serialize,
  _Security__cdr_deserialize,
  _Security__get_serialized_size,
  _Security__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Security__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Security,
  get_message_typesupport_handle_function,
  &roomba_msgs__msg__Security__get_type_hash,
  &roomba_msgs__msg__Security__get_type_description,
  &roomba_msgs__msg__Security__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roomba_msgs, msg, Security)() {
  return &_Security__type_support;
}

#if defined(__cplusplus)
}
#endif
