// Generated by gencpp from file test/node_get_contact_point.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_NODE_GET_CONTACT_POINT_H
#define TEST_MESSAGE_NODE_GET_CONTACT_POINT_H

#include <ros/service_traits.h>


#include <test/node_get_contact_pointRequest.h>
#include <test/node_get_contact_pointResponse.h>


namespace test
{

struct node_get_contact_point
{

typedef node_get_contact_pointRequest Request;
typedef node_get_contact_pointResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct node_get_contact_point
} // namespace test


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test::node_get_contact_point > {
  static const char* value()
  {
    return "d85a7c32d5696fcbf69df9280ddce70d";
  }

  static const char* value(const ::test::node_get_contact_point&) { return value(); }
};

template<>
struct DataType< ::test::node_get_contact_point > {
  static const char* value()
  {
    return "test/node_get_contact_point";
  }

  static const char* value(const ::test::node_get_contact_point&) { return value(); }
};


// service_traits::MD5Sum< ::test::node_get_contact_pointRequest> should match 
// service_traits::MD5Sum< ::test::node_get_contact_point > 
template<>
struct MD5Sum< ::test::node_get_contact_pointRequest>
{
  static const char* value()
  {
    return MD5Sum< ::test::node_get_contact_point >::value();
  }
  static const char* value(const ::test::node_get_contact_pointRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::node_get_contact_pointRequest> should match 
// service_traits::DataType< ::test::node_get_contact_point > 
template<>
struct DataType< ::test::node_get_contact_pointRequest>
{
  static const char* value()
  {
    return DataType< ::test::node_get_contact_point >::value();
  }
  static const char* value(const ::test::node_get_contact_pointRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test::node_get_contact_pointResponse> should match 
// service_traits::MD5Sum< ::test::node_get_contact_point > 
template<>
struct MD5Sum< ::test::node_get_contact_pointResponse>
{
  static const char* value()
  {
    return MD5Sum< ::test::node_get_contact_point >::value();
  }
  static const char* value(const ::test::node_get_contact_pointResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::node_get_contact_pointResponse> should match 
// service_traits::DataType< ::test::node_get_contact_point > 
template<>
struct DataType< ::test::node_get_contact_pointResponse>
{
  static const char* value()
  {
    return DataType< ::test::node_get_contact_point >::value();
  }
  static const char* value(const ::test::node_get_contact_pointResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_MESSAGE_NODE_GET_CONTACT_POINT_H