#ifndef I_VECTOR_SOURCE_DISPATCH_IDL_H
#define I_VECTOR_SOURCE_DISPATCH_IDL_H 1

#include <COM/Source/ISourceDispatch_idl.h>

const INT IVectorSourceDispatchIdsCount = 0;
const INT IVectorSourceDispatchBeginId = ISourceDispatchBeginId + ISourceDispatchIdsCount;

[
	object,
	uuid(f645160e-9102-4e02-b592-3d6e0816dafa),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IVectorSourceDispatch : ISourceDispatch
{

};

#endif