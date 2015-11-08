#ifndef OSGEARTHX_COM_TILE_SOURCE_TILE_CACHE_IDL_H
#define OSGEARTHX_COM_TILE_SOURCE_TILE_CACHE_IDL_H 1

#include <COM/Source/TileSource/ITileSourceDispatch_idl.h>

const INT ITileSourceTileCacheIdsCount = 0;
const INT ITileSourceTileCacheBeginId = ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount;

[
	object,
	uuid(83428B22-3F62-46B0-8BE9-7BD89AE3E8F6),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ITileSourceTileCache : ITileSourceDispatch{
};

#endif