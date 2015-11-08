#ifndef OSGEARTHX_WEB_TILE_SOURCE_GDAL_H
#define OSGEARTHX_WEB_TILE_SOURCE_GDAL_H 1


#include <EarthWeb/Source/SourceDispatchImpl.h>
#include <EarthWeb/Source/TileSource/ITileSourceDispath.h>

#include <osgEarthDrivers/gdal/GDALOptions>

#define TileSourceGDALDispatchImpl SourceDispatchImpl< osgEarth::Drivers::GDALOptions, TileSourceGDAL, ITileSourceDispatch >

FB_FORWARD_PTR(TileSourceGDAL)
class TileSourceGDAL : 
	public TileSourceGDALDispatchImpl
{
public:
	TileSourceGDAL( const std::vector<FB::variant>* pArgs = NULL ) : TileSourceGDALDispatchImpl( TILE_SOURCE_GDAL )
	{
		registerProperty( "url", make_property( this,&TileSourceGDAL::get_url, &TileSourceGDAL::put_url  ) );
	}

	virtual ~TileSourceGDAL(){}

	std::wstring get_url();
	void put_url( const std::wstring& strUrl );

protected:
private:
};


#endif