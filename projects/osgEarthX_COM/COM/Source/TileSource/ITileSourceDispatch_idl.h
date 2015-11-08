#ifndef I_TILE_SOURCE_DISPATCH_IDL_H
#define I_TILE_SOURCE_DISPATCH_IDL_H 1

#include <COM/Source/ISourceDispatch_idl.h>

const INT ITileSourceDispatchIdsCount = 0;
const INT ITileSourceDispatchBeginId = ISourceDispatchBeginId + ISourceDispatchIdsCount ;

[
	object,
	uuid(a9e09563-3471-4b40-86d8-cbb2b472992e),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ITileSourceDispatch : ISourceDispatch
{
};

#endif