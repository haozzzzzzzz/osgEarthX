#include <ThreadPool/IBeltline.h>
using namespace osgXThreads;

IBeltline::IBeltline()
{

}

IBeltline::~IBeltline()
{

}

void IBeltline::addTaskAndWakeUp( Task* pTask )
{
	TasksManager::addTask( pTask );
	wakeUp();
}