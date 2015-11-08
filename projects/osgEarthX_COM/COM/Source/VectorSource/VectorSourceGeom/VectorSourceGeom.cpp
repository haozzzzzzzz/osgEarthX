// VectorSourceGeom.cpp : CVectorSourceGeom µÄÊµÏÖ

#include "stdafx.h"
#include "VectorSourceGeom.h"


#include <COM/Utils/StaticUtils/SourceStaticUtils.h>

// CVectorSourceGeom

CVectorSourceGeom::CVectorSourceGeom() : IVectorSourceGeomDispatchImpl( VECTOR_SOURCE_GEOM )
{
	osgEarth::Symbology::Style style;
	osgEarth::Symbology::LineSymbol* lineSymbol = style.getOrCreateSymbol<osgEarth::Symbology::LineSymbol>();
	lineSymbol->stroke()->color() = osgEarth::Symbology::Color::Yellow;
	lineSymbol->stroke()->width() = 2.0f;

	getOrCreateInnerObject()->styles() = new osgEarth::Symbology::StyleSheet();
	getOrCreateInnerObject()->styles()->addStyle( style );
}

STDMETHODIMP CVectorSourceGeom::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IVectorSourceGeom,
		&IID_IVectorSourceDispatch,
		&IID_ISourceDispatch,
		&IID_IEarthDispatch
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

//IVectorSourceGeom
STDMETHODIMP CVectorSourceGeom::put_featureSource( IFeatureSourceDispatch* pIFeatureSourceDispatch )
{
	osgEarth::Features::FeatureSourceOptions* pOptions = SourceStaticUtils::getFeatureSourceOptions( pIFeatureSourceDispatch );
	if ( pOptions )
	{
		getOrCreateInnerObject()->featureOptions() = *pOptions;
	}
	return S_OK;
}