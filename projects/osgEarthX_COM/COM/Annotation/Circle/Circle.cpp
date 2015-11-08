// Circle.cpp : CCircle µÄÊµÏÖ

#include "stdafx.h"
#include "Circle.h"

#include <COM/Basis/GeoData/GeoPoint/GeoPoint.h>
#include <COM/Basis/Units/Linear/Linear.h>
#include <COM/Basis/Units/Angular/Angular.h>

// CCircle

STDMETHODIMP CCircle::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_ICircle,
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

STDMETHODIMP CCircle::setPosition( IGeoPoint* pIGeoPoint )
{
	getOrCreateInnerObject()->setPosition( * CGeoPoint::getEarthDispatchInnerObject( pIGeoPoint, true ) );
	return S_OK;
}

STDMETHODIMP CCircle::setRadius( ILinear* pILinear )
{
	getOrCreateInnerObject()->setRadius( * CLinear::getEarthDispatchInnerObject( pILinear, true ) );
	return S_OK;
}

STDMETHODIMP CCircle::setArcStart( IAngular* pIAngular )
{
	getOrCreateInnerObject()->setArcStart( * CAngular::getEarthDispatchInnerObject( pIAngular, true ) );
	return S_OK;
}

STDMETHODIMP CCircle::setArcEnd( IAngular* pIAngular )
{
	getOrCreateInnerObject()->setArcEnd( * CAngular::getEarthDispatchInnerObject( pIAngular, true ) );
	return S_OK;
}

STDMETHODIMP CCircle::setPie( VARIANT_BOOL vbPie )
{
	getOrCreateInnerObject()->setPie( vbPie == VARIANT_TRUE );
	return S_OK;
}