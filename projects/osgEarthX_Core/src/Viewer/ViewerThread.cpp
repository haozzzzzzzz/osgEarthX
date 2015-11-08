#include <Viewer/ViewerThread.h>
using namespace osgEarthXCore;

#include <cassert>

ViewerThread::ViewerThread( osgViewer::ViewerBase* pViewer /* = NULL */ )
{
	m_pViewer = pViewer;
}

ViewerThread::~ViewerThread()
{
	cancel();
}

void ViewerThread::setViewer( osgViewer::ViewerBase* pViewer )
{
	m_pViewer = pViewer;
}

void ViewerThread::run()
{
	assert( m_pViewer != NULL );
	m_pViewer->run();
}

int ViewerThread::cancel()
{
	assert( m_pViewer != NULL );
	m_pViewer->setDone( true );
	while( OpenThreads::Thread::isRunning() )
	{
		OpenThreads::Thread::YieldCurrentThread();
	}

	return OpenThreads::Thread::cancel();
}