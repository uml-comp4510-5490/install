// Generated by gencpp from file pr2_mechanism_msgs/LoadControllerResponse.msg
// DO NOT EDIT!


#ifndef PR2_MECHANISM_MSGS_MESSAGE_LOADCONTROLLERRESPONSE_H
#define PR2_MECHANISM_MSGS_MESSAGE_LOADCONTROLLERRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pr2_mechanism_msgs
{
template <class ContainerAllocator>
struct LoadControllerResponse_
{
  typedef LoadControllerResponse_<ContainerAllocator> Type;

  LoadControllerResponse_()
    : ok(false)  {
    }
  LoadControllerResponse_(const ContainerAllocator& _alloc)
    : ok(false)  {
  (void)_alloc;
    }



   typedef uint8_t _ok_type;
  _ok_type ok;





  typedef boost::shared_ptr< ::pr2_mechanism_msgs::LoadControllerResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_mechanism_msgs::LoadControllerResponse_<ContainerAllocator> const> ConstPtr;

}; // struct LoadControllerResponse_

typedef ::pr2_mechanism_msgs::LoadControllerResponse_<std::allocator<void> > LoadControllerResponse;

typedef boost::shared_ptr< ::pr2_mechanism_msgs::LoadControllerResponse > LoadControllerResponsePtr;
typedef boost::shared_ptr< ::pr2_mechanism_msgs::LoadControllerResponse const> LoadControllerResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pr2_mechanism_msgs::LoadControllerResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pr2_mechanism_msgs::LoadControllerResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pr2_mechanism_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'pr2_mechanism_msgs': ['/home/cs/robot_sim/manip_ws/devel/share/pr2_mechanism_msgs/msg', '/home/cs/robot_sim/manip_ws/src/pr2_mechanism_msgs/msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pr2_mechanism_msgs::LoadControllerResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pr2_mechanism_msgs::LoadControllerResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_mechanism_msgs::LoadControllerResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_mechanism_msgs::LoadControllerResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_mechanism_msgs::LoadControllerResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_mechanism_msgs::LoadControllerResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pr2_mechanism_msgs::LoadControllerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6f6da3883749771fac40d6deb24a8c02";
  }

  static const char* value(const ::pr2_mechanism_msgs::LoadControllerResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6f6da3883749771fULL;
  static const uint64_t static_value2 = 0xac40d6deb24a8c02ULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_mechanism_msgs::LoadControllerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pr2_mechanism_msgs/LoadControllerResponse";
  }

  static const char* value(const ::pr2_mechanism_msgs::LoadControllerResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pr2_mechanism_msgs::LoadControllerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool ok\n\
";
  }

  static const char* value(const ::pr2_mechanism_msgs::LoadControllerResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pr2_mechanism_msgs::LoadControllerResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ok);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LoadControllerResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_mechanism_msgs::LoadControllerResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pr2_mechanism_msgs::LoadControllerResponse_<ContainerAllocator>& v)
  {
    s << indent << "ok: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ok);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PR2_MECHANISM_MSGS_MESSAGE_LOADCONTROLLERRESPONSE_H