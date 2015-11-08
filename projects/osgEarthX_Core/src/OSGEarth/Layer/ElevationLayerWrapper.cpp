
#include <OSGEarth/Layer/ElevationLayerWrapper.h>
using namespace osgEarthXCore;

ElevationLayerWrapper::ElevationLayerWrapper( osgEarth::ElevationLayer* pLayer ) : 
	TerrainLayerWrapper( pLayer )
{
	m_pElevationLayer = pLayer;
}

ElevationLayerWrapper::~ElevationLayerWrapper()
{

}