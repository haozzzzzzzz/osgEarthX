#ifndef OSGEARTHX_WEB_TILE_SOURCE_XYZ_H
#define OSGEARTHX_WEB_TILE_SOURCE_XYZ_H 1

#include <EarthWeb/Source/SourceDispatchImpl.h>
#include <EarthWeb/Source/TileSource/ITileSourceDispath.h>

#include <osgEarthDrivers/xyz/XYZOptions>

#define TileSourceXYZDispatchImpl SourceDispatchImpl< osgEarth::Drivers::XYZOptions, TileSourceXYZ, ITileSourceDispatch >

FB_FORWARD_PTR(TileSourceXYZ)
class TileSourceXYZ : 
	public TileSourceXYZDispatchImpl
{
public:
	TileSourceXYZ( const std::vector<FB::variant>* pArgs = NULL ) : TileSourceXYZDispatchImpl( TILE_SOURCE_XYZ )
	{

	}

	virtual ~TileSourceXYZ(){}

protected:
private:
};

#endif