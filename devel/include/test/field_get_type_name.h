// Generated by gencpp from file test/field_get_type_name.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_FIELD_GET_TYPE_NAME_H
#define TEST_MESSAGE_FIELD_GET_TYPE_NAME_H

#include <ros/service_traits.h>


#include <test/field_get_type_nameRequest.h>
#include <test/field_get_type_nameResponse.h>


namespace test
{

struct field_get_type_name
{

typedef field_get_type_nameRequest Request;
typedef field_get_type_nameResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct field_get_type_name
} // namespace test


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test::field_get_type_name > {
  static const char* value()
  {
    return "5a98464d3ca05386300217ec41ec161f";
  }

  static const char* value(const ::test::field_get_type_name&) { return value(); }
};

template<>
struct DataType< ::test::field_get_type_name > {
  static const char* value()
  {
    return "test/field_get_type_name";
  }

  static const char* value(const ::test::field_get_type_name&) { return value(); }
};


// service_traits::MD5Sum< ::test::field_get_type_nameRequest> should match 
// service_traits::MD5Sum< ::test::field_get_type_name > 
template<>
struct MD5Sum< ::test::field_get_type_nameRequest>
{
  static const char* value()
  {
    return MD5Sum< ::test::field_get_type_name >::value();
  }
  static const char* value(const ::test::field_get_type_nameRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::field_get_type_nameRequest> should match 
// service_traits::DataType< ::test::field_get_type_name > 
template<>
struct DataType< ::test::field_get_type_nameRequest>
{
  static const char* value()
  {
    return DataType< ::test::field_get_type_name >::value();
  }
  static const char* value(const ::test::field_get_type_nameRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test::field_get_type_nameResponse> should match 
// service_traits::MD5Sum< ::test::field_get_type_name > 
template<>
struct MD5Sum< ::test::field_get_type_nameResponse>
{
  static const char* value()
  {
    return MD5Sum< ::test::field_get_type_name >::value();
  }
  static const char* value(const ::test::field_get_type_nameResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::field_get_type_nameResponse> should match 
// service_traits::DataType< ::test::field_get_type_name > 
template<>
struct DataType< ::test::field_get_type_nameResponse>
{
  static const char* value()
  {
    return DataType< ::test::field_get_type_name >::value();
  }
  static const char* value(const ::test::field_get_type_nameResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_MESSAGE_FIELD_GET_TYPE_NAME_H