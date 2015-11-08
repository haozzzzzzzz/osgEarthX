#include <Provider/AnnotationProvider/LabelProvider.h>
using namespace osgEarthXCore;

#include <ConvertChar/ConvertChar.h>

LabelProvider::LabelProvider()
{
	osgEarth::Symbology::TextSymbol* pTextSymbol = _style.getOrCreateSymbol<osgEarth::Symbology::TextSymbol>();
	pTextSymbol->encoding() = osgEarth::Symbology::TextSymbol::ENCODING_UTF8;
	pTextSymbol->font() = "simsun.ttc";
	pTextSymbol->size() = 20;

	init();
}

LabelProvider::~LabelProvider()
{

}

void LabelProvider::setLocalText( const std::string& str )
{
	setUnicodeText( osgX::ConvertChar::convertLocalStrToUTF8Str( str ) );
}

void LabelProvider::setUnicodeText( const std::string& str )
{
	LabelNode::setText( str );
}

std::string LabelProvider::getText()
{
	return _text;
}