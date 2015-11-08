#ifndef OSGEARTHX_COM_TILE_SOURCE_ARCGIS_IDL_H
#define OSGEARTHX_COM_TILE_SOURCE_ARCGIS_IDL_H 1

#include <COM/Source/TileSource/ITileSourceDispatch_idl.h>

const INT ITileSourceArcGISIdsCount = 1;
const INT ITileSourceArcGISBeginId = ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount;

[
	object,
	uuid(4B90237D-18D8-499E-9780-6915B31FCA16),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ITileSourceArcGIS : ITileSourceDispatch{
	[ id( ITileSourceArcGISBeginId + 1 ), helpstring( "…Ë÷√strUrl" ), propput ] HRESULT url( [ in ] BSTR strUrl );
	[ id( ITileSourceArcGISBeginId + 1 ), helpstring( "ªÒ»°strUrl" ), propget ] HRESULT url( [ out, retval ] BSTR* pUrl );
};

#endif