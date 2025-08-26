// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from roomba_msgs:srv/Reconfigure.idl
// generated code does not contain a copyright notice

#include "roomba_msgs/srv/detail/reconfigure__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_roomba_msgs
const rosidl_type_hash_t *
roomba_msgs__srv__Reconfigure__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x00, 0x41, 0xcf, 0xbf, 0x4a, 0xbe, 0x35, 0x55,
      0x10, 0xb0, 0xe5, 0x9c, 0x0c, 0x5d, 0x33, 0x1d,
      0x8f, 0xae, 0x80, 0x32, 0x32, 0xe7, 0xd6, 0x5f,
      0x66, 0xe3, 0x00, 0x80, 0x16, 0x07, 0x4e, 0xde,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_roomba_msgs
const rosidl_type_hash_t *
roomba_msgs__srv__Reconfigure_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0e, 0x6a, 0xce, 0x63, 0x64, 0xee, 0xfe, 0xb6,
      0x8f, 0x7b, 0x1f, 0x3b, 0xef, 0x54, 0xa8, 0x06,
      0x07, 0x4d, 0xaf, 0xcf, 0x62, 0x14, 0x6d, 0xd0,
      0xfb, 0xcd, 0x5a, 0xba, 0xf2, 0x4a, 0x0a, 0xcb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_roomba_msgs
const rosidl_type_hash_t *
roomba_msgs__srv__Reconfigure_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf8, 0x58, 0x1b, 0x94, 0xac, 0x32, 0x80, 0x04,
      0xc0, 0x6b, 0x75, 0x51, 0xf5, 0xaf, 0x89, 0xf0,
      0x87, 0x96, 0x40, 0xc6, 0xc3, 0x93, 0xdf, 0x22,
      0x11, 0x93, 0x11, 0x11, 0xb2, 0x8d, 0x6b, 0xa7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_roomba_msgs
const rosidl_type_hash_t *
roomba_msgs__srv__Reconfigure_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9e, 0x35, 0x8f, 0x9a, 0x12, 0x5f, 0x8d, 0x29,
      0x84, 0xde, 0x13, 0xda, 0xd4, 0xe6, 0xe1, 0x38,
      0x15, 0x60, 0xc1, 0x81, 0x07, 0x71, 0xca, 0xd4,
      0xe6, 0x12, 0x56, 0xa5, 0xbb, 0xca, 0x77, 0xa9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char roomba_msgs__srv__Reconfigure__TYPE_NAME[] = "roomba_msgs/srv/Reconfigure";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char roomba_msgs__srv__Reconfigure_Event__TYPE_NAME[] = "roomba_msgs/srv/Reconfigure_Event";
static char roomba_msgs__srv__Reconfigure_Request__TYPE_NAME[] = "roomba_msgs/srv/Reconfigure_Request";
static char roomba_msgs__srv__Reconfigure_Response__TYPE_NAME[] = "roomba_msgs/srv/Reconfigure_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char roomba_msgs__srv__Reconfigure__FIELD_NAME__request_message[] = "request_message";
static char roomba_msgs__srv__Reconfigure__FIELD_NAME__response_message[] = "response_message";
static char roomba_msgs__srv__Reconfigure__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field roomba_msgs__srv__Reconfigure__FIELDS[] = {
  {
    {roomba_msgs__srv__Reconfigure__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {roomba_msgs__srv__Reconfigure_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__srv__Reconfigure__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {roomba_msgs__srv__Reconfigure_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__srv__Reconfigure__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {roomba_msgs__srv__Reconfigure_Event__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription roomba_msgs__srv__Reconfigure__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__srv__Reconfigure_Event__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__srv__Reconfigure_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__srv__Reconfigure_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
roomba_msgs__srv__Reconfigure__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roomba_msgs__srv__Reconfigure__TYPE_NAME, 27, 27},
      {roomba_msgs__srv__Reconfigure__FIELDS, 3, 3},
    },
    {roomba_msgs__srv__Reconfigure__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = roomba_msgs__srv__Reconfigure_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = roomba_msgs__srv__Reconfigure_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = roomba_msgs__srv__Reconfigure_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char roomba_msgs__srv__Reconfigure_Request__FIELD_NAME__parameter[] = "parameter";
static char roomba_msgs__srv__Reconfigure_Request__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field roomba_msgs__srv__Reconfigure_Request__FIELDS[] = {
  {
    {roomba_msgs__srv__Reconfigure_Request__FIELD_NAME__parameter, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__srv__Reconfigure_Request__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
roomba_msgs__srv__Reconfigure_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roomba_msgs__srv__Reconfigure_Request__TYPE_NAME, 35, 35},
      {roomba_msgs__srv__Reconfigure_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char roomba_msgs__srv__Reconfigure_Response__FIELD_NAME__success[] = "success";
static char roomba_msgs__srv__Reconfigure_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field roomba_msgs__srv__Reconfigure_Response__FIELDS[] = {
  {
    {roomba_msgs__srv__Reconfigure_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__srv__Reconfigure_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
roomba_msgs__srv__Reconfigure_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roomba_msgs__srv__Reconfigure_Response__TYPE_NAME, 36, 36},
      {roomba_msgs__srv__Reconfigure_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char roomba_msgs__srv__Reconfigure_Event__FIELD_NAME__info[] = "info";
static char roomba_msgs__srv__Reconfigure_Event__FIELD_NAME__request[] = "request";
static char roomba_msgs__srv__Reconfigure_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field roomba_msgs__srv__Reconfigure_Event__FIELDS[] = {
  {
    {roomba_msgs__srv__Reconfigure_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__srv__Reconfigure_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {roomba_msgs__srv__Reconfigure_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__srv__Reconfigure_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {roomba_msgs__srv__Reconfigure_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription roomba_msgs__srv__Reconfigure_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__srv__Reconfigure_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__srv__Reconfigure_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
roomba_msgs__srv__Reconfigure_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roomba_msgs__srv__Reconfigure_Event__TYPE_NAME, 33, 33},
      {roomba_msgs__srv__Reconfigure_Event__FIELDS, 3, 3},
    },
    {roomba_msgs__srv__Reconfigure_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = roomba_msgs__srv__Reconfigure_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = roomba_msgs__srv__Reconfigure_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Usado por reconfigure_callback()\n"
  "\n"
  "string parameter\n"
  "string value\n"
  "---\n"
  "bool   success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
roomba_msgs__srv__Reconfigure__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roomba_msgs__srv__Reconfigure__TYPE_NAME, 27, 27},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 100, 100},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
roomba_msgs__srv__Reconfigure_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roomba_msgs__srv__Reconfigure_Request__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
roomba_msgs__srv__Reconfigure_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roomba_msgs__srv__Reconfigure_Response__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
roomba_msgs__srv__Reconfigure_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roomba_msgs__srv__Reconfigure_Event__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roomba_msgs__srv__Reconfigure__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roomba_msgs__srv__Reconfigure__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *roomba_msgs__srv__Reconfigure_Event__get_individual_type_description_source(NULL);
    sources[3] = *roomba_msgs__srv__Reconfigure_Request__get_individual_type_description_source(NULL);
    sources[4] = *roomba_msgs__srv__Reconfigure_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roomba_msgs__srv__Reconfigure_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roomba_msgs__srv__Reconfigure_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roomba_msgs__srv__Reconfigure_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roomba_msgs__srv__Reconfigure_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roomba_msgs__srv__Reconfigure_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roomba_msgs__srv__Reconfigure_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *roomba_msgs__srv__Reconfigure_Request__get_individual_type_description_source(NULL);
    sources[3] = *roomba_msgs__srv__Reconfigure_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
