// Graticule.cpp : CGraticule µÄÊµÏÖ

#include "stdafx.h"
#include "Graticule.h"


// CGraticule

STDMETHODIMP CGraticule::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IGraticule,
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