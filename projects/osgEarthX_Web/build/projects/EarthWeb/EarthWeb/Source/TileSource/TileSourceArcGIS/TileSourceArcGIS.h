#ifndef OSGEARTHX_WEB_TILE_SOURCE_ARCGIS_H
#define OSGEARTHX_WEB_TILE_SOURCE_ARCGIS_H 1

#include <EarthWeb/Source/SourceDispatchImpl.h>
#include <EarthWeb/Source/TileSource/ITileSourceDispath.h>

#include <osgEarthDrivers/arcgis/ArcGISOptions>

#define TileSourceArcGISDispatchImpl SourceDispatchImpl< osgEarth::Drivers::ArcGISOptions, TileSourceArcGIS, ITileSourceDispatch >

FB_FORWARD_PTR(TileSourceArcGIS)
class TileSourceArcGIS : 
	public TileSourceArcGISDispatchImpl
{
public:
	TileSourceArcGIS( const std::vector<FB::variant>* pArgs = NULL ) : TileSourceArcGISDispatchImpl( TILE_SOURCE_ARCGIS )
	{

	}

	virtual ~TileSourceArcGIS(){}

protected:
private:
};

#endif