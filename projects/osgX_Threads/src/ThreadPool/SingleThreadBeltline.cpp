#include <ThreadPool/SingleThreadBeltline.h>
using namespace osgXThreads;

#include <iostream>

SingleThreadBeltline::SingleThreadBeltline()
{
	m_refWorkThread = new WorkThread( this );
}

SingleThreadBeltline::~SingleThreadBeltline()
{
	std::cout << "SingleThreadBeltline distructing..." << std::endl;
}

void SingleThreadBeltline::wakeUp()
{
	if ( ! m_refWorkThread->isRunning() )
	{
		m_refWorkThread->start();
	}
}

void SingleThreadBeltline::addAnIdleThread( WorkThread* pWorkThread )
{
	//nop
}