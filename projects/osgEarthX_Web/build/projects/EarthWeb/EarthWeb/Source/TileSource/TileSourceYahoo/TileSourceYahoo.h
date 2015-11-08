#ifndef OSGEARTHX_WEB_TILE_SOURCE_YAHOO_H
#define OSGEARTHX_WEB_TILE_SOURCE_YAHOO_H 1

#include <EarthWeb/Source/SourceDispatchImpl.h>
#include <EarthWeb/Source/TileSource/ITileSourceDispath.h>

#include <osgEarthDrivers/yahoo/YahooOptions>

#define TileSourceYahooDispatchImpl SourceDispatchImpl< osgEarth::Drivers::YahooOptions, TileSourceYahoo, ITileSourceDispatch >

FB_FORWARD_PTR(TileSourceYahoo)
class TileSourceYahoo : 
	public TileSourceYahooDispatchImpl
{
public:
	TileSourceYahoo( const std::vector<FB::variant>* pArgs = NULL ) : TileSourceYahooDispatchImpl( TILE_SOURCE_YAHOO )
	{

	}

	virtual ~TileSourceYahoo(){}

protected:
private:
};

#endif