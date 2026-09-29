// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pal_device_msgs:msg/LedEffectParams.idl
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
#include "pal_device_msgs/msg/detail/led_effect_params__struct.h"
#include "pal_device_msgs/msg/detail/led_effect_params__functions.h"

bool pal_device_msgs__msg__led_fixed_color_params__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * pal_device_msgs__msg__led_fixed_color_params__convert_to_py(void * raw_ros_message);
bool pal_device_msgs__msg__led_rainbow_params__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * pal_device_msgs__msg__led_rainbow_params__convert_to_py(void * raw_ros_message);
bool pal_device_msgs__msg__led_fade_params__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * pal_device_msgs__msg__led_fade_params__convert_to_py(void * raw_ros_message);
bool pal_device_msgs__msg__led_blink_params__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * pal_device_msgs__msg__led_blink_params__convert_to_py(void * raw_ros_message);
bool pal_device_msgs__msg__led_progress_params__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * pal_device_msgs__msg__led_progress_params__convert_to_py(void * raw_ros_message);
bool pal_device_msgs__msg__led_flow_params__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * pal_device_msgs__msg__led_flow_params__convert_to_py(void * raw_ros_message);
bool pal_device_msgs__msg__led_pre_programmed_params__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * pal_device_msgs__msg__led_pre_programmed_params__convert_to_py(void * raw_ros_message);
bool pal_device_msgs__msg__led_effect_via_topic_params__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * pal_device_msgs__msg__led_effect_via_topic_params__convert_to_py(void * raw_ros_message);
bool pal_device_msgs__msg__led_data_array_params__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * pal_device_msgs__msg__led_data_array_params__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool pal_device_msgs__msg__led_effect_params__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("pal_device_msgs.msg._led_effect_params.LedEffectParams", full_classname_dest, 54) == 0);
  }
  pal_device_msgs__msg__LedEffectParams * ros_message = _ros_message;
  {  // effect_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "effect_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->effect_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fixed_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "fixed_color");
    if (!field) {
      return false;
    }
    if (!pal_device_msgs__msg__led_fixed_color_params__convert_from_py(field, &ros_message->fixed_color)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rainbow
    PyObject * field = PyObject_GetAttrString(_pymsg, "rainbow");
    if (!field) {
      return false;
    }
    if (!pal_device_msgs__msg__led_rainbow_params__convert_from_py(field, &ros_message->rainbow)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // fade
    PyObject * field = PyObject_GetAttrString(_pymsg, "fade");
    if (!field) {
      return false;
    }
    if (!pal_device_msgs__msg__led_fade_params__convert_from_py(field, &ros_message->fade)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // blink
    PyObject * field = PyObject_GetAttrString(_pymsg, "blink");
    if (!field) {
      return false;
    }
    if (!pal_device_msgs__msg__led_blink_params__convert_from_py(field, &ros_message->blink)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // progress
    PyObject * field = PyObject_GetAttrString(_pymsg, "progress");
    if (!field) {
      return false;
    }
    if (!pal_device_msgs__msg__led_progress_params__convert_from_py(field, &ros_message->progress)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // flow
    PyObject * field = PyObject_GetAttrString(_pymsg, "flow");
    if (!field) {
      return false;
    }
    if (!pal_device_msgs__msg__led_flow_params__convert_from_py(field, &ros_message->flow)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // preprogrammed
    PyObject * field = PyObject_GetAttrString(_pymsg, "preprogrammed");
    if (!field) {
      return false;
    }
    if (!pal_device_msgs__msg__led_pre_programmed_params__convert_from_py(field, &ros_message->preprogrammed)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // effect_via_topic
    PyObject * field = PyObject_GetAttrString(_pymsg, "effect_via_topic");
    if (!field) {
      return false;
    }
    if (!pal_device_msgs__msg__led_effect_via_topic_params__convert_from_py(field, &ros_message->effect_via_topic)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // data_array
    PyObject * field = PyObject_GetAttrString(_pymsg, "data_array");
    if (!field) {
      return false;
    }
    if (!pal_device_msgs__msg__led_data_array_params__convert_from_py(field, &ros_message->data_array)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pal_device_msgs__msg__led_effect_params__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LedEffectParams */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pal_device_msgs.msg._led_effect_params");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LedEffectParams");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pal_device_msgs__msg__LedEffectParams * ros_message = (pal_device_msgs__msg__LedEffectParams *)raw_ros_message;
  {  // effect_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->effect_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "effect_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fixed_color
    PyObject * field = NULL;
    field = pal_device_msgs__msg__led_fixed_color_params__convert_to_py(&ros_message->fixed_color);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fixed_color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rainbow
    PyObject * field = NULL;
    field = pal_device_msgs__msg__led_rainbow_params__convert_to_py(&ros_message->rainbow);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rainbow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fade
    PyObject * field = NULL;
    field = pal_device_msgs__msg__led_fade_params__convert_to_py(&ros_message->fade);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fade", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blink
    PyObject * field = NULL;
    field = pal_device_msgs__msg__led_blink_params__convert_to_py(&ros_message->blink);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "blink", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // progress
    PyObject * field = NULL;
    field = pal_device_msgs__msg__led_progress_params__convert_to_py(&ros_message->progress);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "progress", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flow
    PyObject * field = NULL;
    field = pal_device_msgs__msg__led_flow_params__convert_to_py(&ros_message->flow);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "flow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // preprogrammed
    PyObject * field = NULL;
    field = pal_device_msgs__msg__led_pre_programmed_params__convert_to_py(&ros_message->preprogrammed);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "preprogrammed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // effect_via_topic
    PyObject * field = NULL;
    field = pal_device_msgs__msg__led_effect_via_topic_params__convert_to_py(&ros_message->effect_via_topic);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "effect_via_topic", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data_array
    PyObject * field = NULL;
    field = pal_device_msgs__msg__led_data_array_params__convert_to_py(&ros_message->data_array);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "data_array", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
