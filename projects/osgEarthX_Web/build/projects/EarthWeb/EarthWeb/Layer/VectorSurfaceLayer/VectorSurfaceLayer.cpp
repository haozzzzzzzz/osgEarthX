#include <EarthWeb/Layer/VectorSurfaceLayer/VectorSurfaceLayer.h>
#include <EarthWeb/Utils/StaticUtils/SourceStaticUtils.h>

#include <atlstr.h>

bool VectorSurfaceLayer::get_visible()
{
	return getOrCreateInnerObject()->isVisible();
}

void VectorSurfaceLayer::put_visible(bool bVisible)
{
	getOrCreateInnerObject()->setVisible(bVisible);
}

bool VectorSurfaceLayer::get_enabled()
{
	return getOrCreateInnerObject()->isEnabled();
}

IVectorSourceDispatchPtr VectorSurfaceLayer::get_vectorSource()
{
	IVectorSourceDispatchPtr ptrIVectorSourceDispatch;
	return ptrIVectorSourceDispatch;
}

void VectorSurfaceLayer::put_vectorSource( IVectorSourceDispatchPtr ptrIVectorSourceDispatch )
{
	osgEarth::ModelSourceOptions* pOptions = SourceStaticUtils::getVectorSourceOptions( ptrIVectorSourceDispatch.get() );
	if ( pOptions )
	{
		getOrCreateInnerObject()->setModelSource( *pOptions );
	}
}