#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to play_motion2_msgs__srv__AddMotion_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddMotion_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motion: super::msg::Motion,


    // This member is not documented.
    #[allow(missing_docs)]
    pub overwrite: bool,

}



impl Default for AddMotion_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::AddMotion_Request::default())
  }
}

impl rosidl_runtime_rs::Message for AddMotion_Request {
  type RmwMsg = super::srv::rmw::AddMotion_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motion: super::msg::Motion::into_rmw_message(std::borrow::Cow::Owned(msg.motion)).into_owned(),
        overwrite: msg.overwrite,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motion: super::msg::Motion::into_rmw_message(std::borrow::Cow::Borrowed(&msg.motion)).into_owned(),
      overwrite: msg.overwrite,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motion: super::msg::Motion::from_rmw_message(msg.motion),
      overwrite: msg.overwrite,
    }
  }
}


// Corresponds to play_motion2_msgs__srv__AddMotion_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddMotion_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for AddMotion_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::AddMotion_Response::default())
  }
}

impl rosidl_runtime_rs::Message for AddMotion_Response {
  type RmwMsg = super::srv::rmw::AddMotion_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}


// Corresponds to play_motion2_msgs__srv__GetMotionInfo_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMotionInfo_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motion_key: std::string::String,

}



impl Default for GetMotionInfo_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetMotionInfo_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetMotionInfo_Request {
  type RmwMsg = super::srv::rmw::GetMotionInfo_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motion_key: msg.motion_key.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motion_key: msg.motion_key.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motion_key: msg.motion_key.to_string(),
    }
  }
}


// Corresponds to play_motion2_msgs__srv__GetMotionInfo_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMotionInfo_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motion: super::msg::Motion,

}



impl Default for GetMotionInfo_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetMotionInfo_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetMotionInfo_Response {
  type RmwMsg = super::srv::rmw::GetMotionInfo_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motion: super::msg::Motion::into_rmw_message(std::borrow::Cow::Owned(msg.motion)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motion: super::msg::Motion::into_rmw_message(std::borrow::Cow::Borrowed(&msg.motion)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motion: super::msg::Motion::from_rmw_message(msg.motion),
    }
  }
}


// Corresponds to play_motion2_msgs__srv__IsMotionReady_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsMotionReady_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motion_key: std::string::String,

}



impl Default for IsMotionReady_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IsMotionReady_Request::default())
  }
}

impl rosidl_runtime_rs::Message for IsMotionReady_Request {
  type RmwMsg = super::srv::rmw::IsMotionReady_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motion_key: msg.motion_key.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motion_key: msg.motion_key.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motion_key: msg.motion_key.to_string(),
    }
  }
}


// Corresponds to play_motion2_msgs__srv__IsMotionReady_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsMotionReady_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_ready: bool,

}



impl Default for IsMotionReady_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IsMotionReady_Response::default())
  }
}

impl rosidl_runtime_rs::Message for IsMotionReady_Response {
  type RmwMsg = super::srv::rmw::IsMotionReady_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        is_ready: msg.is_ready,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      is_ready: msg.is_ready,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      is_ready: msg.is_ready,
    }
  }
}


// Corresponds to play_motion2_msgs__srv__IsJointListReady_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsJointListReady_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joints: Vec<std::string::String>,

}



impl Default for IsJointListReady_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IsJointListReady_Request::default())
  }
}

impl rosidl_runtime_rs::Message for IsJointListReady_Request {
  type RmwMsg = super::srv::rmw::IsJointListReady_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joints: msg.joints
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joints: msg.joints
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      joints: msg.joints
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to play_motion2_msgs__srv__IsJointListReady_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsJointListReady_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_ready: bool,

}



impl Default for IsJointListReady_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IsJointListReady_Response::default())
  }
}

impl rosidl_runtime_rs::Message for IsJointListReady_Response {
  type RmwMsg = super::srv::rmw::IsJointListReady_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        is_ready: msg.is_ready,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      is_ready: msg.is_ready,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      is_ready: msg.is_ready,
    }
  }
}


// Corresponds to play_motion2_msgs__srv__ListMotions_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListMotions_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ListMotions_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ListMotions_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ListMotions_Request {
  type RmwMsg = super::srv::rmw::ListMotions_Request;

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


// Corresponds to play_motion2_msgs__srv__ListMotions_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListMotions_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motion_keys: Vec<std::string::String>,

}



impl Default for ListMotions_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ListMotions_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ListMotions_Response {
  type RmwMsg = super::srv::rmw::ListMotions_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motion_keys: msg.motion_keys
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motion_keys: msg.motion_keys
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motion_keys: msg.motion_keys
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to play_motion2_msgs__srv__RemoveMotion_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RemoveMotion_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motion_key: std::string::String,

}



impl Default for RemoveMotion_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RemoveMotion_Request::default())
  }
}

impl rosidl_runtime_rs::Message for RemoveMotion_Request {
  type RmwMsg = super::srv::rmw::RemoveMotion_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motion_key: msg.motion_key.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motion_key: msg.motion_key.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motion_key: msg.motion_key.to_string(),
    }
  }
}


// Corresponds to play_motion2_msgs__srv__RemoveMotion_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RemoveMotion_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for RemoveMotion_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RemoveMotion_Response::default())
  }
}

impl rosidl_runtime_rs::Message for RemoveMotion_Response {
  type RmwMsg = super::srv::rmw::RemoveMotion_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}


// Corresponds to play_motion2_msgs__srv__SaveMotion_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SaveMotion_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motion_key: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub filepath: std::string::String,

}



impl Default for SaveMotion_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SaveMotion_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SaveMotion_Request {
  type RmwMsg = super::srv::rmw::SaveMotion_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motion_key: msg.motion_key.as_str().into(),
        filepath: msg.filepath.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motion_key: msg.motion_key.as_str().into(),
        filepath: msg.filepath.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motion_key: msg.motion_key.to_string(),
      filepath: msg.filepath.to_string(),
    }
  }
}


// Corresponds to play_motion2_msgs__srv__SaveMotion_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SaveMotion_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SaveMotion_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SaveMotion_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SaveMotion_Response {
  type RmwMsg = super::srv::rmw::SaveMotion_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
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


