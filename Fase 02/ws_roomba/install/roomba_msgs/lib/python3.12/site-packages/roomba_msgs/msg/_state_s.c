// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from roomba_msgs:msg/State.idl
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
#include "roomba_msgs/msg/detail/state__struct.h"
#include "roomba_msgs/msg/detail/state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool roomba_msgs__msg__state__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("roomba_msgs.msg._state", (char *)PyUnicode_1BYTE_DATA(module_attr), 22) == 0);
    assert(strncmp("State", (char *)PyUnicode_1BYTE_DATA(name_attr), 5) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  roomba_msgs__msg__State * ros_message = _ros_message;
  {  // oi_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "oi_mode");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->oi_mode, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // is_charging
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_charging");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_charging = (Py_True == field);
    Py_DECREF(field);
  }
  {  // battery_charge
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_charge");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_charge = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * roomba_msgs__msg__state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of State */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("roomba_msgs.msg._state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "State");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  roomba_msgs__msg__State * ros_message = (roomba_msgs__msg__State *)raw_ros_message;
  {  // oi_mode
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->oi_mode.data,
      strlen(ros_message->oi_mode.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "oi_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_charging
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_charging ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_charging", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_charge
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_charge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_charge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
