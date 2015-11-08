// Angular.cpp : CAngular µÄÊµÏÖ

#include "stdafx.h"
#include "Angular.h"

#include <Basis/Units/UnitsType.h>
// CAngular

STDMETHODIMP CAngular::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IAngular,
		&IID_IEarthDispatch
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CAngular::set( DOUBLE dValue, UnitsType eUnitsType )
{
	getOrCreateInnerObject()->set( dValue, ( osgEarthXCore::UnitsType )( int ) eUnitsType );
	return S_OK;
}