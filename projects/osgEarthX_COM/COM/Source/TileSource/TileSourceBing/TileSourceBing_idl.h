#ifndef OSGEARTHX_COM_TILE_SOURCE_BING_IDL_H
#define OSGEARTHX_COM_TILE_SOURCE_BING_IDL_H 1

#include <COM/Source/TileSource/ITileSourceDispatch_idl.h>

const INT ITileSourceBingIdsCount = 0;
const INT ITileSourceBingBeginId = ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount;

[
	object,
	uuid(EFAEFF1E-29CB-416B-90E8-0A687903C9B5),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ITileSourceBing : ITileSourceDispatch{
};

#endif