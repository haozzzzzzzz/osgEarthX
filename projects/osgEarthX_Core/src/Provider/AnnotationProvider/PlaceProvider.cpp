#include <Provider/AnnotationProvider/PlaceProvider.h>
using namespace osgEarthXCore;

#include <ConvertChar/ConvertChar.h>

PlaceProvider::PlaceProvider()
{
	osgEarth::Symbology::TextSymbol* pTextSymbol = _style.getOrCreateSymbol<osgEarth::Symbology::TextSymbol>();
	pTextSymbol->encoding() = osgEarth::Symbology::TextSymbol::ENCODING_UTF8;
	pTextSymbol->font() = "simsun.ttc";
	pTextSymbol->size() = 20;
}

PlaceProvider::~PlaceProvider()
{

}

void PlaceProvider::setLocalText( const std::string& str )
{
	setUnicodeText( osgX::ConvertChar::convertLocalStrToUTF8Str( str ) );
}

void PlaceProvider::setUnicodeText( const std::string& str )
{
	PlaceProvider::setText( str );
}

void PlaceProvider::_setImage( osg::Image* pImage )
{
	osgEarth::Annotation::PlaceNode::setIconImage( pImage );
}