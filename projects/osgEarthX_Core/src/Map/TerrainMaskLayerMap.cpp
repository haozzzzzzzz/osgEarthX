
#include <Map/TerrainMaskLayerMap.h>
#include <ThreadPool/LockMutex.h>
using namespace osgEarthXCore;

TerrainMaskLayerMap::TerrainMaskLayerMap()
{

}

TerrainMaskLayerMap::~TerrainMaskLayerMap()
{

}

void TerrainMaskLayerMap::addTerrainMaskLayer(osgEarth::MaskLayer* pMaskLayer)
{
	SCOPEDLOCK_WRITE_MUTEX(m_MapMutex);
	m_refMap->addTerrainMaskLayer(pMaskLayer);
}


void TerrainMaskLayerMap::removeTerrainMaskLayer(osgEarth::MaskLayer* pMaskLayer)
{
	SCOPEDLOCK_WRITE_MUTEX(m_MapMutex);
	m_refMap->removeTerrainMaskLayer(pMaskLayer);
}