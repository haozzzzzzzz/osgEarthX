// TileSourceVPB.cpp : CTileSourceVPB µÄÊµÏÖ

#include "stdafx.h"
#include "TileSourceVPB.h"


// CTileSourceVPB

STDMETHODIMP CTileSourceVPB::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_ITileSourceVPB,
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
