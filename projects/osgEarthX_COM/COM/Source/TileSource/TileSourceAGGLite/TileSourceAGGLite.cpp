// TileSourceAGGLite.cpp : CTileSourceAGGLite µÄÊµÏÖ

#include "stdafx.h"
#include "TileSourceAGGLite.h"

#include <COM/Utils/StaticUtils/SourceStaticUtils.h>
// CTileSourceAGGLite

CTileSourceAGGLite::CTileSourceAGGLite() : ITileSourceAGGLiteDispatchImpl( TILE_SOURCE_AGGLITE )
{
	osgEarth::Symbology::Style style;
	osgEarth::Symbology::LineSymbol* lineSymbol = style.getOrCreateSymbol<osgEarth::Symbology::LineSymbol>();
	lineSymbol->stroke()->color() = osgEarth::Symbology::Color::Yellow;
	lineSymbol->stroke()->width() = 2.0f;

	getOrCreateInnerObject()->styles() = new osgEarth::Symbology::StyleSheet();
	getOrCreateInnerObject()->styles()->addStyle( style );
}

STDMETHODIMP CTileSourceAGGLite::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_ITileSourceAGGLite,
		&IID_ITileSourceDispatch,
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

//ITileSourceAGGLite
STDMETHODIMP CTileSourceAGGLite::put_featureSource( IFeatureSourceDispatch* pIFeatureSourceDispatch )
{
	osgEarth::Features::FeatureSourceOptions* pOptions = SourceStaticUtils::getFeatureSourceOptions( pIFeatureSourceDispatch );
	if ( pOptions )
	{
		getOrCreateInnerObject()->featureOptions() = *pOptions;
	}
	return S_OK;
}