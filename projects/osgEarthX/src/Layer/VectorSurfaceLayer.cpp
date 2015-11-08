
#include <Layer/VectorSurfaceLayer.h>
#include <Layer/LayerEventCallback.h>
using namespace osgEarthX;

VectorSurfaceLayer::VectorSurfaceLayer()
{
	m_ObjectType = VECTOR_SURFACE_LAYER;
}

VectorSurfaceLayer::~VectorSurfaceLayer()
{

}

bool VectorSurfaceLayer::isEnabled()
{
	return ModelLayerProvider::getEnabled();
}

bool VectorSurfaceLayer::isVisible()
{
	return ModelLayerProvider::getVisible();
}

void VectorSurfaceLayer::setVisible(bool bVisible)
{
	ModelLayerProvider::setVisible( bVisible );
}

void VectorSurfaceLayer::setFirer(LayerEventFirer* pFirer)
{
	if (pFirer != NULL && m_pFirer == NULL)
	{
		addCallback(new LayerEventCallback(pFirer));
		m_pFirer = pFirer;
	}
}