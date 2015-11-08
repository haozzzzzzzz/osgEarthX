#include "stdafx.h"
#include <COM/Utils/StaticUtils/GeometryStaticUtils.h>

#include <COM/Basis/Geometry/LineStringGeometry/LineStringGeometry.h>
#include <COM/Basis/Geometry/RingGeometry/RingGeometry.h>
#include <COM/Basis/Geometry/PolygonGeometry/PolygonGeometry.h>

HRESULT GeometryStaticUtils::createInstance( GeometryClassType classType, IDispatch** ppIDispatch, osgEarth::Symbology::Geometry* pGeometry /* = NULL */ )
{
	HRESULT hr = S_FALSE;
	switch( classType )
	{
	case GEOMETRY_CLASS_POINTSET:
		break;
	case GEOMETRY_CLASS_LINESTRING:
		hr = CLineStringGeometry::createEarthDispatchInstance( ppIDispatch, dynamic_cast< osgEarth::Symbology::LineString* >( pGeometry ) );
		break;
	case GEOMETRY_CLASS_RING:
		hr = CRingGeometry::createEarthDispatchInstance( ppIDispatch, dynamic_cast< osgEarth::Symbology::Ring* >( pGeometry ) );
		break;
	case GEOMETRY_CLASS_POLYGON:
		hr = CPolygonGeometry::createEarthDispatchInstance( ppIDispatch, dynamic_cast< osgEarth::Symbology::Polygon* >( pGeometry ) );
		break;
	case GEOMETRY_CLASS_MULTI:
		break;
	default:
		break;
	}
	return hr;
}

osgEarth::Symbology::Geometry* GeometryStaticUtils::getInnerObject( IGeometry* pIGeometry, bool bCreateIfNull /* = false */ )
{
	osgEarth::Symbology::Geometry* pGeometry = NULL;
	GeometryClassType classType;
	pIGeometry->get_classType( &classType );

	switch( classType )
	{
	case GEOMETRY_CLASS_POINTSET:
		break;
	case GEOMETRY_CLASS_LINESTRING:
		pGeometry = CLineStringGeometry::getEarthDispatchInnerObject( pIGeometry, bCreateIfNull );
		break;
	case GEOMETRY_CLASS_RING:
		pGeometry = CRingGeometry::getEarthDispatchInnerObject( pIGeometry, bCreateIfNull );
		break;
	case GEOMETRY_CLASS_POLYGON:
		pGeometry = CPolygonGeometry::getEarthDispatchInnerObject( pIGeometry, bCreateIfNull );
		break;
	case GEOMETRY_CLASS_MULTI:
		break;
	default:
		break;
	}

	return pGeometry;
}