// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from roomba_msgs:msg/Security.idl
// generated code does not contain a copyright notice

#include "roomba_msgs/msg/detail/security__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_roomba_msgs
const rosidl_type_hash_t *
roomba_msgs__msg__Security__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x11, 0x01, 0x18, 0xd3, 0x85, 0x9f, 0x20, 0x43,
      0xe7, 0x18, 0xf8, 0x8c, 0xd3, 0x56, 0x9b, 0xac,
      0x4f, 0x1b, 0x4c, 0x60, 0xb0, 0xfd, 0x40, 0x4d,
      0x64, 0x7e, 0x03, 0xe1, 0x17, 0xb5, 0x93, 0x1a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char roomba_msgs__msg__Security__TYPE_NAME[] = "roomba_msgs/msg/Security";

// Define type names, field names, and default values
static char roomba_msgs__msg__Security__FIELD_NAME__bump_left[] = "bump_left";
static char roomba_msgs__msg__Security__FIELD_NAME__bump_right[] = "bump_right";
static char roomba_msgs__msg__Security__FIELD_NAME__wheel_drop_left[] = "wheel_drop_left";
static char roomba_msgs__msg__Security__FIELD_NAME__wheel_drop_right[] = "wheel_drop_right";
static char roomba_msgs__msg__Security__FIELD_NAME__wall[] = "wall";
static char roomba_msgs__msg__Security__FIELD_NAME__virtual_wall[] = "virtual_wall";
static char roomba_msgs__msg__Security__FIELD_NAME__cliff_left[] = "cliff_left";
static char roomba_msgs__msg__Security__FIELD_NAME__cliff_right[] = "cliff_right";
static char roomba_msgs__msg__Security__FIELD_NAME__cliff_front_left[] = "cliff_front_left";
static char roomba_msgs__msg__Security__FIELD_NAME__cliff_front_right[] = "cliff_front_right";
static char roomba_msgs__msg__Security__FIELD_NAME__cliff_left_signal[] = "cliff_left_signal";
static char roomba_msgs__msg__Security__FIELD_NAME__cliff_right_signal[] = "cliff_right_signal";
static char roomba_msgs__msg__Security__FIELD_NAME__cliff_front_left_signal[] = "cliff_front_left_signal";
static char roomba_msgs__msg__Security__FIELD_NAME__cliff_front_right_signal[] = "cliff_front_right_signal";
static char roomba_msgs__msg__Security__FIELD_NAME__wall_signal[] = "wall_signal";
static char roomba_msgs__msg__Security__FIELD_NAME__light_bumper_left[] = "light_bumper_left";
static char roomba_msgs__msg__Security__FIELD_NAME__light_bumper_right[] = "light_bumper_right";
static char roomba_msgs__msg__Security__FIELD_NAME__light_bumper_center_left[] = "light_bumper_center_left";
static char roomba_msgs__msg__Security__FIELD_NAME__light_bumper_center_right[] = "light_bumper_center_right";
static char roomba_msgs__msg__Security__FIELD_NAME__light_bumper_front_left[] = "light_bumper_front_left";
static char roomba_msgs__msg__Security__FIELD_NAME__light_bumper_front_right[] = "light_bumper_front_right";
static char roomba_msgs__msg__Security__FIELD_NAME__light_bump_left_signal[] = "light_bump_left_signal";
static char roomba_msgs__msg__Security__FIELD_NAME__light_bump_right_signal[] = "light_bump_right_signal";
static char roomba_msgs__msg__Security__FIELD_NAME__light_bump_center_left_signal[] = "light_bump_center_left_signal";
static char roomba_msgs__msg__Security__FIELD_NAME__light_bump_center_right_signal[] = "light_bump_center_right_signal";
static char roomba_msgs__msg__Security__FIELD_NAME__light_bump_front_left_signal[] = "light_bump_front_left_signal";
static char roomba_msgs__msg__Security__FIELD_NAME__light_bump_front_right_signal[] = "light_bump_front_right_signal";
static char roomba_msgs__msg__Security__FIELD_NAME__dirt_detect[] = "dirt_detect";

static rosidl_runtime_c__type_description__Field roomba_msgs__msg__Security__FIELDS[] = {
  {
    {roomba_msgs__msg__Security__FIELD_NAME__bump_left, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__bump_right, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__wheel_drop_left, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__wheel_drop_right, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__wall, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__virtual_wall, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__cliff_left, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__cliff_right, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__cliff_front_left, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__cliff_front_right, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__cliff_left_signal, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__cliff_right_signal, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__cliff_front_left_signal, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__cliff_front_right_signal, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__wall_signal, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__light_bumper_left, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__light_bumper_right, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__light_bumper_center_left, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__light_bumper_center_right, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__light_bumper_front_left, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__light_bumper_front_right, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__light_bump_left_signal, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__light_bump_right_signal, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__light_bump_center_left_signal, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__light_bump_center_right_signal, 30, 30},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__light_bump_front_left_signal, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__light_bump_front_right_signal, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Security__FIELD_NAME__dirt_detect, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
roomba_msgs__msg__Security__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roomba_msgs__msg__Security__TYPE_NAME, 24, 24},
      {roomba_msgs__msg__Security__FIELDS, 28, 28},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Datos de seguridad que publica publish_security_data()\n"
  "\n"
  "bool   bump_left\n"
  "bool   bump_right\n"
  "bool   wheel_drop_left\n"
  "bool   wheel_drop_right\n"
  "\n"
  "# pared, virtual wall\n"
  "bool   wall\n"
  "bool   virtual_wall\n"
  "\n"
  "# cliffs (tu c\\xc3\\xb3digo usa 0/1; los modelamos como bool)\n"
  "bool   cliff_left\n"
  "bool   cliff_right\n"
  "bool   cliff_front_left\n"
  "bool   cliff_front_right\n"
  "\n"
  "# se\\xc3\\xb1ales (unsigned short en OI)\n"
  "uint16 cliff_left_signal\n"
  "uint16 cliff_right_signal\n"
  "uint16 cliff_front_left_signal\n"
  "uint16 cliff_front_right_signal\n"
  "uint16 wall_signal\n"
  "\n"
  "# light bumpers (tu c\\xc3\\xb3digo usa 0/1 \\xe2\\x86\\x92 bool)\n"
  "bool   light_bumper_left\n"
  "bool   light_bumper_right\n"
  "bool   light_bumper_center_left\n"
  "bool   light_bumper_center_right\n"
  "bool   light_bumper_front_left\n"
  "bool   light_bumper_front_right\n"
  "\n"
  "# light bumper signals (valores anal\\xc3\\xb3gicos de 2 bytes, 0\\xe2\\x80\\x934095)\n"
  "uint16 light_bump_left_signal\n"
  "uint16 light_bump_right_signal\n"
  "uint16 light_bump_center_left_signal\n"
  "uint16 light_bump_center_right_signal\n"
  "uint16 light_bump_front_left_signal\n"
  "uint16 light_bump_front_right_signal\n"
  "\n"
  "# suciedad\n"
  "uint8  dirt_detect";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
roomba_msgs__msg__Security__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roomba_msgs__msg__Security__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1030, 1030},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roomba_msgs__msg__Security__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roomba_msgs__msg__Security__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
