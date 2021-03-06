// Generated by gencpp from file test/skin_set_bone_positionResponse.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_SKIN_SET_BONE_POSITIONRESPONSE_H
#define TEST_MESSAGE_SKIN_SET_BONE_POSITIONRESPONSE_H


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
struct skin_set_bone_positionResponse_
{
  typedef skin_set_bone_positionResponse_<ContainerAllocator> Type;

  skin_set_bone_positionResponse_()
    : success(0)  {
    }
  skin_set_bone_positionResponse_(const ContainerAllocator& _alloc)
    : success(0)  {
  (void)_alloc;
    }



   typedef int32_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::test::skin_set_bone_positionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test::skin_set_bone_positionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct skin_set_bone_positionResponse_

typedef ::test::skin_set_bone_positionResponse_<std::allocator<void> > skin_set_bone_positionResponse;

typedef boost::shared_ptr< ::test::skin_set_bone_positionResponse > skin_set_bone_positionResponsePtr;
typedef boost::shared_ptr< ::test::skin_set_bone_positionResponse const> skin_set_bone_positionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test::skin_set_bone_positionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test::skin_set_bone_positionResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::test::skin_set_bone_positionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test::skin_set_bone_positionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::skin_set_bone_positionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::skin_set_bone_positionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::skin_set_bone_positionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::skin_set_bone_positionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test::skin_set_bone_positionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3c2bcf2ff0894cb3058b1bf4c8c4175a";
  }

  static const char* value(const ::test::skin_set_bone_positionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3c2bcf2ff0894cb3ULL;
  static const uint64_t static_value2 = 0x058b1bf4c8c4175aULL;
};

template<class ContainerAllocator>
struct DataType< ::test::skin_set_bone_positionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test/skin_set_bone_positionResponse";
  }

  static const char* value(const ::test::skin_set_bone_positionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test::skin_set_bone_positionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 success\n\
\n\
";
  }

  static const char* value(const ::test::skin_set_bone_positionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test::skin_set_bone_positionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct skin_set_bone_positionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test::skin_set_bone_positionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test::skin_set_bone_positionResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<int32_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_MESSAGE_SKIN_SET_BONE_POSITIONRESPONSE_H
