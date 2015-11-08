#include <osgViewer/Viewer>

#include <osg/ref_ptr>
#include <osgDB/ReadFile>

#include <osgEarth/MapNode>
#include <osgEarth/ImageLayer>
#include <osgEarth/ModelLayer>

#include <osgEarthDrivers/gdal/GDALOptions>
#include <osgEarthDrivers/feature_ogr/OGRFeatureOptions>
#include <osgEarthDrivers/model_feature_geom/FeatureGeomModelOptions>

#include <osgEarthUtil/EarthManipulator>

int main()
{
	osgViewer::Viewer viewer;
	osgEarth::Util::EarthManipulator* pEarthManipulator = new osgEarth::Util::EarthManipulator();
	viewer.setCameraManipulator( pEarthManipulator );
	pEarthManipulator->setHomeViewpoint( osgEarth::Viewpoint( "╨сдо", 113.5, 34.5, 0.0, -3.57, -90.0, 200000 ) );

	//osgEarth::Drivers::GDALOptions baseMapOpt;
	//baseMapOpt.url() = "E:\\OpenSceneGraph\\data\\world.tif";
	//osg::ref_ptr<osgEarth::ImageLayer> refImageLayer = new osgEarth::ImageLayer( "world", baseMapOpt );

	//osgEarth::Symbology::Style style;
	//osgEarth::Symbology::LineSymbol* lineSymbol = style.getOrCreateSymbol<osgEarth::Symbology::LineSymbol>();
	//lineSymbol->stroke()->color() = osgEarth::Symbology::Color::Black;
	//lineSymbol->stroke()->width() = 2.0f;

	//osgEarth::Drivers::OGRFeatureOptions ogrFeatureOptions;
	//ogrFeatureOptions.url() = "E:\\OpenSceneGraph\\data\\henan\\henan.shp";
	////ogrFeatureOptions.url() = "E:\\OpenSceneGraph\\data\\zhengzhou\\zhengzhou.shp";
	////ogrFeatureOptions.url() = "E:\\OpenSceneGraph\\data\\world.shp";

	////1
	//osgEarth::Drivers::FeatureGeomModelOptions featureGeomModelOptions;
	//featureGeomModelOptions.featureOptions() = ogrFeatureOptions;
	//featureGeomModelOptions.styles() = new osgEarth::Symbology::StyleSheet();
	//featureGeomModelOptions.styles()->addStyle( style );
	////featureGeomModelOptions.fading()->duration() = 1.0;
	//featureGeomModelOptions.layout()->tileSizeFactor() = 15;
	//featureGeomModelOptions.layout()->addLevel( osgEarth::Features::FeatureLevel( 0.0, 200000, "" ) );

	//osg::ref_ptr<osgEarth::ModelLayer> refModelLayer = new osgEarth::ModelLayer( "Henan", featureGeomModelOptions );

	//osg::ref_ptr<osgEarth::Map> refMap = new osgEarth::Map();
	//osg::ref_ptr<osgEarth::MapNode> refMapNode = new osgEarth::MapNode( refMap );
	//refMap->addImageLayer( refImageLayer );
	//refMap->addModelLayer( refModelLayer );

	//viewer.setSceneData( refMapNode );

	viewer.setSceneData( osgDB::readNodeFile("E:\\OpenSceneGraph\\data\\zhengzhou\\zhengzhou.earth") );
	viewer.run();

	return 0;
}