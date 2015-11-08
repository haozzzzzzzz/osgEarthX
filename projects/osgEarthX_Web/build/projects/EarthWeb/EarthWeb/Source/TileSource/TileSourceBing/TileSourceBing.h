#ifndef OSGEARTHX_WEB_TILE_SOURCE_BING_H
#define OSGEARTHX_WEB_TILE_SOURCE_BING_H 1

#include <EarthWeb/Source/SourceDispatchImpl.h>
#include <EarthWeb/Source/TileSource/ITileSourceDispath.h>

#include <osgEarthDrivers/bing/BingOptions>

#define TileSourceBingDispatchImpl SourceDispatchImpl< osgEarth::Drivers::BingOptions, TileSourceBing, ITileSourceDispatch >

FB_FORWARD_PTR(TileSourceBing)
class TileSourceBing : 
	public TileSourceBingDispatchImpl
{
public:
	TileSourceBing( const std::vector<FB::variant>* pArgs = NULL ) : TileSourceBingDispatchImpl( TILE_SOURCE_BING )
	{

	}

	virtual ~TileSourceBing(){}

protected:
private:
};
#endif