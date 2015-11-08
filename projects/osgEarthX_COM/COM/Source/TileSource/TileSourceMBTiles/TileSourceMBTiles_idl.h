#ifndef OSGEARTHX_COM_TILE_SOURCE_MBTILES_IDL_H
#define OSGEARTHX_COM_TILE_SOURCE_MBTILES_IDL_H 1

#include <COM/Source/TileSource/ITileSourceDispatch_idl.h>

const INT ITileSourceMBTilesIdsCount = 3;
const INT ITileSourceMBTilesBeginId = ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount;

[
	object,
	uuid(38E92073-8FE0-4F75-919E-5463A22DDEFB),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ITileSourceMBTiles : ITileSourceDispatch{
	[ id( ITileSourceMBTilesBeginId + 1 ), propput ] HRESULT fileName( [ in ] BSTR bstrFileName );
	[ id( ITileSourceMBTilesBeginId + 2 ), propput ] HRESULT format( [ in ] BSTR bstrFormat );
	[ id( ITileSourceMBTilesBeginId + 3 ), propput ] HRESULT computeLevels( [ in ] VARIANT_BOOL bComputeLevels );
};

#endif