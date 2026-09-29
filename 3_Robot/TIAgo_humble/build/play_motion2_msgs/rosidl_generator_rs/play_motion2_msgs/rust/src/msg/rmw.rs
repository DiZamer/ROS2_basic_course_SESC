#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__msg__Motion() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__msg__Motion__init(msg: *mut Motion) -> bool;
    fn play_motion2_msgs__msg__Motion__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Motion>, size: usize) -> bool;
    fn play_motion2_msgs__msg__Motion__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Motion>);
    fn play_motion2_msgs__msg__Motion__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Motion>, out_seq: *mut rosidl_runtime_rs::Sequence<Motion>) -> bool;
}

// Corresponds to play_motion2_msgs__msg__Motion
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Motion {

    // This member is not documented.
    #[allow(missing_docs)]
    pub key: rosidl_runtime_rs::String,

    /// meta
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub usage: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub description: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joints: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub positions: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub times_from_start: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for Motion {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__msg__Motion__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__msg__Motion__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Motion {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__msg__Motion__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__msg__Motion__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__msg__Motion__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Motion {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Motion where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/msg/Motion";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__msg__Motion() }
  }
}


