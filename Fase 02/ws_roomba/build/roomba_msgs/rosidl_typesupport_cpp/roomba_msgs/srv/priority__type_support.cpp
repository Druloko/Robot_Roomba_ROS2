// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from roomba_msgs:srv/Priority.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "roomba_msgs/srv/detail/priority__functions.h"
#include "roomba_msgs/srv/detail/priority__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace roomba_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Priority_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Priority_Request_type_support_ids_t;

static const _Priority_Request_type_support_ids_t _Priority_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Priority_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Priority_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Priority_Request_type_support_symbol_names_t _Priority_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roomba_msgs, srv, Priority_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, roomba_msgs, srv, Priority_Request)),
  }
};

typedef struct _Priority_Request_type_support_data_t
{
  void * data[2];
} _Priority_Request_type_support_data_t;

static _Priority_Request_type_support_data_t _Priority_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Priority_Request_message_typesupport_map = {
  2,
  "roomba_msgs",
  &_Priority_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Priority_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Priority_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Priority_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Priority_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &roomba_msgs__srv__Priority_Request__get_type_hash,
  &roomba_msgs__srv__Priority_Request__get_type_description,
  &roomba_msgs__srv__Priority_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace roomba_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<roomba_msgs::srv::Priority_Request>()
{
  return &::roomba_msgs::srv::rosidl_typesupport_cpp::Priority_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, roomba_msgs, srv, Priority_Request)() {
  return get_message_type_support_handle<roomba_msgs::srv::Priority_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "roomba_msgs/srv/detail/priority__functions.h"
// already included above
// #include "roomba_msgs/srv/detail/priority__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace roomba_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Priority_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Priority_Response_type_support_ids_t;

static const _Priority_Response_type_support_ids_t _Priority_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Priority_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Priority_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Priority_Response_type_support_symbol_names_t _Priority_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roomba_msgs, srv, Priority_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, roomba_msgs, srv, Priority_Response)),
  }
};

typedef struct _Priority_Response_type_support_data_t
{
  void * data[2];
} _Priority_Response_type_support_data_t;

static _Priority_Response_type_support_data_t _Priority_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Priority_Response_message_typesupport_map = {
  2,
  "roomba_msgs",
  &_Priority_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Priority_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Priority_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Priority_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Priority_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &roomba_msgs__srv__Priority_Response__get_type_hash,
  &roomba_msgs__srv__Priority_Response__get_type_description,
  &roomba_msgs__srv__Priority_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace roomba_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<roomba_msgs::srv::Priority_Response>()
{
  return &::roomba_msgs::srv::rosidl_typesupport_cpp::Priority_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, roomba_msgs, srv, Priority_Response)() {
  return get_message_type_support_handle<roomba_msgs::srv::Priority_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "roomba_msgs/srv/detail/priority__functions.h"
// already included above
// #include "roomba_msgs/srv/detail/priority__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace roomba_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Priority_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Priority_Event_type_support_ids_t;

static const _Priority_Event_type_support_ids_t _Priority_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Priority_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Priority_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Priority_Event_type_support_symbol_names_t _Priority_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roomba_msgs, srv, Priority_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, roomba_msgs, srv, Priority_Event)),
  }
};

typedef struct _Priority_Event_type_support_data_t
{
  void * data[2];
} _Priority_Event_type_support_data_t;

static _Priority_Event_type_support_data_t _Priority_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Priority_Event_message_typesupport_map = {
  2,
  "roomba_msgs",
  &_Priority_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Priority_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Priority_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Priority_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Priority_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &roomba_msgs__srv__Priority_Event__get_type_hash,
  &roomba_msgs__srv__Priority_Event__get_type_description,
  &roomba_msgs__srv__Priority_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace roomba_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<roomba_msgs::srv::Priority_Event>()
{
  return &::roomba_msgs::srv::rosidl_typesupport_cpp::Priority_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, roomba_msgs, srv, Priority_Event)() {
  return get_message_type_support_handle<roomba_msgs::srv::Priority_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "roomba_msgs/srv/detail/priority__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace roomba_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Priority_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Priority_type_support_ids_t;

static const _Priority_type_support_ids_t _Priority_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Priority_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Priority_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Priority_type_support_symbol_names_t _Priority_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roomba_msgs, srv, Priority)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, roomba_msgs, srv, Priority)),
  }
};

typedef struct _Priority_type_support_data_t
{
  void * data[2];
} _Priority_type_support_data_t;

static _Priority_type_support_data_t _Priority_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Priority_service_typesupport_map = {
  2,
  "roomba_msgs",
  &_Priority_service_typesupport_ids.typesupport_identifier[0],
  &_Priority_service_typesupport_symbol_names.symbol_name[0],
  &_Priority_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Priority_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Priority_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<roomba_msgs::srv::Priority_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<roomba_msgs::srv::Priority_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<roomba_msgs::srv::Priority_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<roomba_msgs::srv::Priority>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<roomba_msgs::srv::Priority>,
  &roomba_msgs__srv__Priority__get_type_hash,
  &roomba_msgs__srv__Priority__get_type_description,
  &roomba_msgs__srv__Priority__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace roomba_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<roomba_msgs::srv::Priority>()
{
  return &::roomba_msgs::srv::rosidl_typesupport_cpp::Priority_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, roomba_msgs, srv, Priority)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<roomba_msgs::srv::Priority>();
}

#ifdef __cplusplus
}
#endif
