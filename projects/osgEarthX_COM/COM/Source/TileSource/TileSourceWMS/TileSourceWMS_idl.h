#ifndef OSGEARTHX_COM_TILE_SOURCE_WMS_IDL_H
#define OSGEARTHX_COM_TILE_SOURCE_WMS_IDL_H 1

#include <COM/Source/TileSource/ITileSourceDispatch_idl.h>

const INT ITileSourceWMSIdsCount = 0;
const INT ITileSourceWMSBeginId = ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount;

[
	object,
	uuid(261C004D-8496-4362-AD79-4C63317CB630),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ITileSourceWMS : ITileSourceDispatch{
};

#endif