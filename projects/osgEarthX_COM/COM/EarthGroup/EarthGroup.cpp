// E:\OpenSceneGraph\osgEarthX\projects\osgEarthX_COM\COM\EarthGroup\EarthGroup.cpp : CEarthGroup 的实现

#include "stdafx.h"
#include "EarthGroup.h"

#include <COM/Utils/StaticUtils/EarthObjectStaticUtils.h>

STDMETHODIMP CEarthGroup::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IEarthGroup,
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

// CEarthGroup
CEarthGroup::CEarthGroup() : 
	IEarthGroupDispatchImpl ( EARTH_GROUP )
{
}

CEarthGroup::CEarthGroup( const CEarthGroup&earthGroup ) : //浅复制
	IEarthGroupDispatchImpl( earthGroup )
{
}

STDMETHODIMP CEarthGroup::addChild(IEarthObject* pIEarthObject)
{
	if (pIEarthObject == NULL)
	{
		return S_FALSE;
	}

	getOrCreateInnerObject()->addChild( EarthObjectStaticUtils::getInnerObject( pIEarthObject, true ) );
	return S_OK;
}

STDMETHODIMP CEarthGroup::removeChild( IEarthObject* pIEarthObject )
{
	if (pIEarthObject == NULL)
	{
		return S_FALSE;
	}

	getOrCreateInnerObject()->removeChild( EarthObjectStaticUtils::getInnerObject( pIEarthObject ) );
	return S_OK;
}

STDMETHODIMP CEarthGroup::removeChildByPos(UINT uiPos)
{
	getOrCreateInnerObject()->removeChildByPos(uiPos);
	return S_OK;
}

STDMETHODIMP CEarthGroup::getChild(UINT uiPos, IEarthObject**ppIEarthObject)
{
	osgEarthX::Object* pObject = getOrCreateInnerObject()->getChild( uiPos );
	if( pObject == NULL || false == EarthObjectStaticUtils::createInstance( ( EarthObjectClassType ) pObject->getObjectType(), ( IDispatch** )ppIEarthObject, pObject ) )
	{
		return S_FALSE;
	}

	return S_OK;
}

STDMETHODIMP CEarthGroup::getPosOfChild(IEarthObject* pIEarthObject,UINT*pPos)
{
	*pPos = getOrCreateInnerObject()->getPosOfChild( EarthObjectStaticUtils::getInnerObject( pIEarthObject ) );
	return S_OK;
}

STDMETHODIMP CEarthGroup::moveChild(IEarthObject*pIEarthObject, UINT uiNewPos)
{
	getOrCreateInnerObject()->moveChild( EarthObjectStaticUtils::getInnerObject( pIEarthObject ), uiNewPos );
	return S_OK;
}

STDMETHODIMP CEarthGroup::moveChildFromCurPos(UINT uiCurPos, UINT uiNewPos)
{
	getOrCreateInnerObject()->moveChildFromCurPos(uiCurPos, uiNewPos);
	return S_OK;
}

STDMETHODIMP CEarthGroup::getChildrenCount(UINT* pCount)
{
	*pCount = getOrCreateInnerObject()->getChildrenCount();
	return S_OK;
}


STDMETHODIMP CEarthGroup::removeChildren()
{
	getOrCreateInnerObject()->removeChildren();
	return S_OK;
}

STDMETHODIMP CEarthGroup::insertChild(IEarthObject* pIEarthObject, UINT uiInsertPos)
{
	if (pIEarthObject == NULL)
	{
		return S_FALSE;
	}

	getOrCreateInnerObject()->insertChild( EarthObjectStaticUtils::getInnerObject( pIEarthObject, true ), uiInsertPos );
	return S_OK;
}