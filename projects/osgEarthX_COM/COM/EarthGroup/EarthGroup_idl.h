#ifndef EARTH_GROUP_IDL_H
#define EARTH_GROUP_IDL_H 1

#include <COM/EarthObject/IEarthObject_idl.h>

const INT IEarthGroupIdsCount = 9;
const INT IEarthGroupBeginId = IEarthObjectBeginId + IEarthObjectIdsCount;

[
	object,
	uuid(5AFC2DA3-1F48-4DDC-98D8-05E476354079),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IEarthGroup : IEarthObject{
	[id(IEarthGroupBeginId + 1), helpstring("add EarthObject")]							HRESULT addChild([in] IEarthObject* pIEarthObject);
	[id(IEarthGroupBeginId + 2), helpstring("remove EarthObject")]						HRESULT removeChild([in]IEarthObject* pIEarthObject);
	[id(IEarthGroupBeginId + 3), helpstring("remove EarthObject by position")]		HRESULT removeChildByPos([in]UINT uiPos);
	[id(IEarthGroupBeginId + 4), helpstring("get child")]										HRESULT getChild([in]UINT uiPos, [out,retval]IEarthObject**ppIEarthObject);
	[id(IEarthGroupBeginId + 5), helpstring("get the position of child")]				HRESULT getPosOfChild([in]IEarthObject* pIEarthObject, [out,retval]UINT*pPos);
	[id(IEarthGroupBeginId + 6), helpstring("move child")]									HRESULT moveChild([in]IEarthObject*pIEarthObject, [in]UINT uiNewPos);
	[id(IEarthGroupBeginId + 7), helpstring("move child from current position")]	HRESULT moveChildFromCurPos([in]UINT uiCurPos, [in]UINT uiNewPos);
	[id(IEarthGroupBeginId + 8), helpstring("get children count")]							HRESULT getChildrenCount([out,retval]UINT* pCount);
	[id(IEarthGroupBeginId + 9), helpstring("remove children")]							HRESULT removeChildren(void);
	[id(IEarthGroupBeginId + 10), helpstring("insert EarthObject")]						HRESULT insertChild([in] IEarthObject* pIEarthObject, [in] UINT uiInsertPos);
};

#endif