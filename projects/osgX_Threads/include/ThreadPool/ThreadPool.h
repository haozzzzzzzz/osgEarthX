/**
	@brief 线程池类
	@author Hao Luo
	@date 2014/11/04
	@description 线程池具备动态添加工作线程（直至设定的最大允许值）、动态添加任务的功能
*/

#ifndef OSGX_THREADS_THREAD_POOL_H
#define OSGX_THREADS_THREAD_POOL_H 1

#include <osgXThreadsExport/Export.h>

#include <ThreadPool/IBeltline.h>
#include <ThreadPool/WorkThread.h>

#include <list>
#include <queue>

namespace osgXThreads
{
	class OSGX_THREADS_EXPORT ThreadPool : 
		public IBeltline
	{
	public:
		typedef std::list< osg::ref_ptr< WorkThread > > WorkThreadRefList;
		typedef WorkThreadRefList::iterator WorkThreadRefListIterator;
		typedef std::queue< WorkThread* > IdleWorkThreadPtrQueue;

	public:
		ThreadPool( unsigned int threadNum = 1 );
		virtual ~ThreadPool();

		///设置最大工作线程
		void setMaxThreadsNum( unsigned int num );
		unsigned int getMaxThreadsNum();

		virtual void wakeUp();

	protected:
		virtual void addAnIdleThread( WorkThread*pWorkThread );

		///获取空闲线程数目
		unsigned int getIdleThreadsQueueNum();

		///获取一条空闲线程
		WorkThread* getAnIdleThread();

	protected:
		///工作线程列表，仅作为工作线程容器，因为WorkThreadList不涉及多线程访问，所以无需分配线程锁
		WorkThreadRefList m_ThreadsRefList;

		///空闲状态中的线程指针队列
		IdleWorkThreadPtrQueue m_IdleThreadPtrsQueue;
		OpenThreads::ReadWriteMutex m_IdleThreadPtrsQueueMutex;

	private:
		unsigned int m_uiMaxThreadsNum;
	};
}

#endif