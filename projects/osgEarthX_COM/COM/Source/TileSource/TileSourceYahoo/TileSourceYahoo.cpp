// TileSourceYahoo.cpp : CTileSourceYahoo µÄÊµÏÖ

#include "stdafx.h"
#include "TileSourceYahoo.h"


// CTileSourceYahoo

STDMETHODIMP CTileSourceYahoo::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_ITileSourceYahoo,
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
