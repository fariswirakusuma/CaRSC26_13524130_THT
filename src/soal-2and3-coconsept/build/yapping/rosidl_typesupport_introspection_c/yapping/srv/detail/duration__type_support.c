// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yapping:srv/Duration.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yapping/srv/detail/duration__rosidl_typesupport_introspection_c.h"
#include "yapping/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yapping/srv/detail/duration__functions.h"
#include "yapping/srv/detail/duration__struct.h"


// Include directives for member types
// Member `start_time`
// Member `end_time`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void yapping__srv__Duration_Request__rosidl_typesupport_introspection_c__Duration_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yapping__srv__Duration_Request__init(message_memory);
}

void yapping__srv__Duration_Request__rosidl_typesupport_introspection_c__Duration_Request_fini_function(void * message_memory)
{
  yapping__srv__Duration_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember yapping__srv__Duration_Request__rosidl_typesupport_introspection_c__Duration_Request_message_member_array[2] = {
  {
    "start_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yapping__srv__Duration_Request, start_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yapping__srv__Duration_Request, end_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers yapping__srv__Duration_Request__rosidl_typesupport_introspection_c__Duration_Request_message_members = {
  "yapping__srv",  // message namespace
  "Duration_Request",  // message name
  2,  // number of fields
  sizeof(yapping__srv__Duration_Request),
  yapping__srv__Duration_Request__rosidl_typesupport_introspection_c__Duration_Request_message_member_array,  // message members
  yapping__srv__Duration_Request__rosidl_typesupport_introspection_c__Duration_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  yapping__srv__Duration_Request__rosidl_typesupport_introspection_c__Duration_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t yapping__srv__Duration_Request__rosidl_typesupport_introspection_c__Duration_Request_message_type_support_handle = {
  0,
  &yapping__srv__Duration_Request__rosidl_typesupport_introspection_c__Duration_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yapping
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yapping, srv, Duration_Request)() {
  if (!yapping__srv__Duration_Request__rosidl_typesupport_introspection_c__Duration_Request_message_type_support_handle.typesupport_identifier) {
    yapping__srv__Duration_Request__rosidl_typesupport_introspection_c__Duration_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &yapping__srv__Duration_Request__rosidl_typesupport_introspection_c__Duration_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "yapping/srv/detail/duration__rosidl_typesupport_introspection_c.h"
// already included above
// #include "yapping/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "yapping/srv/detail/duration__functions.h"
// already included above
// #include "yapping/srv/detail/duration__struct.h"


// Include directives for member types
// Member `iso_duration`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void yapping__srv__Duration_Response__rosidl_typesupport_introspection_c__Duration_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yapping__srv__Duration_Response__init(message_memory);
}

void yapping__srv__Duration_Response__rosidl_typesupport_introspection_c__Duration_Response_fini_function(void * message_memory)
{
  yapping__srv__Duration_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember yapping__srv__Duration_Response__rosidl_typesupport_introspection_c__Duration_Response_message_member_array[1] = {
  {
    "iso_duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yapping__srv__Duration_Response, iso_duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers yapping__srv__Duration_Response__rosidl_typesupport_introspection_c__Duration_Response_message_members = {
  "yapping__srv",  // message namespace
  "Duration_Response",  // message name
  1,  // number of fields
  sizeof(yapping__srv__Duration_Response),
  yapping__srv__Duration_Response__rosidl_typesupport_introspection_c__Duration_Response_message_member_array,  // message members
  yapping__srv__Duration_Response__rosidl_typesupport_introspection_c__Duration_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  yapping__srv__Duration_Response__rosidl_typesupport_introspection_c__Duration_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t yapping__srv__Duration_Response__rosidl_typesupport_introspection_c__Duration_Response_message_type_support_handle = {
  0,
  &yapping__srv__Duration_Response__rosidl_typesupport_introspection_c__Duration_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yapping
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yapping, srv, Duration_Response)() {
  if (!yapping__srv__Duration_Response__rosidl_typesupport_introspection_c__Duration_Response_message_type_support_handle.typesupport_identifier) {
    yapping__srv__Duration_Response__rosidl_typesupport_introspection_c__Duration_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &yapping__srv__Duration_Response__rosidl_typesupport_introspection_c__Duration_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "yapping/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "yapping/srv/detail/duration__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers yapping__srv__detail__duration__rosidl_typesupport_introspection_c__Duration_service_members = {
  "yapping__srv",  // service namespace
  "Duration",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // yapping__srv__detail__duration__rosidl_typesupport_introspection_c__Duration_Request_message_type_support_handle,
  NULL  // response message
  // yapping__srv__detail__duration__rosidl_typesupport_introspection_c__Duration_Response_message_type_support_handle
};

static rosidl_service_type_support_t yapping__srv__detail__duration__rosidl_typesupport_introspection_c__Duration_service_type_support_handle = {
  0,
  &yapping__srv__detail__duration__rosidl_typesupport_introspection_c__Duration_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yapping, srv, Duration_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yapping, srv, Duration_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yapping
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yapping, srv, Duration)() {
  if (!yapping__srv__detail__duration__rosidl_typesupport_introspection_c__Duration_service_type_support_handle.typesupport_identifier) {
    yapping__srv__detail__duration__rosidl_typesupport_introspection_c__Duration_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)yapping__srv__detail__duration__rosidl_typesupport_introspection_c__Duration_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yapping, srv, Duration_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yapping, srv, Duration_Response)()->data;
  }

  return &yapping__srv__detail__duration__rosidl_typesupport_introspection_c__Duration_service_type_support_handle;
}
