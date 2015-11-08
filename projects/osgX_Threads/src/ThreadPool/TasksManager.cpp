

#include <ThreadPool/LockMutex.h>
#include <ThreadPool/TasksManager.h>
using namespace osgXThreads;

TasksManager::~TasksManager()
{
	m_TasksList.clear();
}

void TasksManager::addTask(Task* pTask)
{
	if (pTask == NULL)
	{
		return;
	}

	pTask->m_TaskMutex.writeLock();// lock pTask

	if (pTask->m_TaskState == Task::IN_LIST)
	{
		return;
	}

	SCOPEDLOCK_WRITE_MUTEX(m_TasksMutex);

	m_TasksList.push_back(pTask);
	pTask->m_TaskState = Task::IN_LIST;

	pTask->m_TaskMutex.writeUnlock();//unlock pTask
}

void TasksManager::removeTask(Task* pTask)
{
	if (pTask == NULL)
	{
		return;
	}

	pTask->m_TaskMutex.writeLock();
	if (pTask->m_TaskState == Task::NOT_IN_LIST)
	{
		return;
	}

	SCOPEDLOCK_WRITE_MUTEX(m_TasksMutex);

	m_TasksList.remove(pTask);
	pTask->m_TaskState = Task::NOT_IN_LIST;

	pTask->m_TaskMutex.writeUnlock();
}

osg::ref_ptr<Task> TasksManager::popTask()
{
	SCOPEDLOCK_WRITE_MUTEX(m_TasksMutex);
	if (m_TasksList.size() == 0)
	{
		return NULL;
	}

	osg::ref_ptr<Task> refTask = m_TasksList.front();

	refTask->m_TaskMutex.writeLock();

	m_TasksList.pop_front();
	refTask->m_TaskState = Task::NOT_IN_LIST;

	refTask->m_TaskMutex.writeUnlock();
	return refTask;
}

unsigned int TasksManager::getTasksNum()
{
	SCOPEDLOCK_READ_MUTEX(m_TasksMutex);
	return m_TasksList.size();
}