#ifndef OSGEARTHX_COM_TILE_SOURCE_TMS_IDL_H
#define OSGEARTHX_COM_TILE_SOURCE_TMS_IDL_H 1

#include <COM/Source/TileSource/ITileSourceDispatch_idl.h>

const INT ITileSourceTMSIdsCount = 1;
const INT ITileSourceTMSBeginId = ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount;

[
	object,
	uuid(5F892AF2-73A1-48FE-B861-B64D5FD8F5DC),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ITileSourceTMS : ITileSourceDispatch{
	[ id( ITileSourceTMSBeginId + 1 ), helpstring( "…Ë÷√strUrl" ), propput ] HRESULT url( [ in ] BSTR strUrl );
	[ id( ITileSourceTMSBeginId + 1 ), helpstring( "ªÒ»°strUrl" ), propget ] HRESULT url( [ out, retval ] BSTR* pUrl );
};

#endif