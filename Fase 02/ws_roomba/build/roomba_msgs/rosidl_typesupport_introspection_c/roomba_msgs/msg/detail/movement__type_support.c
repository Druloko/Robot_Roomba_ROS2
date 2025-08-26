// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from roomba_msgs:msg/Movement.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "roomba_msgs/msg/detail/movement__rosidl_typesupport_introspection_c.h"
#include "roomba_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "roomba_msgs/msg/detail/movement__functions.h"
#include "roomba_msgs/msg/detail/movement__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void roomba_msgs__msg__Movement__rosidl_typesupport_introspection_c__Movement_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  roomba_msgs__msg__Movement__init(message_memory);
}

void roomba_msgs__msg__Movement__rosidl_typesupport_introspection_c__Movement_fini_function(void * message_memory)
{
  roomba_msgs__msg__Movement__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember roomba_msgs__msg__Movement__rosidl_typesupport_introspection_c__Movement_message_member_array[8] = {
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roomba_msgs__msg__Movement, distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roomba_msgs__msg__Movement, angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_encoder_counts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roomba_msgs__msg__Movement, left_encoder_counts),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_encoder_counts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roomba_msgs__msg__Movement, right_encoder_counts),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requested_left_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roomba_msgs__msg__Movement, requested_left_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requested_right_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roomba_msgs__msg__Movement, requested_right_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requested_radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roomba_msgs__msg__Movement, requested_radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requested_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roomba_msgs__msg__Movement, requested_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers roomba_msgs__msg__Movement__rosidl_typesupport_introspection_c__Movement_message_members = {
  "roomba_msgs__msg",  // message namespace
  "Movement",  // message name
  8,  // number of fields
  sizeof(roomba_msgs__msg__Movement),
  false,  // has_any_key_member_
  roomba_msgs__msg__Movement__rosidl_typesupport_introspection_c__Movement_message_member_array,  // message members
  roomba_msgs__msg__Movement__rosidl_typesupport_introspection_c__Movement_init_function,  // function to initialize message memory (memory has to be allocated)
  roomba_msgs__msg__Movement__rosidl_typesupport_introspection_c__Movement_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t roomba_msgs__msg__Movement__rosidl_typesupport_introspection_c__Movement_message_type_support_handle = {
  0,
  &roomba_msgs__msg__Movement__rosidl_typesupport_introspection_c__Movement_message_members,
  get_message_typesupport_handle_function,
  &roomba_msgs__msg__Movement__get_type_hash,
  &roomba_msgs__msg__Movement__get_type_description,
  &roomba_msgs__msg__Movement__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_roomba_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roomba_msgs, msg, Movement)() {
  if (!roomba_msgs__msg__Movement__rosidl_typesupport_introspection_c__Movement_message_type_support_handle.typesupport_identifier) {
    roomba_msgs__msg__Movement__rosidl_typesupport_introspection_c__Movement_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &roomba_msgs__msg__Movement__rosidl_typesupport_introspection_c__Movement_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
