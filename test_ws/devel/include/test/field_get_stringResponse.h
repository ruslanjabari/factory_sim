// Generated by gencpp from file test/field_get_stringResponse.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_FIELD_GET_STRINGRESPONSE_H
#define TEST_MESSAGE_FIELD_GET_STRINGRESPONSE_H


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
struct field_get_stringResponse_
{
  typedef field_get_stringResponse_<ContainerAllocator> Type;

  field_get_stringResponse_()
    : value()  {
    }
  field_get_stringResponse_(const ContainerAllocator& _alloc)
    : value(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::test::field_get_stringResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test::field_get_stringResponse_<ContainerAllocator> const> ConstPtr;

}; // struct field_get_stringResponse_

typedef ::test::field_get_stringResponse_<std::allocator<void> > field_get_stringResponse;

typedef boost::shared_ptr< ::test::field_get_stringResponse > field_get_stringResponsePtr;
typedef boost::shared_ptr< ::test::field_get_stringResponse const> field_get_stringResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test::field_get_stringResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test::field_get_stringResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::test::field_get_stringResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test::field_get_stringResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::field_get_stringResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::field_get_stringResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::field_get_stringResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::field_get_stringResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test::field_get_stringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "64e58419496c7248b4ef25731f88b8c3";
  }

  static const char* value(const ::test::field_get_stringResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x64e58419496c7248ULL;
  static const uint64_t static_value2 = 0xb4ef25731f88b8c3ULL;
};

template<class ContainerAllocator>
struct DataType< ::test::field_get_stringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test/field_get_stringResponse";
  }

  static const char* value(const ::test::field_get_stringResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test::field_get_stringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string value\n\
\n\
";
  }

  static const char* value(const ::test::field_get_stringResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test::field_get_stringResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct field_get_stringResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test::field_get_stringResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test::field_get_stringResponse_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_MESSAGE_FIELD_GET_STRINGRESPONSE_H