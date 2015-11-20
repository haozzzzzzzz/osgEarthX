#include <EarthWeb/Utils/ClassFactory/ClassFactory.h>
#include <EarthWeb/Utils/ClassFactory/ConstructorT.h>

//source
#include <EarthWeb/Source/SourceClassType.h>

#include <EarthWeb/Source/FeatureSource/FeatureSourceOGR/FeatureSourceOGR.h>
#include <EarthWeb/Source/FeatureSource/FeatureSourceTFS/FeatureSourceTFS.h>
#include <EarthWeb/Source/FeatureSource/FeatureSourceWFS/FeatureSourceWFS.h>

#include <EarthWeb/Source/TileSource/TileSourceAGGLite/TileSourceAGGLite.h>
#include <EarthWeb/Source/TileSource/TileSourceArcGIS/TileSourceArcGIS.h>
#include <EarthWeb/Source/TileSource/TileSourceBing/TileSourceBing.h>
#include <EarthWeb/Source/TileSource/TileSourceColorRamp/TileSourceColorRamp.h>
#include <EarthWeb/Source/TileSource/TileSourceDebug/TileSourceDebug.h>
#include <EarthWeb/Source/TileSource/TileSourceGDAL/TileSourceGDAL.h>
#include <EarthWeb/Source/TileSource/TileSourceMBTiles/TileSourceMBTiles.h>
#include <EarthWeb/Source/TileSource/TileSourceNoise/TileSourceNoise.h>
#include <EarthWeb/Source/TileSource/TileSourceOSG/TileSourceOSG.h>
#include <EarthWeb/Source/TileSource/TileSourceTileCache/TileSourceTileCache.h>
#include <EarthWeb/Source/TileSource/TileSourceTileService/TileSourceTileService.h>
#include <EarthWeb/Source/TileSource/TileSourceTMS/TileSourceTMS.h>
#include <EarthWeb/Source/TileSource/TileSourceVPB/TileSourceVPB.h>
#include <EarthWeb/Source/TileSource/TileSourceWCS/TileSourceWCS.h>
#include <EarthWeb/Source/TileSource/TileSourceWMS/TileSourceWMS.h>
#include <EarthWeb/Source/TileSource/TileSourceXYZ/TileSourceXYZ.h>
#include <EarthWeb/Source/TileSource/TileSourceYahoo/TileSourceYahoo.h>

#include <EarthWeb/Source/VectorSource/VectorSourceGeom/VectorSourceGeom.h>
#include <EarthWeb/Source/VectorSource/VectorSourceSimple/VectorSourceSimple.h>
#include <EarthWeb/Source/VectorSource/VectorSourceStencil/VectorSourceStencil.h>

//EarthObject
#include <EarthWeb/EarthObject/EarthObjectClassType.h>
#include <EarthWeb/EarthGroup/EarthGroup.h>
#include <EarthWeb/Layer/ImageSurfaceLayer/ImageSurfaceLayer.h>
#include <EarthWeb/Layer/VectorSurfaceLayer/VectorSurfaceLayer.h>
#include <EarthWeb/Layer/ElevationSurfaceLayer/ElevationSurfaceLayer.h>

#include <EarthWeb/Externals/Graticule/Graticule.h>
#include <EarthWeb/Externals/Sky/Sky.h>
#include <EarthWeb/Externals/Viewpoint/Viewpoint.h>

#include <EarthWeb/Annotation/Place/Place.h>
#include <EarthWeb/Annotation/ImageOverlay/ImageOverlay.h>

#include <EarthWeb/Basis/GeoData/GeoPoint/GeoPoint.h>

FB::JSAPIPtr ClassFactory::createByEarthObjectClassType( int classType )
{
	FB::JSAPIPtr ptrJSAPI;

	switch( ( EarthObjectClassType ) classType )
	{
	case EARTH_GROUP:
		ptrJSAPI = boost::make_shared< ConstructorT< EarthGroup > >();
		break;

	case IMAGE_SURFACE_LAYER:
		ptrJSAPI = boost::make_shared< ConstructorT< ImageSurfaceLayer > >();
		break;

	case VECTOR_SURFACE_LAYER:
		ptrJSAPI = boost::make_shared< ConstructorT< VectorSurfaceLayer > >();
		break;

	case ELEVATION_SURFACE_LAYER:
		ptrJSAPI = boost::make_shared< ConstructorT< ElevationSurfaceLayer > >();
		break;

	case TERMASK_SURFACE_LAYER:
		break;

	case EXTERNAL_GRATICLUE:
		ptrJSAPI = boost::make_shared< ConstructorT< Graticule > >();
		break;

	case EXTERNAL_SKY:
		ptrJSAPI = boost::make_shared< ConstructorT< Sky > >();
		break;

	case ANNOTATION_TEXT_LABEL:
		break; 

	case ANNOTATION_MODEL:
		break;

	case ANNOTATION_IMAGE_OVERLAY:
		ptrJSAPI = boost::make_shared< ConstructorT< ImageOverlay > >();
		break;

	case ANNOTATION_FEATURE:
		break;

	case ANNOTATION_PLACE:
		ptrJSAPI = boost::make_shared< ConstructorT< Place > >();
		break;

	case EXTERNAL_VIEWPOINT:
		ptrJSAPI = boost::make_shared< ConstructorT< Viewpoint > >();
		break;

	case LABEL_SET_LAYER:
		break;

	case MODEL_SET_LAYER:
		break;

	case OVERIMG_SET_LAYER:
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

	return ptrJSAPI;
}

FB::JSAPIPtr ClassFactory::createBySourceClassType( int classType )
{
	FB::JSAPIPtr ptrJSAPI;

	switch( ( SourceClassType ) classType )
	{
	case TILE_SOURCE_AGGLITE:
		ptrJSAPI = boost::make_shared< ConstructorT< TileSourceAGGLite > >();
		break;

	case TILE_SOURCE_ARCGIS:
		ptrJSAPI = boost::make_shared< ConstructorT< TileSourceArcGIS > >();
		break;

	case TILE_SOURCE_BING:
		ptrJSAPI = boost::make_shared< ConstructorT< TileSourceBing > >();
		break;

	case TILE_SOURCE_COLOR_RAMP:
		ptrJSAPI = boost::make_shared< ConstructorT< TileSourceColorRamp > >();
		break;

	case TILE_SOURCE_DEBUG:
		ptrJSAPI = boost::make_shared< ConstructorT< TileSourceDebug > >();
		break;

	case TILE_SOURCE_GDAL:
		ptrJSAPI = boost::make_shared< ConstructorT< TileSourceGDAL > >();
		break;

	case TILE_SOURCE_MBTILES:
		ptrJSAPI = boost::make_shared< ConstructorT< TileSourceMBTiles > >();
		break;

	case TILE_SOURCE_NOISE:
		ptrJSAPI = boost::make_shared< ConstructorT< TileSourceNoise > >();
		break;

	case TILE_SOURCE_OSG:
		ptrJSAPI = boost::make_shared< ConstructorT< TileSourceOSG > >();
		break;

	case TILE_SOURCE_TILE_CACHE:
		ptrJSAPI = boost::make_shared< ConstructorT< TileSourceTileCache > >();
		break;

	case TILE_SOURCE_TILE_SERVICE:
		ptrJSAPI = boost::make_shared< ConstructorT< TileSourceTileService > >();
		break;

	case TILE_SOURCE_TMS:
		ptrJSAPI = boost::make_shared< ConstructorT< TileSourceTMS > >();
		break;

	case TILE_SOURCE_VPB:
		ptrJSAPI = boost::make_shared< ConstructorT< TileSourceVPB > >();
		break;

	case TILE_SOURCE_WCS:
		ptrJSAPI = boost::make_shared< ConstructorT< TileSourceWCS > >();
		break;

	case TILE_SOURCE_WMS:
		ptrJSAPI = boost::make_shared< ConstructorT< TileSourceWMS > >();
		break;

	case TILE_SOURCE_XYZ:
		ptrJSAPI = boost::make_shared< ConstructorT< TileSourceXYZ > >();
		break;

	case TILE_SOURCE_YAHOO:
		ptrJSAPI = boost::make_shared< ConstructorT< TileSourceYahoo > >();
		break;

	case VECTOR_SOURCE_GEOM:
		ptrJSAPI = boost::make_shared< ConstructorT< VectorSourceGeom > >();
		break;

	case VECTOR_SOURCE_SIMPLE:
		ptrJSAPI = boost::make_shared< ConstructorT< VectorSourceSimple > >();
		break;

	case VECTOR_SOURCE_STENCIL:
		ptrJSAPI = boost::make_shared< ConstructorT< VectorSourceStencil > >();
		break;

	case FEATURE_SOURCE_OGR:
		ptrJSAPI = boost::make_shared< ConstructorT< FeatureSourceOGR > >();
		break;
		
	case FEATURE_SOURCE_TFS:
		ptrJSAPI = boost::make_shared< ConstructorT< FeatureSourceTFS > >();
		break;

	case FEATURE_SOURCE_WFS:
		ptrJSAPI = boost::make_shared< ConstructorT< FeatureSourceWFS > >();
		break;

	default:
		break;
	}

	return ptrJSAPI;
}

FB::JSAPIPtr ClassFactory::createByGeoClassType( int classType )
{
	FB::JSAPIPtr ptrJSAPI;

	switch( ( GeoClassType ) classType )
	{
	case GEO_POINT:
		ptrJSAPI = boost::make_shared< ConstructorT< GeoPoint > >();
		break;

	default:
		break;
	}

	return ptrJSAPI;
}