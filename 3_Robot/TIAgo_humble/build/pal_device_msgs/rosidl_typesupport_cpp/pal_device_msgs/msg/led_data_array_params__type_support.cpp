// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from pal_device_msgs:msg/LedDataArrayParams.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "pal_device_msgs/msg/detail/led_data_array_params__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace pal_device_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _LedDataArrayParams_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LedDataArrayParams_type_support_ids_t;

static const _LedDataArrayParams_type_support_ids_t _LedDataArrayParams_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LedDataArrayParams_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LedDataArrayParams_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LedDataArrayParams_type_support_symbol_names_t _LedDataArrayParams_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pal_device_msgs, msg, LedDataArrayParams)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pal_device_msgs, msg, LedDataArrayParams)),
  }
};

typedef struct _LedDataArrayParams_type_support_data_t
{
  void * data[2];
} _LedDataArrayParams_type_support_data_t;

static _LedDataArrayParams_type_support_data_t _LedDataArrayParams_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LedDataArrayParams_message_typesupport_map = {
  2,
  "pal_device_msgs",
  &_LedDataArrayParams_message_typesupport_ids.typesupport_identifier[0],
  &_LedDataArrayParams_message_typesupport_symbol_names.symbol_name[0],
  &_LedDataArrayParams_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LedDataArrayParams_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LedDataArrayParams_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace pal_device_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pal_device_msgs::msg::LedDataArrayParams>()
{
  return &::pal_device_msgs::msg::rosidl_typesupport_cpp::LedDataArrayParams_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pal_device_msgs, msg, LedDataArrayParams)() {
  return get_message_type_support_handle<pal_device_msgs::msg::LedDataArrayParams>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
