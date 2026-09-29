#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to pal_device_msgs__srv__CancelEffect_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CancelEffect_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub effect_id: u32,

}



impl Default for CancelEffect_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CancelEffect_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CancelEffect_Request {
  type RmwMsg = super::srv::rmw::CancelEffect_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        effect_id: msg.effect_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      effect_id: msg.effect_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      effect_id: msg.effect_id,
    }
  }
}


// Corresponds to pal_device_msgs__srv__CancelEffect_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CancelEffect_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for CancelEffect_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CancelEffect_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CancelEffect_Response {
  type RmwMsg = super::srv::rmw::CancelEffect_Response;

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


// Corresponds to pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ShutdownAndWakeUpRobot_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub shutdown_duration: builtin_interfaces::msg::Duration,

}



impl Default for ShutdownAndWakeUpRobot_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ShutdownAndWakeUpRobot_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ShutdownAndWakeUpRobot_Request {
  type RmwMsg = super::srv::rmw::ShutdownAndWakeUpRobot_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        shutdown_duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.shutdown_duration)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        shutdown_duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.shutdown_duration)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      shutdown_duration: builtin_interfaces::msg::Duration::from_rmw_message(msg.shutdown_duration),
    }
  }
}


// Corresponds to pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ShutdownAndWakeUpRobot_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ShutdownAndWakeUpRobot_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ShutdownAndWakeUpRobot_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ShutdownAndWakeUpRobot_Response {
  type RmwMsg = super::srv::rmw::ShutdownAndWakeUpRobot_Response;

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


// Corresponds to pal_device_msgs__srv__TimedBlinkEffect_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TimedBlinkEffect_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub leds: super::msg::LedGroup,

    /// RGBA of color, transparency is not available in leds, so alpha will be ignored
    pub first_color: std_msgs::msg::ColorRGBA,


    // This member is not documented.
    #[allow(missing_docs)]
    pub second_color: std_msgs::msg::ColorRGBA,


    // This member is not documented.
    #[allow(missing_docs)]
    pub first_color_duration: builtin_interfaces::msg::Duration,


    // This member is not documented.
    #[allow(missing_docs)]
    pub second_color_duration: builtin_interfaces::msg::Duration,

    /// Duration of the effect, when the time is over the previous effect will be restored. 0 will make it display forever
    pub effect_duration: builtin_interfaces::msg::Duration,

    /// priority of the effect, 0 is no priority, 255 is max priority
    pub priority: u8,

}



impl Default for TimedBlinkEffect_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TimedBlinkEffect_Request::default())
  }
}

impl rosidl_runtime_rs::Message for TimedBlinkEffect_Request {
  type RmwMsg = super::srv::rmw::TimedBlinkEffect_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        leds: super::msg::LedGroup::into_rmw_message(std::borrow::Cow::Owned(msg.leds)).into_owned(),
        first_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Owned(msg.first_color)).into_owned(),
        second_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Owned(msg.second_color)).into_owned(),
        first_color_duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.first_color_duration)).into_owned(),
        second_color_duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.second_color_duration)).into_owned(),
        effect_duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.effect_duration)).into_owned(),
        priority: msg.priority,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        leds: super::msg::LedGroup::into_rmw_message(std::borrow::Cow::Borrowed(&msg.leds)).into_owned(),
        first_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Borrowed(&msg.first_color)).into_owned(),
        second_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Borrowed(&msg.second_color)).into_owned(),
        first_color_duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.first_color_duration)).into_owned(),
        second_color_duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.second_color_duration)).into_owned(),
        effect_duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.effect_duration)).into_owned(),
      priority: msg.priority,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      leds: super::msg::LedGroup::from_rmw_message(msg.leds),
      first_color: std_msgs::msg::ColorRGBA::from_rmw_message(msg.first_color),
      second_color: std_msgs::msg::ColorRGBA::from_rmw_message(msg.second_color),
      first_color_duration: builtin_interfaces::msg::Duration::from_rmw_message(msg.first_color_duration),
      second_color_duration: builtin_interfaces::msg::Duration::from_rmw_message(msg.second_color_duration),
      effect_duration: builtin_interfaces::msg::Duration::from_rmw_message(msg.effect_duration),
      priority: msg.priority,
    }
  }
}


// Corresponds to pal_device_msgs__srv__TimedBlinkEffect_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TimedBlinkEffect_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub effect_id: u32,

}



impl Default for TimedBlinkEffect_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TimedBlinkEffect_Response::default())
  }
}

impl rosidl_runtime_rs::Message for TimedBlinkEffect_Response {
  type RmwMsg = super::srv::rmw::TimedBlinkEffect_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        effect_id: msg.effect_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      effect_id: msg.effect_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      effect_id: msg.effect_id,
    }
  }
}


// Corresponds to pal_device_msgs__srv__TimedColourEffect_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TimedColourEffect_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub leds: super::msg::LedGroup,

    /// RGBA of color, transparency is not available in leds, so alpha will be ignored
    pub color: std_msgs::msg::ColorRGBA,

    /// Duration of the effect, when the time is over the previous effect will be restored. 0 will make it display forever
    pub effect_duration: builtin_interfaces::msg::Duration,

    /// priority of the effect, 0 is no priority, 255 is max priority
    pub priority: u8,

}



impl Default for TimedColourEffect_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TimedColourEffect_Request::default())
  }
}

impl rosidl_runtime_rs::Message for TimedColourEffect_Request {
  type RmwMsg = super::srv::rmw::TimedColourEffect_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        leds: super::msg::LedGroup::into_rmw_message(std::borrow::Cow::Owned(msg.leds)).into_owned(),
        color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Owned(msg.color)).into_owned(),
        effect_duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.effect_duration)).into_owned(),
        priority: msg.priority,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        leds: super::msg::LedGroup::into_rmw_message(std::borrow::Cow::Borrowed(&msg.leds)).into_owned(),
        color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Borrowed(&msg.color)).into_owned(),
        effect_duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.effect_duration)).into_owned(),
      priority: msg.priority,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      leds: super::msg::LedGroup::from_rmw_message(msg.leds),
      color: std_msgs::msg::ColorRGBA::from_rmw_message(msg.color),
      effect_duration: builtin_interfaces::msg::Duration::from_rmw_message(msg.effect_duration),
      priority: msg.priority,
    }
  }
}


// Corresponds to pal_device_msgs__srv__TimedColourEffect_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TimedColourEffect_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub effect_id: u32,

}



impl Default for TimedColourEffect_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TimedColourEffect_Response::default())
  }
}

impl rosidl_runtime_rs::Message for TimedColourEffect_Response {
  type RmwMsg = super::srv::rmw::TimedColourEffect_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        effect_id: msg.effect_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      effect_id: msg.effect_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      effect_id: msg.effect_id,
    }
  }
}


// Corresponds to pal_device_msgs__srv__TimedFadeEffect_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TimedFadeEffect_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub leds: super::msg::LedGroup,

    /// RGBA of color, transparency is not available in leds, so alpha will be ignored
    pub first_color: std_msgs::msg::ColorRGBA,


    // This member is not documented.
    #[allow(missing_docs)]
    pub second_color: std_msgs::msg::ColorRGBA,

    /// Duration of the transition from one color to the other
    pub color_change_duration: builtin_interfaces::msg::Duration,

    /// Perform a fade when going from secondColor to first_color
    pub reverse_fade: bool,

    /// Duration of the effect, when the time is over the previous effect will be restored. 0 will make it display forever
    pub effect_duration: builtin_interfaces::msg::Duration,

    /// priority of the effect, 0 is no priority, 255 is max priority
    pub priority: u8,

}



impl Default for TimedFadeEffect_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TimedFadeEffect_Request::default())
  }
}

impl rosidl_runtime_rs::Message for TimedFadeEffect_Request {
  type RmwMsg = super::srv::rmw::TimedFadeEffect_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        leds: super::msg::LedGroup::into_rmw_message(std::borrow::Cow::Owned(msg.leds)).into_owned(),
        first_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Owned(msg.first_color)).into_owned(),
        second_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Owned(msg.second_color)).into_owned(),
        color_change_duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.color_change_duration)).into_owned(),
        reverse_fade: msg.reverse_fade,
        effect_duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.effect_duration)).into_owned(),
        priority: msg.priority,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        leds: super::msg::LedGroup::into_rmw_message(std::borrow::Cow::Borrowed(&msg.leds)).into_owned(),
        first_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Borrowed(&msg.first_color)).into_owned(),
        second_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Borrowed(&msg.second_color)).into_owned(),
        color_change_duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.color_change_duration)).into_owned(),
      reverse_fade: msg.reverse_fade,
        effect_duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.effect_duration)).into_owned(),
      priority: msg.priority,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      leds: super::msg::LedGroup::from_rmw_message(msg.leds),
      first_color: std_msgs::msg::ColorRGBA::from_rmw_message(msg.first_color),
      second_color: std_msgs::msg::ColorRGBA::from_rmw_message(msg.second_color),
      color_change_duration: builtin_interfaces::msg::Duration::from_rmw_message(msg.color_change_duration),
      reverse_fade: msg.reverse_fade,
      effect_duration: builtin_interfaces::msg::Duration::from_rmw_message(msg.effect_duration),
      priority: msg.priority,
    }
  }
}


// Corresponds to pal_device_msgs__srv__TimedFadeEffect_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TimedFadeEffect_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub effect_id: u32,

}



impl Default for TimedFadeEffect_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TimedFadeEffect_Response::default())
  }
}

impl rosidl_runtime_rs::Message for TimedFadeEffect_Response {
  type RmwMsg = super::srv::rmw::TimedFadeEffect_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        effect_id: msg.effect_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      effect_id: msg.effect_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      effect_id: msg.effect_id,
    }
  }
}






#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pal_device_msgs__srv__CancelEffect() -> *const std::ffi::c_void;
}

// Corresponds to pal_device_msgs__srv__CancelEffect
#[allow(missing_docs, non_camel_case_types)]
pub struct CancelEffect;

impl rosidl_runtime_rs::Service for CancelEffect {
    type Request = CancelEffect_Request;
    type Response = CancelEffect_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pal_device_msgs__srv__CancelEffect() }
    }
}




#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pal_device_msgs__srv__ShutdownAndWakeUpRobot() -> *const std::ffi::c_void;
}

// Corresponds to pal_device_msgs__srv__ShutdownAndWakeUpRobot
#[allow(missing_docs, non_camel_case_types)]
pub struct ShutdownAndWakeUpRobot;

impl rosidl_runtime_rs::Service for ShutdownAndWakeUpRobot {
    type Request = ShutdownAndWakeUpRobot_Request;
    type Response = ShutdownAndWakeUpRobot_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pal_device_msgs__srv__ShutdownAndWakeUpRobot() }
    }
}




#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pal_device_msgs__srv__TimedBlinkEffect() -> *const std::ffi::c_void;
}

// Corresponds to pal_device_msgs__srv__TimedBlinkEffect
#[allow(missing_docs, non_camel_case_types)]
pub struct TimedBlinkEffect;

impl rosidl_runtime_rs::Service for TimedBlinkEffect {
    type Request = TimedBlinkEffect_Request;
    type Response = TimedBlinkEffect_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pal_device_msgs__srv__TimedBlinkEffect() }
    }
}




#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pal_device_msgs__srv__TimedColourEffect() -> *const std::ffi::c_void;
}

// Corresponds to pal_device_msgs__srv__TimedColourEffect
#[allow(missing_docs, non_camel_case_types)]
pub struct TimedColourEffect;

impl rosidl_runtime_rs::Service for TimedColourEffect {
    type Request = TimedColourEffect_Request;
    type Response = TimedColourEffect_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pal_device_msgs__srv__TimedColourEffect() }
    }
}




#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pal_device_msgs__srv__TimedFadeEffect() -> *const std::ffi::c_void;
}

// Corresponds to pal_device_msgs__srv__TimedFadeEffect
#[allow(missing_docs, non_camel_case_types)]
pub struct TimedFadeEffect;

impl rosidl_runtime_rs::Service for TimedFadeEffect {
    type Request = TimedFadeEffect_Request;
    type Response = TimedFadeEffect_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pal_device_msgs__srv__TimedFadeEffect() }
    }
}


