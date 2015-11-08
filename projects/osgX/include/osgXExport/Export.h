/**
	@brief OSGX 导入头文件
	@author Hao Luo
	@date 2014/11/03
*/

#ifndef OSGX_EXPORT_H
#define OSGX_EXPORT_H 1

#define OSGX_DEPRECATED_API

// disable VisualStudio warnings
#if defined( _MSC_VER )
	#pragma warning(disable:4250)
	#pragma warning(disable:4482)
#endif

#if defined( _MSC_VER ) || defined( __CYGWIN__ ) || defined( __MINGW32__ ) || defined( __BCPLUSPLUS__ )  || defined( __MWERKS__ )
	#if defined( OSGX_LIBRARY_STATIC )
		#define OSGX_EXPORT
	#elif defined( OSGX_LIBRARY )
		#define OSGX_EXPORT   __declspec( dllexport )
	#else
		#define OSGX_EXPORT   __declspec( dllimport )
	#endif
#else
	#define OSGX_EXPORT
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