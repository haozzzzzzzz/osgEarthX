#include <Map/Map.h>
#include <Viewer/MapViewer.h>

#include <iostream>
using namespace std;

#include <Provider/AnnotationProvider/PlaceProvider.h>
#include <Provider/AnnotationProvider/ImageOverlayProvider.h>
#include <Provider/AnnotationProvider/CircleProvider.h>
#include <Provider/AnnotationProvider/FeaturePrimitiveProvider.h>
#include <Provider/AnnotationProvider/ModelProvider.h>
#include <Provider/AnnotationProvider/LabelProvider.h>
#include <Provider/AnnotationProvider/RectanglePrimitiveProvider.h>
#include <Provider/AnnotationProvider/EllipsePrimitiveProvider.h>

#include <Basis/Geo/Feature.h>

#include <osgDB/ReadFile>
#include <osgEarthDrivers/gdal/GDALOptions>

int main()
{
	osg::ref_ptr<osgEarthXCore::MapViewer> refMapViewer = new osgEarthXCore::MapViewer();
	osg::ref_ptr<osgEarthXCore::Map> refMap = new osgEarthXCore::Map();

	osgEarth::Drivers::GDALOptions gdal;
	gdal.url() = "E:\\OpenSceneGraph\\data\\download\\world.topo.bathy\\world.topo.bathy.200406.3x86400x43200_translate_tiled.tif";
	osg::ref_ptr< osgEarthXCore::ImageLayerProvider > refImageLayer = new osgEarthXCore::ImageLayerProvider();
	refImageLayer->setTileSource( gdal );
	refMap->addImageLayerProvider( refImageLayer );

	//place
	std::string str = "纽约";
	osg::ref_ptr< osgEarthXCore::PlaceProvider > refPlace = new osgEarthXCore::PlaceProvider();
	refPlace->setLocalText( str );
	osgEarth::GeoPoint pointPlace;
	pointPlace.x() = -74.00;
	pointPlace.y() = 40.71;
	refPlace->setPosition( pointPlace );
	refPlace->setImageSrc( "../data/placemark32.png" );
	refMap->addAnnotation( refPlace );

	//imageoverlay
	osg::ref_ptr<osgEarthXCore::ImageOverlayProvider> refImageOverlay = new osgEarthXCore::ImageOverlayProvider();
	refImageOverlay->setImageSrc( "../data/USFLAG.TGA" );
	refImageOverlay->setBounds( osgEarth::Bounds::Bounds( -100.0, 35.0, -90.0, 40.0) );
	refMap->addAnnotation( refImageOverlay );

	//Circle
	osgEarthXCore::CircleProvider* pCircleProvider = new osgEarthXCore::CircleProvider();
	pCircleProvider->setPosition( osgEarth::GeoPoint(refMap->getMapNode()->getMapSRS(), -90.25, 29.98, 1000., osgEarth::AltitudeMode::ALTMODE_RELATIVE) );
	pCircleProvider->setRadius( osgEarth::Distance(300, osgEarth::Units::KILOMETERS) );
	pCircleProvider->setArcStart( osgEarth::Angle(-45.0, osgEarth::Units::DEGREES) );
	pCircleProvider->setArcEnd( osgEarth::Angle(45.0, osgEarth::Units::DEGREES) );
	pCircleProvider->setPie( true );
	refMap->addAnnotation( pCircleProvider );

	//FeatureProvider
	osgEarthXCore::FeaturePrimitiveProvider* pFeatureProvider = new osgEarthXCore::FeaturePrimitiveProvider();
	osgEarthXCore::Feature* pFeature = new osgEarthXCore::Feature();
	osgEarth::Symbology::Geometry* pGeometry = new osgEarth::Symbology::LineString();
	pGeometry->push_back( -74, 40.714, 0 );
	pGeometry->push_back( 139.75, 35.68, 0 );
	pFeature->setGeometry( pGeometry );
	pFeatureProvider->setFeature( pFeature );
	refMap->addAnnotation( pFeatureProvider );

	//ModelProvider
	osgEarthXCore::ModelProvider* pModelProvider = new osgEarthXCore::ModelProvider();
	pModelProvider->setModelPath( "E:\\OpenSceneGraph\\data\\streetlight.osgb.18000.scale" );
	pModelProvider->setPosition( osgEarth::GeoPoint(refMap->getMapNode()->getMapSRS(), -90.25, 29.98, 1000., osgEarth::AltitudeMode::ALTMODE_RELATIVE) );
	refMap->addAnnotation( pModelProvider );

	//LabelProvider
	osgEarthXCore::LabelProvider* pLabelProvider = new osgEarthXCore::LabelProvider();
	pLabelProvider->setPosition( osgEarth::GeoPoint(refMap->getMapNode()->getMapSRS(), -74.00, 40.71 ) );
	pLabelProvider->setLocalText( "测试一下LabelProvider" );
	refMap->addAnnotation( pLabelProvider );

	//RectanglePrimitiveProvider
	osgEarthXCore::RectanglePrimitiveProvider* pRectangle = new osgEarthXCore::RectanglePrimitiveProvider();
	pRectangle->setPosition( osgEarth::GeoPoint( refMap->getSRS() , -117.172, 32.721) );
	pRectangle->setWidth( osgEarth::Distance(300, osgEarth::Units::KILOMETERS ) );
	pRectangle->setHeight( osgEarth::Distance(600, osgEarth::Units::KILOMETERS ) );
	refMap->addAnnotation( pRectangle );

	//EllipsePrimitiveProvider
	osgEarthXCore::EllipsePrimitiveProvider* pEllipse = new osgEarthXCore::EllipsePrimitiveProvider();
	pEllipse->setPosition( osgEarth::GeoPoint( refMap->getSRS(), -80.28, 25.82, 0.0, osgEarth::AltitudeMode::ALTMODE_RELATIVE) );
	pEllipse->setRadiusMajor( osgEarth::Distance(250, osgEarth::Units::MILES) );
	pEllipse->setRadiusMinor( osgEarth::Distance(100, osgEarth::Units::MILES) );
	pEllipse->setRotationAngle( osgEarth::Angle   (0, osgEarth::Units::DEGREES) );
	pEllipse->setArcStart( osgEarth::Angle(45.0, osgEarth::Units::DEGREES) );
	pEllipse->setArcEnd( osgEarth::Angle(360.0 - 45.0, osgEarth::Units::DEGREES) );
	pEllipse->setPie( true );
	refMap->addAnnotation( pEllipse );

	refMapViewer->setMap( refMap );
	refMapViewer->run();

	return 0;
}