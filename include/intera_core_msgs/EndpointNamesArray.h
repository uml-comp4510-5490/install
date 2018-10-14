// Generated by gencpp from file intera_core_msgs/EndpointNamesArray.msg
// DO NOT EDIT!


#ifndef INTERA_CORE_MSGS_MESSAGE_ENDPOINTNAMESARRAY_H
#define INTERA_CORE_MSGS_MESSAGE_ENDPOINTNAMESARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace intera_core_msgs
{
template <class ContainerAllocator>
struct EndpointNamesArray_
{
  typedef EndpointNamesArray_<ContainerAllocator> Type;

  EndpointNamesArray_()
    : endpoint_names()  {
    }
  EndpointNamesArray_(const ContainerAllocator& _alloc)
    : endpoint_names(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _endpoint_names_type;
  _endpoint_names_type endpoint_names;





  typedef boost::shared_ptr< ::intera_core_msgs::EndpointNamesArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_core_msgs::EndpointNamesArray_<ContainerAllocator> const> ConstPtr;

}; // struct EndpointNamesArray_

typedef ::intera_core_msgs::EndpointNamesArray_<std::allocator<void> > EndpointNamesArray;

typedef boost::shared_ptr< ::intera_core_msgs::EndpointNamesArray > EndpointNamesArrayPtr;
typedef boost::shared_ptr< ::intera_core_msgs::EndpointNamesArray const> EndpointNamesArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_core_msgs::EndpointNamesArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_core_msgs::EndpointNamesArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace intera_core_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'intera_core_msgs': ['/home/cs/robot_sim/manip_ws/src/intera_common/intera_core_msgs/msg', '/home/cs/robot_sim/manip_ws/devel/share/intera_core_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::EndpointNamesArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::EndpointNamesArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::EndpointNamesArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::EndpointNamesArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::EndpointNamesArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::EndpointNamesArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_core_msgs::EndpointNamesArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6bf0a2d04056051f84da1291f261f35a";
  }

  static const char* value(const ::intera_core_msgs::EndpointNamesArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6bf0a2d04056051fULL;
  static const uint64_t static_value2 = 0x84da1291f261f35aULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_core_msgs::EndpointNamesArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_core_msgs/EndpointNamesArray";
  }

  static const char* value(const ::intera_core_msgs::EndpointNamesArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_core_msgs::EndpointNamesArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] endpoint_names\n\
";
  }

  static const char* value(const ::intera_core_msgs::EndpointNamesArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_core_msgs::EndpointNamesArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.endpoint_names);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EndpointNamesArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_core_msgs::EndpointNamesArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_core_msgs::EndpointNamesArray_<ContainerAllocator>& v)
  {
    s << indent << "endpoint_names[]" << std::endl;
    for (size_t i = 0; i < v.endpoint_names.size(); ++i)
    {
      s << indent << "  endpoint_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.endpoint_names[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_CORE_MSGS_MESSAGE_ENDPOINTNAMESARRAY_H
