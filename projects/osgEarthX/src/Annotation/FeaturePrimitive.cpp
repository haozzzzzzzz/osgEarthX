#include <Annotation/FeaturePrimitive.h>
using namespace osgEarthX;

FeaturePrimitive::FeaturePrimitive()
{
	m_ObjectType = FEATURE_PRIMITIVE;
}

FeaturePrimitive::~FeaturePrimitive()
{

}

bool FeaturePrimitive::isEnabled()
{
	return true;
}

bool FeaturePrimitive::isVisible()
{
	return true;
}

void FeaturePrimitive::setVisible( bool bVisible )
{

}