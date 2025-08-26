// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roomba_msgs:srv/Reconfigure.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/srv/reconfigure.h"


#ifndef ROOMBA_MSGS__SRV__DETAIL__RECONFIGURE__STRUCT_H_
#define ROOMBA_MSGS__SRV__DETAIL__RECONFIGURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'parameter'
// Member 'value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Reconfigure in the package roomba_msgs.
typedef struct roomba_msgs__srv__Reconfigure_Request
{
  rosidl_runtime_c__String parameter;
  rosidl_runtime_c__String value;
} roomba_msgs__srv__Reconfigure_Request;

// Struct for a sequence of roomba_msgs__srv__Reconfigure_Request.
typedef struct roomba_msgs__srv__Reconfigure_Request__Sequence
{
  roomba_msgs__srv__Reconfigure_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roomba_msgs__srv__Reconfigure_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Reconfigure in the package roomba_msgs.
typedef struct roomba_msgs__srv__Reconfigure_Response
{
  bool success;
  rosidl_runtime_c__String message;
} roomba_msgs__srv__Reconfigure_Response;

// Struct for a sequence of roomba_msgs__srv__Reconfigure_Response.
typedef struct roomba_msgs__srv__Reconfigure_Response__Sequence
{
  roomba_msgs__srv__Reconfigure_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roomba_msgs__srv__Reconfigure_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  roomba_msgs__srv__Reconfigure_Event__request__MAX_SIZE = 1
};
// response
enum
{
  roomba_msgs__srv__Reconfigure_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Reconfigure in the package roomba_msgs.
typedef struct roomba_msgs__srv__Reconfigure_Event
{
  service_msgs__msg__ServiceEventInfo info;
  roomba_msgs__srv__Reconfigure_Request__Sequence request;
  roomba_msgs__srv__Reconfigure_Response__Sequence response;
} roomba_msgs__srv__Reconfigure_Event;

// Struct for a sequence of roomba_msgs__srv__Reconfigure_Event.
typedef struct roomba_msgs__srv__Reconfigure_Event__Sequence
{
  roomba_msgs__srv__Reconfigure_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roomba_msgs__srv__Reconfigure_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROOMBA_MSGS__SRV__DETAIL__RECONFIGURE__STRUCT_H_
