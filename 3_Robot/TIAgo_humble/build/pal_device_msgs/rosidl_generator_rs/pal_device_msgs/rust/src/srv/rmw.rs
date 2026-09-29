#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__srv__CancelEffect_Request() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__srv__CancelEffect_Request__init(msg: *mut CancelEffect_Request) -> bool;
    fn pal_device_msgs__srv__CancelEffect_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CancelEffect_Request>, size: usize) -> bool;
    fn pal_device_msgs__srv__CancelEffect_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CancelEffect_Request>);
    fn pal_device_msgs__srv__CancelEffect_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CancelEffect_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CancelEffect_Request>) -> bool;
}

// Corresponds to pal_device_msgs__srv__CancelEffect_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CancelEffect_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub effect_id: u32,

}



impl Default for CancelEffect_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__srv__CancelEffect_Request__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__srv__CancelEffect_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CancelEffect_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__CancelEffect_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__CancelEffect_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__CancelEffect_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CancelEffect_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CancelEffect_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/srv/CancelEffect_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__srv__CancelEffect_Request() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__srv__CancelEffect_Response() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__srv__CancelEffect_Response__init(msg: *mut CancelEffect_Response) -> bool;
    fn pal_device_msgs__srv__CancelEffect_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CancelEffect_Response>, size: usize) -> bool;
    fn pal_device_msgs__srv__CancelEffect_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CancelEffect_Response>);
    fn pal_device_msgs__srv__CancelEffect_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CancelEffect_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CancelEffect_Response>) -> bool;
}

// Corresponds to pal_device_msgs__srv__CancelEffect_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CancelEffect_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for CancelEffect_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__srv__CancelEffect_Response__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__srv__CancelEffect_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CancelEffect_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__CancelEffect_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__CancelEffect_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__CancelEffect_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CancelEffect_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CancelEffect_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/srv/CancelEffect_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__srv__CancelEffect_Response() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__init(msg: *mut ShutdownAndWakeUpRobot_Request) -> bool;
    fn pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ShutdownAndWakeUpRobot_Request>, size: usize) -> bool;
    fn pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ShutdownAndWakeUpRobot_Request>);
    fn pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ShutdownAndWakeUpRobot_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ShutdownAndWakeUpRobot_Request>) -> bool;
}

// Corresponds to pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ShutdownAndWakeUpRobot_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub shutdown_duration: builtin_interfaces::msg::rmw::Duration,

}



impl Default for ShutdownAndWakeUpRobot_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ShutdownAndWakeUpRobot_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ShutdownAndWakeUpRobot_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ShutdownAndWakeUpRobot_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/srv/ShutdownAndWakeUpRobot_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__init(msg: *mut ShutdownAndWakeUpRobot_Response) -> bool;
    fn pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ShutdownAndWakeUpRobot_Response>, size: usize) -> bool;
    fn pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ShutdownAndWakeUpRobot_Response>);
    fn pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ShutdownAndWakeUpRobot_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ShutdownAndWakeUpRobot_Response>) -> bool;
}

// Corresponds to pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ShutdownAndWakeUpRobot_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ShutdownAndWakeUpRobot_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ShutdownAndWakeUpRobot_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ShutdownAndWakeUpRobot_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ShutdownAndWakeUpRobot_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/srv/ShutdownAndWakeUpRobot_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__srv__TimedBlinkEffect_Request() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__srv__TimedBlinkEffect_Request__init(msg: *mut TimedBlinkEffect_Request) -> bool;
    fn pal_device_msgs__srv__TimedBlinkEffect_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TimedBlinkEffect_Request>, size: usize) -> bool;
    fn pal_device_msgs__srv__TimedBlinkEffect_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TimedBlinkEffect_Request>);
    fn pal_device_msgs__srv__TimedBlinkEffect_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TimedBlinkEffect_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TimedBlinkEffect_Request>) -> bool;
}

// Corresponds to pal_device_msgs__srv__TimedBlinkEffect_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TimedBlinkEffect_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub leds: super::super::msg::rmw::LedGroup,

    /// RGBA of color, transparency is not available in leds, so alpha will be ignored
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

    /// Duration of the effect, when the time is over the previous effect will be restored. 0 will make it display forever
    pub effect_duration: builtin_interfaces::msg::rmw::Duration,

    /// priority of the effect, 0 is no priority, 255 is max priority
    pub priority: u8,

}



impl Default for TimedBlinkEffect_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__srv__TimedBlinkEffect_Request__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__srv__TimedBlinkEffect_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TimedBlinkEffect_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__TimedBlinkEffect_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__TimedBlinkEffect_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__TimedBlinkEffect_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TimedBlinkEffect_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TimedBlinkEffect_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/srv/TimedBlinkEffect_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__srv__TimedBlinkEffect_Request() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__srv__TimedBlinkEffect_Response() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__srv__TimedBlinkEffect_Response__init(msg: *mut TimedBlinkEffect_Response) -> bool;
    fn pal_device_msgs__srv__TimedBlinkEffect_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TimedBlinkEffect_Response>, size: usize) -> bool;
    fn pal_device_msgs__srv__TimedBlinkEffect_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TimedBlinkEffect_Response>);
    fn pal_device_msgs__srv__TimedBlinkEffect_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TimedBlinkEffect_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TimedBlinkEffect_Response>) -> bool;
}

// Corresponds to pal_device_msgs__srv__TimedBlinkEffect_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TimedBlinkEffect_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub effect_id: u32,

}



impl Default for TimedBlinkEffect_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__srv__TimedBlinkEffect_Response__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__srv__TimedBlinkEffect_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TimedBlinkEffect_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__TimedBlinkEffect_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__TimedBlinkEffect_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__TimedBlinkEffect_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TimedBlinkEffect_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TimedBlinkEffect_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/srv/TimedBlinkEffect_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__srv__TimedBlinkEffect_Response() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__srv__TimedColourEffect_Request() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__srv__TimedColourEffect_Request__init(msg: *mut TimedColourEffect_Request) -> bool;
    fn pal_device_msgs__srv__TimedColourEffect_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TimedColourEffect_Request>, size: usize) -> bool;
    fn pal_device_msgs__srv__TimedColourEffect_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TimedColourEffect_Request>);
    fn pal_device_msgs__srv__TimedColourEffect_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TimedColourEffect_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TimedColourEffect_Request>) -> bool;
}

// Corresponds to pal_device_msgs__srv__TimedColourEffect_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TimedColourEffect_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub leds: super::super::msg::rmw::LedGroup,

    /// RGBA of color, transparency is not available in leds, so alpha will be ignored
    pub color: std_msgs::msg::rmw::ColorRGBA,

    /// Duration of the effect, when the time is over the previous effect will be restored. 0 will make it display forever
    pub effect_duration: builtin_interfaces::msg::rmw::Duration,

    /// priority of the effect, 0 is no priority, 255 is max priority
    pub priority: u8,

}



impl Default for TimedColourEffect_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__srv__TimedColourEffect_Request__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__srv__TimedColourEffect_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TimedColourEffect_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__TimedColourEffect_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__TimedColourEffect_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__TimedColourEffect_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TimedColourEffect_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TimedColourEffect_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/srv/TimedColourEffect_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__srv__TimedColourEffect_Request() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__srv__TimedColourEffect_Response() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__srv__TimedColourEffect_Response__init(msg: *mut TimedColourEffect_Response) -> bool;
    fn pal_device_msgs__srv__TimedColourEffect_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TimedColourEffect_Response>, size: usize) -> bool;
    fn pal_device_msgs__srv__TimedColourEffect_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TimedColourEffect_Response>);
    fn pal_device_msgs__srv__TimedColourEffect_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TimedColourEffect_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TimedColourEffect_Response>) -> bool;
}

// Corresponds to pal_device_msgs__srv__TimedColourEffect_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TimedColourEffect_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub effect_id: u32,

}



impl Default for TimedColourEffect_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__srv__TimedColourEffect_Response__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__srv__TimedColourEffect_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TimedColourEffect_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__TimedColourEffect_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__TimedColourEffect_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__TimedColourEffect_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TimedColourEffect_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TimedColourEffect_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/srv/TimedColourEffect_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__srv__TimedColourEffect_Response() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__srv__TimedFadeEffect_Request() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__srv__TimedFadeEffect_Request__init(msg: *mut TimedFadeEffect_Request) -> bool;
    fn pal_device_msgs__srv__TimedFadeEffect_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TimedFadeEffect_Request>, size: usize) -> bool;
    fn pal_device_msgs__srv__TimedFadeEffect_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TimedFadeEffect_Request>);
    fn pal_device_msgs__srv__TimedFadeEffect_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TimedFadeEffect_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TimedFadeEffect_Request>) -> bool;
}

// Corresponds to pal_device_msgs__srv__TimedFadeEffect_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TimedFadeEffect_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub leds: super::super::msg::rmw::LedGroup,

    /// RGBA of color, transparency is not available in leds, so alpha will be ignored
    pub first_color: std_msgs::msg::rmw::ColorRGBA,


    // This member is not documented.
    #[allow(missing_docs)]
    pub second_color: std_msgs::msg::rmw::ColorRGBA,

    /// Duration of the transition from one color to the other
    pub color_change_duration: builtin_interfaces::msg::rmw::Duration,

    /// Perform a fade when going from secondColor to first_color
    pub reverse_fade: bool,

    /// Duration of the effect, when the time is over the previous effect will be restored. 0 will make it display forever
    pub effect_duration: builtin_interfaces::msg::rmw::Duration,

    /// priority of the effect, 0 is no priority, 255 is max priority
    pub priority: u8,

}



impl Default for TimedFadeEffect_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__srv__TimedFadeEffect_Request__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__srv__TimedFadeEffect_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TimedFadeEffect_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__TimedFadeEffect_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__TimedFadeEffect_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__TimedFadeEffect_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TimedFadeEffect_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TimedFadeEffect_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/srv/TimedFadeEffect_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__srv__TimedFadeEffect_Request() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__srv__TimedFadeEffect_Response() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__srv__TimedFadeEffect_Response__init(msg: *mut TimedFadeEffect_Response) -> bool;
    fn pal_device_msgs__srv__TimedFadeEffect_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TimedFadeEffect_Response>, size: usize) -> bool;
    fn pal_device_msgs__srv__TimedFadeEffect_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TimedFadeEffect_Response>);
    fn pal_device_msgs__srv__TimedFadeEffect_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TimedFadeEffect_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TimedFadeEffect_Response>) -> bool;
}

// Corresponds to pal_device_msgs__srv__TimedFadeEffect_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TimedFadeEffect_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub effect_id: u32,

}



impl Default for TimedFadeEffect_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__srv__TimedFadeEffect_Response__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__srv__TimedFadeEffect_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TimedFadeEffect_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__TimedFadeEffect_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__TimedFadeEffect_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__srv__TimedFadeEffect_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TimedFadeEffect_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TimedFadeEffect_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/srv/TimedFadeEffect_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__srv__TimedFadeEffect_Response() }
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


