#ifndef OSGEARTHX_WEB_TILE_SOURCE_AGGLITE_H
#define OSGEARTHX_WEB_TILE_SOURCE_AGGLITE_H 1

#include <EarthWeb/Source/SourceDispatchImpl.h>
#include <EarthWeb/Source/TileSource/ITileSourceDispath.h>

#include <osgEarthDrivers/agglite/AGGLiteOptions>

#define TileSourceAGGLiteDispatchImpl SourceDispatchImpl< osgEarth::Drivers::AGGLiteOptions, TileSourceAGGLite, ITileSourceDispatch >

FB_FORWARD_PTR(TileSourceAGGLite)
class TileSourceAGGLite : 
	public TileSourceAGGLiteDispatchImpl
{
public:
	TileSourceAGGLite( const std::vector<FB::variant>* pArgs = NULL ) : TileSourceAGGLiteDispatchImpl( TILE_SOURCE_AGGLITE )
	{

	}

	virtual ~TileSourceAGGLite(){}

protected:
private:
};


#endif