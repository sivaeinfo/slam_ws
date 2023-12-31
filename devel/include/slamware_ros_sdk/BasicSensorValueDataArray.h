// Generated by gencpp from file slamware_ros_sdk/BasicSensorValueDataArray.msg
// DO NOT EDIT!


#ifndef SLAMWARE_ROS_SDK_MESSAGE_BASICSENSORVALUEDATAARRAY_H
#define SLAMWARE_ROS_SDK_MESSAGE_BASICSENSORVALUEDATAARRAY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <slamware_ros_sdk/BasicSensorValueData.h>

namespace slamware_ros_sdk
{
template <class ContainerAllocator>
struct BasicSensorValueDataArray_
{
  typedef BasicSensorValueDataArray_<ContainerAllocator> Type;

  BasicSensorValueDataArray_()
    : values_data()  {
    }
  BasicSensorValueDataArray_(const ContainerAllocator& _alloc)
    : values_data(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::slamware_ros_sdk::BasicSensorValueData_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::slamware_ros_sdk::BasicSensorValueData_<ContainerAllocator> >> _values_data_type;
  _values_data_type values_data;





  typedef boost::shared_ptr< ::slamware_ros_sdk::BasicSensorValueDataArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::slamware_ros_sdk::BasicSensorValueDataArray_<ContainerAllocator> const> ConstPtr;

}; // struct BasicSensorValueDataArray_

typedef ::slamware_ros_sdk::BasicSensorValueDataArray_<std::allocator<void> > BasicSensorValueDataArray;

typedef boost::shared_ptr< ::slamware_ros_sdk::BasicSensorValueDataArray > BasicSensorValueDataArrayPtr;
typedef boost::shared_ptr< ::slamware_ros_sdk::BasicSensorValueDataArray const> BasicSensorValueDataArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::slamware_ros_sdk::BasicSensorValueDataArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::slamware_ros_sdk::BasicSensorValueDataArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::slamware_ros_sdk::BasicSensorValueDataArray_<ContainerAllocator1> & lhs, const ::slamware_ros_sdk::BasicSensorValueDataArray_<ContainerAllocator2> & rhs)
{
  return lhs.values_data == rhs.values_data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::slamware_ros_sdk::BasicSensorValueDataArray_<ContainerAllocator1> & lhs, const ::slamware_ros_sdk::BasicSensorValueDataArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace slamware_ros_sdk

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::slamware_ros_sdk::BasicSensorValueDataArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slamware_ros_sdk::BasicSensorValueDataArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::slamware_ros_sdk::BasicSensorValueDataArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::slamware_ros_sdk::BasicSensorValueDataArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slamware_ros_sdk::BasicSensorValueDataArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slamware_ros_sdk::BasicSensorValueDataArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::slamware_ros_sdk::BasicSensorValueDataArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4f5614e15bb39e1233d6a3c6460058fa";
  }

  static const char* value(const ::slamware_ros_sdk::BasicSensorValueDataArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4f5614e15bb39e12ULL;
  static const uint64_t static_value2 = 0x33d6a3c6460058faULL;
};

template<class ContainerAllocator>
struct DataType< ::slamware_ros_sdk::BasicSensorValueDataArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "slamware_ros_sdk/BasicSensorValueDataArray";
  }

  static const char* value(const ::slamware_ros_sdk::BasicSensorValueDataArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::slamware_ros_sdk::BasicSensorValueDataArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"BasicSensorValueData[] values_data\n"
"\n"
"================================================================================\n"
"MSG: slamware_ros_sdk/BasicSensorValueData\n"
"\n"
"BasicSensorInfo info\n"
"BasicSensorValue value\n"
"\n"
"================================================================================\n"
"MSG: slamware_ros_sdk/BasicSensorInfo\n"
"\n"
"int32 id\n"
"SensorType sensor_type\n"
"ImpactType impact_type\n"
"geometry_msgs/Pose install_pose\n"
"float32 refresh_freq\n"
"\n"
"================================================================================\n"
"MSG: slamware_ros_sdk/SensorType\n"
"\n"
"int8 UNKNOWN=-1\n"
"int8 BUMPER=0\n"
"int8 CLIFF=1\n"
"int8 SONAR=2\n"
"int8 DEPTH_CAMERA=3\n"
"int8 WALL_SENSOR=4\n"
"int8 MAG_TAPE_DETECTOR=5\n"
"\n"
"int8 type\n"
"\n"
"================================================================================\n"
"MSG: slamware_ros_sdk/ImpactType\n"
"\n"
"int8 UNKNOWN=-1\n"
"int8 DIGITAL=0\n"
"int8 ANALOG=1\n"
"\n"
"int8 type\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: slamware_ros_sdk/BasicSensorValue\n"
"\n"
"bool is_in_impact			# whether this sensor is in impact status\n"
"float32 value\n"
;
  }

  static const char* value(const ::slamware_ros_sdk::BasicSensorValueDataArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::slamware_ros_sdk::BasicSensorValueDataArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.values_data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BasicSensorValueDataArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::slamware_ros_sdk::BasicSensorValueDataArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::slamware_ros_sdk::BasicSensorValueDataArray_<ContainerAllocator>& v)
  {
    s << indent << "values_data[]" << std::endl;
    for (size_t i = 0; i < v.values_data.size(); ++i)
    {
      s << indent << "  values_data[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::slamware_ros_sdk::BasicSensorValueData_<ContainerAllocator> >::stream(s, indent + "    ", v.values_data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SLAMWARE_ROS_SDK_MESSAGE_BASICSENSORVALUEDATAARRAY_H
