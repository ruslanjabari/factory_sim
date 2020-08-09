// Generated by gencpp from file test/get_uint64.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_GET_UINT64_H
#define TEST_MESSAGE_GET_UINT64_H

#include <ros/service_traits.h>


#include <test/get_uint64Request.h>
#include <test/get_uint64Response.h>


namespace test
{

struct get_uint64
{

typedef get_uint64Request Request;
typedef get_uint64Response Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct get_uint64
} // namespace test


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test::get_uint64 > {
  static const char* value()
  {
    return "d531f9d37648dc4de8bf2e757ee280a0";
  }

  static const char* value(const ::test::get_uint64&) { return value(); }
};

template<>
struct DataType< ::test::get_uint64 > {
  static const char* value()
  {
    return "test/get_uint64";
  }

  static const char* value(const ::test::get_uint64&) { return value(); }
};


// service_traits::MD5Sum< ::test::get_uint64Request> should match 
// service_traits::MD5Sum< ::test::get_uint64 > 
template<>
struct MD5Sum< ::test::get_uint64Request>
{
  static const char* value()
  {
    return MD5Sum< ::test::get_uint64 >::value();
  }
  static const char* value(const ::test::get_uint64Request&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::get_uint64Request> should match 
// service_traits::DataType< ::test::get_uint64 > 
template<>
struct DataType< ::test::get_uint64Request>
{
  static const char* value()
  {
    return DataType< ::test::get_uint64 >::value();
  }
  static const char* value(const ::test::get_uint64Request&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test::get_uint64Response> should match 
// service_traits::MD5Sum< ::test::get_uint64 > 
template<>
struct MD5Sum< ::test::get_uint64Response>
{
  static const char* value()
  {
    return MD5Sum< ::test::get_uint64 >::value();
  }
  static const char* value(const ::test::get_uint64Response&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::get_uint64Response> should match 
// service_traits::DataType< ::test::get_uint64 > 
template<>
struct DataType< ::test::get_uint64Response>
{
  static const char* value()
  {
    return DataType< ::test::get_uint64 >::value();
  }
  static const char* value(const ::test::get_uint64Response&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_MESSAGE_GET_UINT64_H