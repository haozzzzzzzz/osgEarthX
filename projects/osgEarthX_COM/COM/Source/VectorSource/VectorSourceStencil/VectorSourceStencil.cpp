// VectorSourceStencil.cpp : CVectorSourceStencil µÄÊµÏÖ

#include "stdafx.h"
#include "VectorSourceStencil.h"


// CVectorSourceStencil

STDMETHODIMP CVectorSourceStencil::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IVectorSourceStencil,
		&IID_IVectorSourceDispatch,
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
