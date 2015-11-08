#ifndef OSGEARTHX_WEB_TILE_SOURCE_WCS_H
#define OSGEARTHX_WEB_TILE_SOURCE_WCS_H 1


#include <EarthWeb/Source/SourceDispatchImpl.h>
#include <EarthWeb/Source/TileSource/ITileSourceDispath.h>

#include <osgEarthDrivers/wcs/WCSOptions>

#define TileSourceWCSDispatchImpl SourceDispatchImpl< osgEarth::Drivers::WCSOptions, TileSourceWCS, ITileSourceDispatch >

FB_FORWARD_PTR(TileSourceWCS)
class TileSourceWCS : 
	public TileSourceWCSDispatchImpl
{
public:
	TileSourceWCS( const std::vector<FB::variant>* pArgs = NULL ) : TileSourceWCSDispatchImpl( TILE_SOURCE_WCS )
	{

	}

	virtual ~TileSourceWCS(){}

protected:
private:
};


#endif