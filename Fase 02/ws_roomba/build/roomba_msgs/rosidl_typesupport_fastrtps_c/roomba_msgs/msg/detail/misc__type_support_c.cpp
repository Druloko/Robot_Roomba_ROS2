// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from roomba_msgs:msg/Misc.idl
// generated code does not contain a copyright notice
#include "roomba_msgs/msg/detail/misc__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "roomba_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "roomba_msgs/msg/detail/misc__struct.h"
#include "roomba_msgs/msg/detail/misc__functions.h"
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


using _Misc__ros_msg_type = roomba_msgs__msg__Misc;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
bool cdr_serialize_roomba_msgs__msg__Misc(
  const roomba_msgs__msg__Misc * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: is_song_playing
  {
    cdr << (ros_message->is_song_playing ? true : false);
  }

  // Field name: song_number
  {
    cdr << ros_message->song_number;
  }

  // Field name: button_clean
  {
    cdr << (ros_message->button_clean ? true : false);
  }

  // Field name: button_clock
  {
    cdr << (ros_message->button_clock ? true : false);
  }

  // Field name: button_day
  {
    cdr << (ros_message->button_day ? true : false);
  }

  // Field name: button_dock
  {
    cdr << (ros_message->button_dock ? true : false);
  }

  // Field name: button_hour
  {
    cdr << (ros_message->button_hour ? true : false);
  }

  // Field name: button_minute
  {
    cdr << (ros_message->button_minute ? true : false);
  }

  // Field name: button_schedule
  {
    cdr << (ros_message->button_schedule ? true : false);
  }

  // Field name: button_spot
  {
    cdr << (ros_message->button_spot ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
bool cdr_deserialize_roomba_msgs__msg__Misc(
  eprosima::fastcdr::Cdr & cdr,
  roomba_msgs__msg__Misc * ros_message)
{
  // Field name: is_song_playing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_song_playing = tmp ? true : false;
  }

  // Field name: song_number
  {
    cdr >> ros_message->song_number;
  }

  // Field name: button_clean
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_clean = tmp ? true : false;
  }

  // Field name: button_clock
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_clock = tmp ? true : false;
  }

  // Field name: button_day
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_day = tmp ? true : false;
  }

  // Field name: button_dock
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_dock = tmp ? true : false;
  }

  // Field name: button_hour
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_hour = tmp ? true : false;
  }

  // Field name: button_minute
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_minute = tmp ? true : false;
  }

  // Field name: button_schedule
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_schedule = tmp ? true : false;
  }

  // Field name: button_spot
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_spot = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
size_t get_serialized_size_roomba_msgs__msg__Misc(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Misc__ros_msg_type * ros_message = static_cast<const _Misc__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: is_song_playing
  {
    size_t item_size = sizeof(ros_message->is_song_playing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: song_number
  {
    size_t item_size = sizeof(ros_message->song_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: button_clean
  {
    size_t item_size = sizeof(ros_message->button_clean);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: button_clock
  {
    size_t item_size = sizeof(ros_message->button_clock);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: button_day
  {
    size_t item_size = sizeof(ros_message->button_day);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: button_dock
  {
    size_t item_size = sizeof(ros_message->button_dock);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: button_hour
  {
    size_t item_size = sizeof(ros_message->button_hour);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: button_minute
  {
    size_t item_size = sizeof(ros_message->button_minute);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: button_schedule
  {
    size_t item_size = sizeof(ros_message->button_schedule);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: button_spot
  {
    size_t item_size = sizeof(ros_message->button_spot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
size_t max_serialized_size_roomba_msgs__msg__Misc(
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

  // Field name: is_song_playing
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: song_number
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: button_clean
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: button_clock
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: button_day
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: button_dock
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: button_hour
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: button_minute
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: button_schedule
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: button_spot
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
    using DataType = roomba_msgs__msg__Misc;
    is_plain =
      (
      offsetof(DataType, button_spot) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
bool cdr_serialize_key_roomba_msgs__msg__Misc(
  const roomba_msgs__msg__Misc * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: is_song_playing
  {
    cdr << (ros_message->is_song_playing ? true : false);
  }

  // Field name: song_number
  {
    cdr << ros_message->song_number;
  }

  // Field name: button_clean
  {
    cdr << (ros_message->button_clean ? true : false);
  }

  // Field name: button_clock
  {
    cdr << (ros_message->button_clock ? true : false);
  }

  // Field name: button_day
  {
    cdr << (ros_message->button_day ? true : false);
  }

  // Field name: button_dock
  {
    cdr << (ros_message->button_dock ? true : false);
  }

  // Field name: button_hour
  {
    cdr << (ros_message->button_hour ? true : false);
  }

  // Field name: button_minute
  {
    cdr << (ros_message->button_minute ? true : false);
  }

  // Field name: button_schedule
  {
    cdr << (ros_message->button_schedule ? true : false);
  }

  // Field name: button_spot
  {
    cdr << (ros_message->button_spot ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
size_t get_serialized_size_key_roomba_msgs__msg__Misc(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Misc__ros_msg_type * ros_message = static_cast<const _Misc__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: is_song_playing
  {
    size_t item_size = sizeof(ros_message->is_song_playing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: song_number
  {
    size_t item_size = sizeof(ros_message->song_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: button_clean
  {
    size_t item_size = sizeof(ros_message->button_clean);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: button_clock
  {
    size_t item_size = sizeof(ros_message->button_clock);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: button_day
  {
    size_t item_size = sizeof(ros_message->button_day);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: button_dock
  {
    size_t item_size = sizeof(ros_message->button_dock);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: button_hour
  {
    size_t item_size = sizeof(ros_message->button_hour);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: button_minute
  {
    size_t item_size = sizeof(ros_message->button_minute);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: button_schedule
  {
    size_t item_size = sizeof(ros_message->button_schedule);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: button_spot
  {
    size_t item_size = sizeof(ros_message->button_spot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
size_t max_serialized_size_key_roomba_msgs__msg__Misc(
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
  // Field name: is_song_playing
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: song_number
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: button_clean
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: button_clock
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: button_day
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: button_dock
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: button_hour
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: button_minute
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: button_schedule
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: button_spot
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
    using DataType = roomba_msgs__msg__Misc;
    is_plain =
      (
      offsetof(DataType, button_spot) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Misc__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const roomba_msgs__msg__Misc * ros_message = static_cast<const roomba_msgs__msg__Misc *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_roomba_msgs__msg__Misc(ros_message, cdr);
}

static bool _Misc__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  roomba_msgs__msg__Misc * ros_message = static_cast<roomba_msgs__msg__Misc *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_roomba_msgs__msg__Misc(cdr, ros_message);
}

static uint32_t _Misc__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_roomba_msgs__msg__Misc(
      untyped_ros_message, 0));
}

static size_t _Misc__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_roomba_msgs__msg__Misc(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Misc = {
  "roomba_msgs::msg",
  "Misc",
  _Misc__cdr_serialize,
  _Misc__cdr_deserialize,
  _Misc__get_serialized_size,
  _Misc__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Misc__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Misc,
  get_message_typesupport_handle_function,
  &roomba_msgs__msg__Misc__get_type_hash,
  &roomba_msgs__msg__Misc__get_type_description,
  &roomba_msgs__msg__Misc__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roomba_msgs, msg, Misc)() {
  return &_Misc__type_support;
}

#if defined(__cplusplus)
}
#endif
