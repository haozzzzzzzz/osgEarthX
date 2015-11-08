#include <osgViewer/Viewer>
#include <osgEarth/MapNode>
#include <osgEarth/ImageLayer>
#include <osgEarthDrivers/gdal/GDALOptions>
#include <osgEarthDrivers/arcgis/ArcGISOptions>
#include <osgEarth/ElevationLayer>
#include <osgEarthUtil/EarthManipulator>

#include <osgEarthUtil/Sky>
#include <osgEarthUtil/GeodeticGraticule>

#include <osgEarthAnnotation/PlaceNode>
#include <osgEarthAnnotation/ImageOverlay>
#include <osgEarthAnnotation/CircleNode>
#include <osgEarthAnnotation/RectangleNode>

#include <osgEarthSymbology/Style>

int main()
{

	//an image layer
	osgEarth::Drivers::GDALOptions baseMapOpt;
	baseMapOpt.url() = "E:\\OpenSceneGraph\\data\\world.tif";
	osg::ref_ptr<osgEarth::ImageLayer> refImageLayer = new osgEarth::ImageLayer( "world", baseMapOpt );

	//osgEarth::Drivers::ArcGISOptions arcgis;
	//arcgis.url() = "http://services.arcgisonline.com/ArcGIS/rest/services/World_Topo_Map/MapServer";
	////arcgis.url() = "http://services.arcgisonline.com/ArcGIS/rest/services/Reference/World_Transportation/MapServer";
	////arcgis.url() = "http://services.arcgisonline.com/ArcGIS/rest/services/Reference/World_Boundaries_and_Places_Alternate/MapServer";
	//osg::ref_ptr< osgEarth::ImageLayer > refImageLayer = new osgEarth::ImageLayer( "world", arcgis );

	osgViewer::Viewer viewer;
	viewer.setCameraManipulator( new osgEarth::Util::EarthManipulator() );

	osg::ref_ptr<osg::Group> refRoot = new osg::Group();
	osg::ref_ptr<osgEarth::Map> refMap = new osgEarth::Map();
	osg::ref_ptr<osgEarth::MapNode> refMapNode = new osgEarth::MapNode( refMap );
	refMap->addImageLayer( refImageLayer );
	refRoot->addChild( refMapNode );

	////place
	//osg::ref_ptr<osgEarth::Annotation::PlaceNode> refPlace = new osgEarth::Annotation::PlaceNode();
	//refPlace->initMapNode( refMapNode );
	//refPlace->setPosition( osgEarth::GeoPoint( refMapNode->getMapSRS()->getGeographicSRS() , -74.00, 40.71) );
	//std::string str = "New York";
	//refPlace->setText( str );

	//osgEarth::Symbology::Style pin;
	//pin.getOrCreate<osgEarth::Symbology::IconSymbol>()->url()->setLiteral( "../data/placemark32.png" );
	//refPlace->setStyle( pin );

	//refRoot->addChild( refPlace );

	////imageoverlay
	//osgEarth::Annotation::ImageOverlay* pImageOverlay = new osgEarth::Annotation::ImageOverlay();
	//osg::Image* pImage = osgDB::readImageFile( "../data/USFLAG.TGA" );
	//if ( pImage )
	//{
	//	pImageOverlay->setImage( pImage );
	//}
	//pImageOverlay->setBounds( osgEarth::Bounds::Bounds( -100.0, 35.0, -90.0, 40.0) );
	//pImageOverlay->initMapNode( refMapNode );
	//refRoot->addChild( pImageOverlay );

	////CircleNode
	//osgEarth::Symbology::Style circleStyle;
	//circleStyle.getOrCreate<osgEarth::Symbology::PolygonSymbol>()->fill()->color() = osgEarth::Symbology::Color(osgEarth::Symbology::Color::Cyan, 0.5);
	//circleStyle.getOrCreate<osgEarth::Symbology::AltitudeSymbol>()->clamping() = osgEarth::Symbology::AltitudeSymbol::CLAMP_TO_TERRAIN;
	//circleStyle.getOrCreate<osgEarth::Symbology::AltitudeSymbol>()->technique() = osgEarth::Symbology::AltitudeSymbol::TECHNIQUE_DRAPE;

	//osgEarth::Annotation::CircleNode* circle = new osgEarth::Annotation::CircleNode(
	//	refMapNode,
	//	osgEarth::GeoPoint(refMapNode->getMapSRS(), -90.25, 29.98, 1000., osgEarth::AltitudeMode::ALTMODE_RELATIVE),
	//	osgEarth::Distance(300, osgEarth::Units::KILOMETERS),
	//	circleStyle, osgEarth::Angle(-45.0, osgEarth::Units::DEGREES), osgEarth::Angle(45.0, osgEarth::Units::DEGREES), true);

	//osgEarth::Annotation::CircleNode* circle = new osgEarth::Annotation::CircleNode();

	//circle->setPosition( osgEarth::GeoPoint(refMapNode->getMapSRS(), -90.25, 29.98, 1000., osgEarth::AltitudeMode::ALTMODE_RELATIVE) );
	//circle->setRadius( osgEarth::Distance(300, osgEarth::Units::KILOMETERS) );
	//circle->setStyle( circleStyle );
	//circle->setArcStart( osgEarth::Angle(-45.0, osgEarth::Units::DEGREES) );
	//circle->setArcEnd( osgEarth::Angle(45.0, osgEarth::Units::DEGREES) );
	////circle->setPie( true );
	//circle->initMapNode( refMapNode );
	//refRoot->addChild( circle );

	{

		// A rectangle around San Diego
        osgEarth::Symbology::Style rectStyle;
        rectStyle.getOrCreate<osgEarth::Symbology::PolygonSymbol>()->fill()->color() = osgEarth::Symbology::Color(osgEarth::Symbology::Color::Green, 0.5);
        rectStyle.getOrCreate<osgEarth::Symbology::AltitudeSymbol>()->clamping() = osgEarth::Symbology::AltitudeSymbol::CLAMP_TO_TERRAIN;
        rectStyle.getOrCreate<osgEarth::Symbology::AltitudeSymbol>()->technique() = osgEarth::Symbology::AltitudeSymbol::TECHNIQUE_DRAPE;
        osgEarth::Annotation::RectangleNode* rect = new osgEarth::Annotation::RectangleNode(
            refMapNode, 
            osgEarth::GeoPoint(refMapNode->getMapSRS(), -117.172, 32.721),
            osgEarth::Distance(300, osgEarth::Units::KILOMETERS ),
            osgEarth::Distance(600, osgEarth::Units::KILOMETERS ),
            rectStyle);
		refRoot->addChild( rect );
	}

	viewer.setSceneData(refRoot);
	viewer.run();

	return 0;
}
//
//int main()
//{
//	osgViewer::Viewer viewer;
//	viewer.setSceneData( osgDB::readNodeFile( "gdal_tiff.earth" ) );
//	viewer.run();
//	return 0;
//}