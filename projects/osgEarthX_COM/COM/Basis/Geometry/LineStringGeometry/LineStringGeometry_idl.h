#ifndef OSGEARTHX_COM_LINE_STRING_IDL_H
#define OSGEARTHX_COM_LINE_STRING_IDL_H 1

#include <COM/Basis/Geometry/Geometry/IGeometry_idl.h>

const INT ILineStringIdsCount = 0;
const INT ILineStringBeginId = IGeometryBeginId + IGeometryIdsCount;

[
	object,
	uuid(CC3C1644-714E-436E-8A2B-80897DD76AD2),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ILineStringGeometry : IGeometry{
};

#endif