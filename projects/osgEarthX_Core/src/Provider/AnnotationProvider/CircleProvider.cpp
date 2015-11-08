#include <Provider/AnnotationProvider/CircleProvider.h>
using namespace osgEarthXCore;

void CircleProvider::getDefaultStyle( osgEarth::Symbology::Style& style )
{
	style.getOrCreate<osgEarth::Symbology::PolygonSymbol>()->fill()->color() = osgEarth::Symbology::Color(osgEarth::Symbology::Color::Cyan, 0.5);
	style.getOrCreate<osgEarth::Symbology::AltitudeSymbol>()->clamping() = osgEarth::Symbology::AltitudeSymbol::CLAMP_TO_TERRAIN;
	style.getOrCreate<osgEarth::Symbology::AltitudeSymbol>()->technique() = osgEarth::Symbology::AltitudeSymbol::TECHNIQUE_DRAPE;
}

CircleProvider::CircleProvider()
{
	osgEarth::Symbology::Style style;
	getDefaultStyle( style );
	setStyle( style );
}

CircleProvider::~CircleProvider()
{

}

void CircleProvider::initMapNode( osgEarth::MapNode* pMapNode )
{
	CircleNode::initMapNode( pMapNode );
}