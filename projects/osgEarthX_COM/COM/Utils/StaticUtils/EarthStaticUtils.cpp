#include "stdafx.h"
#include <COM/Utils/StaticUtils/EarthStaticUtils.h>
#include <COM/EarthMap/EarthMap.h>
#include <COM/EarthViewer/EarthViewer.h>

//void* innerParams 应该转换成之前的指针类型
HRESULT EarthStaticUtils::createInstance( EarthClassType classType, IDispatch** ppIDispatch, void* innerParams /* = NULL */)
{
	HRESULT hr = S_FALSE;

	switch ( classType )
	{
	case OBJECT_FACTORY:
		hr = CoCreateInstance( CLSID_ObjectFactory, NULL, CLSCTX_INPROC_SERVER, IID_IObjectFactory, ( void** ) ppIDispatch );
		break;

	case EARTH_MAP:
		{
			hr = CEarthMap::createEarthDispatchInstance( ppIDispatch, static_cast< osgEarthX::EarthMap* >( innerParams ) );

		}
		break;

	case EARTH_VIEWER:
		{
			hr = CEarthViewer::createEarthDispatchInstance( ppIDispatch, static_cast< osgEarthX::EarthViewer* >( innerParams ) );

		}
		break;

	default:
		break;

	}

	return hr;
}