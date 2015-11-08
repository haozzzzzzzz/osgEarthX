#ifndef OSGEARTHX_WEB_TILE_SOURCE_TILE_SERVICE_H
#define OSGEARTHX_WEB_TILE_SOURCE_TILE_SERVICE_H 1

#include <EarthWeb/Source/SourceDispatchImpl.h>
#include <EarthWeb/Source/TileSource/ITileSourceDispath.h>

#include <osgEarth/URI>
#include <osgEarthDrivers/tileservice/TileServiceOptions>

#define TileSourceTileServiceDispatchImpl SourceDispatchImpl< osgEarth::Drivers::TileServiceOptions, TileSourceTileService, ITileSourceDispatch >

FB_FORWARD_PTR(TileSourceTileService)
class TileSourceTileService : 
	public TileSourceTileServiceDispatchImpl
{
public:
	TileSourceTileService( const std::vector<FB::variant>* pArgs = NULL ) : TileSourceTileServiceDispatchImpl( TILE_SOURCE_TILE_SERVICE )
	{

	}

	virtual ~TileSourceTileService(){}

protected:
private:
};

#endif