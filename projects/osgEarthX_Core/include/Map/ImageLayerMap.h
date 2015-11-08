/**
	@brief ImageLayerMap, a subclass of BaseMap, is consisted of ImageLayer.
	@author Hao Luo
	@date 2015/01/07
*/

#ifndef OSGEARTHX_CORE_IMAGE_LAYER_MAP_H
#define OSGEARTHX_CORE_IMAGE_LAYER_MAP_H 1

#include <osgEarthXCoreExport/Export.h>

#include <Map/BaseMap.h>
#include <ThreadPool/OrderHoldersContainer/OrderHoldersContainer.h>

#include <Provider/LayerProvider/ImageLayerTask.h>
namespace osgEarthXCore
{
	class ImageLayerTask;

	class OSGEARTHX_CORE_EXPORT ImageLayerMap:
		virtual public BaseMap
	{
	private:
		// A container of ImageLayerProviders
		osgXThreads::OrderHoldersContainer< ImageLayerProvider > m_ImageLayerProviders;

	public:
		ImageLayerMap();

		void addImageLayerProvider( ImageLayerProvider* pImageLayerProvider );
		void insertImageLayerProvider( ImageLayerProvider* pImageLayerProvider, unsigned int index );
		void removeImageLayerProvider( ImageLayerProvider* pImageLayerProvider );
		void removeImageLayerProvider( unsigned int index );
		void moveImageLayerProvider( ImageLayerProvider* pImageLayerProvider, unsigned int newIndex );
		void moveImageLayerProvider( unsigned int oldIndex, unsigned int newIndex );

		void addImageLayer( osgEarth::ImageLayer* pImageLayer, int insertIndex = -1 );//add osgEarth::ImageLayer，thread-safe
		void removeImageLayer( osgEarth::ImageLayer* pImageLayer );///remove osgEarth::ImageLayer, thread-safe
		void moveImageLayer( osgEarth::ImageLayer* pImageLayer, unsigned int newIndex );//move osgEarth::ImageLayer, thread-safe

	protected:
		virtual ~ImageLayerMap();

	private:
		friend ImageLayerTask;

		// This function is called by ImageLayerTask
		// fix arrival order and add inner osgEarth::ImageLayer into real osgEarth::Map
		void _addAndFixOrderOfImgLyerProv( ImageLayerProvider* pLoadedImageLayerProvider );//内部不加锁

		void _addTaskOfImgLyerProv( ImageLayerProvider* pImageLayerProvider );//内部不加锁
		void _insertImageLayerProvider( ImageLayerProvider* pImageLayerProvider, int index = -1 );// -1 : push back //内部不加锁
		void _removeImageLayerProvider( ImageLayerProvider* pImageLayerProvider, int index = -1 );// -1 : 未知pImageLayerProvider的index //内部不加锁

	private:
	};


	/*
		对ImageLayerModelMap进行控制的各种Operation，用于避免更改和渲染之间的冲突
	*/
	class AddImageLayerOperation : public osg::Operation
	{
	public:
		AddImageLayerOperation( ImageLayerMap* pImageLayerMap, osgEarth::ImageLayer* pImageLayer, int insertIndex = -1 )
		{
			m_pImageLayerMap = pImageLayerMap;
			m_pImageLayer = pImageLayer;
			m_iIndex = insertIndex;
		}

		virtual void operator()( osg::Object* pObject );

	protected:
		virtual ~AddImageLayerOperation(){}

	private:
		ImageLayerMap* m_pImageLayerMap;
		osgEarth::ImageLayer* m_pImageLayer;
		int m_iIndex;

	};

	class RemoveImageLayerOperation : public osg::Operation
	{
	public:
		RemoveImageLayerOperation( ImageLayerMap* pImageLayerMap, osgEarth::ImageLayer* pImageLayer )
		{
			m_pImageLayerMap = pImageLayerMap;
			m_pImageLayer = pImageLayer;
		}

		virtual void operator()( osg::Object* pObject );

	protected:
		virtual ~RemoveImageLayerOperation(){}

	private:
		ImageLayerMap* m_pImageLayerMap;
		osgEarth::ImageLayer* m_pImageLayer;

	};

	class MoveImageLayerOperation : public osg::Operation
	{
	public:
		MoveImageLayerOperation( ImageLayerMap* pImageLayerMap, osgEarth::ImageLayer* pImageLayer, unsigned int newIndex )
		{
			m_pImageLayerMap = pImageLayerMap;
			m_pImageLayer = pImageLayer;
			m_uiIndex = newIndex;
		}

		virtual void operator()( osg::Object* pObject );

	protected:
		virtual ~MoveImageLayerOperation(){}

	private:
		ImageLayerMap* m_pImageLayerMap;
		osgEarth::ImageLayer* m_pImageLayer;
		unsigned int m_uiIndex;

	};
}

#endif