
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to pal_device_msgs__action__DoTimedLedEffect_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DoTimedLedEffect_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub devices: Vec<u32>,

    /// Contains parameters for all led effects, but only the selected effect type parameters shall be provided
    pub params: super::msg::LedEffectParams,

    /// Duration of the effect, when the time is over the previous effect will be restored. 0 will make it display forever
    pub effect_duration: builtin_interfaces::msg::Duration,

    /// priority of the effect, 0 is no priority, 255 is max priority
    pub priority: u8,

}



impl Default for DoTimedLedEffect_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::DoTimedLedEffect_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for DoTimedLedEffect_Goal {
  type RmwMsg = super::action::rmw::DoTimedLedEffect_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        devices: msg.devices.into(),
        params: super::msg::LedEffectParams::into_rmw_message(std::borrow::Cow::Owned(msg.params)).into_owned(),
        effect_duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.effect_duration)).into_owned(),
        priority: msg.priority,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        devices: msg.devices.as_slice().into(),
        params: super::msg::LedEffectParams::into_rmw_message(std::borrow::Cow::Borrowed(&msg.params)).into_owned(),
        effect_duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.effect_duration)).into_owned(),
      priority: msg.priority,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      devices: msg.devices
          .into_iter()
          .collect(),
      params: super::msg::LedEffectParams::from_rmw_message(msg.params),
      effect_duration: builtin_interfaces::msg::Duration::from_rmw_message(msg.effect_duration),
      priority: msg.priority,
    }
  }
}


// Corresponds to pal_device_msgs__action__DoTimedLedEffect_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DoTimedLedEffect_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for DoTimedLedEffect_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::DoTimedLedEffect_Result::default())
  }
}

impl rosidl_runtime_rs::Message for DoTimedLedEffect_Result {
  type RmwMsg = super::action::rmw::DoTimedLedEffect_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to pal_device_msgs__action__DoTimedLedEffect_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DoTimedLedEffect_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for DoTimedLedEffect_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::DoTimedLedEffect_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for DoTimedLedEffect_Feedback {
  type RmwMsg = super::action::rmw::DoTimedLedEffect_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DoTimedLedEffect_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::DoTimedLedEffect_Feedback,

}



impl Default for DoTimedLedEffect_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::DoTimedLedEffect_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for DoTimedLedEffect_FeedbackMessage {
  type RmwMsg = super::action::rmw::DoTimedLedEffect_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::DoTimedLedEffect_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::DoTimedLedEffect_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::DoTimedLedEffect_Feedback::from_rmw_message(msg.feedback),
    }
  }
}






// Corresponds to pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DoTimedLedEffect_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::DoTimedLedEffect_Goal,

}



impl Default for DoTimedLedEffect_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::DoTimedLedEffect_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for DoTimedLedEffect_SendGoal_Request {
  type RmwMsg = super::action::rmw::DoTimedLedEffect_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::DoTimedLedEffect_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::DoTimedLedEffect_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::DoTimedLedEffect_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DoTimedLedEffect_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for DoTimedLedEffect_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::DoTimedLedEffect_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for DoTimedLedEffect_SendGoal_Response {
  type RmwMsg = super::action::rmw::DoTimedLedEffect_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to pal_device_msgs__action__DoTimedLedEffect_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DoTimedLedEffect_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for DoTimedLedEffect_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::DoTimedLedEffect_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for DoTimedLedEffect_GetResult_Request {
  type RmwMsg = super::action::rmw::DoTimedLedEffect_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to pal_device_msgs__action__DoTimedLedEffect_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DoTimedLedEffect_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::DoTimedLedEffect_Result,

}



impl Default for DoTimedLedEffect_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::DoTimedLedEffect_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for DoTimedLedEffect_GetResult_Response {
  type RmwMsg = super::action::rmw::DoTimedLedEffect_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::DoTimedLedEffect_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::DoTimedLedEffect_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::DoTimedLedEffect_Result::from_rmw_message(msg.result),
    }
  }
}






#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pal_device_msgs__action__DoTimedLedEffect_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to pal_device_msgs__action__DoTimedLedEffect_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct DoTimedLedEffect_SendGoal;

impl rosidl_runtime_rs::Service for DoTimedLedEffect_SendGoal {
    type Request = DoTimedLedEffect_SendGoal_Request;
    type Response = DoTimedLedEffect_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pal_device_msgs__action__DoTimedLedEffect_SendGoal() }
    }
}




#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pal_device_msgs__action__DoTimedLedEffect_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to pal_device_msgs__action__DoTimedLedEffect_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct DoTimedLedEffect_GetResult;

impl rosidl_runtime_rs::Service for DoTimedLedEffect_GetResult {
    type Request = DoTimedLedEffect_GetResult_Request;
    type Response = DoTimedLedEffect_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pal_device_msgs__action__DoTimedLedEffect_GetResult() }
    }
}






#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__pal_device_msgs__action__DoTimedLedEffect() -> *const std::ffi::c_void;
}

// Corresponds to pal_device_msgs__action__DoTimedLedEffect
#[allow(missing_docs, non_camel_case_types)]
pub struct DoTimedLedEffect;

impl rosidl_runtime_rs::Action for DoTimedLedEffect {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = DoTimedLedEffect_Goal;

  /// The result message defined in the action definition.
  type Result = DoTimedLedEffect_Result;

  /// The feedback message defined in the action definition.
  type Feedback = DoTimedLedEffect_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::DoTimedLedEffect_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::DoTimedLedEffect_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::DoTimedLedEffect_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__pal_device_msgs__action__DoTimedLedEffect() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::DoTimedLedEffect_Goal,
  ) -> super::action::rmw::DoTimedLedEffect_SendGoal_Request {
   super::action::rmw::DoTimedLedEffect_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::DoTimedLedEffect_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::DoTimedLedEffect_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::DoTimedLedEffect_SendGoal_Response {
   super::action::rmw::DoTimedLedEffect_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::DoTimedLedEffect_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::DoTimedLedEffect_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::DoTimedLedEffect_Feedback,
  ) -> super::action::rmw::DoTimedLedEffect_FeedbackMessage {
    let mut message = super::action::rmw::DoTimedLedEffect_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::DoTimedLedEffect_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::DoTimedLedEffect_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::DoTimedLedEffect_GetResult_Request {
   super::action::rmw::DoTimedLedEffect_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::DoTimedLedEffect_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::DoTimedLedEffect_Result,
  ) -> super::action::rmw::DoTimedLedEffect_GetResult_Response {
   super::action::rmw::DoTimedLedEffect_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::DoTimedLedEffect_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::DoTimedLedEffect_Result,
  ) {
    (response.status, response.result)
  }
}


