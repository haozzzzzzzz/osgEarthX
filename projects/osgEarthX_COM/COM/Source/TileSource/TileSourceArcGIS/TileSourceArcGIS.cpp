// TileSourceArcGIS.cpp : CTileSourceArcGIS µÄÊµÏÖ

#include "stdafx.h"
#include "TileSourceArcGIS.h"


// CTileSourceArcGIS

STDMETHODIMP CTileSourceArcGIS::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_ITileSourceArcGIS,
		&IID_ITileSourceDispatch,
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

STDMETHODIMP CTileSourceArcGIS::get_url( BSTR *pUrl )
{
	SysFreeStringHelper( *pUrl );
	std::string stdStr= getOrCreateInnerObject()->url().get().getString();
	*pUrl = SysAllocString( CString ( stdStr.data() ) );
	return S_OK;
}

STDMETHODIMP CTileSourceArcGIS::put_url( BSTR strUrl )
{
	getOrCreateInnerObject()->url() = CStringA( strUrl ).GetString();
	return S_OK;
}