# Install script for directory: E:/OpenSceneGraph/osgEarthX/projects/osgEarthX_Web/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/FireBreath")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("E:/OpenSceneGraph/osgEarthX/projects/osgEarthX_Web/build/cmake_common/cmake_install.cmake")
  include("E:/OpenSceneGraph/osgEarthX/projects/osgEarthX_Web/build/boost/libs/thread/cmake_install.cmake")
  include("E:/OpenSceneGraph/osgEarthX/projects/osgEarthX_Web/build/boost/libs/system/cmake_install.cmake")
  include("E:/OpenSceneGraph/osgEarthX/projects/osgEarthX_Web/build/ScriptingCore/cmake_install.cmake")
  include("E:/OpenSceneGraph/osgEarthX/projects/osgEarthX_Web/build/PluginCore/cmake_install.cmake")
  include("E:/OpenSceneGraph/osgEarthX/projects/osgEarthX_Web/build/NpapiCore/cmake_install.cmake")
  include("E:/OpenSceneGraph/osgEarthX/projects/osgEarthX_Web/build/ActiveXCore/cmake_install.cmake")
  include("E:/OpenSceneGraph/osgEarthX/projects/osgEarthX_Web/build/projects/EarthWeb/PluginAuto/cmake_install.cmake")
  include("E:/OpenSceneGraph/osgEarthX/projects/osgEarthX_Web/build/projects/EarthWeb/cmake_install.cmake")
  include("E:/OpenSceneGraph/osgEarthX/projects/osgEarthX_Web/build/unittest-cpp/UnitTest++/cmake_install.cmake")
  include("E:/OpenSceneGraph/osgEarthX/projects/osgEarthX_Web/build/ScriptingCoreTest/cmake_install.cmake")
  include("E:/OpenSceneGraph/osgEarthX/projects/osgEarthX_Web/build/ActiveXCoreTest/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

file(WRITE "E:/OpenSceneGraph/osgEarthX/projects/osgEarthX_Web/build/${CMAKE_INSTALL_MANIFEST}" "")
foreach(file ${CMAKE_INSTALL_MANIFEST_FILES})
  file(APPEND "E:/OpenSceneGraph/osgEarthX/projects/osgEarthX_Web/build/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
endforeach()
