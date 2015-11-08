#ifndef OSGEARTHX_COM_POLYGON_GEOMETRY_IDL_H
#define OSGEARTHX_COM_POLYGON_GEOMETRY_IDL_H 1

#include <COM/Basis/Geometry/RingGeometry/RingGeometry_idl.h>

const INT IPolygonGeometryIdsCount = 0;
const INT IPolygonGeometryBeginId = IRingGeometryBeginId + IRingGeometryIdsCount;

[
	object,
	uuid(40D84433-03C2-4FE3-B2E6-0B049EB9AA05),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IPolygonGeometry : IRingGeometry{
};

#endif