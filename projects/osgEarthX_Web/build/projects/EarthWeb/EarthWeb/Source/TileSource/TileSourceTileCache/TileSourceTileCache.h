#ifndef OSGEARTHX_WEB_TILE_SOURCE_TILE_CACHE_H
#define OSGEARTHX_WEB_TILE_SOURCE_TILE_CACHE_H 1



#include <EarthWeb/Source/SourceDispatchImpl.h>
#include <EarthWeb/Source/TileSource/ITileSourceDispath.h>

#include <osgEarth/URI>
#include <osgEarthDrivers/tilecache/TileCacheOptions>

#define TileSourceTileCacheDispatchImpl SourceDispatchImpl< osgEarth::Drivers::TileCacheOptions, TileSourceTileCache, ITileSourceDispatch >

FB_FORWARD_PTR(TileSourceTileCache)
class TileSourceTileCache : 
	public TileSourceTileCacheDispatchImpl
{
public:
	TileSourceTileCache( const std::vector<FB::variant>* pArgs = NULL ) : TileSourceTileCacheDispatchImpl( TILE_SOURCE_TILE_CACHE )
	{

	}

	virtual ~TileSourceTileCache(){}

protected:
private:
};



#endif