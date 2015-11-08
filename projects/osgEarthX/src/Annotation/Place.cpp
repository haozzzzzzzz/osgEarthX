#include <Annotation/Place.h>
using namespace osgEarthX;

Place::Place()
{
	m_ObjectType = PLACE;
}

Place::~Place()
{

}

bool Place::isEnabled()
{
	return true;
}

bool Place::isVisible()
{
	return true;
}

void Place::setVisible( bool bVisible )
{

}