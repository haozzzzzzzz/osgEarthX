
#include <Layer/ElevationSurfaceLayer.h>
#include <Layer/LayerEventCallback.h>
using namespace osgEarthX;

ElevationSurfaceLayer::ElevationSurfaceLayer()
{
	m_ObjectType = ELEVATION_SURFACE_LAYER;
}

ElevationSurfaceLayer::~ElevationSurfaceLayer()
{

}

bool ElevationSurfaceLayer::isEnabled()
{
	return ElevationLayerProvider::getEnabled();
}

bool ElevationSurfaceLayer::isVisible()
{
	return ElevationLayerProvider::getVisible();
}

void ElevationSurfaceLayer::setVisible(bool bVisible)
{
	ElevationLayerProvider::setVisible(bVisible);
}

void ElevationSurfaceLayer::setFirer(LayerEventFirer* pFirer)
{
	if ( pFirer != NULL && m_pFirer == NULL )
	{
		addCallback( new LayerEventCallback( pFirer ) );
		m_pFirer = pFirer;
	}
}