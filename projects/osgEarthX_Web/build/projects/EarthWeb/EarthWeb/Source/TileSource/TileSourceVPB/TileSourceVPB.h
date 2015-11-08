#ifndef OSGEARTHX_WEB_TILE_SOURCE_VPB_H
#define OSGEARTHX_WEB_TILE_SOURCE_VPB_H 1

#include <EarthWeb/Source/SourceDispatchImpl.h>
#include <EarthWeb/Source/TileSource/ITileSourceDispath.h>

#include <osgEarthDrivers/vpb/VPBOptions>

#define TileSourceVPBDispatchImpl SourceDispatchImpl< osgEarth::Drivers::VPBOptions, TileSourceVPB, ITileSourceDispatch >

FB_FORWARD_PTR(TileSourceVPB)
class TileSourceVPB : 
	public TileSourceVPBDispatchImpl
{
public:
	TileSourceVPB( const std::vector<FB::variant>* pArgs = NULL ) : TileSourceVPBDispatchImpl( TILE_SOURCE_VPB )
	{

	}

	virtual ~TileSourceVPB(){}

protected:
private:
};

#endif