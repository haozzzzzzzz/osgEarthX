#ifndef OSGEARTHX_COM_GEO_POINT_IDL_H
#define OSGEARTHX_COM_GEO_POINT_IDL_H 1

#include <COM/Earth/IEarthDispatch_idl.h>
#include <COM/Basis/GeoData/SpatialReference/SpatialReference_idl.h>

const INT IGeoPointIdsCount = 4;
const INT IGeoPointBeginId = IEarthDispatchBeginId + IEarthDispatchIdsCount;

[
	object,
	uuid(8DEB0D28-96B5-4653-9FD4-A6DDBC6145EC),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IGeoPoint : IEarthDispatch{
	[ id( IGeoPointBeginId + 1 ), propput, helpstring( "put x" ) ] HRESULT x( [ in ] DOUBLE dX );
	[ id( IGeoPointBeginId + 1 ), propget, helpstring( "get x" ) ] HRESULT x( [ out, retval ] DOUBLE* pX );
	[ id( IGeoPointBeginId + 2 ), propput, helpstring( "put y" ) ] HRESULT y( [ in ] DOUBLE dY );
	[ id( IGeoPointBeginId + 2 ), propget, helpstring( "get y" ) ] HRESULT y( [ out, retval ] DOUBLE* pY );
	[ id( IGeoPointBeginId + 3 ), propput, helpstring( "put z" ) ] HRESULT z( [ in ] DOUBLE dZ );
	[ id( IGeoPointBeginId + 3 ), propget, helpstring( "get z" ) ] HRESULT z( [ out, retval ] DOUBLE* pZ );
	[ id( IGeoPointBeginId + 4 ), propput, helpstring( "put srs" ) ] HRESULT srs( [ in ] ISpatialReference* pISpatialReference );
	[ id( IGeoPointBeginId + 4 ), propget, helpstring( "get srs" ) ] HRESULT srs( [ out, retval ] ISpatialReference** ppISpatialReference );
};

#endif