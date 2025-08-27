// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from roomba_msgs:msg/Power.idl
// generated code does not contain a copyright notice

#include "roomba_msgs/msg/detail/power__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_roomba_msgs
const rosidl_type_hash_t *
roomba_msgs__msg__Power__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5a, 0x93, 0xb9, 0xa5, 0x8e, 0x83, 0x04, 0xf8,
      0xf5, 0x96, 0xbe, 0x65, 0xfa, 0x52, 0x94, 0x0d,
      0xa9, 0xeb, 0x74, 0xe8, 0xf0, 0x56, 0x1e, 0xdb,
      0x5f, 0xf9, 0x52, 0xd8, 0x66, 0x8b, 0x44, 0xc7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char roomba_msgs__msg__Power__TYPE_NAME[] = "roomba_msgs/msg/Power";

// Define type names, field names, and default values
static char roomba_msgs__msg__Power__FIELD_NAME__voltage[] = "voltage";
static char roomba_msgs__msg__Power__FIELD_NAME__current[] = "current";
static char roomba_msgs__msg__Power__FIELD_NAME__temperature[] = "temperature";
static char roomba_msgs__msg__Power__FIELD_NAME__charge[] = "charge";
static char roomba_msgs__msg__Power__FIELD_NAME__capacity[] = "capacity";
static char roomba_msgs__msg__Power__FIELD_NAME__home_base[] = "home_base";
static char roomba_msgs__msg__Power__FIELD_NAME__internal_charger[] = "internal_charger";
static char roomba_msgs__msg__Power__FIELD_NAME__ir_char_omni[] = "ir_char_omni";
static char roomba_msgs__msg__Power__FIELD_NAME__ir_char_left[] = "ir_char_left";
static char roomba_msgs__msg__Power__FIELD_NAME__ir_char_right[] = "ir_char_right";
static char roomba_msgs__msg__Power__FIELD_NAME__left_wheel_overcurrent[] = "left_wheel_overcurrent";
static char roomba_msgs__msg__Power__FIELD_NAME__right_wheel_overcurrent[] = "right_wheel_overcurrent";
static char roomba_msgs__msg__Power__FIELD_NAME__main_brush_overcurrent[] = "main_brush_overcurrent";
static char roomba_msgs__msg__Power__FIELD_NAME__side_brush_overcurrent[] = "side_brush_overcurrent";
static char roomba_msgs__msg__Power__FIELD_NAME__left_motor_current[] = "left_motor_current";
static char roomba_msgs__msg__Power__FIELD_NAME__right_motor_current[] = "right_motor_current";
static char roomba_msgs__msg__Power__FIELD_NAME__main_brush_motor_current[] = "main_brush_motor_current";
static char roomba_msgs__msg__Power__FIELD_NAME__side_brush_motor_current[] = "side_brush_motor_current";

static rosidl_runtime_c__type_description__Field roomba_msgs__msg__Power__FIELDS[] = {
  {
    {roomba_msgs__msg__Power__FIELD_NAME__voltage, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Power__FIELD_NAME__current, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Power__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Power__FIELD_NAME__charge, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Power__FIELD_NAME__capacity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Power__FIELD_NAME__home_base, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Power__FIELD_NAME__internal_charger, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Power__FIELD_NAME__ir_char_omni, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Power__FIELD_NAME__ir_char_left, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Power__FIELD_NAME__ir_char_right, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Power__FIELD_NAME__left_wheel_overcurrent, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Power__FIELD_NAME__right_wheel_overcurrent, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Power__FIELD_NAME__main_brush_overcurrent, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Power__FIELD_NAME__side_brush_overcurrent, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Power__FIELD_NAME__left_motor_current, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Power__FIELD_NAME__right_motor_current, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Power__FIELD_NAME__main_brush_motor_current, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Power__FIELD_NAME__side_brush_motor_current, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
roomba_msgs__msg__Power__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roomba_msgs__msg__Power__TYPE_NAME, 21, 21},
      {roomba_msgs__msg__Power__FIELDS, 18, 18},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Datos de energ\\xc3\\xada que publica publish_power_data()\n"
  "\n"
  "float32 voltage\n"
  "float32 current\n"
  "float32 temperature\n"
  "float32 charge\n"
  "float32 capacity\n"
  "\n"
  "bool   home_base\n"
  "bool   internal_charger\n"
  "\n"
  "uint8  ir_char_omni\n"
  "uint8  ir_char_left\n"
  "uint8  ir_char_right\n"
  "\n"
  "bool   left_wheel_overcurrent\n"
  "bool   right_wheel_overcurrent\n"
  "bool   main_brush_overcurrent\n"
  "bool   side_brush_overcurrent\n"
  "\n"
  "int16  left_motor_current\n"
  "int16  right_motor_current\n"
  "int16  main_brush_motor_current\n"
  "int16  side_brush_motor_current";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
roomba_msgs__msg__Power__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roomba_msgs__msg__Power__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 481, 481},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roomba_msgs__msg__Power__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roomba_msgs__msg__Power__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
