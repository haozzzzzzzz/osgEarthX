/**
	@brief 工作线程
	@author Hao Luo
	@date 2014/11/04
*/

#ifndef OSGX_THREADS_WORK_THREAD_H
#define OSGX_THREADS_WORK_THREAD_H 1

#include <osgXThreadsExport/Export.h>

#include <OpenThreads/Thread>
#include <osg/Referenced>

namespace osgXThreads
{
	class IBeltline;

	class OSGX_THREADS_EXPORT WorkThread : 
		public OpenThreads::Thread,
		virtual public osg::Referenced
	{
	public:
		///构造函数，TasksManager指针默认为NULL
		WorkThread( IBeltline* pBeltline = NULL );

		///设置TasksManager
		void setIBeltLine( IBeltline* pBeltline );

		///覆盖OpenThreads::Thread虚函数
		virtual int cancel();///退出线程
		virtual void run();///运行线程

		void dirty();
		bool isDirty();

	protected:
		virtual ~WorkThread();

	protected:
		IBeltline* m_pIBeltline;
		bool m_bDone;

	private:
		bool m_bDirty;//如果当前WorkThread被ThreadPool删除，则m_bDirty = true;
	};
}

#endif