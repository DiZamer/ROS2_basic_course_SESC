// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pal_device_msgs:srv/TimedFadeEffect.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pal_device_msgs/srv/detail/timed_fade_effect__rosidl_typesupport_introspection_c.h"
#include "pal_device_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pal_device_msgs/srv/detail/timed_fade_effect__functions.h"
#include "pal_device_msgs/srv/detail/timed_fade_effect__struct.h"


// Include directives for member types
// Member `leds`
#include "pal_device_msgs/msg/led_group.h"
// Member `leds`
#include "pal_device_msgs/msg/detail/led_group__rosidl_typesupport_introspection_c.h"
// Member `first_color`
// Member `second_color`
#include "std_msgs/msg/color_rgba.h"
// Member `first_color`
// Member `second_color`
#include "std_msgs/msg/detail/color_rgba__rosidl_typesupport_introspection_c.h"
// Member `color_change_duration`
// Member `effect_duration`
#include "builtin_interfaces/msg/duration.h"
// Member `color_change_duration`
// Member `effect_duration`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pal_device_msgs__srv__TimedFadeEffect_Request__rosidl_typesupport_introspection_c__TimedFadeEffect_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pal_device_msgs__srv__TimedFadeEffect_Request__init(message_memory);
}

void pal_device_msgs__srv__TimedFadeEffect_Request__rosidl_typesupport_introspection_c__TimedFadeEffect_Request_fini_function(void * message_memory)
{
  pal_device_msgs__srv__TimedFadeEffect_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pal_device_msgs__srv__TimedFadeEffect_Request__rosidl_typesupport_introspection_c__TimedFadeEffect_Request_message_member_array[7] = {
  {
    "leds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__srv__TimedFadeEffect_Request, leds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "first_color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__srv__TimedFadeEffect_Request, first_color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "second_color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__srv__TimedFadeEffect_Request, second_color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "color_change_duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__srv__TimedFadeEffect_Request, color_change_duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reverse_fade",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__srv__TimedFadeEffect_Request, reverse_fade),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "effect_duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__srv__TimedFadeEffect_Request, effect_duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "priority",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__srv__TimedFadeEffect_Request, priority),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pal_device_msgs__srv__TimedFadeEffect_Request__rosidl_typesupport_introspection_c__TimedFadeEffect_Request_message_members = {
  "pal_device_msgs__srv",  // message namespace
  "TimedFadeEffect_Request",  // message name
  7,  // number of fields
  sizeof(pal_device_msgs__srv__TimedFadeEffect_Request),
  pal_device_msgs__srv__TimedFadeEffect_Request__rosidl_typesupport_introspection_c__TimedFadeEffect_Request_message_member_array,  // message members
  pal_device_msgs__srv__TimedFadeEffect_Request__rosidl_typesupport_introspection_c__TimedFadeEffect_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  pal_device_msgs__srv__TimedFadeEffect_Request__rosidl_typesupport_introspection_c__TimedFadeEffect_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pal_device_msgs__srv__TimedFadeEffect_Request__rosidl_typesupport_introspection_c__TimedFadeEffect_Request_message_type_support_handle = {
  0,
  &pal_device_msgs__srv__TimedFadeEffect_Request__rosidl_typesupport_introspection_c__TimedFadeEffect_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pal_device_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, srv, TimedFadeEffect_Request)() {
  pal_device_msgs__srv__TimedFadeEffect_Request__rosidl_typesupport_introspection_c__TimedFadeEffect_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, msg, LedGroup)();
  pal_device_msgs__srv__TimedFadeEffect_Request__rosidl_typesupport_introspection_c__TimedFadeEffect_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, ColorRGBA)();
  pal_device_msgs__srv__TimedFadeEffect_Request__rosidl_typesupport_introspection_c__TimedFadeEffect_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, ColorRGBA)();
  pal_device_msgs__srv__TimedFadeEffect_Request__rosidl_typesupport_introspection_c__TimedFadeEffect_Request_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  pal_device_msgs__srv__TimedFadeEffect_Request__rosidl_typesupport_introspection_c__TimedFadeEffect_Request_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!pal_device_msgs__srv__TimedFadeEffect_Request__rosidl_typesupport_introspection_c__TimedFadeEffect_Request_message_type_support_handle.typesupport_identifier) {
    pal_device_msgs__srv__TimedFadeEffect_Request__rosidl_typesupport_introspection_c__TimedFadeEffect_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pal_device_msgs__srv__TimedFadeEffect_Request__rosidl_typesupport_introspection_c__TimedFadeEffect_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pal_device_msgs/srv/detail/timed_fade_effect__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pal_device_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pal_device_msgs/srv/detail/timed_fade_effect__functions.h"
// already included above
// #include "pal_device_msgs/srv/detail/timed_fade_effect__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void pal_device_msgs__srv__TimedFadeEffect_Response__rosidl_typesupport_introspection_c__TimedFadeEffect_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pal_device_msgs__srv__TimedFadeEffect_Response__init(message_memory);
}

void pal_device_msgs__srv__TimedFadeEffect_Response__rosidl_typesupport_introspection_c__TimedFadeEffect_Response_fini_function(void * message_memory)
{
  pal_device_msgs__srv__TimedFadeEffect_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pal_device_msgs__srv__TimedFadeEffect_Response__rosidl_typesupport_introspection_c__TimedFadeEffect_Response_message_member_array[1] = {
  {
    "effect_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__srv__TimedFadeEffect_Response, effect_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pal_device_msgs__srv__TimedFadeEffect_Response__rosidl_typesupport_introspection_c__TimedFadeEffect_Response_message_members = {
  "pal_device_msgs__srv",  // message namespace
  "TimedFadeEffect_Response",  // message name
  1,  // number of fields
  sizeof(pal_device_msgs__srv__TimedFadeEffect_Response),
  pal_device_msgs__srv__TimedFadeEffect_Response__rosidl_typesupport_introspection_c__TimedFadeEffect_Response_message_member_array,  // message members
  pal_device_msgs__srv__TimedFadeEffect_Response__rosidl_typesupport_introspection_c__TimedFadeEffect_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  pal_device_msgs__srv__TimedFadeEffect_Response__rosidl_typesupport_introspection_c__TimedFadeEffect_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pal_device_msgs__srv__TimedFadeEffect_Response__rosidl_typesupport_introspection_c__TimedFadeEffect_Response_message_type_support_handle = {
  0,
  &pal_device_msgs__srv__TimedFadeEffect_Response__rosidl_typesupport_introspection_c__TimedFadeEffect_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pal_device_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, srv, TimedFadeEffect_Response)() {
  if (!pal_device_msgs__srv__TimedFadeEffect_Response__rosidl_typesupport_introspection_c__TimedFadeEffect_Response_message_type_support_handle.typesupport_identifier) {
    pal_device_msgs__srv__TimedFadeEffect_Response__rosidl_typesupport_introspection_c__TimedFadeEffect_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pal_device_msgs__srv__TimedFadeEffect_Response__rosidl_typesupport_introspection_c__TimedFadeEffect_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pal_device_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "pal_device_msgs/srv/detail/timed_fade_effect__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers pal_device_msgs__srv__detail__timed_fade_effect__rosidl_typesupport_introspection_c__TimedFadeEffect_service_members = {
  "pal_device_msgs__srv",  // service namespace
  "TimedFadeEffect",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // pal_device_msgs__srv__detail__timed_fade_effect__rosidl_typesupport_introspection_c__TimedFadeEffect_Request_message_type_support_handle,
  NULL  // response message
  // pal_device_msgs__srv__detail__timed_fade_effect__rosidl_typesupport_introspection_c__TimedFadeEffect_Response_message_type_support_handle
};

static rosidl_service_type_support_t pal_device_msgs__srv__detail__timed_fade_effect__rosidl_typesupport_introspection_c__TimedFadeEffect_service_type_support_handle = {
  0,
  &pal_device_msgs__srv__detail__timed_fade_effect__rosidl_typesupport_introspection_c__TimedFadeEffect_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, srv, TimedFadeEffect_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, srv, TimedFadeEffect_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pal_device_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, srv, TimedFadeEffect)() {
  if (!pal_device_msgs__srv__detail__timed_fade_effect__rosidl_typesupport_introspection_c__TimedFadeEffect_service_type_support_handle.typesupport_identifier) {
    pal_device_msgs__srv__detail__timed_fade_effect__rosidl_typesupport_introspection_c__TimedFadeEffect_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)pal_device_msgs__srv__detail__timed_fade_effect__rosidl_typesupport_introspection_c__TimedFadeEffect_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, srv, TimedFadeEffect_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, srv, TimedFadeEffect_Response)()->data;
  }

  return &pal_device_msgs__srv__detail__timed_fade_effect__rosidl_typesupport_introspection_c__TimedFadeEffect_service_type_support_handle;
}
