# @author : hao luo
# @date : 2015/02/01
# @last edit : 2015/09/20

cmake_minimum_required(VERSION 2.8)

# project name
project(osgEarthX)

add_definitions(-DOSGEARTHX_LIBRARY)

set(CMAKE_MODULE_PATH "${osgEarthX_SOURCE_DIR}/CMakeModules;${CMAKE_MODULE_PATH}")
find_package(OSG)
find_package(OSGEarth)
find_package(OSGX_LIBS)
find_package(OSGX)
find_package(OSGX_THREADS)
find_package(OSGEARTHX_CORE)

include_directories(
	include 
	${OSG_INCLUDE_DIRS} 
	${OPENTHREADS_INCLUDE_DIR}
	${OSGEARTH_INCLUDE_DIR}
	${OSGX_LIBS_INCLUDE_DIR}
	${OSGX_INCLUDE_DIR}
	${OSGX_THREADS_INCLUDE_DIR}
	${OSGEARTHX_CORE_INCLUDE_DIR}
)

link_directories(
	${OSG_LIBRARIES_DIR}#containn osg openthreads ...
	${OSGEARTH_LIBRARIES_DIR}
	${OSGX_LIBRARIES_DIR}
	${OSGX_THREADS_LIBRARIES_DIR}
	${OSGEARTHX_CORE_LIBRARIES_DIR}
)

option(OSGEARTHX_USE_QT "Enable to use Qt" ON)

if(OSGEARTHX_USE_QT)
	find_package(Qt5Widgets)

	if ( Qt5Widgets_FOUND )
	    FIND_PACKAGE(Qt5WebKitWidgets QUIET)
	    include_directories(${Qt5Core_INCLUDE_DIRS} ${Qt5OpenGL_INCLUDE_DIRS})
	else(Qt5Widgets_FOUND)
		message(SEND_ERROR "Need QT !")
	endif(Qt5Widgets_FOUND)

endif(OSGEARTHX_USE_QT)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

set(SRC_LIST)
foreach(SRC_DIR
	"./src/Annotation"
	"./src/Earth"
	"./src/EarthMap"
	"./src/EarthViewer"
	"./src/Externals"
	"./src/Group"
	"./src/Layer"
	"./src/Object"
)
	aux_source_directory(${SRC_DIR} SUB_DIR_SRC)
	set(SRC_LIST ${SRC_LIST} ${SUB_DIR_SRC})
endforeach(SRC_DIR)

add_library(${PROJECT_NAME} SHARED ${SRC_LIST})
set_target_properties(${PROJECT_NAME}
	PROPERTIES
	DEBUG_POSTFIX d
)

target_link_libraries(${PROJECT_NAME}
	optimized OpenThreads
	optimized osg
	optimized osgViewer
	optimized osgGA
	optimized osgUtil
	optimized osgDB
	optimized osgEarth
	optimized osgEarthUtil
	optimized osgEarthFeatures
	optimized osgEarthSymbology
	optimized osgEarthAnnotation
	optimized osgX_Threads
	optimized osgX
	optimized osgEarthX_Core

	debug OpenThreadsd
	debug osgd
	debug osgViewerd
	debug osgGAd
	debug osgUtild
	debug osgDBd
	debug osgEarthd
	debug osgEarthUtild
	debug osgEarthFeaturesd
	debug osgEarthSymbologyd
	debug osgEarthAnnotationd
	debug osgX_Threadsd
	debug osgXd
	debug osgEarthX_Cored
)

install(
	TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/bin
	LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
)

install(
	DIRECTORY include/
	DESTINATION ${CMAKE_INSTALL_PREFIX}/include/osgEarthX
)
