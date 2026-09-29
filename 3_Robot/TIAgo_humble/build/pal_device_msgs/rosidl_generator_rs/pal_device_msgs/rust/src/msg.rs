#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to pal_device_msgs__msg__BatteryState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BatteryState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub charge_state: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_percentage: f32,

}

impl BatteryState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FULL: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HIGH: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MEDIUM: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const LOW: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CRITICAL_LOW: u8 = 1;

}


impl Default for BatteryState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BatteryState::default())
  }
}

impl rosidl_runtime_rs::Message for BatteryState {
  type RmwMsg = super::msg::rmw::BatteryState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        charge_state: msg.charge_state,
        battery_percentage: msg.battery_percentage,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      charge_state: msg.charge_state,
      battery_percentage: msg.battery_percentage,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      charge_state: msg.charge_state,
      battery_percentage: msg.battery_percentage,
    }
  }
}


// Corresponds to pal_device_msgs__msg__Bumper
/// ROS header

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Bumper {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Whether the bumper is being pressed
    pub is_pressed: bool,

}



impl Default for Bumper {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Bumper::default())
  }
}

impl rosidl_runtime_rs::Message for Bumper {
  type RmwMsg = super::msg::rmw::Bumper;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        is_pressed: msg.is_pressed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      is_pressed: msg.is_pressed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      is_pressed: msg.is_pressed,
    }
  }
}


// Corresponds to pal_device_msgs__msg__LedGroup

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedGroup {
    /// OR-mask of the selected leds
    pub led_mask: u32,

}

impl LedGroup {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const LEFT_EAR: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RIGHT_EAR: u8 = 2;

}


impl Default for LedGroup {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LedGroup::default())
  }
}

impl rosidl_runtime_rs::Message for LedGroup {
  type RmwMsg = super::msg::rmw::LedGroup;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        led_mask: msg.led_mask,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      led_mask: msg.led_mask,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      led_mask: msg.led_mask,
    }
  }
}


// Corresponds to pal_device_msgs__msg__LedEffectParams

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedEffectParams {

    // This member is not documented.
    #[allow(missing_docs)]
    pub effect_type: u8,

    /// RGBA of color, alpha will be used as intensity if supported by the led
    pub fixed_color: super::msg::LedFixedColorParams,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rainbow: super::msg::LedRainbowParams,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fade: super::msg::LedFadeParams,


    // This member is not documented.
    #[allow(missing_docs)]
    pub blink: super::msg::LedBlinkParams,


    // This member is not documented.
    #[allow(missing_docs)]
    pub progress: super::msg::LedProgressParams,


    // This member is not documented.
    #[allow(missing_docs)]
    pub flow: super::msg::LedFlowParams,

    /// Below are device specific, avoid them if you can
    pub preprogrammed: super::msg::LedPreProgrammedParams,


    // This member is not documented.
    #[allow(missing_docs)]
    pub effect_via_topic: super::msg::LedEffectViaTopicParams,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data_array: super::msg::LedDataArrayParams,

}

impl LedEffectParams {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FIXED_COLOR: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RAINBOW: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FADE: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BLINK: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PROGRESS: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FLOW: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PREPROGRAMMED_EFFECT: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EFFECT_VIA_TOPIC: u8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DATA_ARRAY: u8 = 8;

}


impl Default for LedEffectParams {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LedEffectParams::default())
  }
}

impl rosidl_runtime_rs::Message for LedEffectParams {
  type RmwMsg = super::msg::rmw::LedEffectParams;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        effect_type: msg.effect_type,
        fixed_color: super::msg::LedFixedColorParams::into_rmw_message(std::borrow::Cow::Owned(msg.fixed_color)).into_owned(),
        rainbow: super::msg::LedRainbowParams::into_rmw_message(std::borrow::Cow::Owned(msg.rainbow)).into_owned(),
        fade: super::msg::LedFadeParams::into_rmw_message(std::borrow::Cow::Owned(msg.fade)).into_owned(),
        blink: super::msg::LedBlinkParams::into_rmw_message(std::borrow::Cow::Owned(msg.blink)).into_owned(),
        progress: super::msg::LedProgressParams::into_rmw_message(std::borrow::Cow::Owned(msg.progress)).into_owned(),
        flow: super::msg::LedFlowParams::into_rmw_message(std::borrow::Cow::Owned(msg.flow)).into_owned(),
        preprogrammed: super::msg::LedPreProgrammedParams::into_rmw_message(std::borrow::Cow::Owned(msg.preprogrammed)).into_owned(),
        effect_via_topic: super::msg::LedEffectViaTopicParams::into_rmw_message(std::borrow::Cow::Owned(msg.effect_via_topic)).into_owned(),
        data_array: super::msg::LedDataArrayParams::into_rmw_message(std::borrow::Cow::Owned(msg.data_array)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      effect_type: msg.effect_type,
        fixed_color: super::msg::LedFixedColorParams::into_rmw_message(std::borrow::Cow::Borrowed(&msg.fixed_color)).into_owned(),
        rainbow: super::msg::LedRainbowParams::into_rmw_message(std::borrow::Cow::Borrowed(&msg.rainbow)).into_owned(),
        fade: super::msg::LedFadeParams::into_rmw_message(std::borrow::Cow::Borrowed(&msg.fade)).into_owned(),
        blink: super::msg::LedBlinkParams::into_rmw_message(std::borrow::Cow::Borrowed(&msg.blink)).into_owned(),
        progress: super::msg::LedProgressParams::into_rmw_message(std::borrow::Cow::Borrowed(&msg.progress)).into_owned(),
        flow: super::msg::LedFlowParams::into_rmw_message(std::borrow::Cow::Borrowed(&msg.flow)).into_owned(),
        preprogrammed: super::msg::LedPreProgrammedParams::into_rmw_message(std::borrow::Cow::Borrowed(&msg.preprogrammed)).into_owned(),
        effect_via_topic: super::msg::LedEffectViaTopicParams::into_rmw_message(std::borrow::Cow::Borrowed(&msg.effect_via_topic)).into_owned(),
        data_array: super::msg::LedDataArrayParams::into_rmw_message(std::borrow::Cow::Borrowed(&msg.data_array)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      effect_type: msg.effect_type,
      fixed_color: super::msg::LedFixedColorParams::from_rmw_message(msg.fixed_color),
      rainbow: super::msg::LedRainbowParams::from_rmw_message(msg.rainbow),
      fade: super::msg::LedFadeParams::from_rmw_message(msg.fade),
      blink: super::msg::LedBlinkParams::from_rmw_message(msg.blink),
      progress: super::msg::LedProgressParams::from_rmw_message(msg.progress),
      flow: super::msg::LedFlowParams::from_rmw_message(msg.flow),
      preprogrammed: super::msg::LedPreProgrammedParams::from_rmw_message(msg.preprogrammed),
      effect_via_topic: super::msg::LedEffectViaTopicParams::from_rmw_message(msg.effect_via_topic),
      data_array: super::msg::LedDataArrayParams::from_rmw_message(msg.data_array),
    }
  }
}


// Corresponds to pal_device_msgs__msg__LedFixedColorParams
/// RGBA of color, alpha will be used as intensity if supported by the led

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedFixedColorParams {

    // This member is not documented.
    #[allow(missing_docs)]
    pub color: std_msgs::msg::ColorRGBA,

}



impl Default for LedFixedColorParams {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LedFixedColorParams::default())
  }
}

impl rosidl_runtime_rs::Message for LedFixedColorParams {
  type RmwMsg = super::msg::rmw::LedFixedColorParams;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Owned(msg.color)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Borrowed(&msg.color)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      color: std_msgs::msg::ColorRGBA::from_rmw_message(msg.color),
    }
  }
}


// Corresponds to pal_device_msgs__msg__LedRainbowParams
/// Time to perform rainbow

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedRainbowParams {

    // This member is not documented.
    #[allow(missing_docs)]
    pub transition_duration: builtin_interfaces::msg::Duration,

}



impl Default for LedRainbowParams {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LedRainbowParams::default())
  }
}

impl rosidl_runtime_rs::Message for LedRainbowParams {
  type RmwMsg = super::msg::rmw::LedRainbowParams;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        transition_duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.transition_duration)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        transition_duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.transition_duration)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      transition_duration: builtin_interfaces::msg::Duration::from_rmw_message(msg.transition_duration),
    }
  }
}


// Corresponds to pal_device_msgs__msg__LedFadeParams
/// RGBA of color, alpha will be used as intensity if supported by the led

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedFadeParams {

    // This member is not documented.
    #[allow(missing_docs)]
    pub first_color: std_msgs::msg::ColorRGBA,


    // This member is not documented.
    #[allow(missing_docs)]
    pub second_color: std_msgs::msg::ColorRGBA,

    /// Duration of the transition from one color to the other
    pub transition_duration: builtin_interfaces::msg::Duration,

    /// Perform a fade when going from secondColor to firstColor
    pub reverse_fade: bool,

}



impl Default for LedFadeParams {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LedFadeParams::default())
  }
}

impl rosidl_runtime_rs::Message for LedFadeParams {
  type RmwMsg = super::msg::rmw::LedFadeParams;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        first_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Owned(msg.first_color)).into_owned(),
        second_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Owned(msg.second_color)).into_owned(),
        transition_duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.transition_duration)).into_owned(),
        reverse_fade: msg.reverse_fade,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        first_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Borrowed(&msg.first_color)).into_owned(),
        second_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Borrowed(&msg.second_color)).into_owned(),
        transition_duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.transition_duration)).into_owned(),
      reverse_fade: msg.reverse_fade,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      first_color: std_msgs::msg::ColorRGBA::from_rmw_message(msg.first_color),
      second_color: std_msgs::msg::ColorRGBA::from_rmw_message(msg.second_color),
      transition_duration: builtin_interfaces::msg::Duration::from_rmw_message(msg.transition_duration),
      reverse_fade: msg.reverse_fade,
    }
  }
}


// Corresponds to pal_device_msgs__msg__LedBlinkParams
/// RGBA of color, alpha will be used as intensity if supported by the led

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedBlinkParams {

    // This member is not documented.
    #[allow(missing_docs)]
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

}



impl Default for LedBlinkParams {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LedBlinkParams::default())
  }
}

impl rosidl_runtime_rs::Message for LedBlinkParams {
  type RmwMsg = super::msg::rmw::LedBlinkParams;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        first_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Owned(msg.first_color)).into_owned(),
        second_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Owned(msg.second_color)).into_owned(),
        first_color_duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.first_color_duration)).into_owned(),
        second_color_duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.second_color_duration)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        first_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Borrowed(&msg.first_color)).into_owned(),
        second_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Borrowed(&msg.second_color)).into_owned(),
        first_color_duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.first_color_duration)).into_owned(),
        second_color_duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.second_color_duration)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      first_color: std_msgs::msg::ColorRGBA::from_rmw_message(msg.first_color),
      second_color: std_msgs::msg::ColorRGBA::from_rmw_message(msg.second_color),
      first_color_duration: builtin_interfaces::msg::Duration::from_rmw_message(msg.first_color_duration),
      second_color_duration: builtin_interfaces::msg::Duration::from_rmw_message(msg.second_color_duration),
    }
  }
}


// Corresponds to pal_device_msgs__msg__LedProgressParams
/// RGBA of color, alpha will be used as intensity if supported by the led

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedProgressParams {

    // This member is not documented.
    #[allow(missing_docs)]
    pub first_color: std_msgs::msg::ColorRGBA,


    // This member is not documented.
    #[allow(missing_docs)]
    pub second_color: std_msgs::msg::ColorRGBA,

    /// Percentage of pixels painted with the first color
    pub percentage: f32,

    /// Offset to begin painting the first color
    pub led_offset: f32,

}



impl Default for LedProgressParams {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LedProgressParams::default())
  }
}

impl rosidl_runtime_rs::Message for LedProgressParams {
  type RmwMsg = super::msg::rmw::LedProgressParams;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        first_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Owned(msg.first_color)).into_owned(),
        second_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Owned(msg.second_color)).into_owned(),
        percentage: msg.percentage,
        led_offset: msg.led_offset,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        first_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Borrowed(&msg.first_color)).into_owned(),
        second_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Borrowed(&msg.second_color)).into_owned(),
      percentage: msg.percentage,
      led_offset: msg.led_offset,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      first_color: std_msgs::msg::ColorRGBA::from_rmw_message(msg.first_color),
      second_color: std_msgs::msg::ColorRGBA::from_rmw_message(msg.second_color),
      percentage: msg.percentage,
      led_offset: msg.led_offset,
    }
  }
}


// Corresponds to pal_device_msgs__msg__LedFlowParams
/// RGBA of color, alpha will be used as intensity if supported by the led

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedFlowParams {

    // This member is not documented.
    #[allow(missing_docs)]
    pub first_color: std_msgs::msg::ColorRGBA,


    // This member is not documented.
    #[allow(missing_docs)]
    pub second_color: std_msgs::msg::ColorRGBA,

    /// Percentage of pixels painted with the first color
    pub percentage: f32,

    /// Flow velocity
    pub velocity: f32,

}



impl Default for LedFlowParams {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LedFlowParams::default())
  }
}

impl rosidl_runtime_rs::Message for LedFlowParams {
  type RmwMsg = super::msg::rmw::LedFlowParams;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        first_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Owned(msg.first_color)).into_owned(),
        second_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Owned(msg.second_color)).into_owned(),
        percentage: msg.percentage,
        velocity: msg.velocity,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        first_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Borrowed(&msg.first_color)).into_owned(),
        second_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Borrowed(&msg.second_color)).into_owned(),
      percentage: msg.percentage,
      velocity: msg.velocity,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      first_color: std_msgs::msg::ColorRGBA::from_rmw_message(msg.first_color),
      second_color: std_msgs::msg::ColorRGBA::from_rmw_message(msg.second_color),
      percentage: msg.percentage,
      velocity: msg.velocity,
    }
  }
}


// Corresponds to pal_device_msgs__msg__LedDataArrayParams
/// Data of the effect, each element in the array represents a led,
/// length should match device led count
/// For devices with no RGB option, just the alpha channel will be used

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedDataArrayParams {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<std_msgs::msg::ColorRGBA>,

}



impl Default for LedDataArrayParams {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LedDataArrayParams::default())
  }
}

impl rosidl_runtime_rs::Message for LedDataArrayParams {
  type RmwMsg = super::msg::rmw::LedDataArrayParams;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data
          .into_iter()
          .map(|elem| std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data
          .iter()
          .map(|elem| std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data
          .into_iter()
          .map(std_msgs::msg::ColorRGBA::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to pal_device_msgs__msg__LedEffectViaTopicParams
/// Topic name, must be of type pal_device_msgs/LedDataArray

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedEffectViaTopicParams {

    // This member is not documented.
    #[allow(missing_docs)]
    pub topic_name: std::string::String,

}



impl Default for LedEffectViaTopicParams {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LedEffectViaTopicParams::default())
  }
}

impl rosidl_runtime_rs::Message for LedEffectViaTopicParams {
  type RmwMsg = super::msg::rmw::LedEffectViaTopicParams;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        topic_name: msg.topic_name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        topic_name: msg.topic_name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      topic_name: msg.topic_name.to_string(),
    }
  }
}


// Corresponds to pal_device_msgs__msg__LedPreProgrammedParams
/// Id of pre-programmed effect, most likely device specific

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedPreProgrammedParams {

    // This member is not documented.
    #[allow(missing_docs)]
    pub preprogrammed_id: u8,

}



impl Default for LedPreProgrammedParams {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LedPreProgrammedParams::default())
  }
}

impl rosidl_runtime_rs::Message for LedPreProgrammedParams {
  type RmwMsg = super::msg::rmw::LedPreProgrammedParams;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        preprogrammed_id: msg.preprogrammed_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      preprogrammed_id: msg.preprogrammed_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      preprogrammed_id: msg.preprogrammed_id,
    }
  }
}


