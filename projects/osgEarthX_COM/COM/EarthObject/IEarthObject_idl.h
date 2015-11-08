#ifndef OSGEARTHX_COM_I_EARTH_OBJECT_IDL_H
#define OSGEARTHX_COM_I_EARTH_OBJECT_IDL_H 1

#include <COM/EarthObject/EarthObjectClassType_idl.h>

const INT IEarthObjectIdsCount = 3;
const INT IEarthObjectBeginId = IEarthDispatchBeginId + IEarthDispatchIdsCount;

[
	object,
	uuid(263c6640-608e-4aa6-8b62-507914f27954),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IEarthObject : IEarthDispatch
{
	[ id( IEarthObjectBeginId + 1 ), propget ] HRESULT classType( [ out, retval ] EarthObjectClassType* pEarthObjectClassType );

	[ id(IEarthObjectBeginId + 2), helpstring("设置visible"), propput ] HRESULT visible([in]VARIANT_BOOL ifVisible);
	[ id(IEarthObjectBeginId + 2), helpstring("获取visible"), propget ] HRESULT visible([out,retval]VARIANT_BOOL* pIfVisible);
	[ id(IEarthObjectBeginId + 3), helpstring("获取是否可用"), propget ] HRESULT enabled([out, retval] VARIANT_BOOL* pIfEnabled);
};

#endif