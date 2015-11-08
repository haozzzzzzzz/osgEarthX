#ifndef OSGEARTHX_COM_TILE_SOURCE_TILE_SERVICE_IDL_H
#define OSGEARTHX_COM_TILE_SOURCE_TILE_SERVICE_IDL_H 1

#include <COM/Source/TileSource/ITileSourceDispatch_idl.h>

const INT ITileSourceTileServiceIdsCount = 0;
const INT ITileSourceTileServiceBeginId = ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount;

[
	object,
	uuid(FC61EF10-9CD5-4815-83AA-BF9ABAE92159),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ITileSourceTileService : ITileSourceDispatch{
};

#endif