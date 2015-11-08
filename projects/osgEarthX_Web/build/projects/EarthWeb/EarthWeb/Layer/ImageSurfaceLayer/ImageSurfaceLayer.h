/*
	@brief : osgEarthX::ImageSurfaceLayer µÄ JS½Ó¿Ú
	@author : Hao LUo
	@date : 2014/11/21
*/

#ifndef OSGEARTHX_WEB_IMAGE_SURFACE_LAYER_H
#define OSGEARTHX_WEB_IMAGE_SURFACE_LAYER_H 1

#include <EarthWeb/EarthObject/EarthObjectDispatchImpl.h>
#include <EarthWeb/Layer/Layer/ILayer.h>

#include <EarthWeb/Source/TileSource/ITileSourceDispath.h>

//osgEarthX
#include <Layer/ImageSurfaceLayer.h>

#define ImageSurfaceLayerDispatchImpl EarthObjectDispatchImpl< osgEarthX::ImageSurfaceLayer, ImageSurfaceLayer, ILayer >

FB_FORWARD_PTR(ImageSurfaceLayer)
class ImageSurfaceLayer : 
	public ImageSurfaceLayerDispatchImpl
{
public:
	ImageSurfaceLayer(const std::vector<FB::variant>* pArgs = NULL) :
		ImageSurfaceLayerDispatchImpl( IMAGE_SURFACE_LAYER )
	{
		registerMethod("testEvent",FB::make_method(this,&ImageSurfaceLayer::testEvent));

		registerProperty( "tileSource", make_property( this, &ImageSurfaceLayer::get_tileSource, &ImageSurfaceLayer::put_tileSource ) );
	}
	virtual ~ImageSurfaceLayer(){}

	void testEvent();

	//impl EarthObject
	virtual bool get_visible();
	virtual void put_visible( bool bVisible );
	virtual bool get_enabled();
	
	ITileSourceDispatchPtr get_tileSource();
	void put_tileSource( ITileSourceDispatchPtr ptrITileSourceDispatch );

protected:

private:
};

#endif