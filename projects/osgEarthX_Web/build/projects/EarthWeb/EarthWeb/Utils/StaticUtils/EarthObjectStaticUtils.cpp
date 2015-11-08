#include <EarthWeb/Utils/StaticUtils/EarthObjectStaticUtils.h>

#include <EarthWeb/EarthGroup/EarthGroup.h>
#include <EarthWeb/Layer/ImageSurfaceLayer/ImageSurfaceLayer.h>
#include <EarthWeb/Layer/VectorSurfaceLayer/VectorSurfaceLayer.h>
#include <EarthWeb/Layer/ElevationSurfaceLayer/ElevationSurfaceLayer.h>

#include <EarthWeb/Externals/Graticule/Graticule.h>
#include <EarthWeb/Externals/Sky/Sky.h>
#include <EarthWeb/Externals/Viewpoint/Viewpoint.h>

#include <EarthWeb/Annotation/ImageOverlay/ImageOverlay.h>
#include <EarthWeb/Annotation/Place/Place.h>

//所有object在传参数给void*指针前都要转到Object*类型
IEarthObjectPtr EarthObjectStaticUtils::createInstance( EarthObjectClassType classType, void* innerParams /* = NULL */ )
{
	IEarthObjectPtr ptrJSAPI;

	switch ( classType )
	{
	case EARTH_GROUP:
		{
			EarthGroupPtr ptrEarthGroup = boost::make_shared< EarthGroup >();
			ptrJSAPI = boost::dynamic_pointer_cast< IEarthObject >( ptrEarthGroup );

			if ( innerParams )
			{
				ptrEarthGroup->setInnerObject( ( osgEarthX::Group* ) ( osgEarthX::Object* ) innerParams);
			}
		}
		break;

	case IMAGE_SURFACE_LAYER:
		{
			ImageSurfaceLayerPtr ptrImageSurfaceLayer = boost::make_shared<ImageSurfaceLayer>();
			ptrJSAPI = boost::dynamic_pointer_cast< IEarthObject >(ptrImageSurfaceLayer);

			if ( innerParams )
			{
				ptrImageSurfaceLayer->setInnerObject( ( osgEarthX::ImageSurfaceLayer* ) ( osgEarthX::Object* ) innerParams  );
			}
		}
		break;

	case VECTOR_SURFACE_LAYER:
		{
			VectorSurfaceLayerPtr ptrVectorSurfaceLayer = boost::make_shared<VectorSurfaceLayer>();
			ptrJSAPI = boost::dynamic_pointer_cast< IEarthObject >(ptrVectorSurfaceLayer);

			if ( innerParams )
			{
				ptrVectorSurfaceLayer->setInnerObject( ( osgEarthX::VectorSurfaceLayer* ) ( osgEarthX::Object* ) innerParams );
			}
		}
		break;

	case ELEVATION_SURFACE_LAYER:
		{
			ElevationSurfaceLayerPtr ptrLayer = boost::make_shared<ElevationSurfaceLayer>();
			ptrJSAPI = boost::dynamic_pointer_cast< IEarthObject >(ptrLayer);

			if ( innerParams )
			{
				ptrLayer->setInnerObject( ( osgEarthX::ElevationSurfaceLayer* ) ( osgEarthX::Object* ) innerParams );
			}
		}
		break;

	case TERMASK_SURFACE_LAYER:
		break;

	case EXTERNAL_GRATICLUE:
		{
			GraticulePtr ptrGraticule = boost::make_shared< Graticule >();
			ptrJSAPI = boost::dynamic_pointer_cast< IEarthObject >( ptrGraticule );

			if ( innerParams )
			{
				ptrGraticule->setInnerObject( ( osgEarthX::Graticule* ) ( osgEarthX::Object* ) innerParams );
			}
		}
		break;

	case EXTERNAL_SKY:
		{
			SkyPtr ptrSky = boost::make_shared<Sky>();
			ptrJSAPI = boost::dynamic_pointer_cast< IEarthObject >(ptrSky);

			if ( innerParams )
			{
				ptrSky->setInnerObject( ( osgEarthX::Sky* ) ( osgEarthX::Object* ) innerParams );
			}
		}
		break;

	case EXTERNAL_LABEL:
		break;

	case EXTERNAL_MODEL:
		break;

	case ANNOTATION_IMAGE_OVERLAY:
		{
			ImageOverlayPtr ptrImageOverlay = boost::make_shared<ImageOverlay>();
			ptrJSAPI = boost::dynamic_pointer_cast< IEarthObject >( ptrImageOverlay );

			if ( innerParams )
			{
				ptrImageOverlay->setInnerObject( ( osgEarthX::ImageOverlay* ) ( osgEarthX::Object* ) innerParams );
			}
		}
		break;

	case EXTERNAL_SHAPE:
		break;

	case ANNOTATION_PLACE:
		{
			PlacePtr ptrPlace = boost::make_shared<Place>();
			ptrJSAPI = boost::dynamic_pointer_cast< IEarthObject >( ptrPlace );

			if ( innerParams )
			{
				ptrPlace->setInnerObject( ( osgEarthX::Place* ) ( osgEarthX::Object* ) innerParams );
			}
		}
		break;

	case EXTERNAL_VIEWPOINT:
		{
			ViewpointPtr ptrViewpoint = boost::make_shared< Viewpoint >();
			ptrJSAPI = boost::dynamic_pointer_cast< IEarthObject >(ptrViewpoint);

			if ( innerParams )
			{
				ptrViewpoint->setInnerObject( ( osgEarthX::Viewpoint* ) ( osgEarthX::Object* ) innerParams );
			}
		}
		break;

	case SHAPE_SET_LAYER:
		break;

	case PLACE_SET_LAYER:
		break;

	case VIEWPOINT_SET_LAYER:
		break;
	}

	return ptrJSAPI;
}

osgEarthX::Object* EarthObjectStaticUtils::getInnerObject( IEarthObject* pIEarthObject, bool bCreateIfNull /* = false */ )
{
	if ( pIEarthObject == NULL )
	{
		return NULL;
	}

	osgEarthX::Object* pObject = NULL;
	EarthObjectClassType classType = pIEarthObject->get_classType();

	switch ( classType )
	{
	case EARTH_GROUP:
		{
			EarthGroup* pEarthGroup = dynamic_cast< EarthGroup* >( pIEarthObject );
			pObject = bCreateIfNull ? pEarthGroup->getOrCreateInnerObject() : pEarthGroup->getInnerObject();
		}
		break;

	case IMAGE_SURFACE_LAYER:
		{
			ImageSurfaceLayer* pImageSurfaceLayer = dynamic_cast< ImageSurfaceLayer* >( pIEarthObject );
			pObject = bCreateIfNull ? pImageSurfaceLayer->getOrCreateInnerObject() : pImageSurfaceLayer->getInnerObject();
		}
		break;

	case VECTOR_SURFACE_LAYER:
		{
			VectorSurfaceLayer* pVectorSurfaceLayer = dynamic_cast< VectorSurfaceLayer* >( pIEarthObject );
			pObject = bCreateIfNull ? pVectorSurfaceLayer->getOrCreateInnerObject() : pVectorSurfaceLayer->getInnerObject();
		}
		break;

	case ELEVATION_SURFACE_LAYER:
		{
			ElevationSurfaceLayer* pElevationSurfaceLayer = dynamic_cast< ElevationSurfaceLayer* >( pIEarthObject );
			pObject = bCreateIfNull ? pElevationSurfaceLayer->getOrCreateInnerObject() : pElevationSurfaceLayer->getInnerObject();
		}
		break;

	case TERMASK_SURFACE_LAYER:
		break;

	case EXTERNAL_GRATICLUE:
		{
			Graticule* pGraticule = dynamic_cast< Graticule* >( pIEarthObject );
			pObject = bCreateIfNull ? pGraticule->getOrCreateInnerObject() : pGraticule->getInnerObject();
		}
		break;

	case EXTERNAL_SKY:
		{
			Sky* pSky = dynamic_cast< Sky* >( pIEarthObject );
			pObject = bCreateIfNull ? pSky->getOrCreateInnerObject() : pSky->getInnerObject();
		}
		break;

	case EXTERNAL_LABEL:
		break;

	case EXTERNAL_MODEL:
		break;

	case ANNOTATION_IMAGE_OVERLAY:
		{
			ImageOverlay* pImageOverlay = dynamic_cast< ImageOverlay* >( pIEarthObject );
			pObject = bCreateIfNull ? pImageOverlay->getOrCreateInnerObject() : pImageOverlay->getInnerObject();
		}
		break;

	case EXTERNAL_SHAPE:
		break;

	case ANNOTATION_PLACE:
		{
			Place* pPlace = dynamic_cast< Place* >( pIEarthObject );
			pObject = bCreateIfNull ? pPlace->getOrCreateInnerObject() : pPlace->getInnerObject();
		}
		break;

	case EXTERNAL_VIEWPOINT:
		{
			Viewpoint* pViewpoint = dynamic_cast< Viewpoint* >( pIEarthObject );
			pObject = bCreateIfNull ? pViewpoint->getOrCreateInnerObject() : pViewpoint->getInnerObject();
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