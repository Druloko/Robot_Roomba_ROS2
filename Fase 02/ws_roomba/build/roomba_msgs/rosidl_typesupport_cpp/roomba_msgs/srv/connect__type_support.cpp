// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from roomba_msgs:srv/Connect.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "roomba_msgs/srv/detail/connect__functions.h"
#include "roomba_msgs/srv/detail/connect__struct.hpp"
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

typedef struct _Connect_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Connect_Request_type_support_ids_t;

static const _Connect_Request_type_support_ids_t _Connect_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Connect_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Connect_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Connect_Request_type_support_symbol_names_t _Connect_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roomba_msgs, srv, Connect_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, roomba_msgs, srv, Connect_Request)),
  }
};

typedef struct _Connect_Request_type_support_data_t
{
  void * data[2];
} _Connect_Request_type_support_data_t;

static _Connect_Request_type_support_data_t _Connect_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Connect_Request_message_typesupport_map = {
  2,
  "roomba_msgs",
  &_Connect_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Connect_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Connect_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Connect_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Connect_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &roomba_msgs__srv__Connect_Request__get_type_hash,
  &roomba_msgs__srv__Connect_Request__get_type_description,
  &roomba_msgs__srv__Connect_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace roomba_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<roomba_msgs::srv::Connect_Request>()
{
  return &::roomba_msgs::srv::rosidl_typesupport_cpp::Connect_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, roomba_msgs, srv, Connect_Request)() {
  return get_message_type_support_handle<roomba_msgs::srv::Connect_Request>();
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
// #include "roomba_msgs/srv/detail/connect__functions.h"
// already included above
// #include "roomba_msgs/srv/detail/connect__struct.hpp"
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

typedef struct _Connect_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Connect_Response_type_support_ids_t;

static const _Connect_Response_type_support_ids_t _Connect_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Connect_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Connect_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Connect_Response_type_support_symbol_names_t _Connect_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roomba_msgs, srv, Connect_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, roomba_msgs, srv, Connect_Response)),
  }
};

typedef struct _Connect_Response_type_support_data_t
{
  void * data[2];
} _Connect_Response_type_support_data_t;

static _Connect_Response_type_support_data_t _Connect_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Connect_Response_message_typesupport_map = {
  2,
  "roomba_msgs",
  &_Connect_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Connect_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Connect_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Connect_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Connect_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &roomba_msgs__srv__Connect_Response__get_type_hash,
  &roomba_msgs__srv__Connect_Response__get_type_description,
  &roomba_msgs__srv__Connect_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace roomba_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<roomba_msgs::srv::Connect_Response>()
{
  return &::roomba_msgs::srv::rosidl_typesupport_cpp::Connect_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, roomba_msgs, srv, Connect_Response)() {
  return get_message_type_support_handle<roomba_msgs::srv::Connect_Response>();
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
// #include "roomba_msgs/srv/detail/connect__functions.h"
// already included above
// #include "roomba_msgs/srv/detail/connect__struct.hpp"
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

typedef struct _Connect_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Connect_Event_type_support_ids_t;

static const _Connect_Event_type_support_ids_t _Connect_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Connect_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Connect_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Connect_Event_type_support_symbol_names_t _Connect_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roomba_msgs, srv, Connect_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, roomba_msgs, srv, Connect_Event)),
  }
};

typedef struct _Connect_Event_type_support_data_t
{
  void * data[2];
} _Connect_Event_type_support_data_t;

static _Connect_Event_type_support_data_t _Connect_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Connect_Event_message_typesupport_map = {
  2,
  "roomba_msgs",
  &_Connect_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Connect_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Connect_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Connect_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Connect_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &roomba_msgs__srv__Connect_Event__get_type_hash,
  &roomba_msgs__srv__Connect_Event__get_type_description,
  &roomba_msgs__srv__Connect_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace roomba_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<roomba_msgs::srv::Connect_Event>()
{
  return &::roomba_msgs::srv::rosidl_typesupport_cpp::Connect_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, roomba_msgs, srv, Connect_Event)() {
  return get_message_type_support_handle<roomba_msgs::srv::Connect_Event>();
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
// #include "roomba_msgs/srv/detail/connect__struct.hpp"
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

typedef struct _Connect_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Connect_type_support_ids_t;

static const _Connect_type_support_ids_t _Connect_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Connect_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Connect_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Connect_type_support_symbol_names_t _Connect_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roomba_msgs, srv, Connect)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, roomba_msgs, srv, Connect)),
  }
};

typedef struct _Connect_type_support_data_t
{
  void * data[2];
} _Connect_type_support_data_t;

static _Connect_type_support_data_t _Connect_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Connect_service_typesupport_map = {
  2,
  "roomba_msgs",
  &_Connect_service_typesupport_ids.typesupport_identifier[0],
  &_Connect_service_typesupport_symbol_names.symbol_name[0],
  &_Connect_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Connect_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Connect_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<roomba_msgs::srv::Connect_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<roomba_msgs::srv::Connect_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<roomba_msgs::srv::Connect_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<roomba_msgs::srv::Connect>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<roomba_msgs::srv::Connect>,
  &roomba_msgs__srv__Connect__get_type_hash,
  &roomba_msgs__srv__Connect__get_type_description,
  &roomba_msgs__srv__Connect__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace roomba_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<roomba_msgs::srv::Connect>()
{
  return &::roomba_msgs::srv::rosidl_typesupport_cpp::Connect_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, roomba_msgs, srv, Connect)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<roomba_msgs::srv::Connect>();
}

#ifdef __cplusplus
}
#endif
