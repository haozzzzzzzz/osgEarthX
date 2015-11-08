#include <Map/BaseMap.h>
#include <ThreadPool/LockMutex.h>
using namespace osgEarthXCore;

//OSGX
#include <StaticOSGViewerAssistant/StaticOSGViewerAssistant.h>

BaseMap::BaseMap()
{
	m_pThreadPool = NULL;
	m_pMapViewer = NULL;

	m_refRoot = new osg::Group();
	m_refRoot->setDataVariance( osg::Object::DYNAMIC );

	m_refMap = new osgEarth::Map();
	m_refMapNode = new osgEarth::MapNode( m_refMap );

	m_refRoot->addChild( m_refMapNode );
}

BaseMap::~BaseMap()
{
	SCOPEDLOCK_WRITE_MUTEX( m_MapMutex );

	if ( m_pThreadPool )
	{
		delete m_pThreadPool;
	}

}

osg::Group* BaseMap::getMapRoot()
{
	return m_refRoot;
}

osgEarth::Map* BaseMap::getOsgEarthMap()
{
	return m_refMap;
}

osgEarth::MapNode* BaseMap::getMapNode()
{
	return m_refMapNode;
}

OpenThreads::ReadWriteMutex& BaseMap::getMapMutex()
{
	return m_MapMutex;
}

const osgEarth::SpatialReference* BaseMap::getSRS()
{
	return m_refMapNode->getMapSRS();
}

void BaseMap::setMaxThreadsNum( unsigned int num )
{
	getOrCreateThreadPool()->setMaxThreadsNum( num );
	getOrCreateThreadPool()->wakeUp();
}

unsigned int BaseMap::getMaxThreadsNum()
{
	return getOrCreateThreadPool()->getMaxThreadsNum();
}

osgXThreads::ThreadPool* BaseMap::getOrCreateThreadPool()
{
	if (m_pThreadPool == NULL)
	{
		m_pThreadPool = new osgXThreads::ThreadPool;
	}
	return m_pThreadPool;
}

void BaseMap::initMapViewer( MapViewer* pMapViewer )
{
	m_pMapViewer = pMapViewer;
}

void BaseMap::addGroupObject( osg::Group* pGroup, osg::Node* pNode )
{
	osgX::StaticOSGViewerAssistant::dealWithUpdateOperation( new AddGroupObjectOperation( pGroup, pNode ) );
}

void BaseMap::removeGroupObjet( osg::Group* pGroup, osg::Node* pNode )
{
	osgX::StaticOSGViewerAssistant::dealWithUpdateOperation( new RemoveGroupObjectOperation( pGroup, pNode ) );
}

/////////////////////////////
//Operations
/////////////////////////////

//AddGroupObjectOperation
AddGroupObjectOperation::AddGroupObjectOperation( osg::Group* pGroup, osg::Node* pNode )
{
	m_refGroup = pGroup;
	m_refNode = pNode;
}

AddGroupObjectOperation::~AddGroupObjectOperation()
{

}

void AddGroupObjectOperation::operator()( osg::Object* )
{
	if ( m_refGroup.get() == NULL || m_refNode.get() == NULL )
	{
		return;
	}

	m_refGroup->addChild( m_refNode );
}

//RemoveMapObjectOperation
RemoveGroupObjectOperation::RemoveGroupObjectOperation( osg::Group* pGroup, osg::Node* pNode )
{
	m_refGroup = pGroup;
	m_refNode = pNode;
}

void RemoveGroupObjectOperation::operator()( osg::Object* )
{
	if ( m_refGroup.get() == NULL || m_refNode.get() == NULL )
	{
		return;
	}

	m_refGroup->removeChild( m_refNode );
}

RemoveGroupObjectOperation::~RemoveGroupObjectOperation()
{

}