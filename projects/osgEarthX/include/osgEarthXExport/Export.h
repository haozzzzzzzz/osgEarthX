/**
	@brief osgEarthX µº»Î¿‡
	@author Hao Luo
	@date 2014/11/06
*/

#ifndef OSGEARTHX_EXPORT_H
#define OSGEARTHX_EXPORT_H 1

#define OSGEARTHX_DEPRECATED_API

// disable VisualStudio warnings
#if defined( _MSC_VER )
	#pragma warning(disable:4250)
#endif

#if defined( _MSC_VER ) || defined( __CYGWIN__ ) || defined( __MINGW32__ ) || defined( __BCPLUSPLUS__ )  || defined( __MWERKS__ )
	#if defined( OSGEARTHX_LIBRARY_STATIC )
		#define OSGEARTHX_EXPORT
	#elif defined( OSGEARTHX_LIBRARY )
		#define OSGEARTHX_EXPORT   __declspec( dllexport )
	#else
		#define OSGEARTHX_EXPORT   __declspec( dllimport )
	#endif
#else
	#define OSGEARTHX_EXPORT
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