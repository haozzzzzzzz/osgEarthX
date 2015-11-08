#include <Map/Map.h>
#include <Viewer/MapViewer.h>

#include <Callback/Callback.h>
#include <Provider/ProviderChange.h>
#include <Viewer/CommonViewerT.h>

//osgEarth
#include <osgEarthDrivers/gdal/GDALOptions>
#include <osgEarthDrivers/arcgis/ArcGISOptions>

#include <osgEarthDrivers/feature_ogr/OGRFeatureOptions>
#include <osgEarthDrivers/model_feature_geom/FeatureGeomModelOptions>
#include <osgEarthDrivers/agglite/AGGLiteOptions>

#include <iostream>

//test callback
class LayerCallback:
	public osgEarthXCore::Callback
{

public:

	virtual void doCallback( osgEarthXCore::Change* pChange )
	{
		osgEarthXCore::ProviderChange* pProviderChange = dynamic_cast< osgEarthXCore::ProviderChange* >( pChange );
		if ( pProviderChange == NULL )
		{
			return;
		}

		switch( pProviderChange->getChangeType() )
		{
		case osgEarthXCore::INITIALIZE_COMPLETED:
			{
				std::cout<<"initialize comleted."<<std::endl;
			}
			break;

		default:
			break;
		}


	}
protected:
private:
};

int main()
{
	{
		osg::ref_ptr<osgEarthXCore::MapViewer> refViewer = new osgEarthXCore::MapViewer( new osgEarthXCore::CommonViewerT< osgViewer::Viewer >( true ) );
		osg::ref_ptr<osgEarthXCore::Map> refMap = new osgEarthXCore::Map();
		refMap->setMaxThreadsNum( 10 );

		osg::ref_ptr<osgEarthXCore::SkyProvider> refSky = new osgEarthXCore::SkyProvider;
		refSky->enableLighting( false );
		refMap->setSkyProvider( refSky );

		osgEarth::Util::EarthManipulator* pEarthManipulator = refViewer->getOrCreateEarthManipulator();
		osg::ref_ptr<osgEarthXCore::ViewpointProvider> refVPChina = new osgEarthXCore::ViewpointProvider( "中国", 107.85, 32.35, 0.0, -3.57, -90.0, 19134411, NULL, pEarthManipulator );
		osg::ref_ptr<osgEarthXCore::ViewpointProvider> refVPHenan = new osgEarthXCore::ViewpointProvider( "河南", 113.5, 34.5, 0.0, -3.57, -90.0, 200000, NULL, pEarthManipulator );
		osg::ref_ptr<osgEarthXCore::ViewpointProvider> refVPBoston = new osgEarthXCore::ViewpointProvider( "Boston", -71.076262, 42.34425, 0.0, 24.261, -21.6, 3450, NULL, pEarthManipulator );
		//osg::ref_ptr<osgEarthXCore::ViewpointProvider> refVPUSA = new osgEarthXCore::ViewpointProvider("USA", osg::Vec3d(-90,0,0), -3.57, -89, 19134411);

		refViewer->getOrCreateEarthManipulator()->setHomeViewpoint( * refVPChina );

		osgEarth::Drivers::GDALOptions gdalOptions;
		gdalOptions.url() = "E:\\OpenSceneGraph\\data\\download\\world.topo.bathy\\world.topo.bathy.200406.3x86400x43200_translate_tiled.tif";
		//gdalOptions.url() = "E:\\OpenSceneGraph\\data\\world.tif";

		osgEarth::Drivers::ArcGISOptions arcGISOptions;
		arcGISOptions.url() = "http://services.arcgisonline.com/ArcGIS/rest/services/World_Topo_Map/MapServer";

		//image layer
		osg::ref_ptr<osgEarthXCore::ImageLayerProvider> refImageLayerProvider1 = new osgEarthXCore::ImageLayerProvider;
		refImageLayerProvider1->setTileSource( gdalOptions );
		//refImageLayerProvider1->setTileSource( arcGISOptions );
		//refImageLayerProvider1->addCallback( new LayerCallback );
		//refMap->addImageLayerProvider( refImageLayerProvider1 );

		osgEarth::Symbology::Style style;
		osgEarth::Symbology::LineSymbol* lineSymbol = style.getOrCreateSymbol<osgEarth::Symbology::LineSymbol>();
		lineSymbol->stroke()->color() = osgEarth::Symbology::Color::Black;
		lineSymbol->stroke()->width() = 2.0f;

		osgEarth::Drivers::OGRFeatureOptions ogrFeatureOptions;
		ogrFeatureOptions.url() = "E:\\OpenSceneGraph\\data\\henan\\henan.shp";
		//ogrFeatureOptions.url() = "E:\\OpenSceneGraph\\data\\zhengzhou\\zhengzhou.shp";
		//ogrFeatureOptions.url() = "E:\\OpenSceneGraph\\data\\world.shp";

		//1
		osgEarth::Drivers::FeatureGeomModelOptions featureGeomModelOptions;
		featureGeomModelOptions.featureOptions() = ogrFeatureOptions;
		featureGeomModelOptions.styles() = new osgEarth::Symbology::StyleSheet();
		featureGeomModelOptions.styles()->addStyle( style );
		//featureGeomModelOptions.fading()->duration() = 1.0;
		featureGeomModelOptions.layout()->tileSizeFactor() = 15;
		featureGeomModelOptions.layout()->addLevel( osgEarth::Features::FeatureLevel( 0.0f, 200000.0f ) );

		////2
		//osgEarth::Drivers::AGGLiteOptions aggliteOptions;
		//aggliteOptions.featureOptions() = ogrFeatureOptions;
		//aggliteOptions.styles() = new osgEarth::Symbology::StyleSheet();
		//aggliteOptions.styles()->addStyle( style );

		osg::ref_ptr< osgEarthXCore::ModelLayerProvider > refModelLayerProvider = new osgEarthXCore::ModelLayerProvider();
		refModelLayerProvider->setModelSource( featureGeomModelOptions );

		//////img layer
		//osg::ref_ptr<osgEarthXCore::ImageLayerProvider> refImageLayerProvider2 = new osgEarthXCore::ImageLayerProvider;
		//refImageLayerProvider2->strUrl = "E:\\OpenSceneGraph\\AtEarth\\environment\\data\\download\\dnb_land_ocean_ice.2012.54000x27000_geo_transform.tif";

		////img layer
		//osg::ref_ptr<osgEarthXCore::ImageLayerProvider> refImageLayerProvider3 = new osgEarthXCore::ImageLayerProvider;
		//refImageLayerProvider3->strUrl = "E:\\OpenSceneGraph\\AtEarth\\environment\\data\\download\\glc2000_v1_1_Tiff\\glc2000_v1_1.tif";
		////预加载，不加入线程池
		//refImageLayerProvider3->getOrCreateLayerTask()->doTask();

		////TMS Image
		//osg::ref_ptr<osgEarthXCore::ImageLayerProvider> refImgProvTMS1 = new osgEarthXCore::ImageLayerProvider;
		//refImgProvTMS1->tileDriverType = osgEarthXCore::ImageLayerProvider::ImageLayer_TileDriver_TMS;
		//refImgProvTMS1->strUrl = "http://readymap.org/readymap/tiles/1.0.0/7/";

		////Elevation
		//osg::ref_ptr<osgEarthXCore::ElevationLayerProvider> refElevProv1 = new osgEarthXCore::ElevationLayerProvider;
		//refElevProv1->strUrl = "E:\\OpenSceneGraph\\AtEarth\\environment\\data\\download\\DEM\\e060n40\\E060N40.DEM";

		////TMS Elevation
		//osg::ref_ptr<osgEarthXCore::ElevationLayerProvider> refElevProvTMS1 = new osgEarthXCore::ElevationLayerProvider;
		//refElevProvTMS1->tileDriverTile = osgEarthXCore::ElevationLayerProvider::ElevationLayer_TileDriver_TMS;
		//refElevProvTMS1->strUrl = "http://readymap.org/readymap/tiles/1.0.0/9/";

		refMap->addImageLayerProvider( refImageLayerProvider1 );
		refMap->addModelLayerProvider( refModelLayerProvider );

		refViewer->setMap( refMap );
		refViewer->run();

		//while(true)
		//{
		//	std::cin.get();
		//	static bool flyToCN = true;
		//	if (flyToCN)
		//	{
		//		refVPChina->flyTo();
		//	}
		//	else
		//	{
		//		refVPUSA->flyTo();
		//	}

		//	flyToCN = !flyToCN;
		//}

		std::cout << "Hello, world." << std::endl;

		std::cin.get();
		refVPHenan->flyTo();

		//refSky->enableLighting( false );
		//refMap->removeSkyProvider();

		//osg::ref_ptr< osgEarthXCore::GraticuleProvider > m_refGraticuleProvider = new osgEarthXCore::GraticuleProvider();
		//refMap->setGraticuleProvider( m_refGraticuleProvider );

		//std::cin.get();
		//refMap->removeGraticuleProvider();

		std::cin.get();

		//refViewer->setMap( NULL );
		//osg::ref_ptr< osgEarthXCore::Map > refMap2 = new osgEarthXCore::Map();
		//refViewer->setMap( refMap2 );
		//std::cin.get();
	}
	std::cin.get();
	return 0;
}