// FeatureSourceOGR.cpp : CFeatureSourceOGR µÄÊµÏÖ

#include "stdafx.h"
#include "FeatureSourceOGR.h"


// CFeatureSourceOGR

STDMETHODIMP CFeatureSourceOGR::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IFeatureSourceOGR,
		&IID_IFeatureSourceDispatch,
		&IID_ISourceDispatch,
		&IID_IEarthDispatch
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CFeatureSourceOGR::get_url( BSTR *pUrl )
{
	SysFreeStringHelper( *pUrl );
	std::string stdStr= getOrCreateInnerObject()->url().get().getString();
	*pUrl = SysAllocString( CString ( stdStr.data() ) );
	return S_OK;
}

STDMETHODIMP CFeatureSourceOGR::put_url( BSTR strUrl )
{
	getOrCreateInnerObject()->url() = CStringA( strUrl ).GetString();
	return S_OK;
}