#ifndef OSGEARTHX_COM_VECTOR_SOURCE_STENCIL_IDL_H
#define OSGEARTHX_COM_VECTOR_SOURCE_STENCIL_IDL_H 1

#include <COM/Source/VectorSource/IVectorSourceDispatch_idl.h>

const INT IVectorSourceStencilIdsCount = 0;
const INT IVectorSourceStencilBeginId = IVectorSourceDispatchBeginId + IVectorSourceDispatchIdsCount;

[
	object,
	uuid(4D744CA0-8D2F-4E36-81E4-525D33C56E19),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IVectorSourceStencil : IVectorSourceDispatch{
};

#endif