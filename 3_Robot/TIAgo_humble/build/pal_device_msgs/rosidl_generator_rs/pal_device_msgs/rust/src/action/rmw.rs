
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__action__DoTimedLedEffect_Goal() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__action__DoTimedLedEffect_Goal__init(msg: *mut DoTimedLedEffect_Goal) -> bool;
    fn pal_device_msgs__action__DoTimedLedEffect_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DoTimedLedEffect_Goal>, size: usize) -> bool;
    fn pal_device_msgs__action__DoTimedLedEffect_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DoTimedLedEffect_Goal>);
    fn pal_device_msgs__action__DoTimedLedEffect_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DoTimedLedEffect_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<DoTimedLedEffect_Goal>) -> bool;
}

// Corresponds to pal_device_msgs__action__DoTimedLedEffect_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DoTimedLedEffect_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub devices: rosidl_runtime_rs::Sequence<u32>,

    /// Contains parameters for all led effects, but only the selected effect type parameters shall be provided
    pub params: super::super::msg::rmw::LedEffectParams,

    /// Duration of the effect, when the time is over the previous effect will be restored. 0 will make it display forever
    pub effect_duration: builtin_interfaces::msg::rmw::Duration,

    /// priority of the effect, 0 is no priority, 255 is max priority
    pub priority: u8,

}



impl Default for DoTimedLedEffect_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__action__DoTimedLedEffect_Goal__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__action__DoTimedLedEffect_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DoTimedLedEffect_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__action__DoTimedLedEffect_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__action__DoTimedLedEffect_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__action__DoTimedLedEffect_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DoTimedLedEffect_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DoTimedLedEffect_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/action/DoTimedLedEffect_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__action__DoTimedLedEffect_Goal() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__action__DoTimedLedEffect_Result() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__action__DoTimedLedEffect_Result__init(msg: *mut DoTimedLedEffect_Result) -> bool;
    fn pal_device_msgs__action__DoTimedLedEffect_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DoTimedLedEffect_Result>, size: usize) -> bool;
    fn pal_device_msgs__action__DoTimedLedEffect_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DoTimedLedEffect_Result>);
    fn pal_device_msgs__action__DoTimedLedEffect_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DoTimedLedEffect_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<DoTimedLedEffect_Result>) -> bool;
}

// Corresponds to pal_device_msgs__action__DoTimedLedEffect_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DoTimedLedEffect_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for DoTimedLedEffect_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__action__DoTimedLedEffect_Result__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__action__DoTimedLedEffect_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DoTimedLedEffect_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__action__DoTimedLedEffect_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__action__DoTimedLedEffect_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__action__DoTimedLedEffect_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DoTimedLedEffect_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DoTimedLedEffect_Result where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/action/DoTimedLedEffect_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__action__DoTimedLedEffect_Result() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__action__DoTimedLedEffect_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__action__DoTimedLedEffect_Feedback__init(msg: *mut DoTimedLedEffect_Feedback) -> bool;
    fn pal_device_msgs__action__DoTimedLedEffect_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DoTimedLedEffect_Feedback>, size: usize) -> bool;
    fn pal_device_msgs__action__DoTimedLedEffect_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DoTimedLedEffect_Feedback>);
    fn pal_device_msgs__action__DoTimedLedEffect_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DoTimedLedEffect_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<DoTimedLedEffect_Feedback>) -> bool;
}

// Corresponds to pal_device_msgs__action__DoTimedLedEffect_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DoTimedLedEffect_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for DoTimedLedEffect_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__action__DoTimedLedEffect_Feedback__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__action__DoTimedLedEffect_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DoTimedLedEffect_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__action__DoTimedLedEffect_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__action__DoTimedLedEffect_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__action__DoTimedLedEffect_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DoTimedLedEffect_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DoTimedLedEffect_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/action/DoTimedLedEffect_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__action__DoTimedLedEffect_Feedback() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__init(msg: *mut DoTimedLedEffect_FeedbackMessage) -> bool;
    fn pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DoTimedLedEffect_FeedbackMessage>, size: usize) -> bool;
    fn pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DoTimedLedEffect_FeedbackMessage>);
    fn pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DoTimedLedEffect_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<DoTimedLedEffect_FeedbackMessage>) -> bool;
}

// Corresponds to pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DoTimedLedEffect_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::DoTimedLedEffect_Feedback,

}



impl Default for DoTimedLedEffect_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DoTimedLedEffect_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DoTimedLedEffect_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DoTimedLedEffect_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/action/DoTimedLedEffect_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage() }
  }
}




#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__init(msg: *mut DoTimedLedEffect_SendGoal_Request) -> bool;
    fn pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DoTimedLedEffect_SendGoal_Request>, size: usize) -> bool;
    fn pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DoTimedLedEffect_SendGoal_Request>);
    fn pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DoTimedLedEffect_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<DoTimedLedEffect_SendGoal_Request>) -> bool;
}

// Corresponds to pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DoTimedLedEffect_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::DoTimedLedEffect_Goal,

}



impl Default for DoTimedLedEffect_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DoTimedLedEffect_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DoTimedLedEffect_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DoTimedLedEffect_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/action/DoTimedLedEffect_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__init(msg: *mut DoTimedLedEffect_SendGoal_Response) -> bool;
    fn pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DoTimedLedEffect_SendGoal_Response>, size: usize) -> bool;
    fn pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DoTimedLedEffect_SendGoal_Response>);
    fn pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DoTimedLedEffect_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<DoTimedLedEffect_SendGoal_Response>) -> bool;
}

// Corresponds to pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DoTimedLedEffect_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for DoTimedLedEffect_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DoTimedLedEffect_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DoTimedLedEffect_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DoTimedLedEffect_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/action/DoTimedLedEffect_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__action__DoTimedLedEffect_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__init(msg: *mut DoTimedLedEffect_GetResult_Request) -> bool;
    fn pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DoTimedLedEffect_GetResult_Request>, size: usize) -> bool;
    fn pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DoTimedLedEffect_GetResult_Request>);
    fn pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DoTimedLedEffect_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<DoTimedLedEffect_GetResult_Request>) -> bool;
}

// Corresponds to pal_device_msgs__action__DoTimedLedEffect_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DoTimedLedEffect_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for DoTimedLedEffect_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DoTimedLedEffect_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DoTimedLedEffect_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DoTimedLedEffect_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/action/DoTimedLedEffect_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__action__DoTimedLedEffect_GetResult_Request() }
  }
}


#[link(name = "pal_device_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__action__DoTimedLedEffect_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "pal_device_msgs__rosidl_generator_c")]
extern "C" {
    fn pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__init(msg: *mut DoTimedLedEffect_GetResult_Response) -> bool;
    fn pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DoTimedLedEffect_GetResult_Response>, size: usize) -> bool;
    fn pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DoTimedLedEffect_GetResult_Response>);
    fn pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DoTimedLedEffect_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<DoTimedLedEffect_GetResult_Response>) -> bool;
}

// Corresponds to pal_device_msgs__action__DoTimedLedEffect_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DoTimedLedEffect_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::DoTimedLedEffect_Result,

}



impl Default for DoTimedLedEffect_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DoTimedLedEffect_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DoTimedLedEffect_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DoTimedLedEffect_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pal_device_msgs/action/DoTimedLedEffect_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pal_device_msgs__action__DoTimedLedEffect_GetResult_Response() }
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


