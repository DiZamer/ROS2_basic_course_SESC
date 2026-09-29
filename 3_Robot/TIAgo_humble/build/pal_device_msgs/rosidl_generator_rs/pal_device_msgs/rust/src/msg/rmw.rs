#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__BatteryState() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__msg__BatteryState__init(msg: *mut BatteryState) -> bool;
    fn pal_device_msgs__msg__BatteryState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BatteryState>, size: usize) -> bool;
    fn pal_device_msgs__msg__BatteryState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BatteryState>);
    fn pal_device_msgs__msg__BatteryState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BatteryState>, out_seq: *mut rosidl_runtime_rs::Sequence<BatteryState>) -> bool;
}

// Corresponds to pal_device_msgs__msg__BatteryState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__msg__BatteryState__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__msg__BatteryState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BatteryState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__BatteryState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__BatteryState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__BatteryState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BatteryState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BatteryState where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/msg/BatteryState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__BatteryState() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__Bumper() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__msg__Bumper__init(msg: *mut Bumper) -> bool;
    fn pal_device_msgs__msg__Bumper__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Bumper>, size: usize) -> bool;
    fn pal_device_msgs__msg__Bumper__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Bumper>);
    fn pal_device_msgs__msg__Bumper__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Bumper>, out_seq: *mut rosidl_runtime_rs::Sequence<Bumper>) -> bool;
}

// Corresponds to pal_device_msgs__msg__Bumper
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// ROS header

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Bumper {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Whether the bumper is being pressed
    pub is_pressed: bool,

}



impl Default for Bumper {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__msg__Bumper__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__msg__Bumper__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Bumper {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__Bumper__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__Bumper__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__Bumper__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Bumper {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Bumper where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/msg/Bumper";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__Bumper() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__LedGroup() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__msg__LedGroup__init(msg: *mut LedGroup) -> bool;
    fn pal_device_msgs__msg__LedGroup__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LedGroup>, size: usize) -> bool;
    fn pal_device_msgs__msg__LedGroup__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LedGroup>);
    fn pal_device_msgs__msg__LedGroup__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LedGroup>, out_seq: *mut rosidl_runtime_rs::Sequence<LedGroup>) -> bool;
}

// Corresponds to pal_device_msgs__msg__LedGroup
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__msg__LedGroup__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__msg__LedGroup__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LedGroup {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedGroup__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedGroup__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedGroup__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LedGroup {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LedGroup where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/msg/LedGroup";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__LedGroup() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__LedEffectParams() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__msg__LedEffectParams__init(msg: *mut LedEffectParams) -> bool;
    fn pal_device_msgs__msg__LedEffectParams__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LedEffectParams>, size: usize) -> bool;
    fn pal_device_msgs__msg__LedEffectParams__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LedEffectParams>);
    fn pal_device_msgs__msg__LedEffectParams__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LedEffectParams>, out_seq: *mut rosidl_runtime_rs::Sequence<LedEffectParams>) -> bool;
}

// Corresponds to pal_device_msgs__msg__LedEffectParams
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedEffectParams {

    // This member is not documented.
    #[allow(missing_docs)]
    pub effect_type: u8,

    /// RGBA of color, alpha will be used as intensity if supported by the led
    pub fixed_color: super::super::msg::rmw::LedFixedColorParams,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rainbow: super::super::msg::rmw::LedRainbowParams,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fade: super::super::msg::rmw::LedFadeParams,


    // This member is not documented.
    #[allow(missing_docs)]
    pub blink: super::super::msg::rmw::LedBlinkParams,


    // This member is not documented.
    #[allow(missing_docs)]
    pub progress: super::super::msg::rmw::LedProgressParams,


    // This member is not documented.
    #[allow(missing_docs)]
    pub flow: super::super::msg::rmw::LedFlowParams,

    /// Below are device specific, avoid them if you can
    pub preprogrammed: super::super::msg::rmw::LedPreProgrammedParams,


    // This member is not documented.
    #[allow(missing_docs)]
    pub effect_via_topic: super::super::msg::rmw::LedEffectViaTopicParams,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data_array: super::super::msg::rmw::LedDataArrayParams,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__msg__LedEffectParams__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__msg__LedEffectParams__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LedEffectParams {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedEffectParams__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedEffectParams__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedEffectParams__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LedEffectParams {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LedEffectParams where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/msg/LedEffectParams";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__LedEffectParams() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__LedFixedColorParams() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__msg__LedFixedColorParams__init(msg: *mut LedFixedColorParams) -> bool;
    fn pal_device_msgs__msg__LedFixedColorParams__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LedFixedColorParams>, size: usize) -> bool;
    fn pal_device_msgs__msg__LedFixedColorParams__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LedFixedColorParams>);
    fn pal_device_msgs__msg__LedFixedColorParams__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LedFixedColorParams>, out_seq: *mut rosidl_runtime_rs::Sequence<LedFixedColorParams>) -> bool;
}

// Corresponds to pal_device_msgs__msg__LedFixedColorParams
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// RGBA of color, alpha will be used as intensity if supported by the led

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedFixedColorParams {

    // This member is not documented.
    #[allow(missing_docs)]
    pub color: std_msgs::msg::rmw::ColorRGBA,

}



impl Default for LedFixedColorParams {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__msg__LedFixedColorParams__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__msg__LedFixedColorParams__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LedFixedColorParams {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedFixedColorParams__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedFixedColorParams__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedFixedColorParams__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LedFixedColorParams {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LedFixedColorParams where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/msg/LedFixedColorParams";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__LedFixedColorParams() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__LedRainbowParams() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__msg__LedRainbowParams__init(msg: *mut LedRainbowParams) -> bool;
    fn pal_device_msgs__msg__LedRainbowParams__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LedRainbowParams>, size: usize) -> bool;
    fn pal_device_msgs__msg__LedRainbowParams__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LedRainbowParams>);
    fn pal_device_msgs__msg__LedRainbowParams__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LedRainbowParams>, out_seq: *mut rosidl_runtime_rs::Sequence<LedRainbowParams>) -> bool;
}

// Corresponds to pal_device_msgs__msg__LedRainbowParams
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Time to perform rainbow

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedRainbowParams {

    // This member is not documented.
    #[allow(missing_docs)]
    pub transition_duration: builtin_interfaces::msg::rmw::Duration,

}



impl Default for LedRainbowParams {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__msg__LedRainbowParams__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__msg__LedRainbowParams__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LedRainbowParams {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedRainbowParams__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedRainbowParams__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedRainbowParams__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LedRainbowParams {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LedRainbowParams where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/msg/LedRainbowParams";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__LedRainbowParams() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__LedFadeParams() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__msg__LedFadeParams__init(msg: *mut LedFadeParams) -> bool;
    fn pal_device_msgs__msg__LedFadeParams__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LedFadeParams>, size: usize) -> bool;
    fn pal_device_msgs__msg__LedFadeParams__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LedFadeParams>);
    fn pal_device_msgs__msg__LedFadeParams__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LedFadeParams>, out_seq: *mut rosidl_runtime_rs::Sequence<LedFadeParams>) -> bool;
}

// Corresponds to pal_device_msgs__msg__LedFadeParams
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// RGBA of color, alpha will be used as intensity if supported by the led

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedFadeParams {

    // This member is not documented.
    #[allow(missing_docs)]
    pub first_color: std_msgs::msg::rmw::ColorRGBA,


    // This member is not documented.
    #[allow(missing_docs)]
    pub second_color: std_msgs::msg::rmw::ColorRGBA,

    /// Duration of the transition from one color to the other
    pub transition_duration: builtin_interfaces::msg::rmw::Duration,

    /// Perform a fade when going from secondColor to firstColor
    pub reverse_fade: bool,

}



impl Default for LedFadeParams {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__msg__LedFadeParams__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__msg__LedFadeParams__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LedFadeParams {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedFadeParams__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedFadeParams__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedFadeParams__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LedFadeParams {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LedFadeParams where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/msg/LedFadeParams";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__LedFadeParams() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__LedBlinkParams() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__msg__LedBlinkParams__init(msg: *mut LedBlinkParams) -> bool;
    fn pal_device_msgs__msg__LedBlinkParams__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LedBlinkParams>, size: usize) -> bool;
    fn pal_device_msgs__msg__LedBlinkParams__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LedBlinkParams>);
    fn pal_device_msgs__msg__LedBlinkParams__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LedBlinkParams>, out_seq: *mut rosidl_runtime_rs::Sequence<LedBlinkParams>) -> bool;
}

// Corresponds to pal_device_msgs__msg__LedBlinkParams
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// RGBA of color, alpha will be used as intensity if supported by the led

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedBlinkParams {

    // This member is not documented.
    #[allow(missing_docs)]
    pub first_color: std_msgs::msg::rmw::ColorRGBA,


    // This member is not documented.
    #[allow(missing_docs)]
    pub second_color: std_msgs::msg::rmw::ColorRGBA,


    // This member is not documented.
    #[allow(missing_docs)]
    pub first_color_duration: builtin_interfaces::msg::rmw::Duration,


    // This member is not documented.
    #[allow(missing_docs)]
    pub second_color_duration: builtin_interfaces::msg::rmw::Duration,

}



impl Default for LedBlinkParams {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__msg__LedBlinkParams__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__msg__LedBlinkParams__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LedBlinkParams {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedBlinkParams__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedBlinkParams__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedBlinkParams__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LedBlinkParams {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LedBlinkParams where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/msg/LedBlinkParams";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__LedBlinkParams() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__LedProgressParams() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__msg__LedProgressParams__init(msg: *mut LedProgressParams) -> bool;
    fn pal_device_msgs__msg__LedProgressParams__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LedProgressParams>, size: usize) -> bool;
    fn pal_device_msgs__msg__LedProgressParams__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LedProgressParams>);
    fn pal_device_msgs__msg__LedProgressParams__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LedProgressParams>, out_seq: *mut rosidl_runtime_rs::Sequence<LedProgressParams>) -> bool;
}

// Corresponds to pal_device_msgs__msg__LedProgressParams
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// RGBA of color, alpha will be used as intensity if supported by the led

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedProgressParams {

    // This member is not documented.
    #[allow(missing_docs)]
    pub first_color: std_msgs::msg::rmw::ColorRGBA,


    // This member is not documented.
    #[allow(missing_docs)]
    pub second_color: std_msgs::msg::rmw::ColorRGBA,

    /// Percentage of pixels painted with the first color
    pub percentage: f32,

    /// Offset to begin painting the first color
    pub led_offset: f32,

}



impl Default for LedProgressParams {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__msg__LedProgressParams__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__msg__LedProgressParams__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LedProgressParams {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedProgressParams__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedProgressParams__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedProgressParams__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LedProgressParams {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LedProgressParams where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/msg/LedProgressParams";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__LedProgressParams() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__LedFlowParams() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__msg__LedFlowParams__init(msg: *mut LedFlowParams) -> bool;
    fn pal_device_msgs__msg__LedFlowParams__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LedFlowParams>, size: usize) -> bool;
    fn pal_device_msgs__msg__LedFlowParams__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LedFlowParams>);
    fn pal_device_msgs__msg__LedFlowParams__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LedFlowParams>, out_seq: *mut rosidl_runtime_rs::Sequence<LedFlowParams>) -> bool;
}

// Corresponds to pal_device_msgs__msg__LedFlowParams
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// RGBA of color, alpha will be used as intensity if supported by the led

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedFlowParams {

    // This member is not documented.
    #[allow(missing_docs)]
    pub first_color: std_msgs::msg::rmw::ColorRGBA,


    // This member is not documented.
    #[allow(missing_docs)]
    pub second_color: std_msgs::msg::rmw::ColorRGBA,

    /// Percentage of pixels painted with the first color
    pub percentage: f32,

    /// Flow velocity
    pub velocity: f32,

}



impl Default for LedFlowParams {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__msg__LedFlowParams__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__msg__LedFlowParams__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LedFlowParams {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedFlowParams__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedFlowParams__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedFlowParams__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LedFlowParams {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LedFlowParams where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/msg/LedFlowParams";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__LedFlowParams() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__LedDataArrayParams() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__msg__LedDataArrayParams__init(msg: *mut LedDataArrayParams) -> bool;
    fn pal_device_msgs__msg__LedDataArrayParams__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LedDataArrayParams>, size: usize) -> bool;
    fn pal_device_msgs__msg__LedDataArrayParams__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LedDataArrayParams>);
    fn pal_device_msgs__msg__LedDataArrayParams__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LedDataArrayParams>, out_seq: *mut rosidl_runtime_rs::Sequence<LedDataArrayParams>) -> bool;
}

// Corresponds to pal_device_msgs__msg__LedDataArrayParams
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Data of the effect, each element in the array represents a led,
/// length should match device led count
/// For devices with no RGB option, just the alpha channel will be used

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedDataArrayParams {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<std_msgs::msg::rmw::ColorRGBA>,

}



impl Default for LedDataArrayParams {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__msg__LedDataArrayParams__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__msg__LedDataArrayParams__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LedDataArrayParams {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedDataArrayParams__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedDataArrayParams__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedDataArrayParams__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LedDataArrayParams {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LedDataArrayParams where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/msg/LedDataArrayParams";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__LedDataArrayParams() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__LedEffectViaTopicParams() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__msg__LedEffectViaTopicParams__init(msg: *mut LedEffectViaTopicParams) -> bool;
    fn pal_device_msgs__msg__LedEffectViaTopicParams__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LedEffectViaTopicParams>, size: usize) -> bool;
    fn pal_device_msgs__msg__LedEffectViaTopicParams__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LedEffectViaTopicParams>);
    fn pal_device_msgs__msg__LedEffectViaTopicParams__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LedEffectViaTopicParams>, out_seq: *mut rosidl_runtime_rs::Sequence<LedEffectViaTopicParams>) -> bool;
}

// Corresponds to pal_device_msgs__msg__LedEffectViaTopicParams
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Topic name, must be of type pal_device_msgs/LedDataArray

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedEffectViaTopicParams {

    // This member is not documented.
    #[allow(missing_docs)]
    pub topic_name: rosidl_runtime_rs::String,

}



impl Default for LedEffectViaTopicParams {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__msg__LedEffectViaTopicParams__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__msg__LedEffectViaTopicParams__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LedEffectViaTopicParams {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedEffectViaTopicParams__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedEffectViaTopicParams__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedEffectViaTopicParams__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LedEffectViaTopicParams {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LedEffectViaTopicParams where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/msg/LedEffectViaTopicParams";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__LedEffectViaTopicParams() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__LedPreProgrammedParams() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__msg__LedPreProgrammedParams__init(msg: *mut LedPreProgrammedParams) -> bool;
    fn pal_device_msgs__msg__LedPreProgrammedParams__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LedPreProgrammedParams>, size: usize) -> bool;
    fn pal_device_msgs__msg__LedPreProgrammedParams__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LedPreProgrammedParams>);
    fn pal_device_msgs__msg__LedPreProgrammedParams__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LedPreProgrammedParams>, out_seq: *mut rosidl_runtime_rs::Sequence<LedPreProgrammedParams>) -> bool;
}

// Corresponds to pal_device_msgs__msg__LedPreProgrammedParams
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Id of pre-programmed effect, most likely device specific

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedPreProgrammedParams {

    // This member is not documented.
    #[allow(missing_docs)]
    pub preprogrammed_id: u8,

}



impl Default for LedPreProgrammedParams {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__msg__LedPreProgrammedParams__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__msg__LedPreProgrammedParams__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LedPreProgrammedParams {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedPreProgrammedParams__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedPreProgrammedParams__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__msg__LedPreProgrammedParams__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LedPreProgrammedParams {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LedPreProgrammedParams where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/msg/LedPreProgrammedParams";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__msg__LedPreProgrammedParams() }
  }
}


