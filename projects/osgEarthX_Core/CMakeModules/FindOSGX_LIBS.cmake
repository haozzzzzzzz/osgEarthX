find_path(OSGX_LIBS_INCLUDE_DIR Utils/DynamicList.h
	PATHS
	E:/OpenSceneGraph/osgEarthX/projects/osgX_Libs
	/usr/local/include/osgXLibs
	/usr/local/include
	/usr/include/osgXLibs
	/usr/include
)

if(NOT OSGX_LIBS_INCLUDE_DIR)
	MESSAGE(SEND_ERROR "osgX_Libs is not found.")
endif(NOT OSGX_LIBS_INCLUDE_DIR)