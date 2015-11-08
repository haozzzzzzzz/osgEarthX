#ifndef OSGEARTHX_WEB_TILE_SOURCE_COLOR_RAMP_H
#define OSGEARTHX_WEB_TILE_SOURCE_COLOR_RAMP_H 1

#include <EarthWeb/Source/SourceDispatchImpl.h>
#include <EarthWeb/Source/TileSource/ITileSourceDispath.h>

#include <osgEarthDrivers/colorramp/ColorRampOptions>

#define TileSourceColorRampDispatchImpl SourceDispatchImpl< osgEarth::Drivers::ColorRampOptions, TileSourceColorRamp, ITileSourceDispatch >

FB_FORWARD_PTR(TileSourceColorRamp)
class TileSourceColorRamp : 
	public TileSourceColorRampDispatchImpl
{
public:
	TileSourceColorRamp( const std::vector<FB::variant>* pArgs = NULL ) : TileSourceColorRampDispatchImpl( TILE_SOURCE_COLOR_RAMP )
	{

	}

	virtual ~TileSourceColorRamp(){}

protected:
private:
};

#endif