// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from roomba_msgs:msg/Security.idl
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
#include "roomba_msgs/msg/detail/security__struct.h"
#include "roomba_msgs/msg/detail/security__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool roomba_msgs__msg__security__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("roomba_msgs.msg._security", (char *)PyUnicode_1BYTE_DATA(module_attr), 25) == 0);
    assert(strncmp("Security", (char *)PyUnicode_1BYTE_DATA(name_attr), 8) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  roomba_msgs__msg__Security * ros_message = _ros_message;
  {  // bump_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "bump_left");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bump_left = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bump_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "bump_right");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bump_right = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wheel_drop_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_drop_left");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wheel_drop_left = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wheel_drop_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_drop_right");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wheel_drop_right = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wall
    PyObject * field = PyObject_GetAttrString(_pymsg, "wall");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wall = (Py_True == field);
    Py_DECREF(field);
  }
  {  // virtual_wall
    PyObject * field = PyObject_GetAttrString(_pymsg, "virtual_wall");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->virtual_wall = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cliff_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "cliff_left");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cliff_left = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cliff_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "cliff_right");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cliff_right = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cliff_front_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "cliff_front_left");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cliff_front_left = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cliff_front_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "cliff_front_right");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cliff_front_right = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cliff_left_signal
    PyObject * field = PyObject_GetAttrString(_pymsg, "cliff_left_signal");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cliff_left_signal = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cliff_right_signal
    PyObject * field = PyObject_GetAttrString(_pymsg, "cliff_right_signal");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cliff_right_signal = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cliff_front_left_signal
    PyObject * field = PyObject_GetAttrString(_pymsg, "cliff_front_left_signal");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cliff_front_left_signal = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cliff_front_right_signal
    PyObject * field = PyObject_GetAttrString(_pymsg, "cliff_front_right_signal");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cliff_front_right_signal = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // wall_signal
    PyObject * field = PyObject_GetAttrString(_pymsg, "wall_signal");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wall_signal = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // light_bumper_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "light_bumper_left");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->light_bumper_left = (Py_True == field);
    Py_DECREF(field);
  }
  {  // light_bumper_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "light_bumper_right");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->light_bumper_right = (Py_True == field);
    Py_DECREF(field);
  }
  {  // light_bumper_center_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "light_bumper_center_left");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->light_bumper_center_left = (Py_True == field);
    Py_DECREF(field);
  }
  {  // light_bumper_center_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "light_bumper_center_right");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->light_bumper_center_right = (Py_True == field);
    Py_DECREF(field);
  }
  {  // light_bumper_front_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "light_bumper_front_left");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->light_bumper_front_left = (Py_True == field);
    Py_DECREF(field);
  }
  {  // light_bumper_front_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "light_bumper_front_right");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->light_bumper_front_right = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dirt_detect
    PyObject * field = PyObject_GetAttrString(_pymsg, "dirt_detect");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dirt_detect = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * roomba_msgs__msg__security__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Security */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("roomba_msgs.msg._security");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Security");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  roomba_msgs__msg__Security * ros_message = (roomba_msgs__msg__Security *)raw_ros_message;
  {  // bump_left
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bump_left ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bump_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bump_right
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bump_right ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bump_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_drop_left
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wheel_drop_left ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_drop_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_drop_right
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wheel_drop_right ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_drop_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wall
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wall ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wall", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // virtual_wall
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->virtual_wall ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "virtual_wall", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cliff_left
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cliff_left ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cliff_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cliff_right
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cliff_right ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cliff_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cliff_front_left
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cliff_front_left ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cliff_front_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cliff_front_right
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cliff_front_right ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cliff_front_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cliff_left_signal
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cliff_left_signal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cliff_left_signal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cliff_right_signal
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cliff_right_signal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cliff_right_signal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cliff_front_left_signal
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cliff_front_left_signal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cliff_front_left_signal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cliff_front_right_signal
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cliff_front_right_signal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cliff_front_right_signal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wall_signal
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->wall_signal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wall_signal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // light_bumper_left
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->light_bumper_left ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "light_bumper_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // light_bumper_right
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->light_bumper_right ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "light_bumper_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // light_bumper_center_left
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->light_bumper_center_left ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "light_bumper_center_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // light_bumper_center_right
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->light_bumper_center_right ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "light_bumper_center_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // light_bumper_front_left
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->light_bumper_front_left ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "light_bumper_front_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // light_bumper_front_right
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->light_bumper_front_right ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "light_bumper_front_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dirt_detect
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dirt_detect);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dirt_detect", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
