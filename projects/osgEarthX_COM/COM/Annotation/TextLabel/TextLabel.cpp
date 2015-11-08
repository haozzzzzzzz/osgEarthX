// TextLabel.cpp : CTextLabel µÄÊµÏÖ

#include "stdafx.h"
#include "TextLabel.h"

#include <COM/Basis/GeoData/GeoPoint/GeoPoint.h>
#include <COM/Utils/StaticUtils/GeoStaticUtils.h>

// CTextLabel

STDMETHODIMP CTextLabel::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_ITextLabel,
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

STDMETHODIMP CTextLabel::setPosition( IGeoPoint * pIGeoPoint )
{
	CGeoPoint* pGeoPoint = dynamic_cast< CGeoPoint* >( pIGeoPoint );
	if ( pGeoPoint == NULL )
	{
		return S_FALSE;
	}
	getOrCreateInnerObject()->setPosition( *( pGeoPoint->getOrCreateInnerObject() ) );
	return S_OK;
}

STDMETHODIMP CTextLabel::getPosition( IGeoPoint ** pIGeoPoint )
{
	osgEarth::GeoPoint* pGeoPoint = & getOrCreateInnerObject()->getPosition();
	GeoStaticUtils::createInstance( GEO_CLASS_GEO_POINT, ( IDispatch** )pIGeoPoint,  pGeoPoint );
	return S_OK;
}

STDMETHODIMP CTextLabel::setText( BSTR strText )
{
	std::string str = CStringA( strText ).GetString();
	getOrCreateInnerObject()->setLocalText( str );
	return S_OK;
}

STDMETHODIMP CTextLabel::getText( BSTR * pStrText )
{
	SysFreeStringHelper( *pStrText );
	std::string stdStr= getOrCreateInnerObject()->getText();
	*pStrText = SysAllocString( CString ( stdStr.data() ) );
	return S_OK;
}
