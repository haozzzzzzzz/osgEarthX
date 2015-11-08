#include <Map/ModelLayerMap.h>
#include <ThreadPool/LockMutex.h>
using namespace osgEarthXCore;

//OSGX
#include <StaticOSGViewerAssistant/StaticOSGViewerAssistant.h>

void AddModeLayerOperation::operator() ( osg::Object* )
{
	SCOPEDLOCK_WRITE_MUTEX( m_pModelLayerMap->getMapMutex() );
	if ( -1 == m_iIndex )
	{
		m_pModelLayerMap->getOsgEarthMap()->addModelLayer( m_pModelLayer );
	}
	else if ( m_iIndex >= 0 )
	{
		m_pModelLayerMap->getOsgEarthMap()->insertModelLayer( m_pModelLayer, m_iIndex );
	}
}

void RemoveModelLayerOperation::operator() ( osg::Object* )
{
	SCOPEDLOCK_WRITE_MUTEX( m_pModelLayerMap->getMapMutex() );
	m_pModelLayerMap->getOsgEarthMap()->removeModelLayer( m_pModelLayer );
}

void MoveModelLayerOperation::operator() ( osg::Object* )
{
	SCOPEDLOCK_WRITE_MUTEX( m_pModelLayerMap->getMapMutex() );
	m_pModelLayerMap->getOsgEarthMap()->moveModelLayer( m_pModelLayer, m_uiIndex );
}

ModelLayerMap::ModelLayerMap()
{

}

ModelLayerMap::~ModelLayerMap()
{

}

void ModelLayerMap::addModelLayer(osgEarth::ModelLayer* pModelLayer, int insertIndex /* = -1 */)
{
	osgX::StaticOSGViewerAssistant::dealWithUpdateOperation( new AddModeLayerOperation( this, pModelLayer, insertIndex ) );
}

void ModelLayerMap::removeModelLayer(osgEarth::ModelLayer* pModelLayer)
{
	osgX::StaticOSGViewerAssistant::dealWithUpdateOperation( new RemoveModelLayerOperation( this, pModelLayer ) );
}

void ModelLayerMap::moveModelLayer(osgEarth::ModelLayer* pModelLayer, unsigned int newIndex)
{
	osgX::StaticOSGViewerAssistant::dealWithUpdateOperation( new MoveModelLayerOperation( this, pModelLayer, newIndex ) );
}

void ModelLayerMap::addModelLayerProvider(ModelLayerProvider* pModelLayerProvider)
{
	if (pModelLayerProvider == NULL)
	{
		return;
	}

	SCOPEDLOCK_WRITE_MUTEX( pModelLayerProvider->m_ProviderInTaskMutex );
	_insertModelLayerProvider(pModelLayerProvider);
}

void ModelLayerMap::insertModelLayerProvider(ModelLayerProvider* pModelLayerProvider, unsigned int index)
{
	if (pModelLayerProvider == NULL)
	{
		return;
	}

	SCOPEDLOCK_WRITE_MUTEX(pModelLayerProvider->m_ProviderInTaskMutex);
	_insertModelLayerProvider( pModelLayerProvider, index );
}

void ModelLayerMap::_insertModelLayerProvider( ModelLayerProvider* pModelLayerProvider, int index /* = -1 */ )
{
	if ( pModelLayerProvider->m_BindingState != LayerProvider::NOT_ADDED && pModelLayerProvider->m_BindingState != LayerProvider::REMOVED )
	{
		return;
	}

	if ( -1 >= index )
	{
		m_ModelLayerProviders.push(pModelLayerProvider);
	}
	else
	{
		m_ModelLayerProviders.insert( pModelLayerProvider, ( unsigned int ) index );
	}
	pModelLayerProvider->m_BindingState = LayerProvider::NOT_ADDED;

	switch( pModelLayerProvider->m_ProviderState )
	{
	case LayerProvider::UNINITIALIZED:
		{
			_addTaskOfModLyerProv(pModelLayerProvider);
		}
		break;

	case LayerProvider::INITIALIZED:
		{
			_addAndFixOrderOfModLyerProv(pModelLayerProvider);
		}
		break;

	default:
		break;
	}

}

void ModelLayerMap::removeModelLayerProvider(ModelLayerProvider* pModelLayerProvider)
{
	if (pModelLayerProvider == NULL)
	{
		return;
	}

	SCOPEDLOCK_WRITE_MUTEX(pModelLayerProvider->m_ProviderInTaskMutex);
	_removeModelLayerProvider(pModelLayerProvider);
}

void ModelLayerMap::removeModelLayerProvider(unsigned int index)
{
	ModelLayerProvider* pProvider = m_ModelLayerProviders[index];
	if ( pProvider == NULL )
	{
		return;
	}

	SCOPEDLOCK_WRITE_MUTEX( pProvider->m_ProviderInTaskMutex );
	_removeModelLayerProvider( pProvider, ( unsigned int ) index );
}

void ModelLayerMap::_removeModelLayerProvider( ModelLayerProvider* pModelLayerProvider, int index /* = -1 */ )
{
	if ( pModelLayerProvider->m_BindingState != LayerProvider::ADDED && pModelLayerProvider->m_BindingState != LayerProvider::IN_TASK )
	{
		return;
	}

	switch ( pModelLayerProvider->m_BindingState )
	{
	case LayerProvider::ADDED:
		{
			this->removeModelLayer( pModelLayerProvider->getModelLayer() );
		}
		break;

	case LayerProvider::IN_TASK:
		{
			getOrCreateThreadPool()->removeTask( pModelLayerProvider->getOrCreateLayerTask() );
		}
		break;

	default:
		break;
	}

	if ( -1 >= index )
	{
		m_ModelLayerProviders.remove(pModelLayerProvider);
	}
	else
	{
		m_ModelLayerProviders.remove( ( unsigned int ) index );
	}
	pModelLayerProvider->m_BindingState = LayerProvider::REMOVED;
}

void ModelLayerMap::moveModelLayerProvider(ModelLayerProvider* pModelLayerProvider, unsigned int newIndex)
{
	if (pModelLayerProvider == NULL)
	{
		return;
	}

	// code here ...
	SCOPEDLOCK_READ_MUTEX( pModelLayerProvider->m_ProviderInTaskMutex );
	if ( pModelLayerProvider->m_BindingState == LayerProvider::NOT_ADDED || pModelLayerProvider->m_BindingState == LayerProvider::REMOVED )
	{
		return;
	}

	bool bMove = m_ModelLayerProviders.move(pModelLayerProvider, newIndex);
	if ( bMove && pModelLayerProvider->m_BindingState == LayerProvider::ADDED )
	{
		moveModelLayer(pModelLayerProvider->getModelLayer(), m_ModelLayerProviders.signArrival(pModelLayerProvider));
	}
}

void ModelLayerMap::moveModelLayerProvider(unsigned int oldIndex, unsigned int newIndex)
{
	ModelLayerProvider* pModelLayerProvider = m_ModelLayerProviders[oldIndex];
	if ( ! pModelLayerProvider )
	{
		return;
	}

	SCOPEDLOCK_READ_MUTEX( pModelLayerProvider->m_ProviderInTaskMutex );
	if ( pModelLayerProvider->m_BindingState == LayerProvider::NOT_ADDED || pModelLayerProvider->m_BindingState == LayerProvider::REMOVED )
	{
		return;
	}

	bool bMove = m_ModelLayerProviders.move(oldIndex, newIndex);
	if ( bMove && pModelLayerProvider->m_BindingState == LayerProvider::ADDED )
	{
		moveModelLayer(pModelLayerProvider->getModelLayer(), m_ModelLayerProviders.signArrival(pModelLayerProvider));
	}
}

void ModelLayerMap::_addAndFixOrderOfModLyerProv(ModelLayerProvider* pLoadedModelLayerProvider)
{
	osgEarth::ModelLayer* pModelLayer = NULL;
	if 
		(
		pLoadedModelLayerProvider == NULL || 
		pLoadedModelLayerProvider->m_BindingState == LayerProvider::REMOVED ||
		( pModelLayer = pLoadedModelLayerProvider->getModelLayer(), pModelLayer == NULL ) 
		)
	{
		return;
	}

	//添加到场景里
	addModelLayer( pModelLayer, m_ModelLayerProviders.signArrival(pLoadedModelLayerProvider) );
	pLoadedModelLayerProvider->m_BindingState = LayerProvider::ADDED;
}

void ModelLayerMap::_addTaskOfModLyerProv(ModelLayerProvider* pModelLayerProvider)
{
	LayerTask* pTask = pModelLayerProvider->getOrCreateLayerTask();
	pTask->setBaseMap(this);
	getOrCreateThreadPool()->addTaskAndWakeUp(pTask);
	pModelLayerProvider->m_BindingState = LayerProvider::IN_TASK;
}