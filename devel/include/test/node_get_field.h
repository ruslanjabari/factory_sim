// Generated by gencpp from file test/node_get_field.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_NODE_GET_FIELD_H
#define TEST_MESSAGE_NODE_GET_FIELD_H

#include <ros/service_traits.h>


#include <test/node_get_fieldRequest.h>
#include <test/node_get_fieldResponse.h>


namespace test
{

struct node_get_field
{

typedef node_get_fieldRequest Request;
typedef node_get_fieldResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct node_get_field
} // namespace test


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test::node_get_field > {
  static const char* value()
  {
    return "80105ddcb86dd98488ad3cf099686b86";
  }

  static const char* value(const ::test::node_get_field&) { return value(); }
};

template<>
struct DataType< ::test::node_get_field > {
  static const char* value()
  {
    return "test/node_get_field";
  }

  static const char* value(const ::test::node_get_field&) { return value(); }
};


// service_traits::MD5Sum< ::test::node_get_fieldRequest> should match 
// service_traits::MD5Sum< ::test::node_get_field > 
template<>
struct MD5Sum< ::test::node_get_fieldRequest>
{
  static const char* value()
  {
    return MD5Sum< ::test::node_get_field >::value();
  }
  static const char* value(const ::test::node_get_fieldRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::node_get_fieldRequest> should match 
// service_traits::DataType< ::test::node_get_field > 
template<>
struct DataType< ::test::node_get_fieldRequest>
{
  static const char* value()
  {
    return DataType< ::test::node_get_field >::value();
  }
  static const char* value(const ::test::node_get_fieldRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test::node_get_fieldResponse> should match 
// service_traits::MD5Sum< ::test::node_get_field > 
template<>
struct MD5Sum< ::test::node_get_fieldResponse>
{
  static const char* value()
  {
    return MD5Sum< ::test::node_get_field >::value();
  }
  static const char* value(const ::test::node_get_fieldResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::node_get_fieldResponse> should match 
// service_traits::DataType< ::test::node_get_field > 
template<>
struct DataType< ::test::node_get_fieldResponse>
{
  static const char* value()
  {
    return DataType< ::test::node_get_field >::value();
  }
  static const char* value(const ::test::node_get_fieldResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_MESSAGE_NODE_GET_FIELD_H