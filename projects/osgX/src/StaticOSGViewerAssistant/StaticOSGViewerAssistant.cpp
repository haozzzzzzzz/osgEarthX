#include <StaticOSGViewerAssistant/StaticOSGViewerAssistant.h>
using namespace osgX;

osgViewer::ViewerBase* StaticOSGViewerAssistant::m_pViewerBase = NULL;//静态对象一定要初始化，不然会报错
OpenThreads::ReadWriteMutex StaticOSGViewerAssistant::m_ViewerBaseMutex;

void StaticOSGViewerAssistant::setViewerBase( osgViewer::ViewerBase* pViewerBase )
{
	m_ViewerBaseMutex.writeLock();
	m_pViewerBase = pViewerBase;
	m_ViewerBaseMutex.writeUnlock();
}

void StaticOSGViewerAssistant::dealWithUpdateOperation( osg::ref_ptr< osg::Operation > refOperation )
{
	m_ViewerBaseMutex.readLock();
	if ( m_pViewerBase )
	{
		m_pViewerBase->addUpdateOperation( refOperation );
	}
	else
	{
		refOperation->operator()( NULL );
	}
	m_ViewerBaseMutex.readUnlock();
}