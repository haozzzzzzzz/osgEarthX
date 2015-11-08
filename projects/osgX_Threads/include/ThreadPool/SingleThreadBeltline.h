/**
	@brief 只有一个工作线程的生产线
	@author Hao Luo
	@date 2015/03/17
*/

#ifndef OSGX_THREADS_SINGLE_THREAD_BELTLINE_H
#define OSGX_THREADS_SINGLE_THREAD_BELTLINE_H 1

#include <osgXThreadsExport/Export.h>

#include <ThreadPool/IBeltline.h>
#include <ThreadPool/WorkThread.h>

namespace osgXThreads
{
	class OSGX_THREADS_EXPORT SingleThreadBeltline : public IBeltline
	{
	public:
		SingleThreadBeltline();
		virtual ~SingleThreadBeltline();

		virtual void wakeUp();

	protected:
		virtual void addAnIdleThread( WorkThread* pWorkThread );

	private:
		osg::ref_ptr<WorkThread> m_refWorkThread;

	};
}

#endif