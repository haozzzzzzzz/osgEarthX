// FeaturePrimitive.cpp : CFeaturePrimitive µÄÊµÏÖ

#include "stdafx.h"
#include "FeaturePrimitive.h"

#include <COM/Basis/GeoData/Feature/Feature.h>

// CFeaturePrimitive

STDMETHODIMP CFeaturePrimitive::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IFeaturePrimitive,
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

STDMETHODIMP CFeaturePrimitive::setFeature( IFeature* pIFeature )
{
	getOrCreateInnerObject()->setFeature( CFeature::getEarthDispatchInnerObject( pIFeature ) );
	return S_OK;
}