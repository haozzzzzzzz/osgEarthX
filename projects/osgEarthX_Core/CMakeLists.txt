# @author : hao luo
# @date : 2015/02/01
# @last edit : 2015/09/19

cmake_minimum_required(VERSION 2.8)
project(osgEarthX_Core)

add_definitions( -DOSGEARTHX_CORE_LIBRARY )

set(CMAKE_MODULE_PATH "${osgEarthX_Core_SOURCE_DIR}/CMakeModules;${CMAKE_MODULE_PATH}")
find_package(OSG)
find_package(OSGEarth)
find_package(OSGX_LIBS)
find_package(OSGX)
find_package(OSGX_THREADS)

include_directories(
	include 
	${OSG_INCLUDE_DIRS} 
	${OPENTHREADS_INCLUDE_DIR}
	${OSGEARTH_INCLUDE_DIR}
	${OSGX_LIBS_INCLUDE_DIR}
	${OSGX_INCLUDE_DIR}
	${OSGX_THREADS_INCLUDE_DIR}
)

link_directories(
	${OSG_LIBRARIES_DIR}#containn osg openthreads ...
	${OSGEARTH_LIBRARIES_DIR}
	${OSGX_LIBRARIES_DIR}
	${OSGX_THREADS_LIBRARIES_DIR}
)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

set(SRC_LIST)
foreach(SRC_DIR
	"./src/Callback"
	"./src/Map"
	"./src/OSGEarth"
	"./src/OSGEarth/Externals"
	"./src/OSGEarth/Layer"
	"./src/Provider"
	"./src/Provider/AnnotationProvider"
	"./src/Provider/ExternalProvider"
	"./src/Provider/LayerProvider"
)
	aux_source_directory(${SRC_DIR} SUB_DIR_SRC)
	set(SRC_LIST ${SRC_LIST} ${SUB_DIR_SRC})
endforeach(SRC_DIR)

set(SRC_LIST
	${SRC_LIST}
	"./src/Viewer/MapViewer.cpp"
	"./src/Viewer/ThreadedViewer.cpp"
	"./src/Viewer/ViewerThread.cpp"
	"./src/Viewer/GraphicsViewerBase.cpp"
)

if(WIN32)
	set(SRC_LIST
		${SRC_LIST}
		"./src/Viewer/Win32ViewerBase.cpp"
	)
endif(WIN32)

OPTION(OSGEARTHX_CORE_USE_QT "Enable to use Qt" ON)

IF(OSGEARTHX_CORE_USE_QT)

	FIND_PACKAGE(Qt5Widgets)
	
    IF ( Qt5Widgets_FOUND )
        FIND_PACKAGE(Qt5WebKitWidgets QUIET)
        include_directories(${Qt5Core_INCLUDE_DIRS} ${Qt5OpenGL_INCLUDE_DIRS})
        set(SRC_LIST
			${SRC_LIST}
			"./src/Viewer/QtViewerBase.cpp"
		)
    ENDIF(Qt5Widgets_FOUND)

ENDIF(OSGEARTHX_CORE_USE_QT)





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
)
IF(OSGEARTHX_CORE_USE_QT AND Qt5Widgets_FOUND)
	target_link_libraries(${PROJECT_NAME}
		optimized osgQt
		debug osgQtd
	)
ENDIF(OSGEARTHX_CORE_USE_QT AND Qt5Widgets_FOUND)

install(
	TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/bin
	LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
)

install(
	DIRECTORY include/
	DESTINATION ${CMAKE_INSTALL_PREFIX}/include/osgEarthXCore
)
