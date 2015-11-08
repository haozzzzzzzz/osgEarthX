#ifndef OSGEARTHX_COM_TILE_SOURCE_COLOR_RAMP_IDL_H
#define OSGEARTHX_COM_TILE_SOURCE_COLOR_RAMP_IDL_H 1

#include <COM/Source/TileSource/ITileSourceDispatch_idl.h>

const INT ITileSourceColorRampIdsCount = 0;
const INT ITileSourceColorRampBeginId = ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount;

[
	object,
	uuid(2B8ED8F6-DF28-408D-AB3D-82E32F4A7B9F),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ITileSourceColorRamp : ITileSourceDispatch{
};

#endif