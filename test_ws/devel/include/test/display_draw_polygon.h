// Generated by gencpp from file test/display_draw_polygon.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_DISPLAY_DRAW_POLYGON_H
#define TEST_MESSAGE_DISPLAY_DRAW_POLYGON_H

#include <ros/service_traits.h>


#include <test/display_draw_polygonRequest.h>
#include <test/display_draw_polygonResponse.h>


namespace test
{

struct display_draw_polygon
{

typedef display_draw_polygonRequest Request;
typedef display_draw_polygonResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct display_draw_polygon
} // namespace test


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test::display_draw_polygon > {
  static const char* value()
  {
    return "dfa1f0ed4de4cc45db83bc60add40eb6";
  }

  static const char* value(const ::test::display_draw_polygon&) { return value(); }
};

template<>
struct DataType< ::test::display_draw_polygon > {
  static const char* value()
  {
    return "test/display_draw_polygon";
  }

  static const char* value(const ::test::display_draw_polygon&) { return value(); }
};


// service_traits::MD5Sum< ::test::display_draw_polygonRequest> should match 
// service_traits::MD5Sum< ::test::display_draw_polygon > 
template<>
struct MD5Sum< ::test::display_draw_polygonRequest>
{
  static const char* value()
  {
    return MD5Sum< ::test::display_draw_polygon >::value();
  }
  static const char* value(const ::test::display_draw_polygonRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::display_draw_polygonRequest> should match 
// service_traits::DataType< ::test::display_draw_polygon > 
template<>
struct DataType< ::test::display_draw_polygonRequest>
{
  static const char* value()
  {
    return DataType< ::test::display_draw_polygon >::value();
  }
  static const char* value(const ::test::display_draw_polygonRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test::display_draw_polygonResponse> should match 
// service_traits::MD5Sum< ::test::display_draw_polygon > 
template<>
struct MD5Sum< ::test::display_draw_polygonResponse>
{
  static const char* value()
  {
    return MD5Sum< ::test::display_draw_polygon >::value();
  }
  static const char* value(const ::test::display_draw_polygonResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::test::display_draw_polygonResponse> should match 
// service_traits::DataType< ::test::display_draw_polygon > 
template<>
struct DataType< ::test::display_draw_polygonResponse>
{
  static const char* value()
  {
    return DataType< ::test::display_draw_polygon >::value();
  }
  static const char* value(const ::test::display_draw_polygonResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_MESSAGE_DISPLAY_DRAW_POLYGON_H
