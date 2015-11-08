
#include <OSGEarth/Layer/ModelLayerOptionsWrapper.h>
using namespace osgEarthXCore;

ModelLayerOptionsWrapper::ModelLayerOptionsWrapper( osgEarth::ModelLayerOptions* pModelLayerOptions )
{
	m_pModelLayerOptions = pModelLayerOptions;
}

ModelLayerOptionsWrapper::~ModelLayerOptionsWrapper()
{

}

bool ModelLayerOptionsWrapper::getEnabled()
{
	return *m_pModelLayerOptions->enabled();
}

bool ModelLayerOptionsWrapper::getVisible() const
{
	return *m_pModelLayerOptions->visible();
}

void ModelLayerOptionsWrapper::setVisible( bool value )
{
	m_pModelLayerOptions->visible() = value;
}