// EarthMap.cpp : CEarthMap µÄÊµÏÖ

#include "stdafx.h"
#include "EarthMap.h"

#include <COM/Utils/StaticUtils/GeoStaticUtils.h>

STDMETHODIMP CEarthMap::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IEarthMap,
		&IID_IEarthDispatch
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

// CEarthMap
CEarthMap::CEarthMap() : 
	IEarthMapDispatchImpl( EARTH_MAP )
{
}

CEarthMap::CEarthMap(const CEarthMap&earthMap) : 
	IEarthMapDispatchImpl( earthMap )
{
}

STDMETHODIMP CEarthMap::get_maxThreadsNum(UINT*pUiNum)
{
	*pUiNum = getOrCreateInnerObject()->getMaxThreadsNum();
	return S_OK;
}

STDMETHODIMP CEarthMap::put_maxThreadsNum(UINT uiNum)
{
	getOrCreateInnerObject()->setMaxThreadsNum(uiNum);
	return S_OK;
}

STDMETHODIMP CEarthMap::getSRS( ISpatialReference** ppISRS )
{
	return GeoStaticUtils::createInstance( GEO_CLASS_SPATIAL_REFERENCE, ( IDispatch** ) ppISRS, ( void * ) getOrCreateInnerObject()->getSRS() );
}