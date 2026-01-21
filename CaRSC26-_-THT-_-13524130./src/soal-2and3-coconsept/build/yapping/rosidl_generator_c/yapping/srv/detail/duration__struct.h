// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yapping:srv/Duration.idl
// generated code does not contain a copyright notice

#ifndef YAPPING__SRV__DETAIL__DURATION__STRUCT_H_
#define YAPPING__SRV__DETAIL__DURATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start_time'
// Member 'end_time'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Duration in the package yapping.
typedef struct yapping__srv__Duration_Request
{
  rosidl_runtime_c__String start_time;
  rosidl_runtime_c__String end_time;
} yapping__srv__Duration_Request;

// Struct for a sequence of yapping__srv__Duration_Request.
typedef struct yapping__srv__Duration_Request__Sequence
{
  yapping__srv__Duration_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yapping__srv__Duration_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'iso_duration'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Duration in the package yapping.
typedef struct yapping__srv__Duration_Response
{
  rosidl_runtime_c__String iso_duration;
} yapping__srv__Duration_Response;

// Struct for a sequence of yapping__srv__Duration_Response.
typedef struct yapping__srv__Duration_Response__Sequence
{
  yapping__srv__Duration_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yapping__srv__Duration_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YAPPING__SRV__DETAIL__DURATION__STRUCT_H_
