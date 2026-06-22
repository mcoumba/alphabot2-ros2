#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "alphabot2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__alphabot2_interfaces__msg__Obstacle() -> *const std::ffi::c_void;
}

#[link(name = "alphabot2_interfaces__rosidl_generator_c")]
extern "C" {
    fn alphabot2_interfaces__msg__Obstacle__init(msg: *mut Obstacle) -> bool;
    fn alphabot2_interfaces__msg__Obstacle__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Obstacle>, size: usize) -> bool;
    fn alphabot2_interfaces__msg__Obstacle__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Obstacle>);
    fn alphabot2_interfaces__msg__Obstacle__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Obstacle>, out_seq: *mut rosidl_runtime_rs::Sequence<Obstacle>) -> bool;
}

// Corresponds to alphabot2_interfaces__msg__Obstacle
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !alphabot2_interfaces__msg__Obstacle__init(&mut msg as *mut _) {
        panic!("Call to alphabot2_interfaces__msg__Obstacle__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Obstacle {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { alphabot2_interfaces__msg__Obstacle__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { alphabot2_interfaces__msg__Obstacle__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { alphabot2_interfaces__msg__Obstacle__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Obstacle {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Obstacle where Self: Sized {
  const TYPE_NAME: &'static str = "alphabot2_interfaces/msg/Obstacle";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__alphabot2_interfaces__msg__Obstacle() }
  }
}


