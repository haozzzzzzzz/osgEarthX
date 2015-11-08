#ifndef OSGEARTHX_WEB_TILE_SOURCE_OSG_H
#define OSGEARTHX_WEB_TILE_SOURCE_OSG_H 1


#include <EarthWeb/Source/SourceDispatchImpl.h>
#include <EarthWeb/Source/TileSource/ITileSourceDispath.h>

#include <osgEarthDrivers/osg/OSGOptions>

#define TileSourceOSGDispatchImpl SourceDispatchImpl< osgEarth::Drivers::OSGOptions, TileSourceOSG, ITileSourceDispatch >

FB_FORWARD_PTR(TileSourceOSG)
class TileSourceOSG : 
	public TileSourceOSGDispatchImpl
{
public:
	TileSourceOSG( const std::vector<FB::variant>* pArgs = NULL ) : TileSourceOSGDispatchImpl( TILE_SOURCE_OSG )
	{

	}

	virtual ~TileSourceOSG(){}

protected:
private:
};


#endif