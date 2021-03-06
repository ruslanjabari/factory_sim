// Generated by gencpp from file test/field_set_color.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_FIELD_SET_COLOR_H
#define TEST_MESSAGE_FIELD_SET_COLOR_H

#include <ros/service_traits.h>


#include <test/field_set_colorRequest.h>
#include <test/field_set_colorResponse.h>


namespace test
{

struct field_set_color
{

typedef field_set_colorRequest Request;
typedef field_set_colorResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct field_set_color
} // namespace test


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test::field_set_color > {
  static const char* value()
  {
    return "a58a56eaaf940e418b6c8321888e9929";
  }

  static const char* value(const ::test::field_set_color&) { return value(); }
};

template<>
struct DataType< ::test::field_set_color > {
  static const char* value()
  {
    return "test/field_set_color";
  }

  static const char* value(const ::test::field_set_color&) { return value(); }
};


// service_traits::MD5Sum< ::test::field_set_colorRequest> should match 
// service_traits::MD5Sum< ::test::field_set_color > 
template<>
struct MD5Sum< ::test::field_set_colorRequest>
{
  static const char* value()
  {
    return MD5Sum< ::test::field_set_color >::value();
  }
  static const char* value(const ::test::field_set_colorRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::field_set_colorRequest> should match 
// service_traits::DataType< ::test::field_set_color > 
template<>
struct DataType< ::test::field_set_colorRequest>
{
  static const char* value()
  {
    return DataType< ::test::field_set_color >::value();
  }
  static const char* value(const ::test::field_set_colorRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test::field_set_colorResponse> should match 
// service_traits::MD5Sum< ::test::field_set_color > 
template<>
struct MD5Sum< ::test::field_set_colorResponse>
{
  static const char* value()
  {
    return MD5Sum< ::test::field_set_color >::value();
  }
  static const char* value(const ::test::field_set_colorResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::field_set_colorResponse> should match 
// service_traits::DataType< ::test::field_set_color > 
template<>
struct DataType< ::test::field_set_colorResponse>
{
  static const char* value()
  {
    return DataType< ::test::field_set_color >::value();
  }
  static const char* value(const ::test::field_set_colorResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_MESSAGE_FIELD_SET_COLOR_H
