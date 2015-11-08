// Viewpoint.cpp : CViewpoint µÄÊµÏÖ

#include "stdafx.h"
#include "Viewpoint.h"


// CViewpoint

STDMETHODIMP CViewpoint::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IViewpoint,
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


CViewpoint::CViewpoint() :
	IViewpointDispatchImpl( EXTERNAL_VIEWPOINT )
{
}

CViewpoint::CViewpoint( const CViewpoint& viewpoint ) : 
	IViewpointDispatchImpl( viewpoint )
{
}

CViewpoint::~CViewpoint()
{

}

//IViewpoint
STDMETHODIMP CViewpoint::flyTo()
{
	getOrCreateInnerObject()->flyTo();
	return S_OK;
}

STDMETHODIMP CViewpoint::get_x( DOUBLE* pX )
{
	*pX = getOrCreateInnerObject()->x();
	return S_OK;
}

STDMETHODIMP CViewpoint::put_x( DOUBLE _x )
{
	getOrCreateInnerObject()->x() = _x;
	return S_OK;
}

STDMETHODIMP CViewpoint::get_y( DOUBLE* pY )
{
	*pY = getOrCreateInnerObject()->y();
	return S_OK;
}

STDMETHODIMP CViewpoint::put_y( DOUBLE _y)
{
	getOrCreateInnerObject()->y() = _y;
	return S_OK;
}

STDMETHODIMP CViewpoint::get_z( DOUBLE* pZ )
{
	*pZ = getOrCreateInnerObject()->z();
	return S_OK;
}

STDMETHODIMP CViewpoint::put_z( DOUBLE _z )
{
	getOrCreateInnerObject()->z() = _z;
	return S_OK;
}

STDMETHODIMP CViewpoint::get_heading( DOUBLE* pHeading )
{
	*pHeading = getOrCreateInnerObject()->getHeading();
	return S_OK;
}

STDMETHODIMP CViewpoint::put_heading( DOUBLE _heading )
{
	getOrCreateInnerObject()->setHeading( _heading );
	return S_OK;
}

STDMETHODIMP CViewpoint::get_pitch( DOUBLE* pPitch )
{
	*pPitch = getOrCreateInnerObject()->getPitch();
	return S_OK;
}

STDMETHODIMP CViewpoint::put_pitch( DOUBLE _pitch )
{
	getOrCreateInnerObject()->setPitch( _pitch );
	return S_OK;
}

STDMETHODIMP CViewpoint::get_range( DOUBLE* pRange )
{
	*pRange = getOrCreateInnerObject()->getRange();
	return S_OK;
}

STDMETHODIMP CViewpoint::put_range( DOUBLE _range )
{
	getOrCreateInnerObject()->setRange( _range );
	return S_OK;
}