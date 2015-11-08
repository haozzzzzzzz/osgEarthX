
#include <Externals/Viewpoint.h>
using namespace osgEarthX;

Viewpoint::Viewpoint()
{
	m_ObjectType = VIEWPOINT;
}

Viewpoint::~Viewpoint()
{

}

bool Viewpoint::isEnabled()
{
	return true;
}

bool Viewpoint::isVisible()
{
	return true;
}

void Viewpoint::setVisible( bool bVisible )
{

}