// ImageOverlay.cpp : CImageOverlay µÄÊµÏÖ

#include "stdafx.h"
#include "ImageOverlay.h"


// CImageOverlay

STDMETHODIMP CImageOverlay::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IImageOverlay,
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

//IImageOerlay
STDMETHODIMP CImageOverlay::setImageSrc( BSTR bstrImgSrc )
{
	getOrCreateInnerObject()->setImageSrc( CStringA( bstrImgSrc ).GetString() );
	return S_OK;
}

STDMETHODIMP CImageOverlay::setBounds( DOUBLE lowerLeftX, DOUBLE lowerLeftY, DOUBLE upperRightX, DOUBLE upperRightY )
{
	getOrCreateInnerObject()->setBounds( osgEarth::Bounds::Bounds( lowerLeftX, lowerLeftY, upperRightX, upperRightY ) );
	return S_OK;
}