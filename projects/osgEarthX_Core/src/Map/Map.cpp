
#include <Map/Map.h>
#include <ThreadPool/LockMutex.h>
using namespace osgEarthXCore;

Map::Map()
{
}

Map::~Map()
{
}

void Map::initMapViewer( MapViewer* pMapViewer )
{
	ImageLayerMap::initMapViewer( pMapViewer );
	ModelLayerMap::initMapViewer( pMapViewer );
	ElevationLayerMap::initMapViewer( pMapViewer );
	TerrainMaskLayerMap::initMapViewer( pMapViewer );
	ExternalsMap::initMapViewer( pMapViewer );
}