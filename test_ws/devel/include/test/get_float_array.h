// Generated by gencpp from file test/get_float_array.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_GET_FLOAT_ARRAY_H
#define TEST_MESSAGE_GET_FLOAT_ARRAY_H

#include <ros/service_traits.h>


#include <test/get_float_arrayRequest.h>
#include <test/get_float_arrayResponse.h>


namespace test
{

struct get_float_array
{

typedef get_float_arrayRequest Request;
typedef get_float_arrayResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct get_float_array
} // namespace test


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test::get_float_array > {
  static const char* value()
  {
    return "7aae320d0f914d7069b041ff192847e1";
  }

  static const char* value(const ::test::get_float_array&) { return value(); }
};

template<>
struct DataType< ::test::get_float_array > {
  static const char* value()
  {
    return "test/get_float_array";
  }

  static const char* value(const ::test::get_float_array&) { return value(); }
};


// service_traits::MD5Sum< ::test::get_float_arrayRequest> should match 
// service_traits::MD5Sum< ::test::get_float_array > 
template<>
struct MD5Sum< ::test::get_float_arrayRequest>
{
  static const char* value()
  {
    return MD5Sum< ::test::get_float_array >::value();
  }
  static const char* value(const ::test::get_float_arrayRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::get_float_arrayRequest> should match 
// service_traits::DataType< ::test::get_float_array > 
template<>
struct DataType< ::test::get_float_arrayRequest>
{
  static const char* value()
  {
    return DataType< ::test::get_float_array >::value();
  }
  static const char* value(const ::test::get_float_arrayRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test::get_float_arrayResponse> should match 
// service_traits::MD5Sum< ::test::get_float_array > 
template<>
struct MD5Sum< ::test::get_float_arrayResponse>
{
  static const char* value()
  {
    return MD5Sum< ::test::get_float_array >::value();
  }
  static const char* value(const ::test::get_float_arrayResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::get_float_arrayResponse> should match 
// service_traits::DataType< ::test::get_float_array > 
template<>
struct DataType< ::test::get_float_arrayResponse>
{
  static const char* value()
  {
    return DataType< ::test::get_float_array >::value();
  }
  static const char* value(const ::test::get_float_arrayResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_MESSAGE_GET_FLOAT_ARRAY_H
