#include <ThreadPool/LockMutex.h>
#include <ThreadPool/ThreadPool.h>
using namespace osgXThreads;

#include <iostream>
ThreadPool::ThreadPool( unsigned int threadNum /* = 1 */ )///默认线程数为1
{
	setMaxThreadsNum( threadNum );
}

ThreadPool::~ThreadPool()
{
	m_IdleThreadPtrsQueue.empty();
	m_ThreadsRefList.empty();
	std::cout<<"ThreadPool distructing..."<<std::endl;
}

void ThreadPool::setMaxThreadsNum( unsigned int num )
{
	int dist = ( int ) num - m_ThreadsRefList.size();

	if ( dist < 0 )///要从ThreadsList中减少
	{
		//锁住空闲队列，暂时不能添加空闲线程
		SCOPEDLOCK_WRITE_MUTEX( m_IdleThreadPtrsQueueMutex );

		//先减少空闲的线程
		WorkThread* pTempWorkThread = NULL;
		while( m_IdleThreadPtrsQueue.size() > 0 && ( pTempWorkThread = m_IdleThreadPtrsQueue.front(), pTempWorkThread != NULL) )
		{
			m_IdleThreadPtrsQueue.pop();//从空闲队列中弹出当前pTempWorkThread
			m_ThreadsRefList.remove( pTempWorkThread );//从线程列表中删除pTempWorkThread

			dist ++;
			if (dist == 0)
			{
				break;
			}
		}

		//如果没有空闲的线程，就直接缩减数目
		if ( dist < 0 )
		{
			WorkThread* pTempWorkThread = NULL;
			for ( int i = dist; i < 0; i ++ )
			{
				m_ThreadsRefList.pop_front();
			}
		}

	}

	m_uiMaxThreadsNum = num;
}

unsigned int ThreadPool::getMaxThreadsNum()
{
	return m_uiMaxThreadsNum;
}

void ThreadPool::wakeUp()
{
	//////////////////////////////////////////////////////////////////////////
	///这里应该考虑是否加锁

	///线程池线程剩余容量
	unsigned int notRealizedThreadsNum = m_uiMaxThreadsNum - m_ThreadsRefList.size();

	//如果没有任务或者没有空闲的工作线程则返回
	if ( TasksManager::getTasksNum() == 0 || getIdleThreadsQueueNum() + notRealizedThreadsNum == 0 )
	{
		return;
	}

	WorkThread* pTempWorkThread = NULL;

	//要同时执行所有任务，还需要的线程数
	unsigned int threadsWanted = TasksManager::getTasksNum() - getIdleThreadsQueueNum();

	//如果任务数大于空闲线程数，而且线程数未达最大值，则增加工作线程
	if ( threadsWanted > 0 && m_ThreadsRefList.size() < m_uiMaxThreadsNum )
	{
		//在线程池容量范围内，准备新增的线程
		unsigned int newThreadsNum = threadsWanted >= notRealizedThreadsNum ? notRealizedThreadsNum : threadsWanted;

		for ( unsigned int i = 0; i < newThreadsNum; i++ )
		{
			pTempWorkThread = new WorkThread( this );
			m_ThreadsRefList.push_front( pTempWorkThread );
			addAnIdleThread( pTempWorkThread );
		}
	}

	///唤醒空闲线程进行工作
	while( ( pTempWorkThread = getAnIdleThread(), pTempWorkThread != NULL ) && TasksManager::getTasksNum() > 0 )
	{
		pTempWorkThread->start();
	}
}

unsigned int ThreadPool::getIdleThreadsQueueNum()
{
	SCOPEDLOCK_READ_MUTEX( m_IdleThreadPtrsQueueMutex );
	return m_IdleThreadPtrsQueue.size();
}

void ThreadPool::addAnIdleThread( WorkThread*pWorkThread )
{
	if ( pWorkThread == NULL || pWorkThread->isDirty() == true )
	{
		return;
	}

	SCOPEDLOCK_WRITE_MUTEX( m_IdleThreadPtrsQueueMutex );
	m_IdleThreadPtrsQueue.push( pWorkThread );
}

WorkThread* ThreadPool::getAnIdleThread()
{
	SCOPEDLOCK_WRITE_MUTEX( m_IdleThreadPtrsQueueMutex );
	WorkThread* pWorkThread = NULL;
	if ( m_IdleThreadPtrsQueue.size() > 0 )
	{
		pWorkThread = m_IdleThreadPtrsQueue.front();
		m_IdleThreadPtrsQueue.pop();
	}

	return pWorkThread;
}