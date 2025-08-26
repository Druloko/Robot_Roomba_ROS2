// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from roomba_msgs:msg/Movement.idl
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
#include "roomba_msgs/msg/detail/movement__struct.h"
#include "roomba_msgs/msg/detail/movement__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool roomba_msgs__msg__movement__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("roomba_msgs.msg._movement", (char *)PyUnicode_1BYTE_DATA(module_attr), 25) == 0);
    assert(strncmp("Movement", (char *)PyUnicode_1BYTE_DATA(name_attr), 8) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  roomba_msgs__msg__Movement * ros_message = _ros_message;
  {  // distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_encoder_counts
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_encoder_counts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_encoder_counts = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // right_encoder_counts
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_encoder_counts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_encoder_counts = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // requested_left_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "requested_left_velocity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->requested_left_velocity = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // requested_right_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "requested_right_velocity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->requested_right_velocity = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // requested_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "requested_radius");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->requested_radius = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // requested_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "requested_velocity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->requested_velocity = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * roomba_msgs__msg__movement__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Movement */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("roomba_msgs.msg._movement");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Movement");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  roomba_msgs__msg__Movement * ros_message = (roomba_msgs__msg__Movement *)raw_ros_message;
  {  // distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_encoder_counts
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->left_encoder_counts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_encoder_counts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_encoder_counts
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->right_encoder_counts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_encoder_counts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // requested_left_velocity
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->requested_left_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "requested_left_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // requested_right_velocity
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->requested_right_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "requested_right_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // requested_radius
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->requested_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "requested_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // requested_velocity
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->requested_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "requested_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
