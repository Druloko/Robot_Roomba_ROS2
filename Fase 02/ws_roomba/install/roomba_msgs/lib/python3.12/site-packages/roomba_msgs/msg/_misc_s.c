// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from roomba_msgs:msg/Misc.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "roomba_msgs/msg/detail/misc__struct.h"
#include "roomba_msgs/msg/detail/misc__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool roomba_msgs__msg__misc__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("roomba_msgs.msg._misc", (char *)PyUnicode_1BYTE_DATA(module_attr), 21) == 0);
    assert(strncmp("Misc", (char *)PyUnicode_1BYTE_DATA(name_attr), 4) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  roomba_msgs__msg__Misc * ros_message = _ros_message;
  {  // is_song_playing
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_song_playing");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_song_playing = (Py_True == field);
    Py_DECREF(field);
  }
  {  // song_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "song_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->song_number = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // button_clean
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_clean");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_clean = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_clock
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_clock");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_clock = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_day
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_day");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_day = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_dock
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_dock");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_dock = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_hour
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_hour");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_hour = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_minute
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_minute");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_minute = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_schedule
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_schedule");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_schedule = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_spot
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_spot");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_spot = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * roomba_msgs__msg__misc__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Misc */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("roomba_msgs.msg._misc");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Misc");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  roomba_msgs__msg__Misc * ros_message = (roomba_msgs__msg__Misc *)raw_ros_message;
  {  // is_song_playing
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_song_playing ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_song_playing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // song_number
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->song_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "song_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_clean
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_clean ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_clean", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_clock
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_clock ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_clock", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_day
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_day ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_day", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_dock
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_dock ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_dock", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_hour
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_hour ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_hour", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_minute
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_minute ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_minute", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_schedule
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_schedule ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_schedule", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_spot
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_spot ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_spot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
