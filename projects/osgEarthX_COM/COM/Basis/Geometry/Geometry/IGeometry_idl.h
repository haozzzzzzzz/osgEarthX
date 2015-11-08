#ifndef OSGEARTHX_COM_I_GEOMETRY_IDL_H
#define OSGEARTHX_COM_I_GEOMETRY_IDL_H 1

#include <COM/Earth/IEarthDispatch_idl.h>
#include <COM/Basis/Geometry/GeometryClassType_idl.h>
#include <COM/Basis/Vec/Vec3d/Vec3d_idl.h>

const INT IGeometryIdsCount = 2;
const INT IGeometryBeginId = IEarthDispatchBeginId + IEarthDispatchIdsCount;

[
	object,
	uuid(9ee2be10-a27f-4641-b8c6-20d65cc4f056),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IGeometry : IEarthDispatch
{
	[ id( IGeometryBeginId + 1 ), propget, helpstring(" get Geometry class type ") ] HRESULT classType( [ out, retval ] GeometryClassType* pClassType );
	[ id( IGeometryBeginId + 2 ), helpstring("push back vec3d") ] HRESULT push_back( [ in ] IVec3d* pIVec3d );
};

#endif