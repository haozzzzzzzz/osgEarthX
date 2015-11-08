#include "stdafx.h"
#include <COM/Utils/StaticUtils/GeoStaticUtils.h>

#include <COM/Basis/GeoData/GeoPoint/GeoPoint.h>
#include <COM/Basis/GeoData/SpatialReference/SpatialReference.h>

HRESULT GeoStaticUtils::createInstance( GeoClassType classType, IDispatch** ppIDispatch, void* innerParams /* = NULL */ )
{
	HRESULT hr = S_FALSE;

	switch( classType )
	{
	case GEO_CLASS_SPATIAL_REFERENCE:
		{
			hr = CSpatialReference::createEarthDispatchInstance( ppIDispatch, static_cast< const osgEarth::SpatialReference* >( innerParams ) );
		}
		break;

	case GEO_CLASS_GEO_POINT:
		{
			hr = CGeoPoint::createEarthDispatchInstance( ppIDispatch, static_cast< osgEarth::GeoPoint* >( innerParams ) );
		}
		break;

	default:
		break;
	}

	return hr;
}