#ifndef OSGEARTHX_COM_I_SOURCE_DISPATCH_IDL_H
#define OSGEARTHX_COM_I_SOURCE_DISPATCH_IDL_H 1

#include <COM/Earth/IEarthDispatch_idl.h>
#include <COM/Source/SourceClassType_idl.h>

const INT ISourceDispatchIdsCount = 1;
const INT ISourceDispatchBeginId = IEarthDispatchBeginId + IEarthDispatchIdsCount;

[
	object,
	uuid(5fd19a2e-d274-4d96-b825-8519a68ae9e6),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ISourceDispatch : IEarthDispatch
{
	[ id( ISourceDispatchBeginId + 1 ), propget ] HRESULT classType( [ out, retval ] SourceClassType* pClassType );
};

#endif