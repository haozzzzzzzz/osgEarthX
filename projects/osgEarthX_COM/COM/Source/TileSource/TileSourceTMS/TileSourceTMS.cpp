// TileSourceTMS.cpp : CTileSourceTMS µÄÊµÏÖ

#include "stdafx.h"
#include "TileSourceTMS.h"


// CTileSourceTMS

STDMETHODIMP CTileSourceTMS::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_ITileSourceTMS,
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

STDMETHODIMP CTileSourceTMS::get_url( BSTR *pUrl )
{
	SysFreeStringHelper( *pUrl );
	std::string stdStr= getOrCreateInnerObject()->url().get().getString();
	*pUrl = SysAllocString( CString ( stdStr.data() ) );
	return S_OK;
}

STDMETHODIMP CTileSourceTMS::put_url( BSTR strUrl )
{
	getOrCreateInnerObject()->url() = CStringA( strUrl ).GetString();
	return S_OK;
}