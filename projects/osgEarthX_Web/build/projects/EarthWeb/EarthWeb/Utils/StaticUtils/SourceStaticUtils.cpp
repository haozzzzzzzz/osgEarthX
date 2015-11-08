#include <EarthWeb/Utils/StaticUtils/SourceStaticUtils.h>

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

osgEarth::TileSourceOptions* SourceStaticUtils::getTileSourceOptions( ITileSourceDispatch* pITileSourceDispatch )
{
	if ( pITileSourceDispatch == NULL )
	{
		return NULL;
	}

	osgEarth::TileSourceOptions* pOptions = NULL;

	SourceClassType classType = pITileSourceDispatch->get_classType();

	switch( classType )
	{
	case  TILE_SOURCE_AGGLITE:
		{
			TileSourceAGGLite* pAGGLite = static_cast< TileSourceAGGLite* >( pITileSourceDispatch );
			pOptions = pAGGLite->getOrCreateInnerObject();
		}
		break;

	case TILE_SOURCE_ARCGIS:
		{
			TileSourceArcGIS* pArcGIS = static_cast< TileSourceArcGIS* >( pITileSourceDispatch );
			pOptions = pArcGIS->getOrCreateInnerObject();
		}
		break;

	case TILE_SOURCE_BING:
		{
			TileSourceBing* pBing = static_cast< TileSourceBing* >( pITileSourceDispatch );
			pOptions = pBing->getOrCreateInnerObject();
		}
		break;

	case TILE_SOURCE_COLOR_RAMP:
		{
			TileSourceColorRamp* pColorRamp = static_cast< TileSourceColorRamp* >( pITileSourceDispatch );
			pOptions = pColorRamp->getOrCreateInnerObject();
		}
		break;

	case TILE_SOURCE_DEBUG:
		{
			TileSourceDebug* pDebug = static_cast< TileSourceDebug* >( pITileSourceDispatch );
			pOptions = pDebug->getOrCreateInnerObject();
		}
		break;

	case TILE_SOURCE_GDAL:
		{
			TileSourceGDAL* pGDAL = static_cast< TileSourceGDAL* >( pITileSourceDispatch );
			pOptions = pGDAL->getOrCreateInnerObject();
		}
		break;

	case TILE_SOURCE_MBTILES:
		{
			TileSourceMBTiles* pMBTiles = static_cast< TileSourceMBTiles* >( pITileSourceDispatch );
			pOptions = pMBTiles->getOrCreateInnerObject();
		}
		break;

	case TILE_SOURCE_NOISE:
		{
			TileSourceNoise* pNoise = static_cast< TileSourceNoise* >( pITileSourceDispatch );
			pOptions = pNoise->getOrCreateInnerObject();
		}
		break;

	case TILE_SOURCE_OSG:
		{
			TileSourceOSG* pOSG = static_cast< TileSourceOSG* >( pITileSourceDispatch );
			pOptions = pOSG->getOrCreateInnerObject();
		}
		break;

	case TILE_SOURCE_TILE_CACHE:
		{
			TileSourceTileCache* pTileCache = static_cast< TileSourceTileCache* >( pITileSourceDispatch );
			pOptions = pTileCache->getOrCreateInnerObject();
		}
		break;

	case TILE_SOURCE_TILE_SERVICE:
		{
			TileSourceTileService* pTileService = static_cast< TileSourceTileService* >( pITileSourceDispatch );
			pOptions = pTileService->getOrCreateInnerObject();
		}
		break;

	case  TILE_SOURCE_TMS:
		{
			TileSourceTMS* pTMS = static_cast< TileSourceTMS* >( pITileSourceDispatch );
			pOptions = pTMS->getOrCreateInnerObject();
		}
		break;

	case TILE_SOURCE_VPB:
		{
			TileSourceVPB* pVPB = static_cast< TileSourceVPB* >( pITileSourceDispatch );
			pOptions = pVPB->getOrCreateInnerObject();
		}
		break;

	case TILE_SOURCE_WCS:
		{
			TileSourceWCS* pWCS = static_cast< TileSourceWCS* >( pITileSourceDispatch );
			pOptions = pWCS->getOrCreateInnerObject();
		}
		break;

	case TILE_SOURCE_WMS:
		{
			TileSourceWMS* pWMS = static_cast< TileSourceWMS* >( pITileSourceDispatch );
			pOptions = pWMS->getOrCreateInnerObject();
		}
		break;

	case TILE_SOURCE_XYZ:
		{
			TileSourceXYZ* pXYZ = static_cast< TileSourceXYZ* >( pITileSourceDispatch );
			pOptions = pXYZ->getOrCreateInnerObject();
		}
		break;

	case TILE_SOURCE_YAHOO:
		{
			TileSourceYahoo* pYahoo = static_cast< TileSourceYahoo* >( pITileSourceDispatch );
			pOptions = pYahoo->getOrCreateInnerObject();
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
	SourceClassType classType = pIVectorSourceDispatch->get_classType();

	switch( classType )
	{
	case VECTOR_SOURCE_GEOM:
		{
			VectorSourceGeom* pGeom = static_cast< VectorSourceGeom* >( pIVectorSourceDispatch );
			pOptions = pGeom->getOrCreateInnerObject();
		}
		break;

	case VECTOR_SOURCE_STENCIL:
		{
			VectorSourceStencil* pStencil = static_cast< VectorSourceStencil* >( pIVectorSourceDispatch );
			pOptions = pStencil->getOrCreateInnerObject();
		}
		break;

	case VECTOR_SOURCE_SIMPLE:
		{
			VectorSourceSimple* pSimple = static_cast< VectorSourceSimple* >( pIVectorSourceDispatch );
			pOptions = pSimple->getOrCreateInnerObject();
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

	SourceClassType classType = pIFeatureSourceDispatch->get_classType();

	switch( classType )
	{
	case FEATURE_SOURCE_OGR:
		{
			FeatureSourceOGR* pOGR = static_cast< FeatureSourceOGR* >( pIFeatureSourceDispatch );
			pOptions = pOGR->getOrCreateInnerObject();
		}
		break;

	case FEATURE_SOURCE_TFS:
		{
			FeatureSourceTFS* pTFS = static_cast< FeatureSourceTFS* >( pIFeatureSourceDispatch );
			pOptions = pTFS->getOrCreateInnerObject();
		}
		break;

	case FEATURE_SOURCE_WFS:
		{
			FeatureSourceWFS* PWFS = static_cast< FeatureSourceWFS* >( pIFeatureSourceDispatch );
			pOptions = PWFS->getOrCreateInnerObject();
		}
		break;

	default:
		break;
	}

	return pOptions;
}
