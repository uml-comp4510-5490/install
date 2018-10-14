// Generated by gencpp from file pr2_msgs/SetLaserTrajCmd.msg
// DO NOT EDIT!


#ifndef PR2_MSGS_MESSAGE_SETLASERTRAJCMD_H
#define PR2_MSGS_MESSAGE_SETLASERTRAJCMD_H

#include <ros/service_traits.h>


#include <pr2_msgs/SetLaserTrajCmdRequest.h>
#include <pr2_msgs/SetLaserTrajCmdResponse.h>


namespace pr2_msgs
{

struct SetLaserTrajCmd
{

typedef SetLaserTrajCmdRequest Request;
typedef SetLaserTrajCmdResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetLaserTrajCmd
} // namespace pr2_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::pr2_msgs::SetLaserTrajCmd > {
  static const char* value()
  {
    return "28fe2ce397611c999952c74a1ea882aa";
  }

  static const char* value(const ::pr2_msgs::SetLaserTrajCmd&) { return value(); }
};

template<>
struct DataType< ::pr2_msgs::SetLaserTrajCmd > {
  static const char* value()
  {
    return "pr2_msgs/SetLaserTrajCmd";
  }

  static const char* value(const ::pr2_msgs::SetLaserTrajCmd&) { return value(); }
};


// service_traits::MD5Sum< ::pr2_msgs::SetLaserTrajCmdRequest> should match 
// service_traits::MD5Sum< ::pr2_msgs::SetLaserTrajCmd > 
template<>
struct MD5Sum< ::pr2_msgs::SetLaserTrajCmdRequest>
{
  static const char* value()
  {
    return MD5Sum< ::pr2_msgs::SetLaserTrajCmd >::value();
  }
  static const char* value(const ::pr2_msgs::SetLaserTrajCmdRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::pr2_msgs::SetLaserTrajCmdRequest> should match 
// service_traits::DataType< ::pr2_msgs::SetLaserTrajCmd > 
template<>
struct DataType< ::pr2_msgs::SetLaserTrajCmdRequest>
{
  static const char* value()
  {
    return DataType< ::pr2_msgs::SetLaserTrajCmd >::value();
  }
  static const char* value(const ::pr2_msgs::SetLaserTrajCmdRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::pr2_msgs::SetLaserTrajCmdResponse> should match 
// service_traits::MD5Sum< ::pr2_msgs::SetLaserTrajCmd > 
template<>
struct MD5Sum< ::pr2_msgs::SetLaserTrajCmdResponse>
{
  static const char* value()
  {
    return MD5Sum< ::pr2_msgs::SetLaserTrajCmd >::value();
  }
  static const char* value(const ::pr2_msgs::SetLaserTrajCmdResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::pr2_msgs::SetLaserTrajCmdResponse> should match 
// service_traits::DataType< ::pr2_msgs::SetLaserTrajCmd > 
template<>
struct DataType< ::pr2_msgs::SetLaserTrajCmdResponse>
{
  static const char* value()
  {
    return DataType< ::pr2_msgs::SetLaserTrajCmd >::value();
  }
  static const char* value(const ::pr2_msgs::SetLaserTrajCmdResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PR2_MSGS_MESSAGE_SETLASERTRAJCMD_H
