#include <Annotation/Circle.h>
using namespace osgEarthX;

Circle::Circle()
{
	m_ObjectType = CIRCLE;
}

Circle::~Circle()
{

}

bool Circle::isEnabled()
{
	return true;
}

bool Circle::isVisible()
{
	return true;
}

void Circle::setVisible( bool bVisible )
{

}