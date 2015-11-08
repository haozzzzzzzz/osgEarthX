#include <Annotation/TextLabel.h>
using namespace osgEarthX;

TextLabel::TextLabel()
{
	m_ObjectType = TEXT_LABEL;
}

TextLabel::~TextLabel()
{

}

bool TextLabel::isEnabled()
{
	return true;
}

bool TextLabel::isVisible()
{
	return true;
}

void TextLabel::setVisible( bool bVisible )
{

}