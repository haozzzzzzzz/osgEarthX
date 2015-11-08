#include "stdafx.h"
#include <COM/Utils/StaticUtils/UnitsStaticUtils.h>

#include <COM/Basis/Units/Linear/Linear.h>
#include <COM/Basis/Units/Angular/Angular.h>

HRESULT UnitsStaticUtils::createInstance( UnitClassType classType, IDispatch** ppIDispatch, void* innerParams /* = NULL */ )
{
	HRESULT hr = S_FALSE;
	switch( classType )
	{
	case UNIT_CLASS_LINEAR:
		hr = CLinear::createEarthDispatchInstance( ppIDispatch, static_cast< osgEarth::Linear* >( innerParams ) );
		break;

	case UNIT_CLASS_ANGULAR:
		hr = CAngular::createEarthDispatchInstance( ppIDispatch, static_cast< osgEarth::Angular* >( innerParams ) );
		break;

	case UNIT_CLASS_TEMPORAL:
		break;

	case UNIT_CLASS_SPEED:
		break;

	case UNIT_CLASS_SCREEN_SIZE:
		break;

	default:
		break;
	}
	return hr;
}