// Generated by gencpp from file test/speaker_is_sound_playingResponse.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_SPEAKER_IS_SOUND_PLAYINGRESPONSE_H
#define TEST_MESSAGE_SPEAKER_IS_SOUND_PLAYINGRESPONSE_H


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
struct speaker_is_sound_playingResponse_
{
  typedef speaker_is_sound_playingResponse_<ContainerAllocator> Type;

  speaker_is_sound_playingResponse_()
    : value(false)  {
    }
  speaker_is_sound_playingResponse_(const ContainerAllocator& _alloc)
    : value(false)  {
  (void)_alloc;
    }



   typedef uint8_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::test::speaker_is_sound_playingResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test::speaker_is_sound_playingResponse_<ContainerAllocator> const> ConstPtr;

}; // struct speaker_is_sound_playingResponse_

typedef ::test::speaker_is_sound_playingResponse_<std::allocator<void> > speaker_is_sound_playingResponse;

typedef boost::shared_ptr< ::test::speaker_is_sound_playingResponse > speaker_is_sound_playingResponsePtr;
typedef boost::shared_ptr< ::test::speaker_is_sound_playingResponse const> speaker_is_sound_playingResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test::speaker_is_sound_playingResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test::speaker_is_sound_playingResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::test::speaker_is_sound_playingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test::speaker_is_sound_playingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::speaker_is_sound_playingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::speaker_is_sound_playingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::speaker_is_sound_playingResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::speaker_is_sound_playingResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test::speaker_is_sound_playingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e431d687bf4b2c65fbd94b12ae0cb5d9";
  }

  static const char* value(const ::test::speaker_is_sound_playingResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe431d687bf4b2c65ULL;
  static const uint64_t static_value2 = 0xfbd94b12ae0cb5d9ULL;
};

template<class ContainerAllocator>
struct DataType< ::test::speaker_is_sound_playingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test/speaker_is_sound_playingResponse";
  }

  static const char* value(const ::test::speaker_is_sound_playingResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test::speaker_is_sound_playingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool value\n\
\n\
";
  }

  static const char* value(const ::test::speaker_is_sound_playingResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test::speaker_is_sound_playingResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct speaker_is_sound_playingResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test::speaker_is_sound_playingResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test::speaker_is_sound_playingResponse_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_MESSAGE_SPEAKER_IS_SOUND_PLAYINGRESPONSE_H