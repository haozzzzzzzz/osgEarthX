#include "stdafx.h"
#include <COM/Utils/StaticUtils/EarthObjectStaticUtils.h>

#include <COM/EarthGroup/EarthGroup.h>
#include <COM/Layer/ImageSurfaceLayer/ImageSurfaceLayer.h>
#include <COM/Layer/VectorSurfaceLayer/VectorSurfaceLayer.h>
#include <COM/Layer/ElevationSurfaceLayer/ElevationSurfaceLayer.h>

#include <COM/Externals/Graticule/Graticule.h>
#include <COM/Externals/Sky/Sky.h>
#include <COM/Externals/Viewpoint/Viewpoint.h>

#include <COM/Annotation/ImageOverlay/ImageOverlay.h>
#include <COM/Annotation/Place/Place.h>
#include <COM/Annotation/Circle/Circle.h>
#include <COM/Annotation/FeaturePrimitive/FeaturePrimitive.h>
#include <COM/Annotation/Model/Model.h>
#include <COM/Annotation/TextLabel/TextLabel.h>
#include <COM/Annotation/RectanglePrimitive/RectanglePrimitive.h>
#include <COM/Annotation/EllipsePrimitive/EllipsePrimitive.h>

HRESULT EarthObjectStaticUtils::createInstance
	( 
		EarthObjectClassType classType, 
		IDispatch** ppIDispatch, 
		osgEarthX::Object* pInnerObject /* = NULL */
	)
{
	HRESULT hr = S_FALSE;

	switch ( classType )
	{
	case EARTH_GROUP:
		{
			hr = CEarthGroup::createEarthDispatchInstance( ppIDispatch, dynamic_cast< osgEarthX::Group* >( pInnerObject ) );
		}
		break;

	case IMAGE_SURFACE_LAYER:
		{
			hr = CImageSurfaceLayer::createEarthDispatchInstance( ppIDispatch, dynamic_cast< osgEarthX::ImageSurfaceLayer* >( pInnerObject ) );
		}
		break;

	case VECTOR_SURFACE_LAYER:
		{
			hr = CVectorSurfaceLayer::createEarthDispatchInstance( ppIDispatch, dynamic_cast< osgEarthX::VectorSurfaceLayer* >( pInnerObject ) );
		}
		break;

	case ELEVATION_SURFACE_LAYER:
		{
			hr = CElevationSurfaceLayer::createEarthDispatchInstance( ppIDispatch, dynamic_cast< osgEarthX::ElevationSurfaceLayer* >( pInnerObject ) );
		}
		break;

	case TERMASK_SURFACE_LAYER:
		break;

	case EXTERNAL_SKY:
		{
			hr = CSky::createEarthDispatchInstance( ppIDispatch, dynamic_cast< osgEarthX::Sky* >( pInnerObject ) );
		}
		break;

	case EXTERNAL_GRATICULE:
		{
			hr = CGraticule::createEarthDispatchInstance( ppIDispatch, dynamic_cast< osgEarthX::Graticule* >( pInnerObject ) );
		}
		break;

	case ANNOTATION_TEXT_LABEL:
		{
			hr = CTextLabel::createEarthDispatchInstance( ppIDispatch, dynamic_cast< osgEarthX::TextLabel* >( pInnerObject ) );
		}
		break;

	case ANNOTATION_MODEL:
		{
			hr = CModel::createEarthDispatchInstance( ppIDispatch, dynamic_cast< osgEarthX::Model* >( pInnerObject ) );
		}
		break;

	case ANNOTATION_IMAGE_OVERLAY:
		{
			hr = CImageOverlay::createEarthDispatchInstance( ppIDispatch, dynamic_cast< osgEarthX::ImageOverlay* >( pInnerObject ) );
		}
		break;

	case ANNOTATION_FEATURE:
		{
			hr = CFeaturePrimitive::createEarthDispatchInstance( ppIDispatch, dynamic_cast< osgEarthX::FeaturePrimitive* >( pInnerObject ) );
		}
		break;

	case ANNOTATION_PLACE:
		{
			hr = CPlace::createEarthDispatchInstance( ppIDispatch, dynamic_cast< osgEarthX::Place* >( pInnerObject ) );

		}
		break;

	case EXTERNAL_VIEWPOINT:
		{
			hr = CViewpoint::createEarthDispatchInstance( ppIDispatch, dynamic_cast< osgEarthX::Viewpoint* >( pInnerObject ) );
		}
		break;

	case ANNOTATION_CIRCLE:
		{
			hr = CCircle::createEarthDispatchInstance( ppIDispatch, dynamic_cast< osgEarthX::Circle* >( pInnerObject ) );

		}
		break;

	case ANNOTATION_RECTANGLE:
		{
			hr = CRectanglePrimitive::createEarthDispatchInstance( ppIDispatch, dynamic_cast< osgEarthX::RectanglePrimitive * >( pInnerObject ) );
		}
		break;

	case ANNOTATION_ELLIPSE:
		{
			hr = CEllipsePrimitive::createEarthDispatchInstance( ppIDispatch, dynamic_cast< osgEarthX::EllipsePrimitve* >( pInnerObject ) );
		}
		break;

	case SHAPE_SET_LAYER:
		break;

	case PLACE_SET_LAYER:
		break;

	case VIEWPOINT_SET_LAYER:
		break;

	default:
		break;

	}

	return hr;
}


osgEarthX::Object* EarthObjectStaticUtils::getInnerObject( IEarthObject* pIEarthObject, bool bCreateIfNull /* = false */ )
{
	if ( pIEarthObject == NULL )
	{
		return NULL;
	}

	osgEarthX::Object* pObject =NULL;

	EarthObjectClassType classType;
	pIEarthObject->get_classType( &classType );

	switch ( classType )
	{
	case EARTH_GROUP:
		{
			pObject = CEarthGroup::getEarthDispatchInnerObject( pIEarthObject, bCreateIfNull );
		}
		break;

	case IMAGE_SURFACE_LAYER:
		{
			pObject = CImageSurfaceLayer::getEarthDispatchInnerObject( pIEarthObject, bCreateIfNull );
		}
		break;

	case VECTOR_SURFACE_LAYER:
		{
			pObject = CVectorSurfaceLayer::getEarthDispatchInnerObject( pIEarthObject, bCreateIfNull );
		}
		break;

	case ELEVATION_SURFACE_LAYER:
		{
			pObject = CElevationSurfaceLayer::getEarthDispatchInnerObject( pIEarthObject, bCreateIfNull );

		}
		break;

	case TERMASK_SURFACE_LAYER:
		break;

	case EXTERNAL_SKY:
		{
			pObject = CSky::getEarthDispatchInnerObject( pIEarthObject, bCreateIfNull );

		}
		break;

	case EXTERNAL_GRATICULE:
		{
			pObject = CGraticule::getEarthDispatchInnerObject( pIEarthObject, bCreateIfNull );

		}
		break;

	case ANNOTATION_TEXT_LABEL:
		{
			pObject = CTextLabel::getEarthDispatchInnerObject( pIEarthObject, bCreateIfNull );

		}
		break;

	case ANNOTATION_MODEL:
		{
			pObject = CModel::getEarthDispatchInnerObject( pIEarthObject, bCreateIfNull );

		}
		break;

	case ANNOTATION_IMAGE_OVERLAY:
		{
			pObject = CImageOverlay::getEarthDispatchInnerObject( pIEarthObject, bCreateIfNull );

		}
		break;

	case ANNOTATION_FEATURE:
		{
			pObject = CFeaturePrimitive::getEarthDispatchInnerObject( pIEarthObject, bCreateIfNull );

		}
		break;

	case ANNOTATION_PLACE:
		{
			pObject = CPlace::getEarthDispatchInnerObject( pIEarthObject, bCreateIfNull );

		}
		break;

	case EXTERNAL_VIEWPOINT:
		{
			pObject = CViewpoint::getEarthDispatchInnerObject( pIEarthObject, bCreateIfNull );

		}
		break;

	case ANNOTATION_CIRCLE:
		{
			pObject = CCircle::getEarthDispatchInnerObject( pIEarthObject, bCreateIfNull );

		}
		break;

	case ANNOTATION_RECTANGLE:
		{
			pObject = CRectanglePrimitive::getEarthDispatchInnerObject( pIEarthObject, bCreateIfNull );
		}
		break;

	case ANNOTATION_ELLIPSE:
		{
			pObject = CEllipsePrimitive::getEarthDispatchInnerObject( pIEarthObject, bCreateIfNull );
		}
		break;

	case SHAPE_SET_LAYER:
		break;

	case PLACE_SET_LAYER:
		break;

	case VIEWPOINT_SET_LAYER:
		break;

	default:
		break;
	}
	return pObject;
}