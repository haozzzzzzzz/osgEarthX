#ifndef OSGEARTHX_COM_CIRCLE_IDL_H
#define OSGEARTHX_COM_CIRCLE_IDL_H 1

#include <COM/EarthObject/IEarthObject_idl.h>
#include <COM/Basis/GeoData/GeoPoint/GeoPoint_idl.h>
#include <COM/Basis/Units/Linear/Linear_idl.h>
#include <COM/Basis/Units/Angular/Angular_idl.h>

const INT ICircleIdsCount = 5;
const INT ICircleBeginId = IEarthObjectBeginId + IEarthObjectIdsCount;

[
	object,
	uuid(D23FB784-B31F-42C0-8B11-EFB721ACD202),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ICircle : IEarthObject{
	[ id( ICircleBeginId + 1 ), helpstring( " set position " ) ] HRESULT setPosition( [ in ] IGeoPoint* pIGeoPoint );
	[ id( ICircleBeginId + 2 ), helpstring( " set radius " ) ] HRESULT setRadius( [ in ] ILinear* pILinear );
	[ id( ICircleBeginId + 3 ), helpstring( " set arc start " ) ] HRESULT setArcStart( [ in ] IAngular* pIAngular );
	[ id( ICircleBeginId + 4 ), helpstring( " set arc end " ) ] HRESULT setArcEnd( [ in ] IAngular* pIAngular );
	[ id( ICircleBeginId + 5 ), helpstring( " set pie " ) ] HRESULT setPie( [ in ] VARIANT_BOOL vbPie );
};

#endif