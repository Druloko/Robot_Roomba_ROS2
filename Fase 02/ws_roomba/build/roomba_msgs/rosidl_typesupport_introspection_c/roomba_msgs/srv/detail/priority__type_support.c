// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from roomba_msgs:srv/Priority.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "roomba_msgs/srv/detail/priority__rosidl_typesupport_introspection_c.h"
#include "roomba_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "roomba_msgs/srv/detail/priority__functions.h"
#include "roomba_msgs/srv/detail/priority__struct.h"


// Include directives for member types
// Member `message_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void roomba_msgs__srv__Priority_Request__rosidl_typesupport_introspection_c__Priority_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  roomba_msgs__srv__Priority_Request__init(message_memory);
}

void roomba_msgs__srv__Priority_Request__rosidl_typesupport_introspection_c__Priority_Request_fini_function(void * message_memory)
{
  roomba_msgs__srv__Priority_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember roomba_msgs__srv__Priority_Request__rosidl_typesupport_introspection_c__Priority_Request_message_member_array[2] = {
  {
    "message_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roomba_msgs__srv__Priority_Request, message_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "priority",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roomba_msgs__srv__Priority_Request, priority),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers roomba_msgs__srv__Priority_Request__rosidl_typesupport_introspection_c__Priority_Request_message_members = {
  "roomba_msgs__srv",  // message namespace
  "Priority_Request",  // message name
  2,  // number of fields
  sizeof(roomba_msgs__srv__Priority_Request),
  false,  // has_any_key_member_
  roomba_msgs__srv__Priority_Request__rosidl_typesupport_introspection_c__Priority_Request_message_member_array,  // message members
  roomba_msgs__srv__Priority_Request__rosidl_typesupport_introspection_c__Priority_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  roomba_msgs__srv__Priority_Request__rosidl_typesupport_introspection_c__Priority_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t roomba_msgs__srv__Priority_Request__rosidl_typesupport_introspection_c__Priority_Request_message_type_support_handle = {
  0,
  &roomba_msgs__srv__Priority_Request__rosidl_typesupport_introspection_c__Priority_Request_message_members,
  get_message_typesupport_handle_function,
  &roomba_msgs__srv__Priority_Request__get_type_hash,
  &roomba_msgs__srv__Priority_Request__get_type_description,
  &roomba_msgs__srv__Priority_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_roomba_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roomba_msgs, srv, Priority_Request)() {
  if (!roomba_msgs__srv__Priority_Request__rosidl_typesupport_introspection_c__Priority_Request_message_type_support_handle.typesupport_identifier) {
    roomba_msgs__srv__Priority_Request__rosidl_typesupport_introspection_c__Priority_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &roomba_msgs__srv__Priority_Request__rosidl_typesupport_introspection_c__Priority_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "roomba_msgs/srv/detail/priority__rosidl_typesupport_introspection_c.h"
// already included above
// #include "roomba_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "roomba_msgs/srv/detail/priority__functions.h"
// already included above
// #include "roomba_msgs/srv/detail/priority__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void roomba_msgs__srv__Priority_Response__rosidl_typesupport_introspection_c__Priority_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  roomba_msgs__srv__Priority_Response__init(message_memory);
}

void roomba_msgs__srv__Priority_Response__rosidl_typesupport_introspection_c__Priority_Response_fini_function(void * message_memory)
{
  roomba_msgs__srv__Priority_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember roomba_msgs__srv__Priority_Response__rosidl_typesupport_introspection_c__Priority_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roomba_msgs__srv__Priority_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roomba_msgs__srv__Priority_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers roomba_msgs__srv__Priority_Response__rosidl_typesupport_introspection_c__Priority_Response_message_members = {
  "roomba_msgs__srv",  // message namespace
  "Priority_Response",  // message name
  2,  // number of fields
  sizeof(roomba_msgs__srv__Priority_Response),
  false,  // has_any_key_member_
  roomba_msgs__srv__Priority_Response__rosidl_typesupport_introspection_c__Priority_Response_message_member_array,  // message members
  roomba_msgs__srv__Priority_Response__rosidl_typesupport_introspection_c__Priority_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  roomba_msgs__srv__Priority_Response__rosidl_typesupport_introspection_c__Priority_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t roomba_msgs__srv__Priority_Response__rosidl_typesupport_introspection_c__Priority_Response_message_type_support_handle = {
  0,
  &roomba_msgs__srv__Priority_Response__rosidl_typesupport_introspection_c__Priority_Response_message_members,
  get_message_typesupport_handle_function,
  &roomba_msgs__srv__Priority_Response__get_type_hash,
  &roomba_msgs__srv__Priority_Response__get_type_description,
  &roomba_msgs__srv__Priority_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_roomba_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roomba_msgs, srv, Priority_Response)() {
  if (!roomba_msgs__srv__Priority_Response__rosidl_typesupport_introspection_c__Priority_Response_message_type_support_handle.typesupport_identifier) {
    roomba_msgs__srv__Priority_Response__rosidl_typesupport_introspection_c__Priority_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &roomba_msgs__srv__Priority_Response__rosidl_typesupport_introspection_c__Priority_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "roomba_msgs/srv/detail/priority__rosidl_typesupport_introspection_c.h"
// already included above
// #include "roomba_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "roomba_msgs/srv/detail/priority__functions.h"
// already included above
// #include "roomba_msgs/srv/detail/priority__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "roomba_msgs/srv/priority.h"
// Member `request`
// Member `response`
// already included above
// #include "roomba_msgs/srv/detail/priority__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__Priority_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  roomba_msgs__srv__Priority_Event__init(message_memory);
}

void roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__Priority_Event_fini_function(void * message_memory)
{
  roomba_msgs__srv__Priority_Event__fini(message_memory);
}

size_t roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__size_function__Priority_Event__request(
  const void * untyped_member)
{
  const roomba_msgs__srv__Priority_Request__Sequence * member =
    (const roomba_msgs__srv__Priority_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__get_const_function__Priority_Event__request(
  const void * untyped_member, size_t index)
{
  const roomba_msgs__srv__Priority_Request__Sequence * member =
    (const roomba_msgs__srv__Priority_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__get_function__Priority_Event__request(
  void * untyped_member, size_t index)
{
  roomba_msgs__srv__Priority_Request__Sequence * member =
    (roomba_msgs__srv__Priority_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__fetch_function__Priority_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const roomba_msgs__srv__Priority_Request * item =
    ((const roomba_msgs__srv__Priority_Request *)
    roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__get_const_function__Priority_Event__request(untyped_member, index));
  roomba_msgs__srv__Priority_Request * value =
    (roomba_msgs__srv__Priority_Request *)(untyped_value);
  *value = *item;
}

void roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__assign_function__Priority_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  roomba_msgs__srv__Priority_Request * item =
    ((roomba_msgs__srv__Priority_Request *)
    roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__get_function__Priority_Event__request(untyped_member, index));
  const roomba_msgs__srv__Priority_Request * value =
    (const roomba_msgs__srv__Priority_Request *)(untyped_value);
  *item = *value;
}

bool roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__resize_function__Priority_Event__request(
  void * untyped_member, size_t size)
{
  roomba_msgs__srv__Priority_Request__Sequence * member =
    (roomba_msgs__srv__Priority_Request__Sequence *)(untyped_member);
  roomba_msgs__srv__Priority_Request__Sequence__fini(member);
  return roomba_msgs__srv__Priority_Request__Sequence__init(member, size);
}

size_t roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__size_function__Priority_Event__response(
  const void * untyped_member)
{
  const roomba_msgs__srv__Priority_Response__Sequence * member =
    (const roomba_msgs__srv__Priority_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__get_const_function__Priority_Event__response(
  const void * untyped_member, size_t index)
{
  const roomba_msgs__srv__Priority_Response__Sequence * member =
    (const roomba_msgs__srv__Priority_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__get_function__Priority_Event__response(
  void * untyped_member, size_t index)
{
  roomba_msgs__srv__Priority_Response__Sequence * member =
    (roomba_msgs__srv__Priority_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__fetch_function__Priority_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const roomba_msgs__srv__Priority_Response * item =
    ((const roomba_msgs__srv__Priority_Response *)
    roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__get_const_function__Priority_Event__response(untyped_member, index));
  roomba_msgs__srv__Priority_Response * value =
    (roomba_msgs__srv__Priority_Response *)(untyped_value);
  *value = *item;
}

void roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__assign_function__Priority_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  roomba_msgs__srv__Priority_Response * item =
    ((roomba_msgs__srv__Priority_Response *)
    roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__get_function__Priority_Event__response(untyped_member, index));
  const roomba_msgs__srv__Priority_Response * value =
    (const roomba_msgs__srv__Priority_Response *)(untyped_value);
  *item = *value;
}

bool roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__resize_function__Priority_Event__response(
  void * untyped_member, size_t size)
{
  roomba_msgs__srv__Priority_Response__Sequence * member =
    (roomba_msgs__srv__Priority_Response__Sequence *)(untyped_member);
  roomba_msgs__srv__Priority_Response__Sequence__fini(member);
  return roomba_msgs__srv__Priority_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__Priority_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roomba_msgs__srv__Priority_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(roomba_msgs__srv__Priority_Event, request),  // bytes offset in struct
    NULL,  // default value
    roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__size_function__Priority_Event__request,  // size() function pointer
    roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__get_const_function__Priority_Event__request,  // get_const(index) function pointer
    roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__get_function__Priority_Event__request,  // get(index) function pointer
    roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__fetch_function__Priority_Event__request,  // fetch(index, &value) function pointer
    roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__assign_function__Priority_Event__request,  // assign(index, value) function pointer
    roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__resize_function__Priority_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(roomba_msgs__srv__Priority_Event, response),  // bytes offset in struct
    NULL,  // default value
    roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__size_function__Priority_Event__response,  // size() function pointer
    roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__get_const_function__Priority_Event__response,  // get_const(index) function pointer
    roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__get_function__Priority_Event__response,  // get(index) function pointer
    roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__fetch_function__Priority_Event__response,  // fetch(index, &value) function pointer
    roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__assign_function__Priority_Event__response,  // assign(index, value) function pointer
    roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__resize_function__Priority_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__Priority_Event_message_members = {
  "roomba_msgs__srv",  // message namespace
  "Priority_Event",  // message name
  3,  // number of fields
  sizeof(roomba_msgs__srv__Priority_Event),
  false,  // has_any_key_member_
  roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__Priority_Event_message_member_array,  // message members
  roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__Priority_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__Priority_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__Priority_Event_message_type_support_handle = {
  0,
  &roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__Priority_Event_message_members,
  get_message_typesupport_handle_function,
  &roomba_msgs__srv__Priority_Event__get_type_hash,
  &roomba_msgs__srv__Priority_Event__get_type_description,
  &roomba_msgs__srv__Priority_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_roomba_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roomba_msgs, srv, Priority_Event)() {
  roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__Priority_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__Priority_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roomba_msgs, srv, Priority_Request)();
  roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__Priority_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roomba_msgs, srv, Priority_Response)();
  if (!roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__Priority_Event_message_type_support_handle.typesupport_identifier) {
    roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__Priority_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__Priority_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "roomba_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "roomba_msgs/srv/detail/priority__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers roomba_msgs__srv__detail__priority__rosidl_typesupport_introspection_c__Priority_service_members = {
  "roomba_msgs__srv",  // service namespace
  "Priority",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // roomba_msgs__srv__detail__priority__rosidl_typesupport_introspection_c__Priority_Request_message_type_support_handle,
  NULL,  // response message
  // roomba_msgs__srv__detail__priority__rosidl_typesupport_introspection_c__Priority_Response_message_type_support_handle
  NULL  // event_message
  // roomba_msgs__srv__detail__priority__rosidl_typesupport_introspection_c__Priority_Response_message_type_support_handle
};


static rosidl_service_type_support_t roomba_msgs__srv__detail__priority__rosidl_typesupport_introspection_c__Priority_service_type_support_handle = {
  0,
  &roomba_msgs__srv__detail__priority__rosidl_typesupport_introspection_c__Priority_service_members,
  get_service_typesupport_handle_function,
  &roomba_msgs__srv__Priority_Request__rosidl_typesupport_introspection_c__Priority_Request_message_type_support_handle,
  &roomba_msgs__srv__Priority_Response__rosidl_typesupport_introspection_c__Priority_Response_message_type_support_handle,
  &roomba_msgs__srv__Priority_Event__rosidl_typesupport_introspection_c__Priority_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    roomba_msgs,
    srv,
    Priority
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    roomba_msgs,
    srv,
    Priority
  ),
  &roomba_msgs__srv__Priority__get_type_hash,
  &roomba_msgs__srv__Priority__get_type_description,
  &roomba_msgs__srv__Priority__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roomba_msgs, srv, Priority_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roomba_msgs, srv, Priority_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roomba_msgs, srv, Priority_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_roomba_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roomba_msgs, srv, Priority)(void) {
  if (!roomba_msgs__srv__detail__priority__rosidl_typesupport_introspection_c__Priority_service_type_support_handle.typesupport_identifier) {
    roomba_msgs__srv__detail__priority__rosidl_typesupport_introspection_c__Priority_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)roomba_msgs__srv__detail__priority__rosidl_typesupport_introspection_c__Priority_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roomba_msgs, srv, Priority_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roomba_msgs, srv, Priority_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roomba_msgs, srv, Priority_Event)()->data;
  }

  return &roomba_msgs__srv__detail__priority__rosidl_typesupport_introspection_c__Priority_service_type_support_handle;
}
