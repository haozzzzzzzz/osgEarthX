
#include <OSGEarth/Layer/ImageLayerOptionsWrapper.h>
using namespace osgEarthXCore;

ImageLayerOptionsWrapper::ImageLayerOptionsWrapper( osgEarth::ImageLayerOptions* pOptions ) : 
TerrainLayerOptionsWrapper(pOptions)
{
	m_pImageLayerOptions = pOptions;
}

ImageLayerOptionsWrapper::~ImageLayerOptionsWrapper()
{

}