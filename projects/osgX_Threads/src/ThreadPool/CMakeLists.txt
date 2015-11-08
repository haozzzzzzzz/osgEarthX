aux_source_directory(. SRC_LIST)
aux_source_directory(./OrderHoldersContainer SRC_LIST2)
set(SRC_LIST ${SRC_LIST} ${SRC_LIST2})

add_library(${PROJECT_NAME} SHARED ${SRC_LIST})

set_target_properties(${PROJECT_NAME}
	PROPERTIES
	DEBUG_POSTFIX d
)

target_link_libraries(${PROJECT_NAME}
	optimized OpenThreads
	debug OpenThreadsd
	optimized osg
	debug osgd
)

install(
	TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/bin
	LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
)
