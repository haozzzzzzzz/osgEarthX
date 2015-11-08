#ifndef OSGEARTHX_COM_RECTANGLE_PRIMITIVE_IDL_H
#define OSGEARTHX_COM_RECTANGLE_PRIMITIVE_IDL_H 1

#include <COM/EarthObject/IEarthObject_idl.h>

#include <COM/Basis/GeoData/GeoPoint/GeoPoint_idl.h>
#include <COM/Basis/Units/Linear/Linear_idl.h>

const INT IRectanglePrimitiveIdsCount = 3;
const INT IRectanglePrimitiveBeginId = IEarthObjectBeginId + IEarthObjectIdsCount;

[
	object,
	uuid(17BF3870-1C64-4905-A6E9-8479139D63A8),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IRectanglePrimitive : IEarthObject{
	[ id( IRectanglePrimitiveBeginId + 1 ), helpstring( "set position" ) ] HRESULT setPosition( [ in ] IGeoPoint* pGeoPoint );
	[ id( IRectanglePrimitiveBeginId + 2 ), helpstring( "set width" ) ] HRESULT setWidth( [ in ] ILinear* pILinear );
	[ id( IRectanglePrimitiveBeginId + 3 ), helpstring( "set height" ) ] HRESULT setHeight( [ in ] ILinear* pILinear );
};

#endif