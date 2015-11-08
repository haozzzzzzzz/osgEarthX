#ifndef OSGEARTHX_COM_VECTOR_SOURCE_SIMPLE_IDL_H
#define OSGEARTHX_COM_VECTOR_SOURCE_SIMPLE_IDL_H 1

#include <COM/Source/VectorSource/IVectorSourceDispatch_idl.h>

const INT IVectorSourceSimpleIdsCount = 0;
const INT IVectorSourceSimpleBeginId = IVectorSourceDispatchBeginId + IVectorSourceDispatchIdsCount;

[
	object,
	uuid(4A5FC24C-B1A1-4C51-825A-4F5E1243D0E2),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IVectorSourceSimple : IVectorSourceDispatch{
};

#endif