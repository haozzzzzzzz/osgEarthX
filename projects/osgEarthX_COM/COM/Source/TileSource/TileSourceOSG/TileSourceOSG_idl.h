#ifndef OSGEARTHX_COM_TILE_SOURCE_OSG_IDL_H
#define OSGEARTHX_COM_TILE_SOURCE_OSG_IDL_H 1

#include <COM/Source/TileSource/ITileSourceDispatch_idl.h>

const INT ITileSourceOSGIdsCount = 0;
const INT ITileSourceOSGBeginId = ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount;

[
	object,
	uuid(267BD9F7-73DC-41C8-929A-147159535592),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ITileSourceOSG : ITileSourceDispatch{
};

#endif