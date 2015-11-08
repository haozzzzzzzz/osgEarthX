
#include <OSGEarth/Layer/TerrainLayerWrapper.h>
using namespace osgEarthXCore;

TerrainLayerWrapper::TerrainLayerWrapper(osgEarth::TerrainLayer* pTerrainLayer)
{
	m_pTerrainLayer = pTerrainLayer;
}

TerrainLayerWrapper::~TerrainLayerWrapper()
{

}

bool TerrainLayerWrapper::getEnabled()
{
	return m_pTerrainLayer->getEnabled();
}

bool TerrainLayerWrapper::getVisible() const
{
	return m_pTerrainLayer->getVisible();
}

void TerrainLayerWrapper::setVisible( bool value )
{
	m_pTerrainLayer->setVisible(value);
}