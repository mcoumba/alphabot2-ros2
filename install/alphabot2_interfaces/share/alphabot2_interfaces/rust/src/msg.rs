#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to alphabot2_interfaces__msg__Obstacle

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Obstacle {

    // This member is not documented.
    #[allow(missing_docs)]
    pub left_obstacle: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_obstacle: bool,

}



impl Default for Obstacle {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Obstacle::default())
  }
}

impl rosidl_runtime_rs::Message for Obstacle {
  type RmwMsg = super::msg::rmw::Obstacle;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        left_obstacle: msg.left_obstacle,
        right_obstacle: msg.right_obstacle,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      left_obstacle: msg.left_obstacle,
      right_obstacle: msg.right_obstacle,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      left_obstacle: msg.left_obstacle,
      right_obstacle: msg.right_obstacle,
    }
  }
}


