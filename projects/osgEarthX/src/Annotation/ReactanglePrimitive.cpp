#include <Annotation/RectanglePrimitive.h>
using namespace osgEarthX;

RectanglePrimitive::RectanglePrimitive()
{
	m_ObjectType = RECTANGLE_PRIMITIVE;
}

RectanglePrimitive::~RectanglePrimitive()
{

}

bool RectanglePrimitive::isEnabled()
{
	return true;
}

bool RectanglePrimitive::isVisible()
{
	return true;
}

void RectanglePrimitive::setVisible( bool bVisible )
{

}