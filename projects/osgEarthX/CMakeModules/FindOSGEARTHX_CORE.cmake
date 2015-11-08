find_path(OSGEARTHX_CORE_INCLUDE_DIR osgEarthXCoreExport/Export.h
	PATHS
	E:/OpenSceneGraph/osgEarthX/projects/osgEarthX_Core/include
	/usr/local/include/osgEarthXCore
	/usr/local/include
	/usr/include/osgEarthXCore
	/usr/include
)

find_library(OSGEARTHX_CORE_LIBRARY
	NAMES osgEarthX_Core
	PATHS
	E:/OpenSceneGraph/osgEarthX/projects/osgEarthX_Core/lib
    /usr/local/lib
    /usr/lib
)

find_library(osgEarthX_CORE_LIBRARY_DEBUG
	NAMES osgEarthX_Cored
	PATHS
	E:/OpenSceneGraph/osgEarthX/projects/osgEarthX_Core/lib
    /usr/local/lib
    /usr/lib
)

if(OSGEARTHX_CORE_INCLUDE_DIR AND OSGEARTHX_CORE_LIBRARY)
	SET(OSGEARTHX_CORE_FOUND TRUE)
	GET_FILENAME_COMPONENT( OSGEARTHX_CORE_LIBRARIES_DIR ${OSGEARTHX_CORE_LIBRARY} PATH )
else(OSGEARTHX_CORE_INCLUDE_DIR AND OSGEARTHX_CORE_LIBRARY)
	message(SEND_ERROR "osgEarthX_Core is not valid.")
endif(OSGEARTHX_CORE_INCLUDE_DIR AND OSGEARTHX_CORE_LIBRARY)