#ifndef OSGEARTHX_WEB_TILE_SOURCE_MBTILES_H
#define OSGEARTHX_WEB_TILE_SOURCE_MBTILES_H 1


#include <EarthWeb/Source/SourceDispatchImpl.h>
#include <EarthWeb/Source/TileSource/ITileSourceDispath.h>

#include <osgEarthDrivers/mbtiles/MBTilesOptions>

#define TileSourceMBTilesDispatchImpl SourceDispatchImpl< osgEarth::Drivers::MBTilesTileSourceOptions, TileSourceMBTiles, ITileSourceDispatch >

FB_FORWARD_PTR(TileSourceMBTiles)
class TileSourceMBTiles : 
	public TileSourceMBTilesDispatchImpl
{
public:
	TileSourceMBTiles( const std::vector<FB::variant>* pArgs = NULL ) : TileSourceMBTilesDispatchImpl( TILE_SOURCE_MBTILES )
	{

	}

	virtual ~TileSourceMBTiles(){}

protected:
private:
};


#endif