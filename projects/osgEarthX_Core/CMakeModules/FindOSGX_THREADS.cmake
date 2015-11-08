find_path(OSGX_THREADS_INCLUDE_DIR osgXThreadsExport/Export.h
	PATHS
	E:/OpenSceneGraph/osgEarthX/projects/osgX_Threads/include
	/usr/local/include/osgXThreads
	/usr/local/include
	/usr/include/osgXThreads
	/usr/include
)

find_library(OSGX_THREADS_LIBRARY
	NAMES osgX_Threads
	PATHS
	E:/OpenSceneGraph/osgEarthX/projects/osgX_Threads/lib
    /usr/local
    /usr
)

find_library(OSGXTHREAEDS_LIBRARY_DEBUG
	NAMES osgX_Threadsd
	PATHS
	E:/OpenSceneGraph/osgEarthX/projects/osgX_Threads/lib
    /usr/local
    /usr
)

if(NOT OSGX_THREADS_LIBRARY_DEBUG)
	set(OSGX_THREADS_LIBRARY_DEBUG ${OSGX_THREADS_LIBRARY})
endif(NOT OSGX_THREADS_LIBRARY_DEBUG)

if(OSGX_THREADS_INCLUDE_DIR AND OSGX_THREADS_LIBRARY)
	SET(OSGX_THREADS_FOUND TRUE)
	GET_FILENAME_COMPONENT( OSGX_THREADS_LIBRARIES_DIR ${OSGX_THREADS_LIBRARY} PATH )
else(OSGX_THREADS_INCLUDE_DIR AND OSGX_THREADS_LIBRARY)
	message(SEND_ERROR "osgX_Threads is not valid.")
endif(OSGX_THREADS_INCLUDE_DIR AND OSGX_THREADS_LIBRARY)
