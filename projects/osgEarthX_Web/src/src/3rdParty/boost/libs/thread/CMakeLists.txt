#/**********************************************************\ 
#Original Author: Richard Bateman (taxilian)
#
#Created:    Nov 20, 2009
#License:    Dual license model; choose one of two:
#            New BSD License
#            http://www.opensource.org/licenses/bsd-license.php
#            - or -
#            GNU Lesser General Public License, version 2.1
#            http://www.gnu.org/licenses/lgpl-2.1.html
#            
#Copyright 2009 PacketPass, Inc and the Firebreath development team
#\**********************************************************/

# Written to work with cmake 2.6
cmake_minimum_required (VERSION 2.6)
set (CMAKE_BACKWARDS_COMPATIBILITY 2.6)

add_definitions(-DBOOST_THREAD_BUILD_LIB=1)

if (WIN32)
    set (PLATFORMDIR win32)
else()
    set (PLATFORMDIR pthread)
endif()
include_directories (
    ${Boost_INCLUDE_DIRS}
	${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/src/${PLATFORMDIR}
)

file (GLOB GENERAL_SRC RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
    src/*.cpp
)

file (GLOB WIN32_SRC RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
    src/win32/*.cpp
)

file (GLOB PTHREAD_SRC RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
    src/pthread/*.cpp
)

if (WIN32)
    list(APPEND SOURCES
        ${GENERAL_SRC}
        ${WIN32_SRC}
    )
else()
    list(APPEND SOURCES
        ${GENERAL_SRC}
        ${PTHREAD_SRC}
    )
endif()

add_library (boost_thread STATIC ${SOURCES})
set_target_properties(boost_thread PROPERTIES FOLDER "Libraries")

if (FB_RELEASE)
    install (TARGETS boost_thread
        EXPORT FireBreath_Exports
        DESTINATION bin/\${BUILD_TYPE}
        COMPONENT FBCORE
        )
endif()
