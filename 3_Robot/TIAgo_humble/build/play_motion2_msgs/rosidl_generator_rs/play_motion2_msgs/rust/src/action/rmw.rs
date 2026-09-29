
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2_Goal() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__action__PlayMotion2_Goal__init(msg: *mut PlayMotion2_Goal) -> bool;
    fn play_motion2_msgs__action__PlayMotion2_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2_Goal>, size: usize) -> bool;
    fn play_motion2_msgs__action__PlayMotion2_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2_Goal>);
    fn play_motion2_msgs__action__PlayMotion2_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayMotion2_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2_Goal>) -> bool;
}

// Corresponds to play_motion2_msgs__action__PlayMotion2_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motion_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub skip_planning: bool,

}



impl Default for PlayMotion2_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__action__PlayMotion2_Goal__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__action__PlayMotion2_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayMotion2_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayMotion2_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/action/PlayMotion2_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2_Goal() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2_Result() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__action__PlayMotion2_Result__init(msg: *mut PlayMotion2_Result) -> bool;
    fn play_motion2_msgs__action__PlayMotion2_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2_Result>, size: usize) -> bool;
    fn play_motion2_msgs__action__PlayMotion2_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2_Result>);
    fn play_motion2_msgs__action__PlayMotion2_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayMotion2_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2_Result>) -> bool;
}

// Corresponds to play_motion2_msgs__action__PlayMotion2_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error: rosidl_runtime_rs::String,

}



impl Default for PlayMotion2_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__action__PlayMotion2_Result__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__action__PlayMotion2_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayMotion2_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayMotion2_Result where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/action/PlayMotion2_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2_Result() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__action__PlayMotion2_Feedback__init(msg: *mut PlayMotion2_Feedback) -> bool;
    fn play_motion2_msgs__action__PlayMotion2_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2_Feedback>, size: usize) -> bool;
    fn play_motion2_msgs__action__PlayMotion2_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2_Feedback>);
    fn play_motion2_msgs__action__PlayMotion2_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayMotion2_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2_Feedback>) -> bool;
}

// Corresponds to play_motion2_msgs__action__PlayMotion2_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_time: builtin_interfaces::msg::rmw::Time,

}



impl Default for PlayMotion2_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__action__PlayMotion2_Feedback__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__action__PlayMotion2_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayMotion2_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayMotion2_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/action/PlayMotion2_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2_Feedback() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__action__PlayMotion2_FeedbackMessage__init(msg: *mut PlayMotion2_FeedbackMessage) -> bool;
    fn play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2_FeedbackMessage>, size: usize) -> bool;
    fn play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2_FeedbackMessage>);
    fn play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayMotion2_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2_FeedbackMessage>) -> bool;
}

// Corresponds to play_motion2_msgs__action__PlayMotion2_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::PlayMotion2_Feedback,

}



impl Default for PlayMotion2_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__action__PlayMotion2_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__action__PlayMotion2_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayMotion2_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayMotion2_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/action/PlayMotion2_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2_FeedbackMessage() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2Raw_Goal() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__action__PlayMotion2Raw_Goal__init(msg: *mut PlayMotion2Raw_Goal) -> bool;
    fn play_motion2_msgs__action__PlayMotion2Raw_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2Raw_Goal>, size: usize) -> bool;
    fn play_motion2_msgs__action__PlayMotion2Raw_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2Raw_Goal>);
    fn play_motion2_msgs__action__PlayMotion2Raw_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayMotion2Raw_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2Raw_Goal>) -> bool;
}

// Corresponds to play_motion2_msgs__action__PlayMotion2Raw_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2Raw_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motion: super::super::msg::rmw::Motion,


    // This member is not documented.
    #[allow(missing_docs)]
    pub skip_planning: bool,

}



impl Default for PlayMotion2Raw_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__action__PlayMotion2Raw_Goal__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__action__PlayMotion2Raw_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayMotion2Raw_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2Raw_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2Raw_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2Raw_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2Raw_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayMotion2Raw_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/action/PlayMotion2Raw_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2Raw_Goal() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2Raw_Result() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__action__PlayMotion2Raw_Result__init(msg: *mut PlayMotion2Raw_Result) -> bool;
    fn play_motion2_msgs__action__PlayMotion2Raw_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2Raw_Result>, size: usize) -> bool;
    fn play_motion2_msgs__action__PlayMotion2Raw_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2Raw_Result>);
    fn play_motion2_msgs__action__PlayMotion2Raw_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayMotion2Raw_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2Raw_Result>) -> bool;
}

// Corresponds to play_motion2_msgs__action__PlayMotion2Raw_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2Raw_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error: rosidl_runtime_rs::String,

}



impl Default for PlayMotion2Raw_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__action__PlayMotion2Raw_Result__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__action__PlayMotion2Raw_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayMotion2Raw_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2Raw_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2Raw_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2Raw_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2Raw_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayMotion2Raw_Result where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/action/PlayMotion2Raw_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2Raw_Result() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2Raw_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__action__PlayMotion2Raw_Feedback__init(msg: *mut PlayMotion2Raw_Feedback) -> bool;
    fn play_motion2_msgs__action__PlayMotion2Raw_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2Raw_Feedback>, size: usize) -> bool;
    fn play_motion2_msgs__action__PlayMotion2Raw_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2Raw_Feedback>);
    fn play_motion2_msgs__action__PlayMotion2Raw_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayMotion2Raw_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2Raw_Feedback>) -> bool;
}

// Corresponds to play_motion2_msgs__action__PlayMotion2Raw_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2Raw_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_time: builtin_interfaces::msg::rmw::Time,

}



impl Default for PlayMotion2Raw_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__action__PlayMotion2Raw_Feedback__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__action__PlayMotion2Raw_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayMotion2Raw_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2Raw_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2Raw_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2Raw_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2Raw_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayMotion2Raw_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/action/PlayMotion2Raw_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2Raw_Feedback() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2Raw_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__action__PlayMotion2Raw_FeedbackMessage__init(msg: *mut PlayMotion2Raw_FeedbackMessage) -> bool;
    fn play_motion2_msgs__action__PlayMotion2Raw_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2Raw_FeedbackMessage>, size: usize) -> bool;
    fn play_motion2_msgs__action__PlayMotion2Raw_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2Raw_FeedbackMessage>);
    fn play_motion2_msgs__action__PlayMotion2Raw_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayMotion2Raw_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2Raw_FeedbackMessage>) -> bool;
}

// Corresponds to play_motion2_msgs__action__PlayMotion2Raw_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2Raw_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::PlayMotion2Raw_Feedback,

}



impl Default for PlayMotion2Raw_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__action__PlayMotion2Raw_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__action__PlayMotion2Raw_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayMotion2Raw_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2Raw_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2Raw_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2Raw_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2Raw_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayMotion2Raw_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/action/PlayMotion2Raw_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2Raw_FeedbackMessage() }
  }
}




#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__action__PlayMotion2_SendGoal_Request__init(msg: *mut PlayMotion2_SendGoal_Request) -> bool;
    fn play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2_SendGoal_Request>, size: usize) -> bool;
    fn play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2_SendGoal_Request>);
    fn play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayMotion2_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2_SendGoal_Request>) -> bool;
}

// Corresponds to play_motion2_msgs__action__PlayMotion2_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::PlayMotion2_Goal,

}



impl Default for PlayMotion2_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__action__PlayMotion2_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__action__PlayMotion2_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayMotion2_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayMotion2_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/action/PlayMotion2_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2_SendGoal_Request() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__action__PlayMotion2_SendGoal_Response__init(msg: *mut PlayMotion2_SendGoal_Response) -> bool;
    fn play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2_SendGoal_Response>, size: usize) -> bool;
    fn play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2_SendGoal_Response>);
    fn play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayMotion2_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2_SendGoal_Response>) -> bool;
}

// Corresponds to play_motion2_msgs__action__PlayMotion2_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for PlayMotion2_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__action__PlayMotion2_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__action__PlayMotion2_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayMotion2_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayMotion2_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/action/PlayMotion2_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2_SendGoal_Response() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__action__PlayMotion2_GetResult_Request__init(msg: *mut PlayMotion2_GetResult_Request) -> bool;
    fn play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2_GetResult_Request>, size: usize) -> bool;
    fn play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2_GetResult_Request>);
    fn play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayMotion2_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2_GetResult_Request>) -> bool;
}

// Corresponds to play_motion2_msgs__action__PlayMotion2_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for PlayMotion2_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__action__PlayMotion2_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__action__PlayMotion2_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayMotion2_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayMotion2_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/action/PlayMotion2_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2_GetResult_Request() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__action__PlayMotion2_GetResult_Response__init(msg: *mut PlayMotion2_GetResult_Response) -> bool;
    fn play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2_GetResult_Response>, size: usize) -> bool;
    fn play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2_GetResult_Response>);
    fn play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayMotion2_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2_GetResult_Response>) -> bool;
}

// Corresponds to play_motion2_msgs__action__PlayMotion2_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::PlayMotion2_Result,

}



impl Default for PlayMotion2_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__action__PlayMotion2_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__action__PlayMotion2_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayMotion2_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayMotion2_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/action/PlayMotion2_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2_GetResult_Response() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Request__init(msg: *mut PlayMotion2Raw_SendGoal_Request) -> bool;
    fn play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2Raw_SendGoal_Request>, size: usize) -> bool;
    fn play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2Raw_SendGoal_Request>);
    fn play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayMotion2Raw_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2Raw_SendGoal_Request>) -> bool;
}

// Corresponds to play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2Raw_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::PlayMotion2Raw_Goal,

}



impl Default for PlayMotion2Raw_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayMotion2Raw_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2Raw_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayMotion2Raw_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/action/PlayMotion2Raw_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Request() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Response__init(msg: *mut PlayMotion2Raw_SendGoal_Response) -> bool;
    fn play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2Raw_SendGoal_Response>, size: usize) -> bool;
    fn play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2Raw_SendGoal_Response>);
    fn play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayMotion2Raw_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2Raw_SendGoal_Response>) -> bool;
}

// Corresponds to play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2Raw_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for PlayMotion2Raw_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayMotion2Raw_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2Raw_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayMotion2Raw_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/action/PlayMotion2Raw_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2Raw_SendGoal_Response() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2Raw_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__action__PlayMotion2Raw_GetResult_Request__init(msg: *mut PlayMotion2Raw_GetResult_Request) -> bool;
    fn play_motion2_msgs__action__PlayMotion2Raw_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2Raw_GetResult_Request>, size: usize) -> bool;
    fn play_motion2_msgs__action__PlayMotion2Raw_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2Raw_GetResult_Request>);
    fn play_motion2_msgs__action__PlayMotion2Raw_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayMotion2Raw_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2Raw_GetResult_Request>) -> bool;
}

// Corresponds to play_motion2_msgs__action__PlayMotion2Raw_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2Raw_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for PlayMotion2Raw_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__action__PlayMotion2Raw_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__action__PlayMotion2Raw_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayMotion2Raw_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2Raw_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2Raw_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2Raw_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2Raw_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayMotion2Raw_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/action/PlayMotion2Raw_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2Raw_GetResult_Request() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2Raw_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__action__PlayMotion2Raw_GetResult_Response__init(msg: *mut PlayMotion2Raw_GetResult_Response) -> bool;
    fn play_motion2_msgs__action__PlayMotion2Raw_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2Raw_GetResult_Response>, size: usize) -> bool;
    fn play_motion2_msgs__action__PlayMotion2Raw_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2Raw_GetResult_Response>);
    fn play_motion2_msgs__action__PlayMotion2Raw_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayMotion2Raw_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayMotion2Raw_GetResult_Response>) -> bool;
}

// Corresponds to play_motion2_msgs__action__PlayMotion2Raw_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayMotion2Raw_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::PlayMotion2Raw_Result,

}



impl Default for PlayMotion2Raw_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__action__PlayMotion2Raw_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__action__PlayMotion2Raw_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayMotion2Raw_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2Raw_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2Raw_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__action__PlayMotion2Raw_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayMotion2Raw_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayMotion2Raw_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/action/PlayMotion2Raw_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__action__PlayMotion2Raw_GetResult_Response() }
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


