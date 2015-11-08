find_path(OSGEARTH_INCLUDE_DIR osgEarth/Export
	PATHS
		E:/OpenSceneGraph/AtEarth/environment/include
        ${OSG_DIR}
        $ENV{OSG_SOURCE_DIR}
        $ENV{OSGDIR}
        $ENV{OSG_DIR}
        /usr/local/
        /usr/
        /sw/ # Fink
        /opt/local/ # DarwinPorts
        /opt/csw/ # Blastwave
        /opt/
        [HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Session\ Manager\\Environment;OSG_ROOT]/
        ~/Library/Frameworks
        /Library/Frameworks
    PATH_SUFFIXES
        /include/
)

find_library(OSGEARTH_LIBRARY
	NAMES osgEarth
	PATHS
        ${OSG_DIR}
        $ENV{OSG_BUILD_DIR}
        $ENV{OSG_DIR}
        $ENV{OSGDIR}
        $ENV{OSG_ROOT}
        ~/Library/Frameworks
        /Library/Frameworks
        /usr/local
        /usr
        /sw
        /opt/local
        /opt/csw
        /opt
        [HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Session\ Manager\\Environment;OSG_ROOT]/lib
        /usr/freeware
    PATH_SUFFIXES
        /lib/
        /lib64/
        /build/lib/
        /build/lib64/
        /Build/lib/
        /Build/lib64/
)

GET_FILENAME_COMPONENT( OSGEARTH_LIBRARIES_DIR ${OSGEARTH_LIBRARY} PATH )