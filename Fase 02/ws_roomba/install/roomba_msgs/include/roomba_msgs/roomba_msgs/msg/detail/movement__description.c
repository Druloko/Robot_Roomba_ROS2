// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from roomba_msgs:msg/Movement.idl
// generated code does not contain a copyright notice

#include "roomba_msgs/msg/detail/movement__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_roomba_msgs
const rosidl_type_hash_t *
roomba_msgs__msg__Movement__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2c, 0xc7, 0x30, 0x20, 0x26, 0x00, 0xab, 0xfb,
      0x58, 0xb0, 0xad, 0xaf, 0xd2, 0x14, 0xe6, 0xff,
      0xbb, 0x83, 0x7b, 0xe1, 0xac, 0x1a, 0xa9, 0x81,
      0x37, 0x82, 0xe0, 0xa1, 0xe8, 0x24, 0x61, 0xb2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char roomba_msgs__msg__Movement__TYPE_NAME[] = "roomba_msgs/msg/Movement";

// Define type names, field names, and default values
static char roomba_msgs__msg__Movement__FIELD_NAME__distance[] = "distance";
static char roomba_msgs__msg__Movement__FIELD_NAME__angle[] = "angle";
static char roomba_msgs__msg__Movement__FIELD_NAME__left_encoder_counts[] = "left_encoder_counts";
static char roomba_msgs__msg__Movement__FIELD_NAME__right_encoder_counts[] = "right_encoder_counts";
static char roomba_msgs__msg__Movement__FIELD_NAME__requested_left_velocity[] = "requested_left_velocity";
static char roomba_msgs__msg__Movement__FIELD_NAME__requested_right_velocity[] = "requested_right_velocity";
static char roomba_msgs__msg__Movement__FIELD_NAME__requested_radius[] = "requested_radius";
static char roomba_msgs__msg__Movement__FIELD_NAME__requested_velocity[] = "requested_velocity";

static rosidl_runtime_c__type_description__Field roomba_msgs__msg__Movement__FIELDS[] = {
  {
    {roomba_msgs__msg__Movement__FIELD_NAME__distance, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Movement__FIELD_NAME__angle, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Movement__FIELD_NAME__left_encoder_counts, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Movement__FIELD_NAME__right_encoder_counts, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Movement__FIELD_NAME__requested_left_velocity, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Movement__FIELD_NAME__requested_right_velocity, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Movement__FIELD_NAME__requested_radius, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Movement__FIELD_NAME__requested_velocity, 18, 18},
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
roomba_msgs__msg__Movement__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roomba_msgs__msg__Movement__TYPE_NAME, 24, 24},
      {roomba_msgs__msg__Movement__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Medidas y consigna de movimiento (seg\\xc3\\xban OI)\n"
  "# Robot.read_sensors() rellena estos campos desde Create2.distance/angle/encoders/velocidades\n"
  "# distance/angle vienen de short_response (int16), encoders tambi\\xc3\\xa9n (int16).\n"
  "# requested_* tambi\\xc3\\xa9n son int16 del OI.\n"
  "\n"
  "float32 distance\n"
  "float32 angle\n"
  "int32   left_encoder_counts\n"
  "int32   right_encoder_counts\n"
  "int16   requested_left_velocity\n"
  "int16   requested_right_velocity\n"
  "int16   requested_radius\n"
  "int16   requested_velocity";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
roomba_msgs__msg__Movement__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roomba_msgs__msg__Movement__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 463, 463},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roomba_msgs__msg__Movement__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roomba_msgs__msg__Movement__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
