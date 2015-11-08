#include <Externals/Sky.h>
using namespace osgEarthX;

Sky::Sky()
{
	m_ObjectType = SKY;
}

Sky::~Sky()
{

}

bool Sky::isEnabled()
{
	return true;
}

bool Sky::isVisible()
{
	return true;
}

void Sky::setVisible(bool bVisible)
{

}