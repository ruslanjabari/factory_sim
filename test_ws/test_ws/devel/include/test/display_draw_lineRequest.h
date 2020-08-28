// Generated by gencpp from file test/display_draw_lineRequest.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_DISPLAY_DRAW_LINEREQUEST_H
#define TEST_MESSAGE_DISPLAY_DRAW_LINEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace test
{
template <class ContainerAllocator>
struct display_draw_lineRequest_
{
  typedef display_draw_lineRequest_<ContainerAllocator> Type;

  display_draw_lineRequest_()
    : x1(0)
    , y1(0)
    , x2(0)
    , y2(0)  {
    }
  display_draw_lineRequest_(const ContainerAllocator& _alloc)
    : x1(0)
    , y1(0)
    , x2(0)
    , y2(0)  {
  (void)_alloc;
    }



   typedef int32_t _x1_type;
  _x1_type x1;

   typedef int32_t _y1_type;
  _y1_type y1;

   typedef int32_t _x2_type;
  _x2_type x2;

   typedef int32_t _y2_type;
  _y2_type y2;





  typedef boost::shared_ptr< ::test::display_draw_lineRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test::display_draw_lineRequest_<ContainerAllocator> const> ConstPtr;

}; // struct display_draw_lineRequest_

typedef ::test::display_draw_lineRequest_<std::allocator<void> > display_draw_lineRequest;

typedef boost::shared_ptr< ::test::display_draw_lineRequest > display_draw_lineRequestPtr;
typedef boost::shared_ptr< ::test::display_draw_lineRequest const> display_draw_lineRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test::display_draw_lineRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test::display_draw_lineRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'test': ['/home/nbhak/Desktop/test_ws/src/test/msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test::display_draw_lineRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test::display_draw_lineRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::display_draw_lineRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::display_draw_lineRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::display_draw_lineRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::display_draw_lineRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test::display_draw_lineRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "01b404007f6687249fa0f27eea3c1daf";
  }

  static const char* value(const ::test::display_draw_lineRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x01b404007f668724ULL;
  static const uint64_t static_value2 = 0x9fa0f27eea3c1dafULL;
};

template<class ContainerAllocator>
struct DataType< ::test::display_draw_lineRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test/display_draw_lineRequest";
  }

  static const char* value(const ::test::display_draw_lineRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test::display_draw_lineRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 x1\n\
int32 y1\n\
int32 x2\n\
int32 y2\n\
";
  }

  static const char* value(const ::test::display_draw_lineRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test::display_draw_lineRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x1);
      stream.next(m.y1);
      stream.next(m.x2);
      stream.next(m.y2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct display_draw_lineRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test::display_draw_lineRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test::display_draw_lineRequest_<ContainerAllocator>& v)
  {
    s << indent << "x1: ";
    Printer<int32_t>::stream(s, indent + "  ", v.x1);
    s << indent << "y1: ";
    Printer<int32_t>::stream(s, indent + "  ", v.y1);
    s << indent << "x2: ";
    Printer<int32_t>::stream(s, indent + "  ", v.x2);
    s << indent << "y2: ";
    Printer<int32_t>::stream(s, indent + "  ", v.y2);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_MESSAGE_DISPLAY_DRAW_LINEREQUEST_H