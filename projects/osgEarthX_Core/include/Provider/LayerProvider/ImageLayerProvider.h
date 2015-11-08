/**
	@brief ImageLayer提供类
	@author Hao Luo
	@date 2014/11/05
*/

#ifndef OSGEARTHX_CORE_IMAGE_LAYER_PROVIDER_H
#define OSGEARTHX_CORE_IMAGE_LAYER_PROVIDER_H 1

#include <osgEarthXCoreExport/Export.h>

#include <Provider/LayerProvider/LayerProvider.h>
#include <OSGEarth/Layer/IImageLayerWrapper.h>
#include <OSGEarth/Layer/TImageLayerAdapter.h>
#include <osgEarth/ImageLayer>

namespace osgEarthXCore
{
	//temp
	class OSGEARTHX_CORE_EXPORT ImageLayer : public osgEarth::ImageLayer
	{
	public:
		ImageLayer( const osgEarth::ImageLayerOptions& options ) : osgEarth::ImageLayer( options )
		{

		}

		ImageLayer(const std::string& name, const osgEarth::TileSourceOptions& driverOptions) : osgEarth::ImageLayer( name, driverOptions )
		{
		}

		ImageLayer( const osgEarth::ImageLayerOptions& options, osgEarth::TileSource* tileSource ) : osgEarth::ImageLayer( options, tileSource )
		{

		}


		//virtual int ref()const
		//{
		//	int refCount = osgEarth::ImageLayer::ref();
		//	std::cout<<"ref : "<<refCount<<std::endl;
		//	return refCount;
		//}

		//virtual int unref()const
		//{
		//	int refCount = osgEarth::ImageLayer::unref();
		//	std::cout<<"unref : "<<refCount<<std::endl;
		//	return refCount;
		//}

	protected:
		virtual ~ImageLayer()
		{
			std::cout<<"disctruct"<<std::endl;
		}
	};
	
	//temp
	class ImageLayerTask;

	class OSGEARTHX_CORE_EXPORT ImageLayerProvider : 
		public LayerProvider,
		public TImageLayerAdapter< IImageLayerWrapper >
	{
	public:
		friend ImageLayerTask;

	private:
		osg::ref_ptr< ImageLayer > m_refImageLayer;
		osgEarth::ImageLayerOptions* m_pImageLayerOptions;

	public:
		ImageLayerProvider();

		osgEarth::ImageLayer* getImageLayer();//初始化（initialized）前为NULL
		virtual LayerTask* getOrCreateLayerTask();

		void setTileSource( osgEarth::TileSourceOptions& tileSourceOptions );

	protected:
		virtual ~ImageLayerProvider();

		virtual void initialized();
	};
}

#endif