#include <Viewer/ThreadedViewer.h>
using namespace osgEarthXCore;

ThreadedViewer::ThreadedViewer( osgViewer::ViewerBase* pViewerBase /* = NULL */, bool useThread /* = false */ )
{
	m_refViewerBase = pViewerBase;
	m_bEnableThread = useThread;
	m_pViewerThread = NULL;

}

ThreadedViewer::~ThreadedViewer()
{
	stop();
	delete m_pViewerThread;
}

int ThreadedViewer::start()
{
	if ( m_refViewerBase.get() == NULL )
	{
		return -1;
	}

	if ( m_bEnableThread )
	{
		if ( m_pViewerThread == NULL )
		{
			m_pViewerThread = new ViewerThread();
		}

		m_pViewerThread->setViewer( m_refViewerBase );
		return m_pViewerThread->start();
	}
	else
	{
		return m_refViewerBase->run();
	}

	return -1;
}

void ThreadedViewer::stop()
{
	if ( m_pViewerThread != NULL )
	{
		m_pViewerThread->cancel();
	}
	else if( m_refViewerBase != NULL )
	{
		m_refViewerBase->setDone( true );
	}
}

void ThreadedViewer::enableViewerThread( bool enable /* = true */ )
{
	m_bEnableThread = enable;
}

void ThreadedViewer::setViewerBase( osgViewer::ViewerBase* pViewerBase )
{
	m_refViewerBase = pViewerBase;
}