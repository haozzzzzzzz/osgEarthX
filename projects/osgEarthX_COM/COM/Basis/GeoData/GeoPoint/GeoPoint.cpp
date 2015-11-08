// GeoPoint.cpp : CGeoPoint µÄÊµÏÖ

#include "stdafx.h"
#include "GeoPoint.h"

#include <COM/Utils/StaticUtils/GeoStaticUtils.h>
// CGeoPoint

#include <COM/Basis/GeoData/SpatialReference/SpatialReference.h>

STDMETHODIMP CGeoPoint::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IGeoPoint,
		&IID_IEarthDispatch
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}


STDMETHODIMP CGeoPoint::put_x( DOUBLE dX )
{
	getOrCreateInnerObject()->x() = dX;
	return S_OK;
}

STDMETHODIMP CGeoPoint::get_x( DOUBLE *pX )
{
	*pX = getOrCreateInnerObject()->x();
	return S_OK;
}

STDMETHODIMP CGeoPoint::put_y( DOUBLE dY )
{
	getOrCreateInnerObject()->y() = dY;
	return S_OK;
}

STDMETHODIMP CGeoPoint::get_y( DOUBLE *pY )
{
	*pY = getOrCreateInnerObject()->y();
	return S_OK;
}

STDMETHODIMP CGeoPoint::put_z( DOUBLE dZ )
{
	getOrCreateInnerObject()->z() = dZ;
	return S_OK;
}

STDMETHODIMP CGeoPoint::get_z( DOUBLE *pZ )
{
	*pZ = getOrCreateInnerObject()->z();
	return S_OK;
}

STDMETHODIMP CGeoPoint::put_srs( ISpatialReference* pISpatialReference )
{
	const osgEarth::SpatialReference* pSpatialReference = CSpatialReference::getEarthDispatchInnerObject( pISpatialReference );
	getOrCreateInnerObject()->setSRS( pSpatialReference );
	return S_OK;
}

STDMETHODIMP CGeoPoint::get_srs( ISpatialReference** ppISpatialReference )
{
	return GeoStaticUtils::createInstance( GEO_CLASS_SPATIAL_REFERENCE, ( IDispatch** ) ppISpatialReference, ( void* ) getOrCreateInnerObject()->getSRS() );
}