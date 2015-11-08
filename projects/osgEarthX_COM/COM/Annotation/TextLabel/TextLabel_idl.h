#ifndef OSGEARTHX_COM_TEXT_LABEL_IDL_H
#define OSGEARTHX_COM_TEXT_LABEL_IDL_H 1

#include <COM/EarthObject/IEarthObject_idl.h>
#include <COM/Basis/GeoData/GeoPoint/GeoPoint_idl.h>

const INT ITextLabelIdsCount = 4;
const INT ITextLabelBeginId = IEarthObjectBeginId + IEarthObjectIdsCount;

[
	object,
	uuid(CE04978B-CFFD-4751-B8D4-0EC5D48B62FD),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ITextLabel : IEarthObject{
	[ id( ITextLabelBeginId + 1 ), helpstring( "put position" ) ] HRESULT setPosition( [ in ] IGeoPoint* pIGeoPoint );
	[ id( ITextLabelBeginId + 2 ), helpstring( "get value of postion" ) ] HRESULT getPosition( [ out, retval ] IGeoPoint** pIGeoPoint );
	[ id( ITextLabelBeginId + 3 ), helpstring( "put text" ) ] HRESULT setText( [ in ] BSTR strText );
	[ id( ITextLabelBeginId + 4 ), helpstring( "get text" ) ] HRESULT getText( [ out, retval ] BSTR* pStrText );
};

#endif