#include <Layer/LayerEventCallback.h>
using namespace osgEarthX;

//OSGEARTHX_CORE
#include <Provider/LayerProvider/LayerChange.h>

#include <cassert>

LayerEventCallback::LayerEventCallback( LayerEventFirer* pEventFirer ):
	ObjectEventCallback( pEventFirer )
{
	assert( pEventFirer != NULL);
	m_pLayerEventFirer = pEventFirer;
}

LayerEventCallback::~LayerEventCallback()
{

}

void LayerEventCallback::doCallback( osgEarthXCore::Change* pChange )
{
	ObjectEventCallback::doCallback( pChange );

	osgEarthXCore::LayerChange* pLayerChange = dynamic_cast< osgEarthXCore::LayerChange* >( pChange );
	if ( pLayerChange == NULL )
	{
		return;
	}

	switch( pLayerChange->getChangeType() )
	{
	case osgEarthXCore::VISIBLE:
		m_pLayerEventFirer->onVisible();
		break;

	case osgEarthXCore::HIDDEN:
		m_pLayerEventFirer->onHidden();
		break;

	default:
		break;
	}
}