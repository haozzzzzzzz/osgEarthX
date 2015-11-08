#ifndef OSGEARTHX_COM_VEC3D_IDL_H
#define OSGEARTHX_COM_VEC3D_IDL_H 1

#include <COM/Earth/IEarthDispatch_idl.h>

const INT IVec3dIdsCount = 4;
const INT IVec3dBeginId = IEarthDispatchBeginId + IEarthDispatchIdsCount;

[
	object,
	uuid(727201B6-03AC-49A1-8171-C71449E9F1F5),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IVec3d : IEarthDispatch{
	[ id( IVec3dBeginId + 1 ), helpstring( "set vec3d value" ) ] HRESULT set( [ in ] DOUBLE dX, [ in ] DOUBLE dY, [ in ] DOUBLE dZ );
	[ id( IVec3dBeginId + 2 ), propput, helpstring(" put x ") ] HRESULT x( [ in ] DOUBLE dX );
	[ id( IVec3dBeginId + 2 ), propget, helpstring(" get x ") ] HRESULT x( [ out, retval ] DOUBLE* pX );
	[ id( IVec3dBeginId + 3 ), propput, helpstring( "put y" ) ] HRESULT y( [ in ] DOUBLE dY );
	[ id( IVec3dBeginId + 3 ), propget, helpstring(" get y ") ] HRESULT y( [ out, retval ] DOUBLE* pY );
	[ id( IVec3dBeginId + 4 ), propput, helpstring(" put z ") ] HRESULT z( [ in ] DOUBLE dZ );
	[ id( IVec3dBeginId + 4 ), propget, helpstring(" get z " ) ] HRESULT z( [ out, retval ] DOUBLE* pZ );
};

#endif