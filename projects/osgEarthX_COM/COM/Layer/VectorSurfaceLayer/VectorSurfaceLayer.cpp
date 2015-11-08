// VectorSurfaceLayer.cpp : CVectorSurfaceLayer µÄÊµÏÖ

#include "stdafx.h"
#include "VectorSurfaceLayer.h"

#include <COM/Utils/StaticUtils/SourceStaticUtils.h>

STDMETHODIMP CVectorSurfaceLayer::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IVectorSurfaceLayer,
		&IID_ILayer,
		&IID_IEarthObject,
		&IID_IEarthDispatch
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

// CVectorSurfaceLayer
CVectorSurfaceLayer::CVectorSurfaceLayer() : 
	IVectorSurfaceLayerDispatchImpl( VECTOR_SURFACE_LAYER )
{
}

CVectorSurfaceLayer::CVectorSurfaceLayer( const CVectorSurfaceLayer& vecSufLayer ) :
	IVectorSurfaceLayerDispatchImpl( vecSufLayer )
{
}

CVectorSurfaceLayer::~CVectorSurfaceLayer()
{

}

//IVectorSurfaceLayer
STDMETHODIMP CVectorSurfaceLayer::put_vectorSource( IVectorSourceDispatch* pIVectorSourceDispatch )
{
	osgEarth::ModelSourceOptions* pOptions = SourceStaticUtils::getVectorSourceOptions( pIVectorSourceDispatch );
	if ( pOptions )
	{
		getOrCreateInnerObject()->setModelSource( * pOptions );
		return S_OK;
	}
	return S_FALSE;
}