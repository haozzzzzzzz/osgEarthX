// FeatureSourceTFS.cpp : CFeatureSourceTFS µÄÊµÏÖ

#include "stdafx.h"
#include "FeatureSourceTFS.h"


// CFeatureSourceTFS

STDMETHODIMP CFeatureSourceTFS::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IFeatureSourceTFS,
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
