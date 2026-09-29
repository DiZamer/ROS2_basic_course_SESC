#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__AddMotion_Request() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__srv__AddMotion_Request__init(msg: *mut AddMotion_Request) -> bool;
    fn play_motion2_msgs__srv__AddMotion_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AddMotion_Request>, size: usize) -> bool;
    fn play_motion2_msgs__srv__AddMotion_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AddMotion_Request>);
    fn play_motion2_msgs__srv__AddMotion_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AddMotion_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<AddMotion_Request>) -> bool;
}

// Corresponds to play_motion2_msgs__srv__AddMotion_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddMotion_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motion: super::super::msg::rmw::Motion,


    // This member is not documented.
    #[allow(missing_docs)]
    pub overwrite: bool,

}



impl Default for AddMotion_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__srv__AddMotion_Request__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__srv__AddMotion_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AddMotion_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__AddMotion_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__AddMotion_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__AddMotion_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AddMotion_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AddMotion_Request where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/srv/AddMotion_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__AddMotion_Request() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__AddMotion_Response() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__srv__AddMotion_Response__init(msg: *mut AddMotion_Response) -> bool;
    fn play_motion2_msgs__srv__AddMotion_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AddMotion_Response>, size: usize) -> bool;
    fn play_motion2_msgs__srv__AddMotion_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AddMotion_Response>);
    fn play_motion2_msgs__srv__AddMotion_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AddMotion_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<AddMotion_Response>) -> bool;
}

// Corresponds to play_motion2_msgs__srv__AddMotion_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddMotion_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for AddMotion_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__srv__AddMotion_Response__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__srv__AddMotion_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AddMotion_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__AddMotion_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__AddMotion_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__AddMotion_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AddMotion_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AddMotion_Response where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/srv/AddMotion_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__AddMotion_Response() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__GetMotionInfo_Request() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__srv__GetMotionInfo_Request__init(msg: *mut GetMotionInfo_Request) -> bool;
    fn play_motion2_msgs__srv__GetMotionInfo_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetMotionInfo_Request>, size: usize) -> bool;
    fn play_motion2_msgs__srv__GetMotionInfo_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetMotionInfo_Request>);
    fn play_motion2_msgs__srv__GetMotionInfo_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetMotionInfo_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetMotionInfo_Request>) -> bool;
}

// Corresponds to play_motion2_msgs__srv__GetMotionInfo_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMotionInfo_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motion_key: rosidl_runtime_rs::String,

}



impl Default for GetMotionInfo_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__srv__GetMotionInfo_Request__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__srv__GetMotionInfo_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetMotionInfo_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__GetMotionInfo_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__GetMotionInfo_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__GetMotionInfo_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetMotionInfo_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetMotionInfo_Request where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/srv/GetMotionInfo_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__GetMotionInfo_Request() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__GetMotionInfo_Response() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__srv__GetMotionInfo_Response__init(msg: *mut GetMotionInfo_Response) -> bool;
    fn play_motion2_msgs__srv__GetMotionInfo_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetMotionInfo_Response>, size: usize) -> bool;
    fn play_motion2_msgs__srv__GetMotionInfo_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetMotionInfo_Response>);
    fn play_motion2_msgs__srv__GetMotionInfo_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetMotionInfo_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetMotionInfo_Response>) -> bool;
}

// Corresponds to play_motion2_msgs__srv__GetMotionInfo_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMotionInfo_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motion: super::super::msg::rmw::Motion,

}



impl Default for GetMotionInfo_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__srv__GetMotionInfo_Response__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__srv__GetMotionInfo_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetMotionInfo_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__GetMotionInfo_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__GetMotionInfo_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__GetMotionInfo_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetMotionInfo_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetMotionInfo_Response where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/srv/GetMotionInfo_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__GetMotionInfo_Response() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__IsMotionReady_Request() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__srv__IsMotionReady_Request__init(msg: *mut IsMotionReady_Request) -> bool;
    fn play_motion2_msgs__srv__IsMotionReady_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IsMotionReady_Request>, size: usize) -> bool;
    fn play_motion2_msgs__srv__IsMotionReady_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IsMotionReady_Request>);
    fn play_motion2_msgs__srv__IsMotionReady_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IsMotionReady_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<IsMotionReady_Request>) -> bool;
}

// Corresponds to play_motion2_msgs__srv__IsMotionReady_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsMotionReady_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motion_key: rosidl_runtime_rs::String,

}



impl Default for IsMotionReady_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__srv__IsMotionReady_Request__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__srv__IsMotionReady_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IsMotionReady_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__IsMotionReady_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__IsMotionReady_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__IsMotionReady_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IsMotionReady_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IsMotionReady_Request where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/srv/IsMotionReady_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__IsMotionReady_Request() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__IsMotionReady_Response() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__srv__IsMotionReady_Response__init(msg: *mut IsMotionReady_Response) -> bool;
    fn play_motion2_msgs__srv__IsMotionReady_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IsMotionReady_Response>, size: usize) -> bool;
    fn play_motion2_msgs__srv__IsMotionReady_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IsMotionReady_Response>);
    fn play_motion2_msgs__srv__IsMotionReady_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IsMotionReady_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<IsMotionReady_Response>) -> bool;
}

// Corresponds to play_motion2_msgs__srv__IsMotionReady_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsMotionReady_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_ready: bool,

}



impl Default for IsMotionReady_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__srv__IsMotionReady_Response__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__srv__IsMotionReady_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IsMotionReady_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__IsMotionReady_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__IsMotionReady_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__IsMotionReady_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IsMotionReady_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IsMotionReady_Response where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/srv/IsMotionReady_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__IsMotionReady_Response() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__IsJointListReady_Request() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__srv__IsJointListReady_Request__init(msg: *mut IsJointListReady_Request) -> bool;
    fn play_motion2_msgs__srv__IsJointListReady_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IsJointListReady_Request>, size: usize) -> bool;
    fn play_motion2_msgs__srv__IsJointListReady_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IsJointListReady_Request>);
    fn play_motion2_msgs__srv__IsJointListReady_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IsJointListReady_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<IsJointListReady_Request>) -> bool;
}

// Corresponds to play_motion2_msgs__srv__IsJointListReady_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsJointListReady_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joints: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for IsJointListReady_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__srv__IsJointListReady_Request__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__srv__IsJointListReady_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IsJointListReady_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__IsJointListReady_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__IsJointListReady_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__IsJointListReady_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IsJointListReady_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IsJointListReady_Request where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/srv/IsJointListReady_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__IsJointListReady_Request() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__IsJointListReady_Response() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__srv__IsJointListReady_Response__init(msg: *mut IsJointListReady_Response) -> bool;
    fn play_motion2_msgs__srv__IsJointListReady_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IsJointListReady_Response>, size: usize) -> bool;
    fn play_motion2_msgs__srv__IsJointListReady_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IsJointListReady_Response>);
    fn play_motion2_msgs__srv__IsJointListReady_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IsJointListReady_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<IsJointListReady_Response>) -> bool;
}

// Corresponds to play_motion2_msgs__srv__IsJointListReady_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsJointListReady_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_ready: bool,

}



impl Default for IsJointListReady_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__srv__IsJointListReady_Response__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__srv__IsJointListReady_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IsJointListReady_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__IsJointListReady_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__IsJointListReady_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__IsJointListReady_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IsJointListReady_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IsJointListReady_Response where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/srv/IsJointListReady_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__IsJointListReady_Response() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__ListMotions_Request() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__srv__ListMotions_Request__init(msg: *mut ListMotions_Request) -> bool;
    fn play_motion2_msgs__srv__ListMotions_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ListMotions_Request>, size: usize) -> bool;
    fn play_motion2_msgs__srv__ListMotions_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ListMotions_Request>);
    fn play_motion2_msgs__srv__ListMotions_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ListMotions_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ListMotions_Request>) -> bool;
}

// Corresponds to play_motion2_msgs__srv__ListMotions_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListMotions_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ListMotions_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__srv__ListMotions_Request__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__srv__ListMotions_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ListMotions_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__ListMotions_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__ListMotions_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__ListMotions_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ListMotions_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ListMotions_Request where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/srv/ListMotions_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__ListMotions_Request() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__ListMotions_Response() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__srv__ListMotions_Response__init(msg: *mut ListMotions_Response) -> bool;
    fn play_motion2_msgs__srv__ListMotions_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ListMotions_Response>, size: usize) -> bool;
    fn play_motion2_msgs__srv__ListMotions_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ListMotions_Response>);
    fn play_motion2_msgs__srv__ListMotions_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ListMotions_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ListMotions_Response>) -> bool;
}

// Corresponds to play_motion2_msgs__srv__ListMotions_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListMotions_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motion_keys: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for ListMotions_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__srv__ListMotions_Response__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__srv__ListMotions_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ListMotions_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__ListMotions_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__ListMotions_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__ListMotions_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ListMotions_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ListMotions_Response where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/srv/ListMotions_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__ListMotions_Response() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__RemoveMotion_Request() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__srv__RemoveMotion_Request__init(msg: *mut RemoveMotion_Request) -> bool;
    fn play_motion2_msgs__srv__RemoveMotion_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RemoveMotion_Request>, size: usize) -> bool;
    fn play_motion2_msgs__srv__RemoveMotion_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RemoveMotion_Request>);
    fn play_motion2_msgs__srv__RemoveMotion_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RemoveMotion_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RemoveMotion_Request>) -> bool;
}

// Corresponds to play_motion2_msgs__srv__RemoveMotion_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RemoveMotion_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motion_key: rosidl_runtime_rs::String,

}



impl Default for RemoveMotion_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__srv__RemoveMotion_Request__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__srv__RemoveMotion_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RemoveMotion_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__RemoveMotion_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__RemoveMotion_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__RemoveMotion_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RemoveMotion_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RemoveMotion_Request where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/srv/RemoveMotion_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__RemoveMotion_Request() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__RemoveMotion_Response() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__srv__RemoveMotion_Response__init(msg: *mut RemoveMotion_Response) -> bool;
    fn play_motion2_msgs__srv__RemoveMotion_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RemoveMotion_Response>, size: usize) -> bool;
    fn play_motion2_msgs__srv__RemoveMotion_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RemoveMotion_Response>);
    fn play_motion2_msgs__srv__RemoveMotion_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RemoveMotion_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RemoveMotion_Response>) -> bool;
}

// Corresponds to play_motion2_msgs__srv__RemoveMotion_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RemoveMotion_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for RemoveMotion_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__srv__RemoveMotion_Response__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__srv__RemoveMotion_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RemoveMotion_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__RemoveMotion_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__RemoveMotion_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__RemoveMotion_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RemoveMotion_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RemoveMotion_Response where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/srv/RemoveMotion_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__RemoveMotion_Response() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__SaveMotion_Request() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__srv__SaveMotion_Request__init(msg: *mut SaveMotion_Request) -> bool;
    fn play_motion2_msgs__srv__SaveMotion_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SaveMotion_Request>, size: usize) -> bool;
    fn play_motion2_msgs__srv__SaveMotion_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SaveMotion_Request>);
    fn play_motion2_msgs__srv__SaveMotion_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SaveMotion_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SaveMotion_Request>) -> bool;
}

// Corresponds to play_motion2_msgs__srv__SaveMotion_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SaveMotion_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motion_key: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub filepath: rosidl_runtime_rs::String,

}



impl Default for SaveMotion_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__srv__SaveMotion_Request__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__srv__SaveMotion_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SaveMotion_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__SaveMotion_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__SaveMotion_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__SaveMotion_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SaveMotion_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SaveMotion_Request where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/srv/SaveMotion_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__SaveMotion_Request() }
  }
}


#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__SaveMotion_Response() -> *const std::ffi::c_void;
}

#[link(name = "play_motion2_msgs__rosidl_generator_c")]
extern "C" {
    fn play_motion2_msgs__srv__SaveMotion_Response__init(msg: *mut SaveMotion_Response) -> bool;
    fn play_motion2_msgs__srv__SaveMotion_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SaveMotion_Response>, size: usize) -> bool;
    fn play_motion2_msgs__srv__SaveMotion_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SaveMotion_Response>);
    fn play_motion2_msgs__srv__SaveMotion_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SaveMotion_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SaveMotion_Response>) -> bool;
}

// Corresponds to play_motion2_msgs__srv__SaveMotion_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SaveMotion_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SaveMotion_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !play_motion2_msgs__srv__SaveMotion_Response__init(&mut msg as *mut _) {
        panic!("Call to play_motion2_msgs__srv__SaveMotion_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SaveMotion_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__SaveMotion_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__SaveMotion_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { play_motion2_msgs__srv__SaveMotion_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SaveMotion_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SaveMotion_Response where Self: Sized {
  const TYPE_NAME: &'static str = "play_motion2_msgs/srv/SaveMotion_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__play_motion2_msgs__srv__SaveMotion_Response() }
  }
}






#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__play_motion2_msgs__srv__AddMotion() -> *const std::ffi::c_void;
}

// Corresponds to play_motion2_msgs__srv__AddMotion
#[allow(missing_docs, non_camel_case_types)]
pub struct AddMotion;

impl rosidl_runtime_rs::Service for AddMotion {
    type Request = AddMotion_Request;
    type Response = AddMotion_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__play_motion2_msgs__srv__AddMotion() }
    }
}




#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__play_motion2_msgs__srv__GetMotionInfo() -> *const std::ffi::c_void;
}

// Corresponds to play_motion2_msgs__srv__GetMotionInfo
#[allow(missing_docs, non_camel_case_types)]
pub struct GetMotionInfo;

impl rosidl_runtime_rs::Service for GetMotionInfo {
    type Request = GetMotionInfo_Request;
    type Response = GetMotionInfo_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__play_motion2_msgs__srv__GetMotionInfo() }
    }
}




#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__play_motion2_msgs__srv__IsMotionReady() -> *const std::ffi::c_void;
}

// Corresponds to play_motion2_msgs__srv__IsMotionReady
#[allow(missing_docs, non_camel_case_types)]
pub struct IsMotionReady;

impl rosidl_runtime_rs::Service for IsMotionReady {
    type Request = IsMotionReady_Request;
    type Response = IsMotionReady_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__play_motion2_msgs__srv__IsMotionReady() }
    }
}




#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__play_motion2_msgs__srv__IsJointListReady() -> *const std::ffi::c_void;
}

// Corresponds to play_motion2_msgs__srv__IsJointListReady
#[allow(missing_docs, non_camel_case_types)]
pub struct IsJointListReady;

impl rosidl_runtime_rs::Service for IsJointListReady {
    type Request = IsJointListReady_Request;
    type Response = IsJointListReady_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__play_motion2_msgs__srv__IsJointListReady() }
    }
}




#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__play_motion2_msgs__srv__ListMotions() -> *const std::ffi::c_void;
}

// Corresponds to play_motion2_msgs__srv__ListMotions
#[allow(missing_docs, non_camel_case_types)]
pub struct ListMotions;

impl rosidl_runtime_rs::Service for ListMotions {
    type Request = ListMotions_Request;
    type Response = ListMotions_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__play_motion2_msgs__srv__ListMotions() }
    }
}




#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__play_motion2_msgs__srv__RemoveMotion() -> *const std::ffi::c_void;
}

// Corresponds to play_motion2_msgs__srv__RemoveMotion
#[allow(missing_docs, non_camel_case_types)]
pub struct RemoveMotion;

impl rosidl_runtime_rs::Service for RemoveMotion {
    type Request = RemoveMotion_Request;
    type Response = RemoveMotion_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__play_motion2_msgs__srv__RemoveMotion() }
    }
}




#[link(name = "play_motion2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__play_motion2_msgs__srv__SaveMotion() -> *const std::ffi::c_void;
}

// Corresponds to play_motion2_msgs__srv__SaveMotion
#[allow(missing_docs, non_camel_case_types)]
pub struct SaveMotion;

impl rosidl_runtime_rs::Service for SaveMotion {
    type Request = SaveMotion_Request;
    type Response = SaveMotion_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__play_motion2_msgs__srv__SaveMotion() }
    }
}


