// Model.cpp : CModel µÄÊµÏÖ

#include "stdafx.h"
#include "Model.h"

#include <COM/Basis/GeoData/GeoPoint/GeoPoint.h>

// CModel

STDMETHODIMP CModel::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IModel,
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

STDMETHODIMP CModel::setModelPath( BSTR bstrModelPath )
{
	getOrCreateInnerObject()->setModelPath( CStringA( bstrModelPath ).GetString() );
	return S_OK;
}

STDMETHODIMP CModel::setPosition( IGeoPoint* pIGeoPoint )
{
	osgEarth::GeoPoint* pGeoPoint = CGeoPoint::getEarthDispatchInnerObject( pIGeoPoint );
	getOrCreateInnerObject()->setPosition( * pGeoPoint );
	return S_OK;
}