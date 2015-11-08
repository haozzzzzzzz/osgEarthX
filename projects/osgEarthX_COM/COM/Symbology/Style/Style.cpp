// Style.cpp : CStyle µÄÊµÏÖ

#include "stdafx.h"
#include "Style.h"


// CStyle

STDMETHODIMP CStyle::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IStyle
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}
