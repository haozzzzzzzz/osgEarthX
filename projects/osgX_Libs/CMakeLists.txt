cmake_minimum_required(VERSION 2.8)
project(osgX_Libs)
set(INCLUDE_HEADERS
	./Utils/DynamicList.h
	./Utils/DynamicVector.h
)
install(
	FILES ${INCLUDE_HEADERS}
	DESTINATION ${CMAKE_INSTALL_PREFIX}/include/osgXLibs/Utils
)