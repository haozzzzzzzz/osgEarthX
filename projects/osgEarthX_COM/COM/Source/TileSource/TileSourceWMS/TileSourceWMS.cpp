// TileSourceWMS.cpp : CTileSourceWMS µÄÊµÏÖ

#include "stdafx.h"
#include "TileSourceWMS.h"


// CTileSourceWMS

STDMETHODIMP CTileSourceWMS::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_ITileSourceWMS,
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
