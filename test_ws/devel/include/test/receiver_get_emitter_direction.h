// Generated by gencpp from file test/receiver_get_emitter_direction.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_RECEIVER_GET_EMITTER_DIRECTION_H
#define TEST_MESSAGE_RECEIVER_GET_EMITTER_DIRECTION_H

#include <ros/service_traits.h>


#include <test/receiver_get_emitter_directionRequest.h>
#include <test/receiver_get_emitter_directionResponse.h>


namespace test
{

struct receiver_get_emitter_direction
{

typedef receiver_get_emitter_directionRequest Request;
typedef receiver_get_emitter_directionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct receiver_get_emitter_direction
} // namespace test


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test::receiver_get_emitter_direction > {
  static const char* value()
  {
    return "cad5a90bedce22b568c949b40e9cc6e0";
  }

  static const char* value(const ::test::receiver_get_emitter_direction&) { return value(); }
};

template<>
struct DataType< ::test::receiver_get_emitter_direction > {
  static const char* value()
  {
    return "test/receiver_get_emitter_direction";
  }

  static const char* value(const ::test::receiver_get_emitter_direction&) { return value(); }
};


// service_traits::MD5Sum< ::test::receiver_get_emitter_directionRequest> should match 
// service_traits::MD5Sum< ::test::receiver_get_emitter_direction > 
template<>
struct MD5Sum< ::test::receiver_get_emitter_directionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::test::receiver_get_emitter_direction >::value();
  }
  static const char* value(const ::test::receiver_get_emitter_directionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::receiver_get_emitter_directionRequest> should match 
// service_traits::DataType< ::test::receiver_get_emitter_direction > 
template<>
struct DataType< ::test::receiver_get_emitter_directionRequest>
{
  static const char* value()
  {
    return DataType< ::test::receiver_get_emitter_direction >::value();
  }
  static const char* value(const ::test::receiver_get_emitter_directionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test::receiver_get_emitter_directionResponse> should match 
// service_traits::MD5Sum< ::test::receiver_get_emitter_direction > 
template<>
struct MD5Sum< ::test::receiver_get_emitter_directionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::test::receiver_get_emitter_direction >::value();
  }
  static const char* value(const ::test::receiver_get_emitter_directionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::receiver_get_emitter_directionResponse> should match 
// service_traits::DataType< ::test::receiver_get_emitter_direction > 
template<>
struct DataType< ::test::receiver_get_emitter_directionResponse>
{
  static const char* value()
  {
    return DataType< ::test::receiver_get_emitter_direction >::value();
  }
  static const char* value(const ::test::receiver_get_emitter_directionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_MESSAGE_RECEIVER_GET_EMITTER_DIRECTION_H