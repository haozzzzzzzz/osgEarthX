
#include <OSGEarth/Layer/TerrainLayerOptionsWrapper.h>
using namespace osgEarthXCore;

TerrainLayerOptionsWrapper::TerrainLayerOptionsWrapper(osgEarth::TerrainLayerOptions* pTerrainLayerOptions)
{
	m_pTerrainLayerOptions = pTerrainLayerOptions;
}

TerrainLayerOptionsWrapper::~TerrainLayerOptionsWrapper()
{

}

bool TerrainLayerOptionsWrapper::getEnabled()
{
	return *m_pTerrainLayerOptions->enabled();
}

bool TerrainLayerOptionsWrapper::getVisible() const 
{
	return *m_pTerrainLayerOptions->visible();
}

void TerrainLayerOptionsWrapper::setVisible( bool value )
{
	m_pTerrainLayerOptions->visible() = value;
}

