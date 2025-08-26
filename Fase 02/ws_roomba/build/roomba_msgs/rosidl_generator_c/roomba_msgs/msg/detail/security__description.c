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
      0x31, 0x56, 0xdb, 0xc4, 0x58, 0x5e, 0x48, 0x6c,
      0x02, 0xf9, 0x63, 0x64, 0x96, 0x11, 0x9e, 0x73,
      0x14, 0xd8, 0x14, 0x3f, 0x56, 0xef, 0x98, 0x44,
      0x84, 0xa0, 0x2a, 0x75, 0x7a, 0x8b, 0x0b, 0x4e,
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
      {roomba_msgs__msg__Security__FIELDS, 22, 22},
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
    {toplevel_type_raw_source, 757, 757},
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
