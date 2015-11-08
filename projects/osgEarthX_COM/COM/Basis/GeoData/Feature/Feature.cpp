// Feature.cpp : CFeature µÄÊµÏÖ

#include "stdafx.h"
#include "Feature.h"

#include <COM/Utils/StaticUtils/GeometryStaticUtils.h>

// CFeature

STDMETHODIMP CFeature::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IFeature,
		&IID_IEarthDispatch
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CFeature::setGeometry( IGeometry* pIGeometry )
{
	getOrCreateInnerObject()->setGeometry( GeometryStaticUtils::getInnerObject( pIGeometry, true ) );
	return S_OK;
}