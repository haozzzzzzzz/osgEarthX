#ifndef OSGEARTHX_COM_TILE_SOURCE_DEBUG_IDL_H
#define OSGEARTHX_COM_TILE_SOURCE_DEBUG_IDL_H 1

#include <COM/Source/TileSource/ITileSourceDispatch_idl.h>

const INT ITileSourceDebugIdsCount = 0;
const INT ITileSourceDebugBeginId = ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount;

[
	object,
	uuid(830F0E48-B7F1-4A75-BA64-34389AAB153D),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ITileSourceDebug : ITileSourceDispatch{
};

#endif