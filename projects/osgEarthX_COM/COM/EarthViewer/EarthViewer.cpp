// E:\OpenSceneGraph\osgEarthX\projects\osgEarthX_COM\COM\EarthViewer\EarthViewer.cpp : CEarthViewer µÄÊµÏÖ

#include "stdafx.h"
#include "EarthViewer.h"

STDMETHODIMP CEarthViewer::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IEarthViewer,
		&IID_IEarthDispatch
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

// CEarthViewer
CEarthViewer::CEarthViewer() :
	IEarthViewerDispatchImpl( EARTH_VIEWER )
{
}

CEarthViewer::CEarthViewer(const CEarthViewer&earthViewer) : 
	IEarthViewerDispatchImpl( earthViewer )
{
}