// RectanglePrimitive.cpp : CRectanglePrimitive µÄÊµÏÖ

#include "stdafx.h"
#include "RectanglePrimitive.h"

#include <COM/Basis/GeoData/GeoPoint/GeoPoint.h>
#include <COM/Basis/Units/Linear/Linear.h>

// CRectanglePrimitive

STDMETHODIMP CRectanglePrimitive::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IRectanglePrimitive,
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

STDMETHODIMP CRectanglePrimitive::setPosition( IGeoPoint* pIGeoPoint )
{
	getOrCreateInnerObject()->setPosition( * CGeoPoint::getEarthDispatchInnerObject( pIGeoPoint, true ) );
	return S_OK;
}

STDMETHODIMP CRectanglePrimitive::setWidth( ILinear* pILinear )
{
	getOrCreateInnerObject()->setWidth( * CLinear::getEarthDispatchInnerObject( pILinear, true ) );
	return S_OK;
}

STDMETHODIMP CRectanglePrimitive::setHeight( ILinear* pILinear )
{
	getOrCreateInnerObject()->setHeight( * CLinear::getEarthDispatchInnerObject( pILinear, true ) );
	return S_OK;
}