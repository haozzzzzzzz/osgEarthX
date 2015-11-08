// FeatureSourceWFS.cpp : CFeatureSourceWFS µÄÊµÏÖ

#include "stdafx.h"
#include "FeatureSourceWFS.h"


// CFeatureSourceWFS

STDMETHODIMP CFeatureSourceWFS::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IFeatureSourceWFS,
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
