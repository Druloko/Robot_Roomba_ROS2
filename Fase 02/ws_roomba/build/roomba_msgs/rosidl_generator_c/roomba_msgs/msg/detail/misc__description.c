// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from roomba_msgs:msg/Misc.idl
// generated code does not contain a copyright notice

#include "roomba_msgs/msg/detail/misc__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_roomba_msgs
const rosidl_type_hash_t *
roomba_msgs__msg__Misc__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x01, 0xd6, 0x3c, 0xab, 0x7b, 0x4c, 0x57, 0xfb,
      0x4b, 0xe9, 0x61, 0x43, 0xf4, 0x6e, 0x2f, 0xd3,
      0x46, 0x2c, 0x0f, 0x0b, 0x96, 0xaa, 0x94, 0x23,
      0xdb, 0x96, 0x45, 0xab, 0xd8, 0x09, 0x5b, 0x42,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char roomba_msgs__msg__Misc__TYPE_NAME[] = "roomba_msgs/msg/Misc";

// Define type names, field names, and default values
static char roomba_msgs__msg__Misc__FIELD_NAME__is_song_playing[] = "is_song_playing";
static char roomba_msgs__msg__Misc__FIELD_NAME__song_number[] = "song_number";
static char roomba_msgs__msg__Misc__FIELD_NAME__button_clean[] = "button_clean";
static char roomba_msgs__msg__Misc__FIELD_NAME__button_clock[] = "button_clock";
static char roomba_msgs__msg__Misc__FIELD_NAME__button_day[] = "button_day";
static char roomba_msgs__msg__Misc__FIELD_NAME__button_dock[] = "button_dock";
static char roomba_msgs__msg__Misc__FIELD_NAME__button_hour[] = "button_hour";
static char roomba_msgs__msg__Misc__FIELD_NAME__button_minute[] = "button_minute";
static char roomba_msgs__msg__Misc__FIELD_NAME__button_schedule[] = "button_schedule";
static char roomba_msgs__msg__Misc__FIELD_NAME__button_spot[] = "button_spot";

static rosidl_runtime_c__type_description__Field roomba_msgs__msg__Misc__FIELDS[] = {
  {
    {roomba_msgs__msg__Misc__FIELD_NAME__is_song_playing, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Misc__FIELD_NAME__song_number, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Misc__FIELD_NAME__button_clean, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Misc__FIELD_NAME__button_clock, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Misc__FIELD_NAME__button_day, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Misc__FIELD_NAME__button_dock, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Misc__FIELD_NAME__button_hour, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Misc__FIELD_NAME__button_minute, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Misc__FIELD_NAME__button_schedule, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomba_msgs__msg__Misc__FIELD_NAME__button_spot, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
roomba_msgs__msg__Misc__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roomba_msgs__msg__Misc__TYPE_NAME, 20, 20},
      {roomba_msgs__msg__Misc__FIELDS, 10, 10},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Datos miscel\\xc3\\xa1neos que publica publish_misc_data()\n"
  "\n"
  "bool  is_song_playing\n"
  "uint8 song_number\n"
  "\n"
  "# botones\n"
  "bool  button_clean\n"
  "bool  button_clock\n"
  "bool  button_day\n"
  "bool  button_dock\n"
  "bool  button_hour\n"
  "bool  button_minute\n"
  "bool  button_schedule\n"
  "bool  button_spot";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
roomba_msgs__msg__Misc__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roomba_msgs__msg__Misc__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 255, 255},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roomba_msgs__msg__Misc__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roomba_msgs__msg__Misc__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
