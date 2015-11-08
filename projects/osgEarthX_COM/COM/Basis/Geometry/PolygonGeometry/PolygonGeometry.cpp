// PolygonGeometry.cpp : CPolygonGeometry µÄÊµÏÖ

#include "stdafx.h"
#include "PolygonGeometry.h"


// CPolygonGeometry

STDMETHODIMP CPolygonGeometry::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IPolygonGeometry,
		&IID_IRingGeometry,
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
