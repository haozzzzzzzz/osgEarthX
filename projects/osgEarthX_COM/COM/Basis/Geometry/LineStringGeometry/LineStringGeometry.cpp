// LineStringGeometry.cpp : CLineStringGeometry µÄÊµÏÖ

#include "stdafx.h"
#include "LineStringGeometry.h"


// CLineStringGeometry

STDMETHODIMP CLineStringGeometry::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_ILineStringGeometry,
		&IID_IGeometry,
		&IID_IEarthDispatch
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}
