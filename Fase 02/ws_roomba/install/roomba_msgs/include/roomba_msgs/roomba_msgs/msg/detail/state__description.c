// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from roomba_msgs:msg/State.idl
// generated code does not contain a copyright notice

#include "roomba_msgs/msg/detail/state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_roomba_msgs
const rosidl_type_hash_t *
roomba_msgs__msg__State__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x02, 0xd2, 0x06, 0xc6, 0x6a, 0x48, 0x24, 0xef,
      0xe0, 0x5d, 0x04, 0x5e, 0x9d, 0x49, 0xc6, 0x4c,
      0x0e, 0xbf, 0x40, 0x42, 0xce, 0x88, 0xa6, 0x4d,
      0x33, 0xe5, 0x94, 0x94, 0x92, 0x9c, 0x8c, 0x6d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char roomba_msgs__msg__State__TYPE_NAME[] = "roomba_msgs/msg/State";

// Define type names, field names, and default values
static char roomba_msgs__msg__State__FIELD_NAME__oi_mode[] = "oi_mode";
static char roomba_msgs__msg__State__FIELD_NAME__is_charging[] = "is_charging";
static char roomba_msgs__msg__State__FIELD_NAME__battery_charge[] = "battery_charge";

static rosidl_runtime_c__type_description__Field roomba_msgs__msg__State__FIELDS[] = {
  {
    {roomba_msgs__msg__State__FIELD_NAME__oi_mode, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__State__FIELD_NAME__is_charging, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__State__FIELD_NAME__battery_charge, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
roomba_msgs__msg__State__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roomba_msgs__msg__State__TYPE_NAME, 21, 21},
      {roomba_msgs__msg__State__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Estado que publica publish_state_data()\n"
  "\n"
  "string oi_mode\n"
  "bool   is_charging\n"
  "float32 battery_charge";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
roomba_msgs__msg__State__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roomba_msgs__msg__State__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 100, 100},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roomba_msgs__msg__State__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roomba_msgs__msg__State__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
