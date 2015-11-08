#ifndef OSGEARTHX_COM_VECTOR_SOURCE_GEOM_IDL_H
#define OSGEARTHX_COM_VECTOR_SOURCE_GEOM_IDL_H 1

#include <COM/Source/VectorSource/IVectorSourceDispatch_idl.h>
#include <COM/Source/FeatureSource/IFeatureSouceDispatch_idl.h>

const INT IVectorSourceGeomIdsCount = 1;
const INT IVectorSourceGeomBeginId = IVectorSourceDispatchBeginId + IVectorSourceDispatchIdsCount;

[
	object,
	uuid(7848C86A-2A7B-48C1-A5D1-BF0CDD37858E),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IVectorSourceGeom : IVectorSourceDispatch{
	[ id( IVectorSourceGeomBeginId + 1 ), propput ] HRESULT featureSource( [ in ] IFeatureSourceDispatch* pIFeatureSourceDispatch );
};
#endif