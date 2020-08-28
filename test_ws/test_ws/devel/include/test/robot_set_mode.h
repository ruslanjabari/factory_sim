// Generated by gencpp from file test/robot_set_mode.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_ROBOT_SET_MODE_H
#define TEST_MESSAGE_ROBOT_SET_MODE_H

#include <ros/service_traits.h>


#include <test/robot_set_modeRequest.h>
#include <test/robot_set_modeResponse.h>


namespace test
{

struct robot_set_mode
{

typedef robot_set_modeRequest Request;
typedef robot_set_modeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct robot_set_mode
} // namespace test


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test::robot_set_mode > {
  static const char* value()
  {
    return "ef8b4f277f1a6d92a8c4d6a68a3850de";
  }

  static const char* value(const ::test::robot_set_mode&) { return value(); }
};

template<>
struct DataType< ::test::robot_set_mode > {
  static const char* value()
  {
    return "test/robot_set_mode";
  }

  static const char* value(const ::test::robot_set_mode&) { return value(); }
};


// service_traits::MD5Sum< ::test::robot_set_modeRequest> should match 
// service_traits::MD5Sum< ::test::robot_set_mode > 
template<>
struct MD5Sum< ::test::robot_set_modeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::test::robot_set_mode >::value();
  }
  static const char* value(const ::test::robot_set_modeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::robot_set_modeRequest> should match 
// service_traits::DataType< ::test::robot_set_mode > 
template<>
struct DataType< ::test::robot_set_modeRequest>
{
  static const char* value()
  {
    return DataType< ::test::robot_set_mode >::value();
  }
  static const char* value(const ::test::robot_set_modeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test::robot_set_modeResponse> should match 
// service_traits::MD5Sum< ::test::robot_set_mode > 
template<>
struct MD5Sum< ::test::robot_set_modeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::test::robot_set_mode >::value();
  }
  static const char* value(const ::test::robot_set_modeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::robot_set_modeResponse> should match 
// service_traits::DataType< ::test::robot_set_mode > 
template<>
struct DataType< ::test::robot_set_modeResponse>
{
  static const char* value()
  {
    return DataType< ::test::robot_set_mode >::value();
  }
  static const char* value(const ::test::robot_set_modeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_MESSAGE_ROBOT_SET_MODE_H