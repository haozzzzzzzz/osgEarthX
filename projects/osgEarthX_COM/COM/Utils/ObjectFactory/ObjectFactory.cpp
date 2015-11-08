// ObjectFactory.cpp : CObjectFactory µÄÊµÏÖ

#include "stdafx.h"
#include "ObjectFactory.h"

// CObjectFactory
#include <COM/Utils/StaticUtils/EarthStaticUtils.h>
#include <COM/Utils/StaticUtils/EarthObjectStaticUtils.h>
#include <COM/Utils/StaticUtils/SourceStaticUtils.h>
#include <COM/Utils/StaticUtils/GeoStaticUtils.h>
#include <COM/Utils/StaticUtils/UnitsStaticUtils.h>

STDMETHODIMP CObjectFactory::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IObjectFactory
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CObjectFactory::createByEarthObjectClassType( EarthObjectClassType classType, IDispatch**ppIDispatch)
{
	EarthObjectStaticUtils::createInstance( classType, ppIDispatch );
	return S_OK;
}

STDMETHODIMP CObjectFactory::createByEarthClassType( EarthClassType classType, IDispatch**ppIDispatch)
{
	EarthStaticUtils::createInstance( classType, ppIDispatch );
	return S_OK;
}

STDMETHODIMP CObjectFactory::createBySourceClassType( SourceClassType classType, IDispatch** ppIDispatch )
{
	SourceStaticUtils::createInstance( classType, ppIDispatch );
	return S_OK;
}

STDMETHODIMP CObjectFactory::createByGeoClassType( GeoClassType classType, IDispatch **ppIDisaptch )
{
	GeoStaticUtils::createInstance( classType, ppIDisaptch );
	return S_OK;
}

STDMETHODIMP CObjectFactory::createByUnitClassType( UnitClassType classType, IDispatch** ppIDispatch )
{
	UnitsStaticUtils::createInstance( classType, ppIDispatch );
	return S_OK;
}