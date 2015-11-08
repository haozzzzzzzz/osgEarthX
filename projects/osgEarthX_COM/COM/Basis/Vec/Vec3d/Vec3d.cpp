// Vec3d.cpp : CVec3d µÄÊµÏÖ

#include "stdafx.h"
#include "Vec3d.h"


// CVec3d

STDMETHODIMP CVec3d::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IVec3d,
		&IID_IEarthDispatch
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CVec3d::set( DOUBLE dX, DOUBLE dY, DOUBLE dZ )
{
	getOrCreateInnerObject()->set( dX, dY, dZ );
	return S_OK;
}

STDMETHODIMP CVec3d::put_x( DOUBLE dX )
{
	getOrCreateInnerObject()->x() = dX;
	return S_OK;
}

STDMETHODIMP CVec3d::get_x( DOUBLE* pX )
{
	* pX = getOrCreateInnerObject()->x();
	return S_OK;
}

STDMETHODIMP CVec3d::put_y( DOUBLE dY )
{
	getOrCreateInnerObject()->y() = dY;
	return S_OK;
}

STDMETHODIMP CVec3d::get_y( DOUBLE* pY )
{
	*pY = getOrCreateInnerObject()->y();
	return S_OK;
}

STDMETHODIMP CVec3d::put_z( DOUBLE dZ )
{
	getOrCreateInnerObject()->z() = dZ;
	return S_OK;
}

STDMETHODIMP CVec3d::get_z( DOUBLE* pZ )
{
	* pZ = getOrCreateInnerObject()->z();
	return S_OK;
}