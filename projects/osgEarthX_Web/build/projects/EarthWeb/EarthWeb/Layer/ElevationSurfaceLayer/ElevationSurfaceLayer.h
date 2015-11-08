/**
	@brief osgEarthX::ElevationSurfaceLayer js½Ó¿Ú
	@author Hao Luo
	@date 2015/01/26
*/

#ifndef OSGEARTHX_WEB_ELEVATION_SURFACE_LAYER_H
#define OSGEARTHX_WEB_ELEVATION_SURFACE_LAYER_H 1

#include <EarthWeb/EarthObject/EarthObjectDispatchImpl.h>
#include <EarthWeb/Layer/Layer/ILayer.h>
#include <EarthWeb/Source/TileSource/ITileSourceDispath.h>

//osgEarthX
#include <Layer/ElevationSurfaceLayer.h>

#define ElevationSourceLayerDispatchImpl EarthObjectDispatchImpl< osgEarthX::ElevationSurfaceLayer, ElevationSurfaceLayer, ILayer >

FB_FORWARD_PTR(ElevationSurfaceLayer)
class ElevationSurfaceLayer :
	public ElevationSourceLayerDispatchImpl
{
public:
	ElevationSurfaceLayer( const std::vector<FB::variant>* pArgs = NULL ) :
		ElevationSourceLayerDispatchImpl( ELEVATION_SURFACE_LAYER )
	{
		registerProperty( "tileSource", make_property( this, &ElevationSurfaceLayer::get_tileSource, &ElevationSurfaceLayer::put_tileSource ) );
	}

	virtual ~ElevationSurfaceLayer()
	{

	}

	//impl EarthObject
	virtual bool get_visible();
	virtual void put_visible(bool bVisible);
	virtual bool get_enabled();

	ITileSourceDispatchPtr get_tileSource();
	void put_tileSource( ITileSourceDispatchPtr ptrITileSourceDispatch );

protected:
private:
};

#endif