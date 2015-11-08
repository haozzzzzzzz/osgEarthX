#ifndef OSGEARTHX_COM_PLACE_IDL_H
#define OSGEARTHX_COM_PLACE_IDL_H 1

#include <COM/EarthObject/IEarthObject_idl.h>
#include <COM/Basis/GeoData/GeoPoint/GeoPoint_idl.h>

const INT IPlaceIdsCount = 5;
const INT IPlaceBeginId = IEarthObjectBeginId + IEarthObjectIdsCount;

[
	object,
	uuid(015B8CC6-96F6-48EF-8896-0A74008B0EF8),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IPlace : IEarthObject{
	[ id( IPlaceBeginId + 1 ), helpstring( "put position" ) ] HRESULT setPosition( [ in ] IGeoPoint* pIGeoPoint );
	[ id( IPlaceBeginId + 2 ), helpstring( "get value of postion" ) ] HRESULT getPosition( [ out, retval ] IGeoPoint** pIGeoPoint );
	[ id( IPlaceBeginId + 3 ), helpstring( "put text" ) ] HRESULT setText( [ in ] BSTR strText );
	[ id( IPlaceBeginId + 4 ), helpstring( "get text" ) ] HRESULT getText( [ out, retval ] BSTR* pStrText );
	[ id( IPlaceBeginId + 5 ), helpstring( "put image src" ) ] HRESULT setImageSrc( [ in ] BSTR strImageSrc );
};

#endif