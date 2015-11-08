
#include <OSGEarth/Layer/ElevationLayerOptionsWrapper.h>
using namespace osgEarthXCore;

ElevationLayerOptionsWrapper::ElevationLayerOptionsWrapper( osgEarth::ElevationLayerOptions* pOptions ) :
TerrainLayerOptionsWrapper( pOptions )
{
	m_pElevationLayerOptions = pOptions;
}

ElevationLayerOptionsWrapper::~ElevationLayerOptionsWrapper()
{

}
