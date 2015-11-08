#ifndef OSGEARTHX_COM_ELLIPSE_PRIMITIVE_IDL_H
#define OSGEARTHX_COM_ELLIPSE_PRIMITIVE_IDL_H 1

#include <COM/EarthObject/IEarthObject_idl.h>
#include <COM/Basis/GeoData/GeoPoint/GeoPoint_idl.h>
#include <COM/Basis/Units/Linear/Linear_idl.h>
#include <COM/Basis/Units/Angular/Angular_idl.h>

const INT IEllipsePrimitiveIdsCount = 7;
const INT IEllipsePrimitiveBeiginId = IEarthObjectBeginId + IEarthObjectIdsCount;

[
	object,
	uuid(762E9F97-674F-4821-9746-5E262607EB67),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IEllipsePrimitive : IEarthObject{
	[ id( IEllipsePrimitiveBeiginId + 1 ), helpstring( "set postion" ) ] HRESULT setPosition( [ in ] IGeoPoint* pIGeoPoint );
	[ id( IEllipsePrimitiveBeiginId + 2 ), helpstring( " set radius major" ) ] HRESULT setRadiusMajor( [ in ] ILinear* pILinear );
	[ id( IEllipsePrimitiveBeiginId + 3 ), helpstring( "set radius minor" ) ] HRESULT setRadiusMinor( [ in ] ILinear* pILinear );
	[ id( IEllipsePrimitiveBeiginId + 4 ), helpstring( "set rotation angle" ) ] HRESULT setRotationAngle( [ in ] IAngular* pIAngular );
	[ id( IEllipsePrimitiveBeiginId + 5 ), helpstring( "set arc start" ) ] HRESULT setArcStart( [ in ] IAngular* pIAngular );
	[ id( IEllipsePrimitiveBeiginId + 6 ), helpstring( "set arc end" ) ] HRESULT setArcEnd( [ in ] IAngular* pIAngular );
	[ id( IEllipsePrimitiveBeiginId + 7 ), helpstring( "set pie" ) ] HRESULT setPie( [ in ] VARIANT_BOOL vbPie );
};

#endif