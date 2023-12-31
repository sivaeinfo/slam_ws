// Generated by gencpp from file slamware_ros_sdk/RobotBasicState.msg
// DO NOT EDIT!


#ifndef SLAMWARE_ROS_SDK_MESSAGE_ROBOTBASICSTATE_H
#define SLAMWARE_ROS_SDK_MESSAGE_ROBOTBASICSTATE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace slamware_ros_sdk
{
template <class ContainerAllocator>
struct RobotBasicState_
{
  typedef RobotBasicState_<ContainerAllocator> Type;

  RobotBasicState_()
    : is_map_building_enabled(false)
    , is_localization_enabled(false)
    , localization_quality(0)
    , board_temperature(0)
    , battery_percentage(0)
    , is_dc_in(false)
    , is_charging(false)  {
    }
  RobotBasicState_(const ContainerAllocator& _alloc)
    : is_map_building_enabled(false)
    , is_localization_enabled(false)
    , localization_quality(0)
    , board_temperature(0)
    , battery_percentage(0)
    , is_dc_in(false)
    , is_charging(false)  {
  (void)_alloc;
    }



   typedef uint8_t _is_map_building_enabled_type;
  _is_map_building_enabled_type is_map_building_enabled;

   typedef uint8_t _is_localization_enabled_type;
  _is_localization_enabled_type is_localization_enabled;

   typedef int32_t _localization_quality_type;
  _localization_quality_type localization_quality;

   typedef int32_t _board_temperature_type;
  _board_temperature_type board_temperature;

   typedef int32_t _battery_percentage_type;
  _battery_percentage_type battery_percentage;

   typedef uint8_t _is_dc_in_type;
  _is_dc_in_type is_dc_in;

   typedef uint8_t _is_charging_type;
  _is_charging_type is_charging;





  typedef boost::shared_ptr< ::slamware_ros_sdk::RobotBasicState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::slamware_ros_sdk::RobotBasicState_<ContainerAllocator> const> ConstPtr;

}; // struct RobotBasicState_

typedef ::slamware_ros_sdk::RobotBasicState_<std::allocator<void> > RobotBasicState;

typedef boost::shared_ptr< ::slamware_ros_sdk::RobotBasicState > RobotBasicStatePtr;
typedef boost::shared_ptr< ::slamware_ros_sdk::RobotBasicState const> RobotBasicStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::slamware_ros_sdk::RobotBasicState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::slamware_ros_sdk::RobotBasicState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::slamware_ros_sdk::RobotBasicState_<ContainerAllocator1> & lhs, const ::slamware_ros_sdk::RobotBasicState_<ContainerAllocator2> & rhs)
{
  return lhs.is_map_building_enabled == rhs.is_map_building_enabled &&
    lhs.is_localization_enabled == rhs.is_localization_enabled &&
    lhs.localization_quality == rhs.localization_quality &&
    lhs.board_temperature == rhs.board_temperature &&
    lhs.battery_percentage == rhs.battery_percentage &&
    lhs.is_dc_in == rhs.is_dc_in &&
    lhs.is_charging == rhs.is_charging;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::slamware_ros_sdk::RobotBasicState_<ContainerAllocator1> & lhs, const ::slamware_ros_sdk::RobotBasicState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace slamware_ros_sdk

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::slamware_ros_sdk::RobotBasicState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slamware_ros_sdk::RobotBasicState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::slamware_ros_sdk::RobotBasicState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::slamware_ros_sdk::RobotBasicState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slamware_ros_sdk::RobotBasicState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slamware_ros_sdk::RobotBasicState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::slamware_ros_sdk::RobotBasicState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9be82c50d81e99092b7127a543694749";
  }

  static const char* value(const ::slamware_ros_sdk::RobotBasicState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9be82c50d81e9909ULL;
  static const uint64_t static_value2 = 0x2b7127a543694749ULL;
};

template<class ContainerAllocator>
struct DataType< ::slamware_ros_sdk::RobotBasicState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "slamware_ros_sdk/RobotBasicState";
  }

  static const char* value(const ::slamware_ros_sdk::RobotBasicState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::slamware_ros_sdk::RobotBasicState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"bool is_map_building_enabled\n"
"bool is_localization_enabled\n"
"\n"
"int32 localization_quality\n"
"\n"
"int32 board_temperature\n"
"\n"
"int32 battery_percentage\n"
"bool is_dc_in\n"
"bool is_charging\n"
;
  }

  static const char* value(const ::slamware_ros_sdk::RobotBasicState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::slamware_ros_sdk::RobotBasicState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.is_map_building_enabled);
      stream.next(m.is_localization_enabled);
      stream.next(m.localization_quality);
      stream.next(m.board_temperature);
      stream.next(m.battery_percentage);
      stream.next(m.is_dc_in);
      stream.next(m.is_charging);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RobotBasicState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::slamware_ros_sdk::RobotBasicState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::slamware_ros_sdk::RobotBasicState_<ContainerAllocator>& v)
  {
    s << indent << "is_map_building_enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_map_building_enabled);
    s << indent << "is_localization_enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_localization_enabled);
    s << indent << "localization_quality: ";
    Printer<int32_t>::stream(s, indent + "  ", v.localization_quality);
    s << indent << "board_temperature: ";
    Printer<int32_t>::stream(s, indent + "  ", v.board_temperature);
    s << indent << "battery_percentage: ";
    Printer<int32_t>::stream(s, indent + "  ", v.battery_percentage);
    s << indent << "is_dc_in: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_dc_in);
    s << indent << "is_charging: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_charging);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SLAMWARE_ROS_SDK_MESSAGE_ROBOTBASICSTATE_H
