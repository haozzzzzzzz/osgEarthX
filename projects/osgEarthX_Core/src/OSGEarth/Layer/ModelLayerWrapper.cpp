
#include <OSGEarth/Layer/ModelLayerWrapper.h>
using namespace osgEarthXCore;

ModelLayerWrapper::ModelLayerWrapper( osgEarth::ModelLayer* pModelLayer )
{
	m_pModelLayer = pModelLayer;
}

ModelLayerWrapper::~ModelLayerWrapper()
{

}

bool ModelLayerWrapper::getEnabled()
{
	return m_pModelLayer->getEnabled();
}

bool ModelLayerWrapper::getVisible()const
{
	return m_pModelLayer->getVisible();
}

void ModelLayerWrapper::setVisible( bool value )
{
	m_pModelLayer->setVisible(value);
}