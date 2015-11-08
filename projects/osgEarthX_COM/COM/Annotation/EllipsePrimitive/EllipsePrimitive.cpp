// EllipsePrimitive.cpp : CEllipsePrimitive µÄÊµÏÖ

#include "stdafx.h"
#include "EllipsePrimitive.h"

#include <COM/Basis/GeoData/GeoPoint/GeoPoint.h>
#include <COM/Basis/Units/Linear/Linear.h>
#include <COM/Basis/Units/Angular/Angular.h>

// CEllipsePrimitive

STDMETHODIMP CEllipsePrimitive::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IEllipsePrimitive,
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

STDMETHODIMP CEllipsePrimitive::setPosition( IGeoPoint* pIGeoPoint )
{
	getOrCreateInnerObject()->setPosition( * CGeoPoint::getEarthDispatchInnerObject( pIGeoPoint, true ) );
	return S_OK;
}

STDMETHODIMP CEllipsePrimitive::setRadiusMajor( ILinear* pILinear )
{
	getOrCreateInnerObject()->setRadiusMajor( * CLinear::getEarthDispatchInnerObject( pILinear, true ) );
	return S_OK;
}

STDMETHODIMP CEllipsePrimitive::setRadiusMinor( ILinear* pILinear )
{
	getOrCreateInnerObject()->setRadiusMinor( * CLinear::getEarthDispatchInnerObject( pILinear, true ) );
	return S_OK;
}

STDMETHODIMP CEllipsePrimitive::setRotationAngle( IAngular* pIAngular )
{
	getOrCreateInnerObject()->setRotationAngle( * CAngular::getEarthDispatchInnerObject( pIAngular, true ) );
	return S_OK;
}

STDMETHODIMP CEllipsePrimitive::setArcStart( IAngular* pIAngular )
{
	getOrCreateInnerObject()->setArcStart( * CAngular::getEarthDispatchInnerObject( pIAngular, true ) );
	return S_OK;
}

STDMETHODIMP CEllipsePrimitive::setArcEnd( IAngular* pIAngular )
{
	getOrCreateInnerObject()->setArcEnd( * CAngular::getEarthDispatchInnerObject( pIAngular, true ) );
	return S_OK;
}

STDMETHODIMP CEllipsePrimitive::setPie( VARIANT_BOOL vbPis )
{
	getOrCreateInnerObject()->setPie( vbPis == VARIANT_TRUE );
	return S_OK;
}