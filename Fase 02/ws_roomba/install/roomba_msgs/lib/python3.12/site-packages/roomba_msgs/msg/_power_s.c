// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from roomba_msgs:msg/Power.idl
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
#include "roomba_msgs/msg/detail/power__struct.h"
#include "roomba_msgs/msg/detail/power__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool roomba_msgs__msg__power__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("roomba_msgs.msg._power", (char *)PyUnicode_1BYTE_DATA(module_attr), 22) == 0);
    assert(strncmp("Power", (char *)PyUnicode_1BYTE_DATA(name_attr), 5) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  roomba_msgs__msg__Power * ros_message = _ros_message;
  {  // voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current
    PyObject * field = PyObject_GetAttrString(_pymsg, "current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // charge
    PyObject * field = PyObject_GetAttrString(_pymsg, "charge");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->charge = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // capacity
    PyObject * field = PyObject_GetAttrString(_pymsg, "capacity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->capacity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // home_base
    PyObject * field = PyObject_GetAttrString(_pymsg, "home_base");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->home_base = (Py_True == field);
    Py_DECREF(field);
  }
  {  // internal_charger
    PyObject * field = PyObject_GetAttrString(_pymsg, "internal_charger");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->internal_charger = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ir_char_omni
    PyObject * field = PyObject_GetAttrString(_pymsg, "ir_char_omni");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ir_char_omni = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ir_char_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "ir_char_left");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ir_char_left = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ir_char_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "ir_char_right");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ir_char_right = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left_wheel_overcurrent
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_wheel_overcurrent");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->left_wheel_overcurrent = (Py_True == field);
    Py_DECREF(field);
  }
  {  // right_wheel_overcurrent
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_wheel_overcurrent");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->right_wheel_overcurrent = (Py_True == field);
    Py_DECREF(field);
  }
  {  // main_brush_overcurrent
    PyObject * field = PyObject_GetAttrString(_pymsg, "main_brush_overcurrent");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->main_brush_overcurrent = (Py_True == field);
    Py_DECREF(field);
  }
  {  // side_brush_overcurrent
    PyObject * field = PyObject_GetAttrString(_pymsg, "side_brush_overcurrent");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->side_brush_overcurrent = (Py_True == field);
    Py_DECREF(field);
  }
  {  // left_motor_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_motor_current");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_motor_current = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // right_motor_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_motor_current");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_motor_current = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // main_brush_motor_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "main_brush_motor_current");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->main_brush_motor_current = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // side_brush_motor_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "side_brush_motor_current");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->side_brush_motor_current = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * roomba_msgs__msg__power__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Power */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("roomba_msgs.msg._power");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Power");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  roomba_msgs__msg__Power * ros_message = (roomba_msgs__msg__Power *)raw_ros_message;
  {  // voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charge
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->charge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // capacity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->capacity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "capacity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // home_base
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->home_base ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "home_base", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // internal_charger
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->internal_charger ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "internal_charger", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ir_char_omni
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ir_char_omni);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ir_char_omni", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ir_char_left
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ir_char_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ir_char_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ir_char_right
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ir_char_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ir_char_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_wheel_overcurrent
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->left_wheel_overcurrent ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_wheel_overcurrent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_wheel_overcurrent
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->right_wheel_overcurrent ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_wheel_overcurrent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // main_brush_overcurrent
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->main_brush_overcurrent ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "main_brush_overcurrent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // side_brush_overcurrent
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->side_brush_overcurrent ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "side_brush_overcurrent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_motor_current
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->left_motor_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_motor_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_motor_current
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->right_motor_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_motor_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // main_brush_motor_current
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->main_brush_motor_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "main_brush_motor_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // side_brush_motor_current
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->side_brush_motor_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "side_brush_motor_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
