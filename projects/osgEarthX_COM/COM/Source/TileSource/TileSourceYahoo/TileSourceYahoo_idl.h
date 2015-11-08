#ifndef OSGEARTHX_COM_TILE_SOURCE_YAHOO_IDL_H
#define OSGEARTHX_COM_TILE_SOURCE_YAHOO_IDL_H 1

#include <COM/Source/TileSource/ITileSourceDispatch_idl.h>

const INT ITileSourceYahooIdsCount = 0;
const INT ITileSourceYahooBeginId = ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount;

[
	object,
	uuid(10DBE691-1006-4C68-976D-6C0364FAB1AB),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ITileSourceYahoo : ITileSourceDispatch{
};

#endif