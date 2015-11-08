cmake_minimum_required(VERSION 2.8)
project(osgX_Threads)

set(CMAKE_MODULE_PATH "${osgX_Threads_SOURCE_DIR}/CMakeModules;${CMAKE_MODULE_PATH}")
find_package(OpenThreads)
find_package(OSG)
find_package(OSGX_LIBS)

include_directories(include ${OSG_INCLUDE_DIRS} ${OPENTHREADS_INCLUDE_DIR} ${osgXLibs_INCLUDE_DIR})
link_directories(${OSG_LIBRARIES_DIR})

add_definitions(-DOSGX_THREADS_LIBRARY)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

add_subdirectory(src)

install(
	DIRECTORY include/
	DESTINATION ${CMAKE_INSTALL_PREFIX}/include/osgXThreads
)
