/**
	@brief ¿ØÖÆÌ¨Viewer
	@author Hao Luo
	@date 2015/04/09
*/

#ifndef OSGEARTHX_CORE_COMMON_VIEWER_T_H
#define OSGEARTHX_CORE_COMMON_VIEWER_T_H 1

#include <Viewer/ThreadedViewer.h>

namespace osgEarthXCore
{
	template< class T >
	class CommonViewerT :
		public T,
		public ThreadedViewer
	{
	public:
		CommonViewerT( bool useThread = false )
		{
			ThreadedViewer::setViewerBase( this );
			ThreadedViewer::enableViewerThread( useThread );
		}

	protected:
		virtual ~CommonViewerT(){}

	};
}

#endif