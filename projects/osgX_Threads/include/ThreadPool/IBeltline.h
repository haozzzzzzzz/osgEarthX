/**
	@brief 生产线接口
	@author Hao Luo
	@date 2015/03/17
	@description 一条生产线可以有一个和多个工人来执行一个或者多个任务。
*/

#ifndef OSGX_THREADS_I_BELTLINE_H
#define OSGX_THREADS_I_BELTLINE_H 1

#include <osgXThreadsExport/Export.h>

#include <ThreadPool/TasksManager.h>

namespace osgXThreads
{
	class WorkThread;

	class OSGX_THREADS_EXPORT IBeltline : public TasksManager
	{
	public:
		IBeltline();
		virtual ~IBeltline();

		/**
			唤醒睡眠中的工作线程
		*/
		virtual void wakeUp() = 0;

		///添加任务，并唤醒线程池
		virtual void addTaskAndWakeUp( Task* pTask );

	protected:
		friend WorkThread;
		///添加空闲线程，当生产线中WorkThread运行完当前代码时，最后调用此方法通知生产线该WorkThread已经处于空闲状态
		virtual void addAnIdleThread( WorkThread* pWorkThread ) = 0;

	private:
	};
}

#endif