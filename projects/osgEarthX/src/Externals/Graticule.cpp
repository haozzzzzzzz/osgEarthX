#include <Externals/Graticule.h>
using namespace osgEarthX;

Graticule::Graticule()
{
	m_ObjectType = GRATICULE;
}

Graticule::~Graticule()
{

}

bool Graticule::isEnabled()
{
	return true;
}

bool Graticule::isVisible()
{
	return true;
}

void Graticule::setVisible( bool bVisible )
{
}