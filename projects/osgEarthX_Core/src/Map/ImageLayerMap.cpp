
#include <Map/ImageLayerMap.h>
#include <ThreadPool/LockMutex.h>
using namespace osgEarthXCore;

//OSGX
#include <StaticOSGViewerAssistant/StaticOSGViewerAssistant.h>

#include <iostream>
/**
	Operations
*/
void AddImageLayerOperation::operator()( osg::Object* pObject )
{
	SCOPEDLOCK_WRITE_MUTEX( m_pImageLayerMap->getMapMutex() );
	if ( -1 == m_iIndex )
	{
		std::cout<<"Before addImageLayer ( Map\\ImageLayerMap.cpp )"<<std::endl;
		m_pImageLayerMap->getOsgEarthMap()->addImageLayer( m_pImageLayer );
		std::cout<<"After addImageLayer"<<std::endl;
	}
	else if( m_iIndex >= 0 )
	{
		m_pImageLayerMap->getOsgEarthMap()->insertImageLayer( m_pImageLayer, m_iIndex );
	}
}

void RemoveImageLayerOperation::operator()( osg::Object* pObject )
{
	SCOPEDLOCK_WRITE_MUTEX( m_pImageLayerMap->getMapMutex() );
	m_pImageLayerMap->getOsgEarthMap()->removeImageLayer( m_pImageLayer );
}

void MoveImageLayerOperation::operator()( osg::Object* pObject )
{
	SCOPEDLOCK_WRITE_MUTEX( m_pImageLayerMap->getMapMutex() );
	m_pImageLayerMap->getOsgEarthMap()->moveImageLayer( m_pImageLayer, m_uiIndex );
}

/*
	ImageLayerMap
*/
ImageLayerMap::ImageLayerMap()
{

}

ImageLayerMap::~ImageLayerMap()
{

}

void ImageLayerMap::addImageLayer( osgEarth::ImageLayer* pImageLayer, int insertIndex /* = -1 */ )
{
	osgX::StaticOSGViewerAssistant::dealWithUpdateOperation( new AddImageLayerOperation( this, pImageLayer, insertIndex ) );
}

void ImageLayerMap::removeImageLayer( osgEarth::ImageLayer* pImageLayer )
{
	osgX::StaticOSGViewerAssistant::dealWithUpdateOperation( new RemoveImageLayerOperation( this, pImageLayer ) );
}

void ImageLayerMap::moveImageLayer( osgEarth::ImageLayer* pImageLayer, unsigned int newIndex )
{
	osgX::StaticOSGViewerAssistant::dealWithUpdateOperation( new MoveImageLayerOperation( this, pImageLayer, newIndex ) );
}

void ImageLayerMap::addImageLayerProvider( ImageLayerProvider* pImageLayerProvider )
{
	if ( pImageLayerProvider == NULL )
	{
		return;
	}

	SCOPEDLOCK_READ_MUTEX( pImageLayerProvider->m_ProviderInTaskMutex );
	_insertImageLayerProvider( pImageLayerProvider );
}

void ImageLayerMap::insertImageLayerProvider( ImageLayerProvider* pImageLayerProvider, unsigned int index )
{
	if ( pImageLayerProvider == NULL )
	{
		return;
	}

	SCOPEDLOCK_READ_MUTEX( pImageLayerProvider->m_ProviderInTaskMutex );
	_insertImageLayerProvider( pImageLayerProvider, index );
}

void ImageLayerMap::removeImageLayerProvider( ImageLayerProvider* pImageLayerProvider )
{
	if ( pImageLayerProvider == NULL )
	{
		return;
	}

	// code here ...
	SCOPEDLOCK_WRITE_MUTEX( pImageLayerProvider->m_ProviderInTaskMutex );
	_removeImageLayerProvider( pImageLayerProvider );
}

void ImageLayerMap::removeImageLayerProvider( unsigned int index )
{
	ImageLayerProvider* pProvider = m_ImageLayerProviders[ index ];
	if ( pProvider == NULL )
	{
		return;
	}

	SCOPEDLOCK_WRITE_MUTEX( pProvider->m_ProviderInTaskMutex );
	_removeImageLayerProvider( pProvider, index );
}

void ImageLayerMap::moveImageLayerProvider( ImageLayerProvider* pImageLayerProvider, unsigned int newIndex )
{
	if ( pImageLayerProvider == NULL )
	{
		return;
	}

	// code here ...

	SCOPEDLOCK_READ_MUTEX( pImageLayerProvider->m_ProviderInTaskMutex );
	if ( pImageLayerProvider->m_BindingState == LayerProvider::NOT_ADDED || pImageLayerProvider->m_BindingState == LayerProvider::REMOVED )
	{
		return;
	}

	unsigned int uiNewArrivalOrder = 0;
	if ( m_ImageLayerProviders.move( pImageLayerProvider, newIndex, &uiNewArrivalOrder ) && pImageLayerProvider->m_BindingState == LayerProvider::ADDED )//ADDED 意味着 bArrival == true
	{
		moveImageLayer( pImageLayerProvider->getImageLayer(), uiNewArrivalOrder );
	}
}

void ImageLayerMap::moveImageLayerProvider(unsigned int oldIndex, unsigned int newIndex)
{
	ImageLayerProvider* pImageLayerProvider = m_ImageLayerProviders[ oldIndex ];
	if ( pImageLayerProvider == NULL )
	{
		return;
	}

	SCOPEDLOCK_READ_MUTEX( pImageLayerProvider->m_ProviderInTaskMutex );
	if ( pImageLayerProvider->m_BindingState == LayerProvider::NOT_ADDED || pImageLayerProvider->m_BindingState == LayerProvider::REMOVED )
	{
		return;
	}

	unsigned int uiNewArrivalOrder = 0;
	if ( m_ImageLayerProviders.move( oldIndex, newIndex, &uiNewArrivalOrder ) && pImageLayerProvider->m_BindingState == LayerProvider::ADDED )
	{
		moveImageLayer( pImageLayerProvider->getImageLayer(), uiNewArrivalOrder );
	}
}

//外部已加ImageLayerProvider的写锁，内部不加锁
void ImageLayerMap::_addAndFixOrderOfImgLyerProv( ImageLayerProvider* pLoadedImageLayerProvider )
{
	osgEarth::ImageLayer* pImageLayer = NULL;
	if 
	( 
		pLoadedImageLayerProvider == NULL || 
		pLoadedImageLayerProvider->m_BindingState == LayerProvider::REMOVED ||
		( pImageLayer = pLoadedImageLayerProvider->getImageLayer(), pImageLayer == NULL )
	)
	{
		return;
	}

	//纠正次序，添加到场景中
	addImageLayer( pImageLayer, m_ImageLayerProviders.signArrival( pLoadedImageLayerProvider ) );
	pLoadedImageLayerProvider->m_BindingState = LayerProvider::ADDED;
}

//外部已加ImageLayerProvider的写锁，内部不再加锁
void ImageLayerMap::_addTaskOfImgLyerProv(ImageLayerProvider* pImageLayerProvider)
{
	LayerTask* pTask = pImageLayerProvider->getOrCreateLayerTask();
	pTask->setBaseMap( this );
	getOrCreateThreadPool()->addTaskAndWakeUp( pTask );
	pImageLayerProvider->m_BindingState = LayerProvider::IN_TASK;
}

void ImageLayerMap::_insertImageLayerProvider(ImageLayerProvider* pImageLayerProvider, int index)
{
	if ( pImageLayerProvider->m_BindingState != LayerProvider::NOT_ADDED && pImageLayerProvider->m_BindingState != LayerProvider::REMOVED )
	{
		return;//说明已经加载或者准备加载
	}

	if ( -1 >= index )
	{
		m_ImageLayerProviders.push( pImageLayerProvider );
	}
	else
	{
		m_ImageLayerProviders.insert( pImageLayerProvider, ( unsigned int ) index );
	}
	pImageLayerProvider->m_BindingState = LayerProvider::NOT_ADDED;//还没添加到Map中，标识准备添加到Map中

	switch( pImageLayerProvider->m_ProviderState )
	{
	case LayerProvider::UNINITIALIZED:
		{
			_addTaskOfImgLyerProv( pImageLayerProvider );
		}
		break;
	case LayerProvider::INITIALIZED:
		{
			_addAndFixOrderOfImgLyerProv( pImageLayerProvider );
		}
		break;

	default:
		break;

	}
}

void ImageLayerMap::_removeImageLayerProvider(ImageLayerProvider* pImageLayerProvider, int index /* = -1 */)
{

	if ( pImageLayerProvider->m_BindingState != LayerProvider::ADDED && pImageLayerProvider->m_BindingState != LayerProvider::IN_TASK )
	{
		return;
	}

	switch ( pImageLayerProvider->m_BindingState )
	{
	case LayerProvider::ADDED:
		{
			this->removeImageLayer( pImageLayerProvider->getImageLayer() );
		}
		break;

	case LayerProvider::IN_TASK:
		{
			getOrCreateThreadPool()->removeTask( pImageLayerProvider->getOrCreateLayerTask() );
		}
		break;

	default:
		break;

	}

	if ( -1 >= index )
	{
		m_ImageLayerProviders.remove( pImageLayerProvider );
	}
	else
	{
		m_ImageLayerProviders.remove( ( unsigned int ) index );
	}

	pImageLayerProvider->m_BindingState = LayerProvider::REMOVED;
}
