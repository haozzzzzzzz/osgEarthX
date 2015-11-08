
#include <ThreadPool/Task.h>
#include <ThreadPool/TasksManager.h>
using namespace osgXThreads;

Task::Task()
{
	m_TaskState = NOT_IN_LIST;
}

Task::~Task()
{
}