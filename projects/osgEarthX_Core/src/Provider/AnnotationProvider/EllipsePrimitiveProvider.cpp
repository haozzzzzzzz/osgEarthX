#include <Provider/AnnotationProvider/EllipsePrimitiveProvider.h>
using namespace osgEarthXCore;

void EllipsePrimitiveProvider::getDefaultStyle( osgEarth::Symbology::Style& style )
{
	style.getOrCreate<osgEarth::Symbology::PolygonSymbol>()->fill()->color() = osgEarth::Symbology::Color(osgEarth::Symbology::Color::Orange, 0.8);
	//style.getOrCreate<osgEarth::Symbology::ExtrusionSymbol>()->height() = 250000.0; // meters MSL
	style.getOrCreate<osgEarth::Symbology::AltitudeSymbol>()->clamping() = osgEarth::Symbology::AltitudeSymbol::CLAMP_TO_TERRAIN;
	style.getOrCreate<osgEarth::Symbology::AltitudeSymbol>()->technique() = osgEarth::Symbology::AltitudeSymbol::TECHNIQUE_DRAPE;
}

EllipsePrimitiveProvider::EllipsePrimitiveProvider()
{
	_numSegments = 0;
	_xform = new osg::MatrixTransform();
	getDefaultStyle( _style );
}

EllipsePrimitiveProvider::~EllipsePrimitiveProvider()
{

}

void EllipsePrimitiveProvider::initMapNode( osgEarth::MapNode* pMapNode )
{
	EllipseNode::initMapNode( pMapNode );
	_rebuild();
}

void EllipsePrimitiveProvider::rebuild()
{
	//no op
}

void EllipsePrimitiveProvider::_rebuild()
{
	EllipseNode::rebuild();
}