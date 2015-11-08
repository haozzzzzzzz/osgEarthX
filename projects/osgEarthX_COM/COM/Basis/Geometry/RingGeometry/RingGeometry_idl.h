#ifndef OSGEARTHX_COM_RING_GEOMETRY_IDL_H
#define OSGEARTHX_COM_RING_GEOMETRY_IDL_H 1

#include <COM/Basis/Geometry/Geometry/IGeometry_idl.h>

const INT IRingGeometryIdsCount = 0;
const INT IRingGeometryBeginId = IGeometryBeginId + IGeometryIdsCount;

[
	object,
	uuid(687C2064-3973-4B84-9330-5723BD8E52CE),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IRingGeometry : IGeometry{
};

#endif