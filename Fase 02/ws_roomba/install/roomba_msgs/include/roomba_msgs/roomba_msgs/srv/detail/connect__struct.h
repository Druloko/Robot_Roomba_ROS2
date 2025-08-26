// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roomba_msgs:srv/Connect.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/srv/connect.h"


#ifndef ROOMBA_MSGS__SRV__DETAIL__CONNECT__STRUCT_H_
#define ROOMBA_MSGS__SRV__DETAIL__CONNECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'port'
// Member 'mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Connect in the package roomba_msgs.
typedef struct roomba_msgs__srv__Connect_Request
{
  rosidl_runtime_c__String port;
  rosidl_runtime_c__String mode;
} roomba_msgs__srv__Connect_Request;

// Struct for a sequence of roomba_msgs__srv__Connect_Request.
typedef struct roomba_msgs__srv__Connect_Request__Sequence
{
  roomba_msgs__srv__Connect_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roomba_msgs__srv__Connect_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Connect in the package roomba_msgs.
typedef struct roomba_msgs__srv__Connect_Response
{
  bool success;
  rosidl_runtime_c__String message;
} roomba_msgs__srv__Connect_Response;

// Struct for a sequence of roomba_msgs__srv__Connect_Response.
typedef struct roomba_msgs__srv__Connect_Response__Sequence
{
  roomba_msgs__srv__Connect_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roomba_msgs__srv__Connect_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  roomba_msgs__srv__Connect_Event__request__MAX_SIZE = 1
};
// response
enum
{
  roomba_msgs__srv__Connect_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Connect in the package roomba_msgs.
typedef struct roomba_msgs__srv__Connect_Event
{
  service_msgs__msg__ServiceEventInfo info;
  roomba_msgs__srv__Connect_Request__Sequence request;
  roomba_msgs__srv__Connect_Response__Sequence response;
} roomba_msgs__srv__Connect_Event;

// Struct for a sequence of roomba_msgs__srv__Connect_Event.
typedef struct roomba_msgs__srv__Connect_Event__Sequence
{
  roomba_msgs__srv__Connect_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roomba_msgs__srv__Connect_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROOMBA_MSGS__SRV__DETAIL__CONNECT__STRUCT_H_
