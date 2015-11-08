/**
	@brief »ŒŒÒ¿‡
	@author Hao Luo
	@date 2014/11/04
*/

#ifndef OSGX_THREADS_TASK_H
#define OSGX_THREADS_TASK_H 1

#include <osgXThreadsExport/Export.h>

#include <osg/Referenced>

#include <OpenThreads/ReadWriteMutex>

namespace osgXThreads
{
	class TasksManager;
	class OSGX_THREADS_EXPORT Task : 
		virtual public osg::Referenced
	{
	public:
		friend TasksManager;

	protected:
		enum TaskState
		{
			NOT_IN_LIST,
			IN_LIST
		};

	protected:
		TaskState m_TaskState;
		OpenThreads::ReadWriteMutex m_TaskMutex;

	public:
		Task();
		virtual void doTask() = 0;

	protected:
		virtual ~Task();
	};
}

#endif