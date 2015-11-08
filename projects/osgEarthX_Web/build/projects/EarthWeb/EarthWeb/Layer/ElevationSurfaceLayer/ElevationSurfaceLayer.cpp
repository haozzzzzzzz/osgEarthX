#include <EarthWeb/Layer/ElevationSurfaceLayer/ElevationSurfaceLayer.h>
#include <atlstr.h>

#include <EarthWeb/Utils/StaticUtils/SourceStaticUtils.h>

bool ElevationSurfaceLayer::get_visible()
{
	return getOrCreateInnerObject()->isVisible();
}

void ElevationSurfaceLayer::put_visible( bool bVisible )
{
	getOrCreateInnerObject()->setVisible( bVisible );
}

bool ElevationSurfaceLayer::get_enabled()
{
	return getOrCreateInnerObject()->isEnabled();
}

ITileSourceDispatchPtr ElevationSurfaceLayer::get_tileSource()
{
	ITileSourceDispatchPtr ptrITileSourceDispatch;
	return ptrITileSourceDispatch;
}

void ElevationSurfaceLayer::put_tileSource( ITileSourceDispatchPtr ptrITileSourceDispatch )
{
	osgEarth::TileSourceOptions* pOptions = SourceStaticUtils::getTileSourceOptions( ptrITileSourceDispatch.get() );
	if ( pOptions )
	{
		getOrCreateInnerObject()->setTileSource( * pOptions );
	}
}