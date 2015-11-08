#include <Map/ElevationLayerMap.h>
#include <ThreadPool/LockMutex.h>
using namespace osgEarthXCore;

//OSGX
#include <StaticOSGViewerAssistant/StaticOSGViewerAssistant.h>

void AddElevationLayerOperation::operator() ( osg::Object* )
{
	SCOPEDLOCK_WRITE_MUTEX( m_pElevationLayerMap->getMapMutex() );
	m_pElevationLayerMap->getOsgEarthMap()->addElevationLayer( m_pElevationLayer );

	if ( 0 < m_iIndex )
	{
		m_pElevationLayerMap->getOsgEarthMap()->moveElevationLayer( m_pElevationLayer, ( unsigned int ) m_iIndex );
	}
}

void RemoveElevationLayerOperation::operator() ( osg::Object* )
{
	SCOPEDLOCK_WRITE_MUTEX( m_pElevationLayerMap->getMapMutex() );
	m_pElevationLayerMap->getOsgEarthMap()->removeElevationLayer( m_pElevationLayer );
}

void MoveElevationLayerOperation::operator() ( osg::Object* )
{
	SCOPEDLOCK_WRITE_MUTEX( m_pElevationLayerMap->getMapMutex() );
	m_pElevationLayerMap->getOsgEarthMap()->moveElevationLayer( m_pElevationLayer, m_uiIndex );
}

ElevationLayerMap::ElevationLayerMap()
{

}

ElevationLayerMap::~ElevationLayerMap()
{

}

void ElevationLayerMap::addElevationLayer( osgEarth::ElevationLayer* pElevationLayer, int index /* = -1 */ )
{
	osgX::StaticOSGViewerAssistant::dealWithUpdateOperation( new AddElevationLayerOperation( this, pElevationLayer, index ) );
}

void ElevationLayerMap::removeElevationLayer(osgEarth::ElevationLayer* pElevationLayer)
{
	osgX::StaticOSGViewerAssistant::dealWithUpdateOperation( new RemoveElevationLayerOperation( this, pElevationLayer ) );
}

void ElevationLayerMap::moveElevationLayer( osgEarth::ElevationLayer* pElevationLayer, unsigned int index )
{
	osgX::StaticOSGViewerAssistant::dealWithUpdateOperation( new MoveElevationLayerOperation( this, pElevationLayer, index ) );
}

void ElevationLayerMap::addElevationLayerProvider( ElevationLayerProvider* pLayerProvider )
{
	if ( pLayerProvider == NULL )
	{
		return;
	}

	SCOPEDLOCK_WRITE_MUTEX( pLayerProvider->m_ProviderInTaskMutex );
	_insertElevationLayerProvider( pLayerProvider );
}

void ElevationLayerMap::insertElevationLayerProvider( ElevationLayerProvider* pLayerProvder, unsigned int index )
{
	if ( pLayerProvder == NULL )
	{
		return;
	}

	SCOPEDLOCK_WRITE_MUTEX( pLayerProvder->m_ProviderInTaskMutex );
	_insertElevationLayerProvider( pLayerProvder, index );
}

void ElevationLayerMap::removeElevationLayerProvider( ElevationLayerProvider* pLayerProvider )
{
	if ( pLayerProvider == NULL )
	{
		return;
	}

	SCOPEDLOCK_WRITE_MUTEX( pLayerProvider->m_ProviderInTaskMutex );
	_removeElevationLayerProvider( pLayerProvider );
}

void ElevationLayerMap::removeElevationLayerProvider( unsigned int index )
{
	ElevationLayerProvider* pProvider = m_ElevationLayerProviders[index];
	if ( pProvider == NULL )
	{
		return;
	}

	SCOPEDLOCK_WRITE_MUTEX( pProvider->m_ProviderInTaskMutex );
	_removeElevationLayerProvider( pProvider, index );
}

void ElevationLayerMap::moveElevationLayerProvider( ElevationLayerProvider* pLayerProvider, unsigned int index )
{
	if ( pLayerProvider == NULL )
	{
		return;
	}

	SCOPEDLOCK_WRITE_MUTEX( pLayerProvider->m_ProviderInTaskMutex );
	if ( pLayerProvider->m_BindingState == LayerProvider::NOT_ADDED || pLayerProvider->m_BindingState == LayerProvider::REMOVED )
	{
		return;
	}

	bool bMove = m_ElevationLayerProviders.move(pLayerProvider, index);
	if ( bMove && pLayerProvider->m_BindingState == LayerProvider::ADDED )
	{
		moveElevationLayer(pLayerProvider->getElevationLayer(), m_ElevationLayerProviders.signArrival(pLayerProvider));
	}
}

void ElevationLayerMap::moveElevationLayerProvider( unsigned int oldIndex, unsigned int newIndex )
{
	ElevationLayerProvider* pLayerProvider = m_ElevationLayerProviders[oldIndex];
	if ( !pLayerProvider )
	{
		return;
	}

	SCOPEDLOCK_READ_MUTEX(pLayerProvider->m_ProviderInTaskMutex);
	if ( pLayerProvider->m_BindingState == LayerProvider::NOT_ADDED || pLayerProvider->m_BindingState == LayerProvider::REMOVED )
	{
		return;
	}

	bool bMove = m_ElevationLayerProviders.move(oldIndex, newIndex);
	if ( bMove && pLayerProvider->m_BindingState == LayerProvider::ADDED )
	{
		moveElevationLayer(pLayerProvider->getElevationLayer(), m_ElevationLayerProviders.signArrival(pLayerProvider));
	}
}

void ElevationLayerMap::_addAndFixOrderOfElevLyerProv( ElevationLayerProvider* pLoadedLayerProvider )
{
	osgEarth::ElevationLayer* pLayer = NULL;
	if 
		(
		pLoadedLayerProvider == NULL ||
		pLoadedLayerProvider->m_BindingState == LayerProvider::REMOVED ||
		( pLayer = pLoadedLayerProvider->getElevationLayer(), pLayer == NULL )
		)
	{
		return;
	}

	addElevationLayer( pLayer, m_ElevationLayerProviders.signArrival(  pLoadedLayerProvider) );
	pLoadedLayerProvider->m_BindingState = LayerProvider::ADDED;
}

void ElevationLayerMap::_addTaskOfElevLyerProv( ElevationLayerProvider* pLayerProvider )
{
	LayerTask* pTask = pLayerProvider->getOrCreateLayerTask();
	pTask->setBaseMap( this );
	getOrCreateThreadPool()->addTaskAndWakeUp( pTask );
	pLayerProvider->m_BindingState = LayerProvider::IN_TASK;
}

void ElevationLayerMap::_insertElevationLayerProvider( ElevationLayerProvider* pLayerProvider, int index /* = -1 */ )
{
	if ( pLayerProvider->m_BindingState != LayerProvider::NOT_ADDED && pLayerProvider->m_BindingState != LayerProvider::REMOVED )
	{
		return;//说明已经加载或者准备加载
	}

	if ( -1 >= index )
	{
		m_ElevationLayerProviders.push(pLayerProvider);
	}
	else
	{
		m_ElevationLayerProviders.insert( pLayerProvider, ( unsigned int ) index );
	}
	pLayerProvider->m_BindingState = LayerProvider::NOT_ADDED;//还没添加到Map中，标识准备添加到Map中

	switch(pLayerProvider->m_ProviderState)
	{
	case LayerProvider::UNINITIALIZED:
		{
			_addTaskOfElevLyerProv( pLayerProvider );
		}
		break;
	case LayerProvider::INITIALIZED:
		{
			_addAndFixOrderOfElevLyerProv( pLayerProvider );
		}
		break;

	default:
		break;

	}
}

void ElevationLayerMap::_removeElevationLayerProvider( ElevationLayerProvider* pLayerProvider, int index /* = -1 */ )
{
	if ( pLayerProvider->m_BindingState != LayerProvider::ADDED && pLayerProvider->m_BindingState != LayerProvider::IN_TASK )
	{
		return;
	}

	switch ( pLayerProvider->m_BindingState )
	{
	case LayerProvider::ADDED:
		{
			this->removeElevationLayer( pLayerProvider->getElevationLayer() );
		}
		break;

	case LayerProvider::IN_TASK:
		{
			getOrCreateThreadPool()->removeTask( pLayerProvider->getOrCreateLayerTask() );
		}
		break;

	default:
		break;

	}

	if ( -1 >= index )
	{
		m_ElevationLayerProviders.remove(pLayerProvider);
	}
	else
	{
		m_ElevationLayerProviders.remove( ( unsigned int ) index );
	}

	pLayerProvider->m_BindingState = LayerProvider::REMOVED;
}