#include <Annotation/EllipsePrimitive.h>
using namespace osgEarthX;

EllipsePrimitve::EllipsePrimitve()
{
	m_ObjectType = ELLIPSE_PRIMITIVE;
}

EllipsePrimitve::~EllipsePrimitve()
{

}

bool EllipsePrimitve::isEnabled()
{
	return true;
}

bool EllipsePrimitve::isVisible()
{
	return true;
}

void EllipsePrimitve::setVisible( bool bVisible )
{

}