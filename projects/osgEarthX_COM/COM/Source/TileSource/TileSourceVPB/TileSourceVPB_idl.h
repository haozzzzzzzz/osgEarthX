#ifndef OSGEARTHX_COM_TILE_SOURCE_VPB_IDL_H
#define OSGEARTHX_COM_TILE_SOURCE_VPB_IDL_H 1

#include <COM/Source/TileSource/ITileSourceDispatch_idl.h>

const INT ITileSourceVPBIdsCount = 0;
const INT ITileSourceVPBBeginId = ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount;

[
	object,
	uuid(1699395E-E6CD-414A-B41F-8D90A0DD6865),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ITileSourceVPB : ITileSourceDispatch{
};

#endif