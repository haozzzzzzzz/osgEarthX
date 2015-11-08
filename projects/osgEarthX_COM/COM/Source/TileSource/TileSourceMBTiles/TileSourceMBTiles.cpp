// TileSourceMBTiles.cpp : CTileSourceMBTiles µÄÊµÏÖ

#include "stdafx.h"
#include "TileSourceMBTiles.h"


// CTileSourceMBTiles

STDMETHODIMP CTileSourceMBTiles::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_ITileSourceMBTiles,
		&IID_ITileSourceDispatch,
		&IID_ISourceDispatch,
		&IID_IEarthDispatch
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CTileSourceMBTiles::put_fileName( BSTR bstrFileName )
{
	getOrCreateInnerObject()->filename() = CStringA( bstrFileName ).GetString();
	return S_OK;
}

STDMETHODIMP CTileSourceMBTiles::put_format( BSTR bstrFormat )
{
	getOrCreateInnerObject()->format() = CStringA( bstrFormat ).GetString();
	return S_OK;
}

STDMETHODIMP CTileSourceMBTiles::put_computeLevels( VARIANT_BOOL bComputeLevels )
{
	getOrCreateInnerObject()->computeLevels() = bComputeLevels == VARIANT_TRUE;
	return S_OK;
}