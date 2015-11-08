find_path(OSGX_INCLUDE_DIR osgXExport/Export.h
	PATHS
	E:/OpenSceneGraph/osgEarthX/projects/osgX/include
	/usr/local/include/osgX
	/usr/local/include
	/usr/include/osgX
	/usr/include
)

find_library(OSGX_LIBRARY
	NAMES osgX
	PATHS
	E:/OpenSceneGraph/osgEarthX/projects/osgX/lib
    /usr/local
    /usr
)

find_library(OSGX_LIBRARY_DEBUG
	NAMES osgXd
	PATHS
	E:/OpenSceneGraph/osgEarthX/projects/osgX/lib
    /usr/local
    /usr
)

if(NOT OSGX_LIBRARY_DEBUG)
	set(OSGX_LIBRARY_DEBUG ${OSGX_LIBRARY})
endif(NOT OSGX_LIBRARY_DEBUG)

if(OSGX_INCLUDE_DIR AND OSGX_LIBRARY)
	SET(OSGX_FOUND TRUE)
	GET_FILENAME_COMPONENT( OSGX_LIBRARIES_DIR ${OSGX_LIBRARY} PATH )
else(OSGX_INCLUDE_DIR AND OSGX_LIBRARY)
	message(SEND_ERROR "osgX is not valid")
endif(OSGX_INCLUDE_DIR AND OSGX_LIBRARY)
