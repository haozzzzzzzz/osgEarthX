// Linear.cpp : CLinear µÄÊµÏÖ

#include "stdafx.h"
#include "Linear.h"

//osgEarthX_Core
#include <Basis/Units/UnitsType.h>

// CLinear

STDMETHODIMP CLinear::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_ILinear,
		&IID_IEarthDispatch
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CLinear::set( DOUBLE dValue, UnitsType eUnitsType )
{
	getOrCreateInnerObject()->set( dValue, ( osgEarthXCore::UnitsType )( int ) eUnitsType );
	return S_OK;
}