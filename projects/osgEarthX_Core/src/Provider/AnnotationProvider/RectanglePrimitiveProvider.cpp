#include <Provider/AnnotationProvider/RectanglePrimitiveProvider.h>
using namespace osgEarthXCore;

void RectanglePrimitiveProvider::getDefaultStyle( osgEarth::Symbology::Style& style )
{
	style.getOrCreate<osgEarth::Symbology::PolygonSymbol>()->fill()->color() = osgEarth::Symbology::Color(osgEarth::Symbology::Color::Green, 0.8);
	style.getOrCreate<osgEarth::Symbology::AltitudeSymbol>()->clamping() = osgEarth::Symbology::AltitudeSymbol::CLAMP_TO_TERRAIN;
	style.getOrCreate<osgEarth::Symbology::AltitudeSymbol>()->technique() = osgEarth::Symbology::AltitudeSymbol::TECHNIQUE_DRAPE;
}

RectanglePrimitiveProvider::RectanglePrimitiveProvider()
{
	_xform = new osg::MatrixTransform();
	getDefaultStyle( _style );
}

RectanglePrimitiveProvider::~RectanglePrimitiveProvider()
{

}

void RectanglePrimitiveProvider::initMapNode( osgEarth::MapNode* pMapNode )
{
	RectangleNode::initMapNode( pMapNode );
	RectangleNode::rebuild();
}