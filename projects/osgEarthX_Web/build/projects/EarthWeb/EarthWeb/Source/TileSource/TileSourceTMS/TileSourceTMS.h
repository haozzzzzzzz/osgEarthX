#ifndef OSGEARTHX_WEB_TILE_SOURCE_TMS_H
#define OSGEARTHX_WEB_TILE_SOURCE_TMS_H 1

#include <EarthWeb/Source/SourceDispatchImpl.h>
#include <EarthWeb/Source/TileSource/ITileSourceDispath.h>

#include <osgEarthDrivers/tms/TMSOptions>

#define TileSourceTMSDispatchImpl SourceDispatchImpl< osgEarth::Drivers::TMSOptions, TileSourceTMS, ITileSourceDispatch >

FB_FORWARD_PTR(TileSourceTMS)
class TileSourceTMS : 
	public TileSourceTMSDispatchImpl
{
public:
	TileSourceTMS( const std::vector<FB::variant>* pArgs = NULL ) : TileSourceTMSDispatchImpl( TILE_SOURCE_TMS )
	{
		registerProperty( "url", make_property( this,&TileSourceTMS::get_url, &TileSourceTMS::put_url  ) );
	}

	virtual ~TileSourceTMS(){}

	std::wstring get_url();
	void put_url( const std::wstring& strUrl );

protected:
private:
};

#endif