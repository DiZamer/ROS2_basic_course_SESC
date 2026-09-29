// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from pal_device_msgs:srv/TimedFadeEffect.idl
// generated code does not contain a copyright notice
#include "pal_device_msgs/srv/detail/timed_fade_effect__rosidl_typesupport_fastrtps_cpp.hpp"
#include "pal_device_msgs/srv/detail/timed_fade_effect__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace pal_device_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const pal_device_msgs::msg::LedGroup &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  pal_device_msgs::msg::LedGroup &);
size_t get_serialized_size(
  const pal_device_msgs::msg::LedGroup &,
  size_t current_alignment);
size_t
max_serialized_size_LedGroup(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace pal_device_msgs

namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::ColorRGBA &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::ColorRGBA &);
size_t get_serialized_size(
  const std_msgs::msg::ColorRGBA &,
  size_t current_alignment);
size_t
max_serialized_size_ColorRGBA(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

// functions for std_msgs::msg::ColorRGBA already declared above

namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Duration &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Duration &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Duration &,
  size_t current_alignment);
size_t
max_serialized_size_Duration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces

// functions for builtin_interfaces::msg::Duration already declared above


namespace pal_device_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pal_device_msgs
cdr_serialize(
  const pal_device_msgs::srv::TimedFadeEffect_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: leds
  pal_device_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.leds,
    cdr);
  // Member: first_color
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.first_color,
    cdr);
  // Member: second_color
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.second_color,
    cdr);
  // Member: color_change_duration
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.color_change_duration,
    cdr);
  // Member: reverse_fade
  cdr << (ros_message.reverse_fade ? true : false);
  // Member: effect_duration
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.effect_duration,
    cdr);
  // Member: priority
  cdr << ros_message.priority;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pal_device_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pal_device_msgs::srv::TimedFadeEffect_Request & ros_message)
{
  // Member: leds
  pal_device_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.leds);

  // Member: first_color
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.first_color);

  // Member: second_color
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.second_color);

  // Member: color_change_duration
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.color_change_duration);

  // Member: reverse_fade
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reverse_fade = tmp ? true : false;
  }

  // Member: effect_duration
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.effect_duration);

  // Member: priority
  cdr >> ros_message.priority;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pal_device_msgs
get_serialized_size(
  const pal_device_msgs::srv::TimedFadeEffect_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: leds

  current_alignment +=
    pal_device_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.leds, current_alignment);
  // Member: first_color

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.first_color, current_alignment);
  // Member: second_color

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.second_color, current_alignment);
  // Member: color_change_duration

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.color_change_duration, current_alignment);
  // Member: reverse_fade
  {
    size_t item_size = sizeof(ros_message.reverse_fade);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: effect_duration

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.effect_duration, current_alignment);
  // Member: priority
  {
    size_t item_size = sizeof(ros_message.priority);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pal_device_msgs
max_serialized_size_TimedFadeEffect_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: leds
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        pal_device_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LedGroup(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: first_color
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ColorRGBA(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: second_color
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ColorRGBA(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: color_change_duration
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Duration(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: reverse_fade
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: effect_duration
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Duration(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: priority
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = pal_device_msgs::srv::TimedFadeEffect_Request;
    is_plain =
      (
      offsetof(DataType, priority) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _TimedFadeEffect_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const pal_device_msgs::srv::TimedFadeEffect_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TimedFadeEffect_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<pal_device_msgs::srv::TimedFadeEffect_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TimedFadeEffect_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const pal_device_msgs::srv::TimedFadeEffect_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TimedFadeEffect_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TimedFadeEffect_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TimedFadeEffect_Request__callbacks = {
  "pal_device_msgs::srv",
  "TimedFadeEffect_Request",
  _TimedFadeEffect_Request__cdr_serialize,
  _TimedFadeEffect_Request__cdr_deserialize,
  _TimedFadeEffect_Request__get_serialized_size,
  _TimedFadeEffect_Request__max_serialized_size
};

static rosidl_message_type_support_t _TimedFadeEffect_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TimedFadeEffect_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace pal_device_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_pal_device_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<pal_device_msgs::srv::TimedFadeEffect_Request>()
{
  return &pal_device_msgs::srv::typesupport_fastrtps_cpp::_TimedFadeEffect_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pal_device_msgs, srv, TimedFadeEffect_Request)() {
  return &pal_device_msgs::srv::typesupport_fastrtps_cpp::_TimedFadeEffect_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace pal_device_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pal_device_msgs
cdr_serialize(
  const pal_device_msgs::srv::TimedFadeEffect_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: effect_id
  cdr << ros_message.effect_id;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pal_device_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pal_device_msgs::srv::TimedFadeEffect_Response & ros_message)
{
  // Member: effect_id
  cdr >> ros_message.effect_id;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pal_device_msgs
get_serialized_size(
  const pal_device_msgs::srv::TimedFadeEffect_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: effect_id
  {
    size_t item_size = sizeof(ros_message.effect_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pal_device_msgs
max_serialized_size_TimedFadeEffect_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: effect_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = pal_device_msgs::srv::TimedFadeEffect_Response;
    is_plain =
      (
      offsetof(DataType, effect_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _TimedFadeEffect_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const pal_device_msgs::srv::TimedFadeEffect_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TimedFadeEffect_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<pal_device_msgs::srv::TimedFadeEffect_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TimedFadeEffect_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const pal_device_msgs::srv::TimedFadeEffect_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TimedFadeEffect_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TimedFadeEffect_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TimedFadeEffect_Response__callbacks = {
  "pal_device_msgs::srv",
  "TimedFadeEffect_Response",
  _TimedFadeEffect_Response__cdr_serialize,
  _TimedFadeEffect_Response__cdr_deserialize,
  _TimedFadeEffect_Response__get_serialized_size,
  _TimedFadeEffect_Response__max_serialized_size
};

static rosidl_message_type_support_t _TimedFadeEffect_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TimedFadeEffect_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace pal_device_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_pal_device_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<pal_device_msgs::srv::TimedFadeEffect_Response>()
{
  return &pal_device_msgs::srv::typesupport_fastrtps_cpp::_TimedFadeEffect_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pal_device_msgs, srv, TimedFadeEffect_Response)() {
  return &pal_device_msgs::srv::typesupport_fastrtps_cpp::_TimedFadeEffect_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace pal_device_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _TimedFadeEffect__callbacks = {
  "pal_device_msgs::srv",
  "TimedFadeEffect",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pal_device_msgs, srv, TimedFadeEffect_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pal_device_msgs, srv, TimedFadeEffect_Response)(),
};

static rosidl_service_type_support_t _TimedFadeEffect__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TimedFadeEffect__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace pal_device_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_pal_device_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<pal_device_msgs::srv::TimedFadeEffect>()
{
  return &pal_device_msgs::srv::typesupport_fastrtps_cpp::_TimedFadeEffect__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pal_device_msgs, srv, TimedFadeEffect)() {
  return &pal_device_msgs::srv::typesupport_fastrtps_cpp::_TimedFadeEffect__handle;
}

#ifdef __cplusplus
}
#endif
