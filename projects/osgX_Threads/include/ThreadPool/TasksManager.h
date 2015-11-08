/**
	@brief 任务管理器
	@author Hao Luo
	@date 2014/11/04
*/

#ifndef OSGX_THREADS_TASKS_MANAGER_H
#define OSGX_THREADS_TASKS_MANAGER_H 1

#include <osgXThreadsExport/Export.h>

#include <ThreadPool/Task.h>
#include <OpenThreads/ReadWriteMutex>
#include <osg/ref_ptr>

#include <list>

namespace osgXThreads
{

	class OSGX_THREADS_EXPORT TasksManager
	{
	public:
		typedef std::list< osg::ref_ptr< Task > > TasksList;
		typedef TasksList::iterator TaskIterator;

	public:
		virtual ~TasksManager();

		void addTask(Task* pTask);
		void removeTask(Task* pTask);

		osg::ref_ptr<Task> popTask();

		unsigned int getTasksNum();

	protected:
		TasksList m_TasksList;
		OpenThreads::ReadWriteMutex m_TasksMutex;

	private:
	};
}

#endif