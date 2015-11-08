/**
	@brief viewer template for win32
	@author Hao Luo
	@date 2015/04/10
*/

#ifndef OSGEARTHX_CORE_WIN32_VIEWER_T_H
#define OSGEARTHX_CORE_WIN32_VIEWER_T_H 1

#include <osgEarthXCoreExport/Export.h>

#include <Viewer/ThreadedViewer.h>
#include <Viewer/Win32ViewerBase.h>

namespace osgEarthXCore
{
	template< class T >
	class Win32ViewerT :
		public T,
		public ThreadedViewer,
		public Win32ViewerBase
	{
	public:
		Win32ViewerT( bool useThread = true )
		{
			ThreadedViewer::setViewerBase( this );
			ThreadedViewer::enableViewerThread( useThread );
		}

	protected:
		virtual ~Win32ViewerT(){}

	private:

	};
}

#endif