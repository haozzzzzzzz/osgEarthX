// ImageSurfaceLayer.cpp : CImageSurfaceLayer 的实现

#include "stdafx.h"
#include "ImageSurfaceLayer.h"

#include <COM/Utils/StaticUtils/SourceStaticUtils.h>

STDMETHODIMP CImageSurfaceLayer::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IImageSurfaceLayer,
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

// CImageSurfaceLayer
CImageSurfaceLayer::CImageSurfaceLayer() :
	IImageSurfaceLayerDispatchImpl( IMAGE_SURFACE_LAYER )
{
}

CImageSurfaceLayer::CImageSurfaceLayer(const CImageSurfaceLayer&imageSurfaceLayer) : //浅复制
	IImageSurfaceLayerDispatchImpl( imageSurfaceLayer )
{
}

CImageSurfaceLayer::~CImageSurfaceLayer()
{

}

//IImageSurfaceLayer
STDMETHODIMP CImageSurfaceLayer::put_tileSource( ITileSourceDispatch* pITileSourceDispatch )
{
	osgEarth::TileSourceOptions* pOptions = SourceStaticUtils::getTileSourceOptions( pITileSourceDispatch );

	if ( pOptions )
	{
		getOrCreateInnerObject()->setTileSource( * pOptions );
		return S_OK;
	}

	return S_FALSE;
}