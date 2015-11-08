#ifndef OSGEARTHX_COM_TILE_SOURCE_GDAL_IDL_H
#define OSGEARTHX_COM_TILE_SOURCE_GDAL_IDL_H 1

#include <COM/Source/TileSource/ITileSourceDispatch_idl.h>

const INT ITileSourceGDALIdsCount = 1;
const INT ITileSourceGDALBeginId = ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount;

[
	object,
	uuid(4A2FC843-DEE0-4C8B-97C2-E0E6DE0BBE96),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ITileSourceGDAL : ITileSourceDispatch{
	[ id( ITileSourceGDALBeginId + 1 ), helpstring( "…Ë÷√strUrl" ), propput ] HRESULT url( [ in ] BSTR strUrl );
	[ id( ITileSourceGDALBeginId + 1 ), helpstring( "ªÒ»°strUrl" ), propget ] HRESULT url( [ out, retval ] BSTR* pUrl );
};

#endif