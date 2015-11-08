cmake_minimum_required(VERSION 2.8)
project(osgX)
add_definitions(-DOSGX_LIBRARY)

set(CMAKE_MODULE_PATH "${osgX_SOURCE_DIR}/CMakeModules;${CMAKE_MODULE_PATH}")
find_package(OpenThreads)
find_package(OSG)

include_directories(include ${OSG_INCLUDE_DIRS} ${OPENTHREADS_INCLUDE_DIR})
link_directories(${OSG_LIBRARIES_DIR})

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

add_subDirectory(src)
install(
	DIRECTORY include/
	DESTINATION ${CMAKE_INSTALL_PREFIX}/include/osgX
)
