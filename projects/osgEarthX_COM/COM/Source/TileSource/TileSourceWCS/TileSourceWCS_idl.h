#ifndef OSGEARTHX_COM_TILE_SOURCE_WCS_IDL_H
#define OSGEARTHX_COM_TILE_SOURCE_WCS_IDL_H 1

#include <COM/Source/TileSource/ITileSourceDispatch_idl.h>

const INT ITileSourceWCSIdsCount = 0;
const INT ITileSourceWCSBeginId = ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount;

[
	object,
	uuid(095F7009-D5A0-42A9-9D59-63792DE740C5),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ITileSourceWCS : ITileSourceDispatch{
};

#endif