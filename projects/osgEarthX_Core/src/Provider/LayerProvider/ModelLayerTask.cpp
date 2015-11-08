#include <Map/Map.h>
#include <ThreadPool/LockMutex.h>
#include <Map/ModelLayerMap.h>
#include <Provider/LayerProvider/ModelLayerTask.h>
#include <Provider/ProviderChange.h>
using namespace osgEarthXCore;

#include <cassert>

ModelLayerTask::ModelLayerTask( ModelLayerProvider* pModelLayerProvider /* = NULL  */,ModelLayerMap* pMap /* = NULL */ ):
	LayerTask( pModelLayerProvider, pMap )
{
}

ModelLayerTask::~ModelLayerTask()
{

}

void ModelLayerTask::doTask()
{
	ModelLayerProvider* pModelLayerProvider = dynamic_cast< ModelLayerProvider* >( m_pLayerProvider );
	if ( pModelLayerProvider == NULL || pModelLayerProvider->isInitialized() )
	{
		return;
	}
	pModelLayerProvider->initialized();

	ModelLayerMap* pModelLayerMap = dynamic_cast< ModelLayerMap* >( m_pBaseMap );
	if (pModelLayerMap != NULL)
	{
		//预先创建，避免因耗时过程，阻塞m_pMap->addModelLayer内部的mutex
		osgEarth::Map* m_pOsgEarthMap = pModelLayerMap->getOsgEarthMap();
		pModelLayerProvider->m_refModelLayer->initialize( m_pOsgEarthMap->getDBOptions() );
		pModelLayerProvider->m_refModelLayer->getOrCreateSceneGraph( m_pOsgEarthMap, m_pOsgEarthMap->getDBOptions(), 0L );

		//将ModelLayer添加到场景中
		SCOPEDLOCK_WRITE_MUTEX( pModelLayerProvider->m_ProviderInTaskMutex );
		pModelLayerMap->_addAndFixOrderOfModLyerProv( pModelLayerProvider );
	}

	ProviderChangeType initialzeCompleted = INITIALIZE_COMPLETED;
	ProviderChange providerChange( initialzeCompleted );
	pModelLayerProvider->callback( & providerChange );
}