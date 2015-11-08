/**
	@brief 可运行另一个线程的Viewer
	@author Hao Luo
	@date 2015/04/09
*/

#ifndef OSGEARTHX_CORE_THREADED_VIEWER_H
#define OSGEARTHX_CORE_THREADED_VIEWER_H 1

#include <osgEarthXCoreExport/Export.h>

#include <Viewer/IThreadedViewer.h>
#include <Viewer/ViewerThread.h>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT ThreadedViewer :
		public IThreadedViewer
	{
	public:
		ThreadedViewer( osgViewer::ViewerBase* pViewerBase = NULL, bool useThread = false );
		virtual ~ThreadedViewer();

		virtual int start();
		virtual void stop();
		void enableViewerThread( bool enable = true );
		void setViewerBase( osgViewer::ViewerBase* pViewerBase );

	protected:
		osg::ref_ptr< osgViewer::ViewerBase > m_refViewerBase;

	private:
		bool m_bEnableThread;
		ViewerThread* m_pViewerThread;

	};
}

#endif