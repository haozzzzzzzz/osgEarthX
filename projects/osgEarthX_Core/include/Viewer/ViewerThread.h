/**
	@brief 渲染线程
	@author Hao Luo
	@date 2014/11/03
*/

#ifndef OSGEARTHX_CORE_VIEWER_THREAD_H
#define OSGEARTHX_CORE_VIEWER_THREAD_H 1

#include <OpenThreads/Thread>
#include <osgViewer/ViewerBase>

namespace osgEarthXCore
{
	class ViewerThread : public OpenThreads::Thread
	{
	public:
		ViewerThread( osgViewer::ViewerBase* pViewer = NULL );
		virtual ~ViewerThread();

		/**设置需要在线程中运行的View*/
		void setViewer( osgViewer::ViewerBase* pViewer );

		/**derived from OpenThreads::Thread*/

		//线程内部执行流程
		virtual void run();

		//取消运行
		virtual int cancel();

	protected:
		osgViewer::ViewerBase* m_pViewer;
	};
}

#endif