add_library(${PROJECT_NAME} SHARED StaticOSGAssistant.cpp)

set_target_properties(${PROJECT_NAME}
	PROPERTIES
	DEBUG_POSTFIX d
)

target_link_libraries(${PROJECT_NAME} 
	optimized OpenThreads
	debug OpenThreadsd
	optimized osg
	debug osgd
	optimized osgViewer
	debug osgViewerd
)

install(
	TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/bin
	LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
)