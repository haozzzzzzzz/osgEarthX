#ifndef OSGEARTHX_COM_FEATURE_IDL_H
#define OSGEARTHX_COM_FEATURE_IDL_H 1

#include <COM/Earth/IEarthDispatch_idl.h>
#include <COM/Basis/Geometry/Geometry/IGeometry_idl.h>

const INT IFeatureIdsCount = 1;
const INT IFeatureBeginId = IEarthDispatchBeginId + IEarthDispatchIdsCount;

[
	object,
	uuid(32E9A775-8511-4570-A63F-579727BA5322),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IFeature : IEarthDispatch{
	[ id( IFeatureBeginId + 1 ), helpstring(" set geometry ") ] HRESULT setGeometry( [ in ] IGeometry* pIGeometry );
};

#endif