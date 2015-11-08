// TileSourceColorRamp.cpp : CTileSourceColorRamp µÄÊµÏÖ

#include "stdafx.h"
#include "TileSourceColorRamp.h"


// CTileSourceColorRamp

STDMETHODIMP CTileSourceColorRamp::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_ITileSourceColorRamp,
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
