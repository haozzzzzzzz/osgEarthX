/**
	@brief osgEarthX_Core 导入头文件
	@author Hao Luo
	@date 2014/11/03
*/

#ifndef OSGEARTHX_CORE_EXPORT_H
#define OSGEARTHX_CORE_EXPORT_H 1

#define OSGEARTHX_CORE_DEPRECATED_API

// disable VisualStudio warnings
#if defined( _MSC_VER )
	#pragma warning(disable:4250)//warning C4250: “osgEarthXCore::ImageLayerOptions”: 通过域控制继承“osgEarthXCore::TerrainLayerOptions::osgEarthXCore::TerrainLayerOptions::setVisible”
#endif

#if defined( _MSC_VER ) || defined( __CYGWIN__ ) || defined( __MINGW32__ ) || defined( __BCPLUSPLUS__ )  || defined( __MWERKS__ )
	#if defined( OSGEARTHX_CORE_LIBRARY_STATIC )
		#define OSGEARTHX_CORE_EXPORT
	#elif defined( OSGEARTHX_CORE_LIBRARY )
		#define OSGEARTHX_CORE_EXPORT   __declspec( dllexport )
	#else
		#define OSGEARTHX_CORE_EXPORT   __declspec( dllimport )
	#endif
#else
	#define OSGEARTHX_CORE_EXPORT
#endif

// Define NULL pointer value
#ifndef NULL
	#ifdef __cplusplus
		#define NULL 0
	#else
		#define NULL ( ( void* ) 0 )
	#endif
#endif

#endif