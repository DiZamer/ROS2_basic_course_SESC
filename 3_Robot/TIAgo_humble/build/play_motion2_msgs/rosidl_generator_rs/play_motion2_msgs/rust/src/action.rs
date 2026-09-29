
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to play_motion2_msgs__action__PlayMotion2_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motion_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub skip_planning: bool,

}



impl Default for PlayMotion2_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PlayMotion2_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2_Goal {
  type RmwMsg = super::action::rmw::PlayMotion2_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motion_name: msg.motion_name.as_str().into(),
        skip_planning: msg.skip_planning,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motion_name: msg.motion_name.as_str().into(),
      skip_planning: msg.skip_planning,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motion_name: msg.motion_name.to_string(),
      skip_planning: msg.skip_planning,
    }
  }
}


// Corresponds to play_motion2_msgs__action__PlayMotion2_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error: std::string::String,

}



impl Default for PlayMotion2_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PlayMotion2_Result::default())
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2_Result {
  type RmwMsg = super::action::rmw::PlayMotion2_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        error: msg.error.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        error: msg.error.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      error: msg.error.to_string(),
    }
  }
}


// Corresponds to play_motion2_msgs__action__PlayMotion2_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_time: builtin_interfaces::msg::Time,

}



impl Default for PlayMotion2_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PlayMotion2_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2_Feedback {
  type RmwMsg = super::action::rmw::PlayMotion2_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.current_time)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.current_time)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      current_time: builtin_interfaces::msg::Time::from_rmw_message(msg.current_time),
    }
  }
}


// Corresponds to play_motion2_msgs__action__PlayMotion2_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::PlayMotion2_Feedback,

}



impl Default for PlayMotion2_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PlayMotion2_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2_FeedbackMessage {
  type RmwMsg = super::action::rmw::PlayMotion2_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::PlayMotion2_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::PlayMotion2_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::PlayMotion2_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to play_motion2_msgs__action__PlayMotion2Raw_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2Raw_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motion: super::msg::Motion,


    // This member is not documented.
    #[allow(missing_docs)]
    pub skip_planning: bool,

}



impl Default for PlayMotion2Raw_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PlayMotion2Raw_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2Raw_Goal {
  type RmwMsg = super::action::rmw::PlayMotion2Raw_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motion: super::msg::Motion::into_rmw_message(std::borrow::Cow::Owned(msg.motion)).into_owned(),
        skip_planning: msg.skip_planning,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motion: super::msg::Motion::into_rmw_message(std::borrow::Cow::Borrowed(&msg.motion)).into_owned(),
      skip_planning: msg.skip_planning,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motion: super::msg::Motion::from_rmw_message(msg.motion),
      skip_planning: msg.skip_planning,
    }
  }
}


// Corresponds to play_motion2_msgs__action__PlayMotion2Raw_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2Raw_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error: std::string::String,

}



impl Default for PlayMotion2Raw_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PlayMotion2Raw_Result::default())
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2Raw_Result {
  type RmwMsg = super::action::rmw::PlayMotion2Raw_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        error: msg.error.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        error: msg.error.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      error: msg.error.to_string(),
    }
  }
}


// Corresponds to play_motion2_msgs__action__PlayMotion2Raw_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2Raw_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_time: builtin_interfaces::msg::Time,

}



impl Default for PlayMotion2Raw_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PlayMotion2Raw_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2Raw_Feedback {
  type RmwMsg = super::action::rmw::PlayMotion2Raw_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.current_time)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.current_time)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      current_time: builtin_interfaces::msg::Time::from_rmw_message(msg.current_time),
    }
  }
}


// Corresponds to play_motion2_msgs__action__PlayMotion2Raw_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2Raw_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::PlayMotion2Raw_Feedback,

}



impl Default for PlayMotion2Raw_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PlayMotion2Raw_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2Raw_FeedbackMessage {
  type RmwMsg = super::action::rmw::PlayMotion2Raw_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::PlayMotion2Raw_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::PlayMotion2Raw_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::PlayMotion2Raw_Feedback::from_rmw_message(msg.feedback),
    }
  }
}






// Corresponds to play_motion2_msgs__action__PlayMotion2_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::PlayMotion2_Goal,

}



impl Default for PlayMotion2_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PlayMotion2_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2_SendGoal_Request {
  type RmwMsg = super::action::rmw::PlayMotion2_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::PlayMotion2_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::PlayMotion2_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::PlayMotion2_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to play_motion2_msgs__action__PlayMotion2_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for PlayMotion2_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PlayMotion2_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2_SendGoal_Response {
  type RmwMsg = super::action::rmw::PlayMotion2_SendGoal_Response;

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


// Corresponds to play_motion2_msgs__action__PlayMotion2_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for PlayMotion2_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PlayMotion2_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2_GetResult_Request {
  type RmwMsg = super::action::rmw::PlayMotion2_GetResult_Request;

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


// Corresponds to play_motion2_msgs__action__PlayMotion2_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::PlayMotion2_Result,

}



impl Default for PlayMotion2_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PlayMotion2_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2_GetResult_Response {
  type RmwMsg = super::action::rmw::PlayMotion2_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::PlayMotion2_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::PlayMotion2_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::PlayMotion2_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2Raw_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::PlayMotion2Raw_Goal,

}



impl Default for PlayMotion2Raw_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PlayMotion2Raw_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2Raw_SendGoal_Request {
  type RmwMsg = super::action::rmw::PlayMotion2Raw_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::PlayMotion2Raw_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::PlayMotion2Raw_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::PlayMotion2Raw_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2Raw_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for PlayMotion2Raw_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PlayMotion2Raw_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2Raw_SendGoal_Response {
  type RmwMsg = super::action::rmw::PlayMotion2Raw_SendGoal_Response;

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


// Corresponds to play_motion2_msgs__action__PlayMotion2Raw_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2Raw_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for PlayMotion2Raw_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PlayMotion2Raw_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2Raw_GetResult_Request {
  type RmwMsg = super::action::rmw::PlayMotion2Raw_GetResult_Request;

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


// Corresponds to play_motion2_msgs__action__PlayMotion2Raw_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2Raw_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::PlayMotion2Raw_Result,

}



impl Default for PlayMotion2Raw_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PlayMotion2Raw_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2Raw_GetResult_Response {
  type RmwMsg = super::action::rmw::PlayMotion2Raw_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::PlayMotion2Raw_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::PlayMotion2Raw_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::PlayMotion2Raw_Result::from_rmw_message(msg.result),
    }
  }
}






#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__play_motion2_msgs__action__PlayMotion2_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to play_motion2_msgs__action__PlayMotion2_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct PlayMotion2_SendGoal;

impl rosidl_runtime_rs::Service for PlayMotion2_SendGoal {
    type Request = PlayMotion2_SendGoal_Request;
    type Response = PlayMotion2_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__play_motion2_msgs__action__PlayMotion2_SendGoal() }
    }
}




#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__play_motion2_msgs__action__PlayMotion2_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to play_motion2_msgs__action__PlayMotion2_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct PlayMotion2_GetResult;

impl rosidl_runtime_rs::Service for PlayMotion2_GetResult {
    type Request = PlayMotion2_GetResult_Request;
    type Response = PlayMotion2_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__play_motion2_msgs__action__PlayMotion2_GetResult() }
    }
}




#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__play_motion2_msgs__action__PlayMotion2Raw_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to play_motion2_msgs__action__PlayMotion2Raw_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct PlayMotion2Raw_SendGoal;

impl rosidl_runtime_rs::Service for PlayMotion2Raw_SendGoal {
    type Request = PlayMotion2Raw_SendGoal_Request;
    type Response = PlayMotion2Raw_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__play_motion2_msgs__action__PlayMotion2Raw_SendGoal() }
    }
}




#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__play_motion2_msgs__action__PlayMotion2Raw_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to play_motion2_msgs__action__PlayMotion2Raw_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct PlayMotion2Raw_GetResult;

impl rosidl_runtime_rs::Service for PlayMotion2Raw_GetResult {
    type Request = PlayMotion2Raw_GetResult_Request;
    type Response = PlayMotion2Raw_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__play_motion2_msgs__action__PlayMotion2Raw_GetResult() }
    }
}






#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__play_motion2_msgs__action__PlayMotion2() -> *const std::ffi::c_void;
}

// Corresponds to play_motion2_msgs__action__PlayMotion2
#[allow(missing_docs, non_camel_case_types)]
pub struct PlayMotion2;

impl rosidl_runtime_rs::Action for PlayMotion2 {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = PlayMotion2_Goal;

  /// The result message defined in the action definition.
  type Result = PlayMotion2_Result;

  /// The feedback message defined in the action definition.
  type Feedback = PlayMotion2_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::PlayMotion2_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::PlayMotion2_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::PlayMotion2_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__play_motion2_msgs__action__PlayMotion2() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::PlayMotion2_Goal,
  ) -> super::action::rmw::PlayMotion2_SendGoal_Request {
   super::action::rmw::PlayMotion2_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::PlayMotion2_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::PlayMotion2_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::PlayMotion2_SendGoal_Response {
   super::action::rmw::PlayMotion2_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::PlayMotion2_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::PlayMotion2_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::PlayMotion2_Feedback,
  ) -> super::action::rmw::PlayMotion2_FeedbackMessage {
    let mut message = super::action::rmw::PlayMotion2_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::PlayMotion2_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::PlayMotion2_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::PlayMotion2_GetResult_Request {
   super::action::rmw::PlayMotion2_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::PlayMotion2_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::PlayMotion2_Result,
  ) -> super::action::rmw::PlayMotion2_GetResult_Response {
   super::action::rmw::PlayMotion2_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::PlayMotion2_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::PlayMotion2_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__play_motion2_msgs__action__PlayMotion2Raw() -> *const std::ffi::c_void;
}

// Corresponds to play_motion2_msgs__action__PlayMotion2Raw
#[allow(missing_docs, non_camel_case_types)]
pub struct PlayMotion2Raw;

impl rosidl_runtime_rs::Action for PlayMotion2Raw {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = PlayMotion2Raw_Goal;

  /// The result message defined in the action definition.
  type Result = PlayMotion2Raw_Result;

  /// The feedback message defined in the action definition.
  type Feedback = PlayMotion2Raw_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::PlayMotion2Raw_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::PlayMotion2Raw_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::PlayMotion2Raw_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__play_motion2_msgs__action__PlayMotion2Raw() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::PlayMotion2Raw_Goal,
  ) -> super::action::rmw::PlayMotion2Raw_SendGoal_Request {
   super::action::rmw::PlayMotion2Raw_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::PlayMotion2Raw_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::PlayMotion2Raw_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::PlayMotion2Raw_SendGoal_Response {
   super::action::rmw::PlayMotion2Raw_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::PlayMotion2Raw_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::PlayMotion2Raw_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::PlayMotion2Raw_Feedback,
  ) -> super::action::rmw::PlayMotion2Raw_FeedbackMessage {
    let mut message = super::action::rmw::PlayMotion2Raw_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::PlayMotion2Raw_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::PlayMotion2Raw_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::PlayMotion2Raw_GetResult_Request {
   super::action::rmw::PlayMotion2Raw_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::PlayMotion2Raw_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::PlayMotion2Raw_Result,
  ) -> super::action::rmw::PlayMotion2Raw_GetResult_Response {
   super::action::rmw::PlayMotion2Raw_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::PlayMotion2Raw_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::PlayMotion2Raw_Result,
  ) {
    (response.status, response.result)
  }
}


