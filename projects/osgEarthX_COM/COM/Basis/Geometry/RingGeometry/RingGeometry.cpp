// RingGeometry.cpp : CRingGeometry µÄÊµÏÖ

#include "stdafx.h"
#include "RingGeometry.h"


// CRingGeometry

STDMETHODIMP CRingGeometry::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
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
