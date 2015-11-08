#include <Map/ExternalsMap.h>
using namespace osgEarthXCore;

#include <ThreadPool/LockMutex.h>

//OSGX
#include <StaticOSGViewerAssistant/StaticOSGViewerAssistant.h>

//Operations
void SetSkyProviderOperation::operator()( osg::Object* pObject )
{
	m_pExternalsMap->_setSkyProvider( m_pSkyProvider );
}

void RemoveSkyProviderOperation::operator()( osg::Object* pObject )
{
	m_pExternalsMap->_removeSkyProvider();
}

void SetGraticuleProviderOperation::operator() ( osg::Object* pObject )
{
	m_pExternalsMap->_setGraticuleProvider( m_pGraticuleProvider );
}

void RemoveGraticuleProviderOperation::operator()( osg::Object* pObject )
{
	m_pExternalsMap->_removeGraticuleProvider();
}

ExternalsMap::ExternalsMap()
{

}

ExternalsMap::~ExternalsMap()
{

}

void ExternalsMap::initMapViewer( MapViewer* pMapViewer )
{
	BaseMap::initMapViewer( pMapViewer );

	if ( m_refSkyProvider != NULL && pMapViewer != NULL )
	{
		m_refSkyProvider->getSkyNode()->attach( pMapViewer->getOrCreateViewer() );
	}
}

void ExternalsMap::setSkyProvider( SkyProvider* pSkyProvider )
{
	if ( pSkyProvider == NULL || pSkyProvider == m_refSkyProvider.get() )// NULL or equal
	{
		return;
	}

	_removeSkyProvider();//remove old sky.
	m_refSkyProvider = pSkyProvider;
	m_refSkyProvider->initSky( m_refMapNode );

	if ( m_pMapViewer != NULL )
	{
		m_refSkyProvider->getSkyNode()->attach( m_pMapViewer->getOrCreateViewer() );
	}

	osgX::StaticOSGViewerAssistant::dealWithUpdateOperation( new SetSkyProviderOperation( this, pSkyProvider ) );
}

void ExternalsMap::_setSkyProvider( SkyProvider* pSkyProvider )
{
	SCOPEDLOCK_WRITE_MUTEX( m_MapMutex );
	m_refRoot->replaceChild( m_refMapNode, m_refSkyProvider->getSkyNode() );
}

SkyProvider* ExternalsMap::getSkyProvider()
{
	return m_refSkyProvider;
}

void ExternalsMap::removeSkyProvider()
{
	osgX::StaticOSGViewerAssistant::dealWithUpdateOperation( new RemoveSkyProviderOperation( this ) );
}

void ExternalsMap::_removeSkyProvider()
{
	if ( m_refSkyProvider == NULL )
	{
		return;
	}

	SCOPEDLOCK_WRITE_MUTEX(m_MapMutex);
	m_refRoot->replaceChild( m_refSkyProvider->getSkyNode(), m_refMapNode );
	m_refSkyProvider = NULL;
}

GraticuleProvider* ExternalsMap::getGraticuleProvider()
{
	return m_refGraticuleProvider;
}

void ExternalsMap::setGraticuleProvider( GraticuleProvider* pGraticuleProvider )
{
	if( pGraticuleProvider == NULL || pGraticuleProvider == m_refGraticuleProvider )
	{
		return;
	}

	_removeGraticuleProvider();
	m_refGraticuleProvider = pGraticuleProvider;
	m_refGraticuleProvider->initGeodeticGraticule( m_refMapNode );
	osgX::StaticOSGViewerAssistant::dealWithUpdateOperation( new SetGraticuleProviderOperation( this, m_refGraticuleProvider ) );
}

void ExternalsMap::_setGraticuleProvider( GraticuleProvider* pGraticuleProvider )
{
	SCOPEDLOCK_WRITE_MUTEX(m_MapMutex);
	m_refRoot->addChild( pGraticuleProvider->getGeodeticGraticule() );
}

void ExternalsMap::removeGraticuleProvider()
{
	osgX::StaticOSGViewerAssistant::dealWithUpdateOperation( new RemoveGraticuleProviderOperation( this ) );
}

void ExternalsMap::_removeGraticuleProvider()
{
	if ( m_refGraticuleProvider == NULL )
	{
		return;
	}

	SCOPEDLOCK_WRITE_MUTEX(m_MapMutex);
	m_refRoot->removeChild( m_refGraticuleProvider->getGeodeticGraticule() );
	m_refGraticuleProvider = NULL;
}