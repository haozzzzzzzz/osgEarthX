#include <Basis/Geo/Feature.h>
using namespace osgEarthXCore;

void Feature::getDefaultPolygonStyle( osgEarth::Symbology::Style& outStyle )
{
	//outStyle.getOrCreate<osgEarth::Symbology::LineSymbol>()->stroke()->color() = osgEarth::Symbology::Color::Red;
	//outStyle.getOrCreate<osgEarth::Symbology::LineSymbol>()->stroke()->width() = 2;
	outStyle.getOrCreate< osgEarth::Symbology::PolygonSymbol >()->fill()->color() = osgEarth::Symbology::Color(osgEarth::Symbology::Color::Red, 0.8);
	outStyle.getOrCreate< osgEarth::Symbology::AltitudeSymbol >()->clamping() = osgEarth::Symbology::AltitudeSymbol::CLAMP_TO_TERRAIN;
	outStyle.getOrCreate< osgEarth::Symbology::AltitudeSymbol >()->technique() = osgEarth::Symbology::AltitudeSymbol::TECHNIQUE_DRAPE;
}

void Feature::getDefaultLineStringStyle( osgEarth::Symbology::Style& outStyle )
{
	outStyle.getOrCreate< osgEarth::Symbology::LineSymbol >()->stroke()->color() = osgEarth::Symbology::Color::Red;
	outStyle.getOrCreate< osgEarth::Symbology::LineSymbol >()->stroke()->width() = 3;
	outStyle.getOrCreate< osgEarth::Symbology::AltitudeSymbol >()->clamping() = osgEarth::Symbology::AltitudeSymbol::CLAMP_TO_TERRAIN;
	outStyle.getOrCreate< osgEarth::Symbology::AltitudeSymbol >()->technique() = osgEarth::Symbology::AltitudeSymbol::TECHNIQUE_DRAPE;
}

Feature::Feature()
{

}

Feature::~Feature()
{

}

void Feature::init( const osgEarth::SpatialReference* pSRS )
{
	if ( ! _geom.valid() && _style.isSet() )
	{
		return;
	}	
	
	osgEarth::Style style = _style.get();
	switch( _geom->getType() )
	{
	case osgEarth::Symbology::Geometry::TYPE_POINTSET:
		break;
	case osgEarth::Symbology::Geometry::TYPE_LINESTRING:
		getDefaultLineStringStyle( style );
		break;

	case osgEarth::Symbology::Geometry::TYPE_RING:
		getDefaultLineStringStyle( style );
		break;

	case osgEarth::Symbology::Geometry::TYPE_POLYGON:
		getDefaultPolygonStyle( style );
		break;

	case osgEarth::Symbology::Geometry::TYPE_MULTI:
		break;

	default:
		break;
	}

	_style = style;

	if ( _srs.valid() )
	{
		transform( pSRS );
	}
	else
	{
		_srs = pSRS;
	}
}