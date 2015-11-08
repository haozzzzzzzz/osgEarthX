// ElevationSurfaceLayer.cpp : CElevationSurfaceLayer µÄÊµÏÖ

#include "stdafx.h"
#include "ElevationSurfaceLayer.h"

#include <COM/Utils/StaticUtils/SourceStaticUtils.h>

// CElevationSurfaceLayer

STDMETHODIMP CElevationSurfaceLayer::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IElevationSurfaceLayer,
		&IID_ILayer,
		&IID_IEarthObject,
		&IID_IEarthDispatch
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

CElevationSurfaceLayer::CElevationSurfaceLayer() :
	IElevationSurfaceLayerDispatchImpl( ELEVATION_SURFACE_LAYER )
{

}

CElevationSurfaceLayer::CElevationSurfaceLayer( const CElevationSurfaceLayer& layer ) : 
	IElevationSurfaceLayerDispatchImpl( layer )
{
}

CElevationSurfaceLayer::~CElevationSurfaceLayer()
{

}

STDMETHODIMP CElevationSurfaceLayer::put_tileSource( ITileSourceDispatch* pITileSourceDispatch )
{
	osgEarth::TileSourceOptions* pOptions = SourceStaticUtils::getTileSourceOptions( pITileSourceDispatch );
	if ( pOptions )
	{
		getOrCreateInnerObject()->setTileSource( * pOptions );
		return S_OK;
	}
	return S_FALSE;
}