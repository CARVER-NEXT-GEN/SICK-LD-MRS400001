#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickLocRingBufferRecordingActiveSrvResponse.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCRINGBUFFERRECORDINGACTIVESRVRESPONSE_H
#define SICK_SCAN_MESSAGE_SICKLOCRINGBUFFERRECORDINGACTIVESRVRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sick_scan_xd
{
template <class ContainerAllocator>
struct SickLocRingBufferRecordingActiveSrvResponse_
{
  typedef SickLocRingBufferRecordingActiveSrvResponse_<ContainerAllocator> Type;

  SickLocRingBufferRecordingActiveSrvResponse_()
    : active(false)
    , success(false)  {
    }
  SickLocRingBufferRecordingActiveSrvResponse_(const ContainerAllocator& _alloc)
    : active(false)
    , success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _active_type;
  _active_type active;

   typedef uint8_t _success_type;
  _success_type success;





  typedef std::shared_ptr< ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse_<ContainerAllocator> > Ptr;
  typedef std::shared_ptr< ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SickLocRingBufferRecordingActiveSrvResponse_

typedef ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse_<std::allocator<void> > SickLocRingBufferRecordingActiveSrvResponse;

typedef std::shared_ptr< ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse > SickLocRingBufferRecordingActiveSrvResponsePtr;
typedef std::shared_ptr< ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse const> SickLocRingBufferRecordingActiveSrvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse_<ContainerAllocator1> & lhs, const ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse_<ContainerAllocator2> & rhs)
{
  return lhs.active == rhs.active &&
    lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse_<ContainerAllocator1> & lhs, const ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sick_scan_xd

namespace roswrap
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9bb3f90ef7a4dde50a9193067d4298d5";
  }

  static const char* value(const ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9bb3f90ef7a4dde5ULL;
  static const uint64_t static_value2 = 0x0a9193067d4298d5ULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_scan/SickLocRingBufferRecordingActiveSrvResponse";
  }

  static const char* value(const ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"# \n"
"# Response (output)\n"
"# \n"
"\n"
"bool active # Whether rolling buffer recording on error reporting is active. {0 (false), 1 (true)} \n"
"bool success # true: success response received from localization controller, false: service failed (timeout or error status from controller)\n"
"\n"
;
  }

  static const char* value(const ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace roswrap

namespace roswrap
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.active);
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SickLocRingBufferRecordingActiveSrvResponse_

} // namespace serialization
} // namespace roswrap

namespace roswrap
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sick_scan_xd::SickLocRingBufferRecordingActiveSrvResponse_<ContainerAllocator>& v)
  {
    s << indent << "active: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active);
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKLOCRINGBUFFERRECORDINGACTIVESRVRESPONSE_H