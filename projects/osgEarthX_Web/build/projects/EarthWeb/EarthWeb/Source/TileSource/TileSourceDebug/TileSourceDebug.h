#ifndef OSGEARTHX_WEB_TILE_SOURCE_DEBUG_H
#define OSGEARTHX_WEB_TILE_SOURCE_DEBUG_H 1

#include <EarthWeb/Source/SourceDispatchImpl.h>
#include <EarthWeb/Source/TileSource/ITileSourceDispath.h>

#include <osgEarthDrivers/debug/DebugOptions>

#define TileSourceDebugDispatchImpl SourceDispatchImpl< osgEarth::Drivers::DebugOptions, TileSourceDebug, ITileSourceDispatch >

FB_FORWARD_PTR(TileSourceDebug)
class TileSourceDebug : 
	public TileSourceDebugDispatchImpl
{
public:
	TileSourceDebug( const std::vector<FB::variant>* pArgs = NULL ) : TileSourceDebugDispatchImpl( TILE_SOURCE_DEBUG )
	{

	}

	virtual ~TileSourceDebug(){}

protected:
private:
};

#endif