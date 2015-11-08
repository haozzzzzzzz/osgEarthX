#ifndef I_EARTH_DISPATCH_IDL_H
#define I_EARTH_DISPATCH_IDL_H 1

#include <COM/Earth/EarthClassType_idl.h>

const INT IEarthDispatchIdsCount = 2;
const INT IEarthDispatchBeginId = 0;

[
	object,
	uuid(a19426b7-7677-442b-b0c4-3f7a7638ea2b),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IEarthDispatch : IDispatch
{
	[ id( IEarthDispatchBeginId + 1 ), propget, helpstring( "用于存储相关信息的对象，提供给外部使用，与核心无关" ) ] HRESULT data( [ out,retval ] INT* piData );
	[ id( IEarthDispatchBeginId + 1 ), propput, helpstring( "用于存储相关信息的对象，提供给外部使用，与核心无关" ) ] HRESULT data( [ in ] INT iData );

	[ id( IEarthDispatchBeginId + 2 ), helpstring( "判断内部对象引用是否一样" ) ] HRESULT equal( [ in ]IEarthDispatch* pIEarthDispatch, [ out,retval ] VARIANT_BOOL* pIfEqual );

};

#endif