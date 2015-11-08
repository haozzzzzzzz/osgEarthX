#include <ThreadPool/LockMutex.h>
#include <Map/ElevationLayerMap.h>
#include <Provider/LayerProvider/ElevationLayerTask.h>
#include <Provider/ProviderChange.h>
using namespace osgEarthXCore;

ElevationLayerTask::ElevationLayerTask(ElevationLayerProvider* pElevationLayerProvider /* = NULL */, ElevationLayerMap* pMap /* = NULL */) :
	LayerTask( pElevationLayerProvider, pMap )
{

}

ElevationLayerTask::~ElevationLayerTask()
{

}

void ElevationLayerTask::doTask()
{
	ElevationLayerProvider* pLayerProvider = dynamic_cast< ElevationLayerProvider* >( m_pLayerProvider );
	if ( pLayerProvider == NULL || pLayerProvider->isInitialized() )
	{
		return;
	}
	pLayerProvider->initialized();

	ElevationLayerMap* pElevationLayerMap = dynamic_cast< ElevationLayerMap*>( m_pBaseMap );
	if ( pElevationLayerMap != NULL )
	{
		SCOPEDLOCK_WRITE_MUTEX( pLayerProvider->m_ProviderInTaskMutex );
		pElevationLayerMap->_addAndFixOrderOfElevLyerProv( pLayerProvider );
	}

	ProviderChangeType initialzeCompleted = INITIALIZE_COMPLETED;
	ProviderChange providerChange( initialzeCompleted );
	pLayerProvider->callback( & providerChange );
}