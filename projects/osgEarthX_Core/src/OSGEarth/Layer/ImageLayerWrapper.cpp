
#include <OSGEarth/Layer/ImageLayerWrapper.h>
using namespace osgEarthXCore;

ImageLayerWrapper::ImageLayerWrapper( osgEarth::ImageLayer* pImageLayer ) : 
	TerrainLayerWrapper(pImageLayer)
{
	m_pImageLayer = pImageLayer;
}

ImageLayerWrapper::~ImageLayerWrapper()
{

}