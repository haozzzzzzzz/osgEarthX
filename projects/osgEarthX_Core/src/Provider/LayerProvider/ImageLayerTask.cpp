#include <ThreadPool/LockMutex.h>

#include <Map/ImageLayerMap.h>

#include <Provider/LayerProvider/ImageLayerTask.h>
#include <Provider/ProviderChange.h>
using namespace osgEarthXCore;

#include <cassert>

ImageLayerTask::ImageLayerTask( ImageLayerProvider* pImageLayerProvider /* = NULL */, ImageLayerMap* pMap /* = NULL */ ):
	LayerTask( pImageLayerProvider, pMap )
{

}

ImageLayerTask::~ImageLayerTask()
{

}

void ImageLayerTask::doTask()
{
	ImageLayerProvider* pImageLayerProvider = dynamic_cast< ImageLayerProvider* >( m_pLayerProvider );

	if ( pImageLayerProvider == NULL || pImageLayerProvider->isInitialized() )
	{
		return;
	}

	pImageLayerProvider->initialized();

	ImageLayerMap* pImageLayerMap = dynamic_cast< ImageLayerMap* >( m_pBaseMap );
	if ( pImageLayerMap != NULL )
	{
		SCOPEDLOCK_WRITE_MUTEX( pImageLayerProvider->m_ProviderInTaskMutex );//加锁
		pImageLayerMap->_addAndFixOrderOfImgLyerProv( pImageLayerProvider );//内部更改pImageLayerProvider的状态
	}

	ProviderChangeType initialzeCompleted = INITIALIZE_COMPLETED;
	ProviderChange providerChange( initialzeCompleted );
	pImageLayerProvider->callback( & providerChange );
}