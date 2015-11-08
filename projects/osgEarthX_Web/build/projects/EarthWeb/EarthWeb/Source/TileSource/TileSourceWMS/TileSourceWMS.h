#ifndef OSGEARTHX_WEB_TILE_SOURCE_WMS_H
#define OSGEARTHX_WEB_TILE_SOURCE_WMS_H 1

#include <EarthWeb/Source/SourceDispatchImpl.h>
#include <EarthWeb/Source/TileSource/ITileSourceDispath.h>

#include <osgEarth/URI>
#include <osgEarthDrivers/wms/WMSOptions>

#define TileSourceWMSDispatchImpl SourceDispatchImpl< osgEarth::Drivers::WMSOptions, TileSourceWMS, ITileSourceDispatch >

FB_FORWARD_PTR(TileSourceWMS)
class TileSourceWMS : 
	public TileSourceWMSDispatchImpl
{
public:
	TileSourceWMS( const std::vector<FB::variant>* pArgs = NULL ) : TileSourceWMSDispatchImpl( TILE_SOURCE_WMS )
	{

	}

	virtual ~TileSourceWMS(){}

protected:
private:
};
#endif