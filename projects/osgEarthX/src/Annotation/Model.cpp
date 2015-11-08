#include <Annotation/Model.h>
using namespace osgEarthX;

Model::Model()
{
	m_ObjectType = MODEL;
}

Model::~Model()
{

}

bool Model::isEnabled()
{
	return true;
}

bool Model::isVisible()
{
	return true;
}

void Model::setVisible( bool bVisible )
{

}