#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to play_motion2_msgs__msg__Motion

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Motion {

    // This member is not documented.
    #[allow(missing_docs)]
    pub key: std::string::String,

    /// meta
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub usage: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub description: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joints: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub positions: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub times_from_start: Vec<f64>,

}



impl Default for Motion {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Motion::default())
  }
}

impl rosidl_runtime_rs::Message for Motion {
  type RmwMsg = super::msg::rmw::Motion;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        key: msg.key.as_str().into(),
        name: msg.name.as_str().into(),
        usage: msg.usage.as_str().into(),
        description: msg.description.as_str().into(),
        joints: msg.joints
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        positions: msg.positions.into(),
        times_from_start: msg.times_from_start.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        key: msg.key.as_str().into(),
        name: msg.name.as_str().into(),
        usage: msg.usage.as_str().into(),
        description: msg.description.as_str().into(),
        joints: msg.joints
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        positions: msg.positions.as_slice().into(),
        times_from_start: msg.times_from_start.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      key: msg.key.to_string(),
      name: msg.name.to_string(),
      usage: msg.usage.to_string(),
      description: msg.description.to_string(),
      joints: msg.joints
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      positions: msg.positions
          .into_iter()
          .collect(),
      times_from_start: msg.times_from_start
          .into_iter()
          .collect(),
    }
  }
}


