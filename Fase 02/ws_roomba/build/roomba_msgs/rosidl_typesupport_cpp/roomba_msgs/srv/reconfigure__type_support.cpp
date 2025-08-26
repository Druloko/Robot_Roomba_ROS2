// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from roomba_msgs:srv/Reconfigure.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "roomba_msgs/srv/detail/reconfigure__functions.h"
#include "roomba_msgs/srv/detail/reconfigure__struct.hpp"
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

typedef struct _Reconfigure_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reconfigure_Request_type_support_ids_t;

static const _Reconfigure_Request_type_support_ids_t _Reconfigure_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Reconfigure_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Reconfigure_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Reconfigure_Request_type_support_symbol_names_t _Reconfigure_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roomba_msgs, srv, Reconfigure_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, roomba_msgs, srv, Reconfigure_Request)),
  }
};

typedef struct _Reconfigure_Request_type_support_data_t
{
  void * data[2];
} _Reconfigure_Request_type_support_data_t;

static _Reconfigure_Request_type_support_data_t _Reconfigure_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Reconfigure_Request_message_typesupport_map = {
  2,
  "roomba_msgs",
  &_Reconfigure_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Reconfigure_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Reconfigure_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Reconfigure_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reconfigure_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &roomba_msgs__srv__Reconfigure_Request__get_type_hash,
  &roomba_msgs__srv__Reconfigure_Request__get_type_description,
  &roomba_msgs__srv__Reconfigure_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace roomba_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<roomba_msgs::srv::Reconfigure_Request>()
{
  return &::roomba_msgs::srv::rosidl_typesupport_cpp::Reconfigure_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, roomba_msgs, srv, Reconfigure_Request)() {
  return get_message_type_support_handle<roomba_msgs::srv::Reconfigure_Request>();
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
// #include "roomba_msgs/srv/detail/reconfigure__functions.h"
// already included above
// #include "roomba_msgs/srv/detail/reconfigure__struct.hpp"
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

typedef struct _Reconfigure_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reconfigure_Response_type_support_ids_t;

static const _Reconfigure_Response_type_support_ids_t _Reconfigure_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Reconfigure_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Reconfigure_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Reconfigure_Response_type_support_symbol_names_t _Reconfigure_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roomba_msgs, srv, Reconfigure_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, roomba_msgs, srv, Reconfigure_Response)),
  }
};

typedef struct _Reconfigure_Response_type_support_data_t
{
  void * data[2];
} _Reconfigure_Response_type_support_data_t;

static _Reconfigure_Response_type_support_data_t _Reconfigure_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Reconfigure_Response_message_typesupport_map = {
  2,
  "roomba_msgs",
  &_Reconfigure_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Reconfigure_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Reconfigure_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Reconfigure_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reconfigure_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &roomba_msgs__srv__Reconfigure_Response__get_type_hash,
  &roomba_msgs__srv__Reconfigure_Response__get_type_description,
  &roomba_msgs__srv__Reconfigure_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace roomba_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<roomba_msgs::srv::Reconfigure_Response>()
{
  return &::roomba_msgs::srv::rosidl_typesupport_cpp::Reconfigure_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, roomba_msgs, srv, Reconfigure_Response)() {
  return get_message_type_support_handle<roomba_msgs::srv::Reconfigure_Response>();
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
// #include "roomba_msgs/srv/detail/reconfigure__functions.h"
// already included above
// #include "roomba_msgs/srv/detail/reconfigure__struct.hpp"
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

typedef struct _Reconfigure_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reconfigure_Event_type_support_ids_t;

static const _Reconfigure_Event_type_support_ids_t _Reconfigure_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Reconfigure_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Reconfigure_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Reconfigure_Event_type_support_symbol_names_t _Reconfigure_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roomba_msgs, srv, Reconfigure_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, roomba_msgs, srv, Reconfigure_Event)),
  }
};

typedef struct _Reconfigure_Event_type_support_data_t
{
  void * data[2];
} _Reconfigure_Event_type_support_data_t;

static _Reconfigure_Event_type_support_data_t _Reconfigure_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Reconfigure_Event_message_typesupport_map = {
  2,
  "roomba_msgs",
  &_Reconfigure_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Reconfigure_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Reconfigure_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Reconfigure_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reconfigure_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &roomba_msgs__srv__Reconfigure_Event__get_type_hash,
  &roomba_msgs__srv__Reconfigure_Event__get_type_description,
  &roomba_msgs__srv__Reconfigure_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace roomba_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<roomba_msgs::srv::Reconfigure_Event>()
{
  return &::roomba_msgs::srv::rosidl_typesupport_cpp::Reconfigure_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, roomba_msgs, srv, Reconfigure_Event)() {
  return get_message_type_support_handle<roomba_msgs::srv::Reconfigure_Event>();
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
// #include "roomba_msgs/srv/detail/reconfigure__struct.hpp"
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

typedef struct _Reconfigure_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reconfigure_type_support_ids_t;

static const _Reconfigure_type_support_ids_t _Reconfigure_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Reconfigure_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Reconfigure_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Reconfigure_type_support_symbol_names_t _Reconfigure_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roomba_msgs, srv, Reconfigure)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, roomba_msgs, srv, Reconfigure)),
  }
};

typedef struct _Reconfigure_type_support_data_t
{
  void * data[2];
} _Reconfigure_type_support_data_t;

static _Reconfigure_type_support_data_t _Reconfigure_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Reconfigure_service_typesupport_map = {
  2,
  "roomba_msgs",
  &_Reconfigure_service_typesupport_ids.typesupport_identifier[0],
  &_Reconfigure_service_typesupport_symbol_names.symbol_name[0],
  &_Reconfigure_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Reconfigure_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reconfigure_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<roomba_msgs::srv::Reconfigure_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<roomba_msgs::srv::Reconfigure_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<roomba_msgs::srv::Reconfigure_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<roomba_msgs::srv::Reconfigure>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<roomba_msgs::srv::Reconfigure>,
  &roomba_msgs__srv__Reconfigure__get_type_hash,
  &roomba_msgs__srv__Reconfigure__get_type_description,
  &roomba_msgs__srv__Reconfigure__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace roomba_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<roomba_msgs::srv::Reconfigure>()
{
  return &::roomba_msgs::srv::rosidl_typesupport_cpp::Reconfigure_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, roomba_msgs, srv, Reconfigure)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<roomba_msgs::srv::Reconfigure>();
}

#ifdef __cplusplus
}
#endif
