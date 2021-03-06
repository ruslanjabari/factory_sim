// Generated by gencpp from file test/get_urdfRequest.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_GET_URDFREQUEST_H
#define TEST_MESSAGE_GET_URDFREQUEST_H


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
struct get_urdfRequest_
{
  typedef get_urdfRequest_<ContainerAllocator> Type;

  get_urdfRequest_()
    : prefix()  {
    }
  get_urdfRequest_(const ContainerAllocator& _alloc)
    : prefix(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _prefix_type;
  _prefix_type prefix;





  typedef boost::shared_ptr< ::test::get_urdfRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test::get_urdfRequest_<ContainerAllocator> const> ConstPtr;

}; // struct get_urdfRequest_

typedef ::test::get_urdfRequest_<std::allocator<void> > get_urdfRequest;

typedef boost::shared_ptr< ::test::get_urdfRequest > get_urdfRequestPtr;
typedef boost::shared_ptr< ::test::get_urdfRequest const> get_urdfRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test::get_urdfRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test::get_urdfRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'test': ['/home/nbhak/Desktop/test_ws/src/test/msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test::get_urdfRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test::get_urdfRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::get_urdfRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::get_urdfRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::get_urdfRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::get_urdfRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test::get_urdfRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8a471f61d96890d8f43bc26d6b147ee7";
  }

  static const char* value(const ::test::get_urdfRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8a471f61d96890d8ULL;
  static const uint64_t static_value2 = 0xf43bc26d6b147ee7ULL;
};

template<class ContainerAllocator>
struct DataType< ::test::get_urdfRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test/get_urdfRequest";
  }

  static const char* value(const ::test::get_urdfRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test::get_urdfRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string prefix\n\
";
  }

  static const char* value(const ::test::get_urdfRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test::get_urdfRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.prefix);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct get_urdfRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test::get_urdfRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test::get_urdfRequest_<ContainerAllocator>& v)
  {
    s << indent << "prefix: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.prefix);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_MESSAGE_GET_URDFREQUEST_H
