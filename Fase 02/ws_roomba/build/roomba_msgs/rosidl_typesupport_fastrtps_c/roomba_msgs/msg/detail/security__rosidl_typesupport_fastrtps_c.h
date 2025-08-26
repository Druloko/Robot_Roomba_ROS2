// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from roomba_msgs:msg/Security.idl
// generated code does not contain a copyright notice
#ifndef ROOMBA_MSGS__MSG__DETAIL__SECURITY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROOMBA_MSGS__MSG__DETAIL__SECURITY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "roomba_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "roomba_msgs/msg/detail/security__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
bool cdr_serialize_roomba_msgs__msg__Security(
  const roomba_msgs__msg__Security * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
bool cdr_deserialize_roomba_msgs__msg__Security(
  eprosima::fastcdr::Cdr &,
  roomba_msgs__msg__Security * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
size_t get_serialized_size_roomba_msgs__msg__Security(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
size_t max_serialized_size_roomba_msgs__msg__Security(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
bool cdr_serialize_key_roomba_msgs__msg__Security(
  const roomba_msgs__msg__Security * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
size_t get_serialized_size_key_roomba_msgs__msg__Security(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
size_t max_serialized_size_key_roomba_msgs__msg__Security(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomba_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roomba_msgs, msg, Security)();

#ifdef __cplusplus
}
#endif

#endif  // ROOMBA_MSGS__MSG__DETAIL__SECURITY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
