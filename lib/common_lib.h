#ifndef _COMMON_LIB_H_
#define _COMMON_LIB_H_

#include <iostream>
#include <string>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>

namespace CommonLib
{
  class common_lib
  {
    public:
      common_lib(const std::string& pkg_mode_);
      ~common_lib();

      void PKG_VERSION(const std::string& pkg_mode_);
  };
  
} // namespace CommonLib

#endif