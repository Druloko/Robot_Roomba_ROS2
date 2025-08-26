// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from roomba_msgs:msg/Misc.idl
// generated code does not contain a copyright notice
#include "roomba_msgs/msg/detail/misc__rosidl_typesupport_fastrtps_cpp.hpp"
#include "roomba_msgs/msg/detail/misc__functions.h"
#include "roomba_msgs/msg/detail/misc__struct.hpp"

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
  const roomba_msgs::msg::Misc & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: is_song_playing
  cdr << (ros_message.is_song_playing ? true : false);

  // Member: song_number
  cdr << ros_message.song_number;

  // Member: button_clean
  cdr << (ros_message.button_clean ? true : false);

  // Member: button_clock
  cdr << (ros_message.button_clock ? true : false);

  // Member: button_day
  cdr << (ros_message.button_day ? true : false);

  // Member: button_dock
  cdr << (ros_message.button_dock ? true : false);

  // Member: button_hour
  cdr << (ros_message.button_hour ? true : false);

  // Member: button_minute
  cdr << (ros_message.button_minute ? true : false);

  // Member: button_schedule
  cdr << (ros_message.button_schedule ? true : false);

  // Member: button_spot
  cdr << (ros_message.button_spot ? true : false);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roomba_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  roomba_msgs::msg::Misc & ros_message)
{
  // Member: is_song_playing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_song_playing = tmp ? true : false;
  }

  // Member: song_number
  cdr >> ros_message.song_number;

  // Member: button_clean
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_clean = tmp ? true : false;
  }

  // Member: button_clock
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_clock = tmp ? true : false;
  }

  // Member: button_day
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_day = tmp ? true : false;
  }

  // Member: button_dock
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_dock = tmp ? true : false;
  }

  // Member: button_hour
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_hour = tmp ? true : false;
  }

  // Member: button_minute
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_minute = tmp ? true : false;
  }

  // Member: button_schedule
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_schedule = tmp ? true : false;
  }

  // Member: button_spot
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_spot = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roomba_msgs
get_serialized_size(
  const roomba_msgs::msg::Misc & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: is_song_playing
  {
    size_t item_size = sizeof(ros_message.is_song_playing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: song_number
  {
    size_t item_size = sizeof(ros_message.song_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: button_clean
  {
    size_t item_size = sizeof(ros_message.button_clean);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: button_clock
  {
    size_t item_size = sizeof(ros_message.button_clock);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: button_day
  {
    size_t item_size = sizeof(ros_message.button_day);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: button_dock
  {
    size_t item_size = sizeof(ros_message.button_dock);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: button_hour
  {
    size_t item_size = sizeof(ros_message.button_hour);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: button_minute
  {
    size_t item_size = sizeof(ros_message.button_minute);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: button_schedule
  {
    size_t item_size = sizeof(ros_message.button_schedule);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: button_spot
  {
    size_t item_size = sizeof(ros_message.button_spot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roomba_msgs
max_serialized_size_Misc(
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

  // Member: is_song_playing
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: song_number
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: button_clean
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: button_clock
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: button_day
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: button_dock
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: button_hour
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: button_minute
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: button_schedule
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: button_spot
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
    using DataType = roomba_msgs::msg::Misc;
    is_plain =
      (
      offsetof(DataType, button_spot) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roomba_msgs
cdr_serialize_key(
  const roomba_msgs::msg::Misc & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: is_song_playing
  cdr << (ros_message.is_song_playing ? true : false);

  // Member: song_number
  cdr << ros_message.song_number;

  // Member: button_clean
  cdr << (ros_message.button_clean ? true : false);

  // Member: button_clock
  cdr << (ros_message.button_clock ? true : false);

  // Member: button_day
  cdr << (ros_message.button_day ? true : false);

  // Member: button_dock
  cdr << (ros_message.button_dock ? true : false);

  // Member: button_hour
  cdr << (ros_message.button_hour ? true : false);

  // Member: button_minute
  cdr << (ros_message.button_minute ? true : false);

  // Member: button_schedule
  cdr << (ros_message.button_schedule ? true : false);

  // Member: button_spot
  cdr << (ros_message.button_spot ? true : false);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roomba_msgs
get_serialized_size_key(
  const roomba_msgs::msg::Misc & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: is_song_playing
  {
    size_t item_size = sizeof(ros_message.is_song_playing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: song_number
  {
    size_t item_size = sizeof(ros_message.song_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: button_clean
  {
    size_t item_size = sizeof(ros_message.button_clean);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: button_clock
  {
    size_t item_size = sizeof(ros_message.button_clock);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: button_day
  {
    size_t item_size = sizeof(ros_message.button_day);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: button_dock
  {
    size_t item_size = sizeof(ros_message.button_dock);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: button_hour
  {
    size_t item_size = sizeof(ros_message.button_hour);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: button_minute
  {
    size_t item_size = sizeof(ros_message.button_minute);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: button_schedule
  {
    size_t item_size = sizeof(ros_message.button_schedule);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: button_spot
  {
    size_t item_size = sizeof(ros_message.button_spot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roomba_msgs
max_serialized_size_key_Misc(
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

  // Member: is_song_playing
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: song_number
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_clean
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_clock
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_day
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_dock
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_hour
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_minute
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_schedule
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_spot
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
    using DataType = roomba_msgs::msg::Misc;
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
  auto typed_message =
    static_cast<const roomba_msgs::msg::Misc *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Misc__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<roomba_msgs::msg::Misc *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Misc__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const roomba_msgs::msg::Misc *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Misc__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Misc(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Misc__callbacks = {
  "roomba_msgs::msg",
  "Misc",
  _Misc__cdr_serialize,
  _Misc__cdr_deserialize,
  _Misc__get_serialized_size,
  _Misc__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Misc__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Misc__callbacks,
  get_message_typesupport_handle_function,
  &roomba_msgs__msg__Misc__get_type_hash,
  &roomba_msgs__msg__Misc__get_type_description,
  &roomba_msgs__msg__Misc__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace roomba_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_roomba_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<roomba_msgs::msg::Misc>()
{
  return &roomba_msgs::msg::typesupport_fastrtps_cpp::_Misc__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roomba_msgs, msg, Misc)() {
  return &roomba_msgs::msg::typesupport_fastrtps_cpp::_Misc__handle;
}

#ifdef __cplusplus
}
#endif
