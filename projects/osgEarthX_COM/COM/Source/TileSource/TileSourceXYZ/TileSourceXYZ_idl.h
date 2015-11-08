#ifndef OSGEARTHX_COM_TILE_SOURCE_XYZ_IDL_H
#define OSGEARTHX_COM_TILE_SOURCE_XYZ_IDL_H 1

#include <COM/Source/TileSource/ITileSourceDispatch_idl.h>

const INT ITileSourceXYZIdsCount = 0;
const INT ITileSourceXYZBeginId = ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount;

[
	object,
	uuid(A5023EAB-8CDF-4781-9B36-F846EF8B7CEC),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ITileSourceXYZ : ITileSourceDispatch{
};

#endif