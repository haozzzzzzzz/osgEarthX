#include "stdafx.h"

#include <COM/Utils/StaticUtils/SourceStaticUtils.h>

#include <COM/Source/TileSource/TileSourceAGGLite/TileSourceAGGLite.h>
#include <COM/Source/TileSource/TileSourceArcGIS/TileSourceArcGIS.h>
#include <COM/Source/TileSource/TileSourceBing/TileSourceBing.h>
#include <COM/Source/TileSource/TileSourceColorRamp/TileSourceColorRamp.h>
#include <COM/Source/TileSource/TileSourceDebug/TileSourceDebug.h>
#include <COM/Source/TileSource/TileSourceGDAL/TileSourceGDAL.h>
#include <COM/Source/TileSource/TileSourceMBTiles/TileSourceMBTiles.h>
#include <COM/Source/TileSource/TileSourceNoise/TileSourceNoise.h>
#include <COM/Source/TileSource/TileSourceOSG/TileSourceOSG.h>
#include <COM/Source/TileSource/TileSourceTileCache/TileSourceTileCache.h>
#include <COM/Source/TileSource/TileSourceTileService/TileSourceTileService.h>
#include <COM/Source/TileSource/TileSourceTMS/TileSourceTMS.h>
#include <COM/Source/TileSource/TileSourceVPB/TileSourceVPB.h>
#include <COM/Source/TileSource/TileSourceWCS/TileSourceWCS.h>
#include <COM/Source/TileSource/TileSourceWMS/TileSourceWMS.h>
#include <COM/Source/TileSource/TileSourceXYZ/TileSourceXYZ.h>
#include <COM/Source/TileSource/TileSourceYahoo/TileSourceYahoo.h>

#include <COM/Source/VectorSource/VectorSourceGeom/VectorSourceGeom.h>
#include <COM/Source/VectorSource/VectorSourceSimple/VectorSourceSimple.h>
#include <COM/Source/VectorSource/VectorSourceStencil/VectorSourceStencil.h>

#include <COM/Source/FeatureSource/FeatureSourceOGR/FeatureSourceOGR.h>
#include <COM/Source/FeatureSource/FeatureSourceTFS/FeatureSourceTFS.h>
#include <COM/Source/FeatureSource/FeatureSourceWFS/FeatureSourceWFS.h>

HRESULT SourceStaticUtils::createInstance( SourceClassType classType, IDispatch** ppIDispatch )
{
	HRESULT hr = S_FALSE;

	switch( classType )
	{
	case TILE_SOURCE_AGGLITE:
		hr = CTileSourceAGGLite::createEarthDispatchInstance( ppIDispatch );
		break;

	case TILE_SOURCE_ARCGIS:
		hr = CTileSourceArcGIS::createEarthDispatchInstance( ppIDispatch );
		break;

	case TILE_SOURCE_BING:
		hr = CTileSourceBing::createEarthDispatchInstance( ppIDispatch );

		break;

	case TILE_SOURCE_COLOR_RAMP:
		hr = CTileSourceColorRamp::createEarthDispatchInstance( ppIDispatch );
		break;

	case TILE_SOURCE_DEBUG:
		hr = CTileSourceDebug::createEarthDispatchInstance( ppIDispatch );
		break;

	case TILE_SOURCE_GDAL:
		hr = CTileSourceGDAL::createEarthDispatchInstance( ppIDispatch );
		break;

	case TILE_SOURCE_MBTILES:
		hr = CTileSourceMBTiles::createEarthDispatchInstance( ppIDispatch );
		break;

	case TILE_SOURCE_NOISE:
		hr = CTileSourceNoise::createEarthDispatchInstance( ppIDispatch );
		break;

	case TILE_SOURCE_OSG:
		hr = CTileSourceOSG::createEarthDispatchInstance( ppIDispatch );
		break;

	case TILE_SOURCE_TILE_CACHE:
		hr = CTileSourceTileCache::createEarthDispatchInstance( ppIDispatch );
		break;

	case TILE_SOURCE_TILE_SERVICE:
		hr = CTileSourceTileService::createEarthDispatchInstance( ppIDispatch );
		break;

	case TILE_SOURCE_TMS:
		hr = CTileSourceTMS::createEarthDispatchInstance( ppIDispatch );
		break;

	case TILE_SOURCE_VPB:
		hr = CTileSourceVPB::createEarthDispatchInstance( ppIDispatch );
		break;

	case TILE_SOURCE_WCS:
		hr = CTileSourceWCS::createEarthDispatchInstance( ppIDispatch );
		break;

	case TILE_SOURCE_WMS:
		hr = CTileSourceWMS::createEarthDispatchInstance( ppIDispatch );
		break;

	case TILE_SOURCE_XYZ:
		hr = CTileSourceXYZ::createEarthDispatchInstance( ppIDispatch );
		break;

	case TILE_SOURCE_YAHOO:
		hr = CTileSourceYahoo::createEarthDispatchInstance( ppIDispatch );
		break;

	case VECTOR_SOURCE_GEOM:
		hr = CVectorSourceGeom::createEarthDispatchInstance( ppIDispatch );
		break;

	case VECTOR_SOURCE_SIMPLE:
		hr = CVectorSourceSimple::createEarthDispatchInstance( ppIDispatch );
		break;

	case VECTOR_SOURCE_STENCIL:
		hr = CVectorSourceStencil::createEarthDispatchInstance( ppIDispatch );
		break;

	case FEATURE_SOURCE_OGR:
		hr = CFeatureSourceOGR::createEarthDispatchInstance( ppIDispatch );
		break;

	case FEATURE_SOURCE_TFS:
		hr = CFeatureSourceTFS::createEarthDispatchInstance( ppIDispatch );
		break;

	case FEATURE_SOURCE_WFS:
		hr = CFeatureSourceWFS::createEarthDispatchInstance( ppIDispatch );
		break;

	default:
		break;

	}

	return hr;
}

osgEarth::TileSourceOptions* SourceStaticUtils::getTileSourceOptions( ITileSourceDispatch* pITileSourceDispatch )
{
	if ( pITileSourceDispatch == NULL )
	{
		return NULL;
	}

	osgEarth::TileSourceOptions* pOptions = NULL;

	SourceClassType classType;
	pITileSourceDispatch->get_classType( &classType );

	switch( classType )
	{
	case  TILE_SOURCE_AGGLITE:
		{
			pOptions  = CTileSourceAGGLite::getEarthDispatchInnerObject( pITileSourceDispatch, true );
		}
		break;

	case TILE_SOURCE_ARCGIS:
		{
			pOptions  = CTileSourceArcGIS::getEarthDispatchInnerObject( pITileSourceDispatch, true );

		}
		break;

	case TILE_SOURCE_BING:
		{
			pOptions  = CTileSourceBing::getEarthDispatchInnerObject( pITileSourceDispatch, true );

		}
		break;

	case TILE_SOURCE_COLOR_RAMP:
		{
			pOptions  = CTileSourceColorRamp::getEarthDispatchInnerObject( pITileSourceDispatch, true );

		}
		break;

	case TILE_SOURCE_DEBUG:
		{
			pOptions  = CTileSourceDebug::getEarthDispatchInnerObject( pITileSourceDispatch, true );

		}
		break;

	case TILE_SOURCE_GDAL:
		{
			pOptions  = CTileSourceGDAL::getEarthDispatchInnerObject( pITileSourceDispatch, true );

		}
		break;

	case TILE_SOURCE_MBTILES:
		{
			pOptions  = CTileSourceMBTiles::getEarthDispatchInnerObject( pITileSourceDispatch, true );

		}
		break;

	case TILE_SOURCE_NOISE:
		{
			pOptions  = CTileSourceNoise::getEarthDispatchInnerObject( pITileSourceDispatch, true );

		}
		break;

	case TILE_SOURCE_OSG:
		{
			pOptions  = CTileSourceOSG::getEarthDispatchInnerObject( pITileSourceDispatch, true );

		}
		break;

	case TILE_SOURCE_TILE_CACHE:
		{
			pOptions  = CTileSourceTileCache::getEarthDispatchInnerObject( pITileSourceDispatch, true );

		}
		break;

	case TILE_SOURCE_TILE_SERVICE:
		{
			pOptions  = CTileSourceTileService::getEarthDispatchInnerObject( pITileSourceDispatch, true );

		}
		break;

	case  TILE_SOURCE_TMS:
		{
			pOptions  = CTileSourceTMS::getEarthDispatchInnerObject( pITileSourceDispatch, true );

		}
		break;

	case TILE_SOURCE_VPB:
		{
			pOptions  = CTileSourceVPB::getEarthDispatchInnerObject( pITileSourceDispatch, true );

		}
		break;

	case TILE_SOURCE_WCS:
		{
			pOptions  = CTileSourceWCS::getEarthDispatchInnerObject( pITileSourceDispatch, true );

		}
		break;

	case TILE_SOURCE_WMS:
		{
			pOptions  = CTileSourceWMS::getEarthDispatchInnerObject( pITileSourceDispatch, true );

		}
		break;

	case TILE_SOURCE_XYZ:
		{
			pOptions  = CTileSourceXYZ::getEarthDispatchInnerObject( pITileSourceDispatch, true );

		}
		break;

	case TILE_SOURCE_YAHOO:
		{
			pOptions  = CTileSourceYahoo::getEarthDispatchInnerObject( pITileSourceDispatch, true );

		}
		break;

	default:
		break;
	}

	return pOptions;
}

osgEarth::ModelSourceOptions* SourceStaticUtils::getVectorSourceOptions( IVectorSourceDispatch* pIVectorSourceDispatch )
{
	if ( pIVectorSourceDispatch == NULL )
	{
		return NULL;
	}

	osgEarth::ModelSourceOptions* pOptions = NULL;
	SourceClassType classType;
	pIVectorSourceDispatch->get_classType( &classType );

	switch( classType )
	{
	case VECTOR_SOURCE_GEOM:
		{
			pOptions  = CVectorSourceGeom::getEarthDispatchInnerObject( pIVectorSourceDispatch, true );

		}
		break;

	case VECTOR_SOURCE_STENCIL:
		{
			pOptions  = CVectorSourceStencil::getEarthDispatchInnerObject( pIVectorSourceDispatch, true );

		}
		break;

	case VECTOR_SOURCE_SIMPLE:
		{
			pOptions  = CVectorSourceSimple::getEarthDispatchInnerObject( pIVectorSourceDispatch, true );

		}
		break;

	default:
		break;
	}

	return pOptions;
}

osgEarth::Features::FeatureSourceOptions* SourceStaticUtils::getFeatureSourceOptions( IFeatureSourceDispatch* pIFeatureSourceDispatch )
{
	if ( pIFeatureSourceDispatch == NULL )
	{
		return NULL;
	}

	osgEarth::Features::FeatureSourceOptions* pOptions = NULL;

	SourceClassType classType;
	pIFeatureSourceDispatch->get_classType( &classType );

	switch( classType )
	{
	case FEATURE_SOURCE_OGR:
		{
			pOptions  = CFeatureSourceOGR::getEarthDispatchInnerObject( pIFeatureSourceDispatch, true );

		}
		break;

	case FEATURE_SOURCE_TFS:
		{
			pOptions  = CFeatureSourceTFS::getEarthDispatchInnerObject( pIFeatureSourceDispatch, true );

		}
		break;

	case FEATURE_SOURCE_WFS:
		{
			pOptions  = CFeatureSourceWFS::getEarthDispatchInnerObject( pIFeatureSourceDispatch, true );

		}
		break;

	default:
		break;
	}

	return pOptions;
}