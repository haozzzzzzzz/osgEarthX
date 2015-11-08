#ifndef OSGEARTHX_COM_SPATIAL_REFERENCE_IDL_H
#define OSGEARTHX_COM_SPATIAL_REFERENCE_IDL_H 1

#include <COM/Earth/IEarthDispatch_idl.h>

const INT ISpatialReferenceIdsCount = 0;
const INT ISpatialReferenceBeginId = IEarthDispatchBeginId + IEarthDispatchIdsCount;

[
	object,
	uuid(375604D3-007B-429A-9D20-FB248440D9B3),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ISpatialReference : IEarthDispatch{
};

#endif