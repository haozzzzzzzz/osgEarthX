// Sky.cpp : CSky µÄÊµÏÖ

#include "stdafx.h"
#include "Sky.h"


// CSky

STDMETHODIMP CSky::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_ISky,
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


CSky::CSky() : 
	ISkyDispatchImpl( EXTERNAL_SKY )
{
}

CSky::CSky(const CSky& sky) :
	ISkyDispatchImpl( sky )
{
}

CSky::~CSky()
{

}

//ISky
STDMETHODIMP CSky::get_enableLighting( VARIANT_BOOL* pEnableLighting )
{
	*pEnableLighting = getOrCreateInnerObject()->isEnableLighting();
	return S_OK;
}

STDMETHODIMP CSky::put_enableLighting( VARIANT_BOOL ifEnable )
{
	getOrCreateInnerObject()->enableLighting( ifEnable == -1  );
	return S_OK;
}

STDMETHODIMP CSky::get_ambient(FLOAT *pAmbient)
{
	*pAmbient = getOrCreateInnerObject()->getAmbient();
	return S_OK;
}

STDMETHODIMP CSky::put_ambient(FLOAT fAmbient)
{
	getOrCreateInnerObject()->setAmbient( fAmbient );
	return S_OK;
}

STDMETHODIMP CSky::get_hours(FLOAT *pHours)
{
	*pHours = getOrCreateInnerObject()->getHours();
	return S_OK;
}

STDMETHODIMP CSky::put_hours(FLOAT fHours)
{
	getOrCreateInnerObject()->setHours( fHours );
	return S_OK;
}