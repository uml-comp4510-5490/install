// Generated by gencpp from file pr2_controllers_msgs/QueryCalibrationStateRequest.msg
// DO NOT EDIT!


#ifndef PR2_CONTROLLERS_MSGS_MESSAGE_QUERYCALIBRATIONSTATEREQUEST_H
#define PR2_CONTROLLERS_MSGS_MESSAGE_QUERYCALIBRATIONSTATEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pr2_controllers_msgs
{
template <class ContainerAllocator>
struct QueryCalibrationStateRequest_
{
  typedef QueryCalibrationStateRequest_<ContainerAllocator> Type;

  QueryCalibrationStateRequest_()
    {
    }
  QueryCalibrationStateRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct QueryCalibrationStateRequest_

typedef ::pr2_controllers_msgs::QueryCalibrationStateRequest_<std::allocator<void> > QueryCalibrationStateRequest;

typedef boost::shared_ptr< ::pr2_controllers_msgs::QueryCalibrationStateRequest > QueryCalibrationStateRequestPtr;
typedef boost::shared_ptr< ::pr2_controllers_msgs::QueryCalibrationStateRequest const> QueryCalibrationStateRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pr2_controllers_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'pr2_controllers_msgs': ['/home/cs/robot_sim/manip_ws/src/pr2_controllers/pr2_controllers_msgs/msg', '/home/cs/robot_sim/manip_ws/devel/share/pr2_controllers_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pr2_controllers_msgs/QueryCalibrationStateRequest";
  }

  static const char* value(const ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct QueryCalibrationStateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // PR2_CONTROLLERS_MSGS_MESSAGE_QUERYCALIBRATIONSTATEREQUEST_H
