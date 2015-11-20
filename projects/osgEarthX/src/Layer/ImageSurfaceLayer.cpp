
#include <Layer/ImageSurfaceLayer.h>
#include <Layer/LayerEventCallback.h>
using namespace osgEarthX;

ImageSurfaceLayer::ImageSurfaceLayer()
{
	m_ObjectType = IMAGE_SURFACE_LAYER;
}

ImageSurfaceLayer::~ImageSurfaceLayer()
{

}

bool ImageSurfaceLayer::isEnabled()
{
	return ImageLayerProvider::getEnabled();
}

bool ImageSurfaceLayer::isVisible()
{
	return ImageLayerProvider::getVisible();
}

void ImageSurfaceLayer::setVisible( bool bVisible )
{
	ImageLayerProvider::setVisible( bVisible );
}

void ImageSurfaceLayer::setFirer( LayerEventFirer* pFirer )
{
	if ( pFirer != NULL && m_pFirer == NULL )
	{
		addCallback( new LayerEventCallback( pFirer ) );
		EventHost::setFirer( pFirer );
	}
}