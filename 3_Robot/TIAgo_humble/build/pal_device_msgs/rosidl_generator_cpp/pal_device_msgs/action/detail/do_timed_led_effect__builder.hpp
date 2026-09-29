// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pal_device_msgs:action/DoTimedLedEffect.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__ACTION__DETAIL__DO_TIMED_LED_EFFECT__BUILDER_HPP_
#define PAL_DEVICE_MSGS__ACTION__DETAIL__DO_TIMED_LED_EFFECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pal_device_msgs/action/detail/do_timed_led_effect__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pal_device_msgs
{

namespace action
{

namespace builder
{

class Init_DoTimedLedEffect_Goal_priority
{
public:
  explicit Init_DoTimedLedEffect_Goal_priority(::pal_device_msgs::action::DoTimedLedEffect_Goal & msg)
  : msg_(msg)
  {}
  ::pal_device_msgs::action::DoTimedLedEffect_Goal priority(::pal_device_msgs::action::DoTimedLedEffect_Goal::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::action::DoTimedLedEffect_Goal msg_;
};

class Init_DoTimedLedEffect_Goal_effect_duration
{
public:
  explicit Init_DoTimedLedEffect_Goal_effect_duration(::pal_device_msgs::action::DoTimedLedEffect_Goal & msg)
  : msg_(msg)
  {}
  Init_DoTimedLedEffect_Goal_priority effect_duration(::pal_device_msgs::action::DoTimedLedEffect_Goal::_effect_duration_type arg)
  {
    msg_.effect_duration = std::move(arg);
    return Init_DoTimedLedEffect_Goal_priority(msg_);
  }

private:
  ::pal_device_msgs::action::DoTimedLedEffect_Goal msg_;
};

class Init_DoTimedLedEffect_Goal_params
{
public:
  explicit Init_DoTimedLedEffect_Goal_params(::pal_device_msgs::action::DoTimedLedEffect_Goal & msg)
  : msg_(msg)
  {}
  Init_DoTimedLedEffect_Goal_effect_duration params(::pal_device_msgs::action::DoTimedLedEffect_Goal::_params_type arg)
  {
    msg_.params = std::move(arg);
    return Init_DoTimedLedEffect_Goal_effect_duration(msg_);
  }

private:
  ::pal_device_msgs::action::DoTimedLedEffect_Goal msg_;
};

class Init_DoTimedLedEffect_Goal_devices
{
public:
  Init_DoTimedLedEffect_Goal_devices()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoTimedLedEffect_Goal_params devices(::pal_device_msgs::action::DoTimedLedEffect_Goal::_devices_type arg)
  {
    msg_.devices = std::move(arg);
    return Init_DoTimedLedEffect_Goal_params(msg_);
  }

private:
  ::pal_device_msgs::action::DoTimedLedEffect_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::action::DoTimedLedEffect_Goal>()
{
  return pal_device_msgs::action::builder::Init_DoTimedLedEffect_Goal_devices();
}

}  // namespace pal_device_msgs


namespace pal_device_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::action::DoTimedLedEffect_Result>()
{
  return ::pal_device_msgs::action::DoTimedLedEffect_Result(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace pal_device_msgs


namespace pal_device_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::action::DoTimedLedEffect_Feedback>()
{
  return ::pal_device_msgs::action::DoTimedLedEffect_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace pal_device_msgs


namespace pal_device_msgs
{

namespace action
{

namespace builder
{

class Init_DoTimedLedEffect_SendGoal_Request_goal
{
public:
  explicit Init_DoTimedLedEffect_SendGoal_Request_goal(::pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request goal(::pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request msg_;
};

class Init_DoTimedLedEffect_SendGoal_Request_goal_id
{
public:
  Init_DoTimedLedEffect_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoTimedLedEffect_SendGoal_Request_goal goal_id(::pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DoTimedLedEffect_SendGoal_Request_goal(msg_);
  }

private:
  ::pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request>()
{
  return pal_device_msgs::action::builder::Init_DoTimedLedEffect_SendGoal_Request_goal_id();
}

}  // namespace pal_device_msgs


namespace pal_device_msgs
{

namespace action
{

namespace builder
{

class Init_DoTimedLedEffect_SendGoal_Response_stamp
{
public:
  explicit Init_DoTimedLedEffect_SendGoal_Response_stamp(::pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response stamp(::pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response msg_;
};

class Init_DoTimedLedEffect_SendGoal_Response_accepted
{
public:
  Init_DoTimedLedEffect_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoTimedLedEffect_SendGoal_Response_stamp accepted(::pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_DoTimedLedEffect_SendGoal_Response_stamp(msg_);
  }

private:
  ::pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response>()
{
  return pal_device_msgs::action::builder::Init_DoTimedLedEffect_SendGoal_Response_accepted();
}

}  // namespace pal_device_msgs


namespace pal_device_msgs
{

namespace action
{

namespace builder
{

class Init_DoTimedLedEffect_GetResult_Request_goal_id
{
public:
  Init_DoTimedLedEffect_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pal_device_msgs::action::DoTimedLedEffect_GetResult_Request goal_id(::pal_device_msgs::action::DoTimedLedEffect_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::action::DoTimedLedEffect_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::action::DoTimedLedEffect_GetResult_Request>()
{
  return pal_device_msgs::action::builder::Init_DoTimedLedEffect_GetResult_Request_goal_id();
}

}  // namespace pal_device_msgs


namespace pal_device_msgs
{

namespace action
{

namespace builder
{

class Init_DoTimedLedEffect_GetResult_Response_result
{
public:
  explicit Init_DoTimedLedEffect_GetResult_Response_result(::pal_device_msgs::action::DoTimedLedEffect_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::pal_device_msgs::action::DoTimedLedEffect_GetResult_Response result(::pal_device_msgs::action::DoTimedLedEffect_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::action::DoTimedLedEffect_GetResult_Response msg_;
};

class Init_DoTimedLedEffect_GetResult_Response_status
{
public:
  Init_DoTimedLedEffect_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoTimedLedEffect_GetResult_Response_result status(::pal_device_msgs::action::DoTimedLedEffect_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DoTimedLedEffect_GetResult_Response_result(msg_);
  }

private:
  ::pal_device_msgs::action::DoTimedLedEffect_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::action::DoTimedLedEffect_GetResult_Response>()
{
  return pal_device_msgs::action::builder::Init_DoTimedLedEffect_GetResult_Response_status();
}

}  // namespace pal_device_msgs


namespace pal_device_msgs
{

namespace action
{

namespace builder
{

class Init_DoTimedLedEffect_FeedbackMessage_feedback
{
public:
  explicit Init_DoTimedLedEffect_FeedbackMessage_feedback(::pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage feedback(::pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage msg_;
};

class Init_DoTimedLedEffect_FeedbackMessage_goal_id
{
public:
  Init_DoTimedLedEffect_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoTimedLedEffect_FeedbackMessage_feedback goal_id(::pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DoTimedLedEffect_FeedbackMessage_feedback(msg_);
  }

private:
  ::pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage>()
{
  return pal_device_msgs::action::builder::Init_DoTimedLedEffect_FeedbackMessage_goal_id();
}

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__ACTION__DETAIL__DO_TIMED_LED_EFFECT__BUILDER_HPP_
