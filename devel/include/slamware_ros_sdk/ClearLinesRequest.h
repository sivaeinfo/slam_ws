// Generated by gencpp from file slamware_ros_sdk/ClearLinesRequest.msg
// DO NOT EDIT!


#ifndef SLAMWARE_ROS_SDK_MESSAGE_CLEARLINESREQUEST_H
#define SLAMWARE_ROS_SDK_MESSAGE_CLEARLINESREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <slamware_ros_sdk/ArtifactUsage.h>

namespace slamware_ros_sdk
{
template <class ContainerAllocator>
struct ClearLinesRequest_
{
  typedef ClearLinesRequest_<ContainerAllocator> Type;

  ClearLinesRequest_()
    : usage()  {
    }
  ClearLinesRequest_(const ContainerAllocator& _alloc)
    : usage(_alloc)  {
  (void)_alloc;
    }



   typedef  ::slamware_ros_sdk::ArtifactUsage_<ContainerAllocator>  _usage_type;
  _usage_type usage;





  typedef boost::shared_ptr< ::slamware_ros_sdk::ClearLinesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::slamware_ros_sdk::ClearLinesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ClearLinesRequest_

typedef ::slamware_ros_sdk::ClearLinesRequest_<std::allocator<void> > ClearLinesRequest;

typedef boost::shared_ptr< ::slamware_ros_sdk::ClearLinesRequest > ClearLinesRequestPtr;
typedef boost::shared_ptr< ::slamware_ros_sdk::ClearLinesRequest const> ClearLinesRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::slamware_ros_sdk::ClearLinesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::slamware_ros_sdk::ClearLinesRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::slamware_ros_sdk::ClearLinesRequest_<ContainerAllocator1> & lhs, const ::slamware_ros_sdk::ClearLinesRequest_<ContainerAllocator2> & rhs)
{
  return lhs.usage == rhs.usage;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::slamware_ros_sdk::ClearLinesRequest_<ContainerAllocator1> & lhs, const ::slamware_ros_sdk::ClearLinesRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace slamware_ros_sdk

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::slamware_ros_sdk::ClearLinesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slamware_ros_sdk::ClearLinesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::slamware_ros_sdk::ClearLinesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::slamware_ros_sdk::ClearLinesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slamware_ros_sdk::ClearLinesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slamware_ros_sdk::ClearLinesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::slamware_ros_sdk::ClearLinesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f393f6a6d7cf525f9292b0e1f80870fc";
  }

  static const char* value(const ::slamware_ros_sdk::ClearLinesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf393f6a6d7cf525fULL;
  static const uint64_t static_value2 = 0x9292b0e1f80870fcULL;
};

template<class ContainerAllocator>
struct DataType< ::slamware_ros_sdk::ClearLinesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "slamware_ros_sdk/ClearLinesRequest";
  }

  static const char* value(const ::slamware_ros_sdk::ClearLinesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::slamware_ros_sdk::ClearLinesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"ArtifactUsage usage\n"
"\n"
"================================================================================\n"
"MSG: slamware_ros_sdk/ArtifactUsage\n"
"\n"
"int8 UNKNOWN=-1\n"
"int8 VIRTUAL_WALL=0\n"
"int8 VIRTUAL_TRACK=1\n"
"\n"
"int8 usage\n"
;
  }

  static const char* value(const ::slamware_ros_sdk::ClearLinesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::slamware_ros_sdk::ClearLinesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.usage);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ClearLinesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::slamware_ros_sdk::ClearLinesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::slamware_ros_sdk::ClearLinesRequest_<ContainerAllocator>& v)
  {
    s << indent << "usage: ";
    s << std::endl;
    Printer< ::slamware_ros_sdk::ArtifactUsage_<ContainerAllocator> >::stream(s, indent + "  ", v.usage);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SLAMWARE_ROS_SDK_MESSAGE_CLEARLINESREQUEST_H
