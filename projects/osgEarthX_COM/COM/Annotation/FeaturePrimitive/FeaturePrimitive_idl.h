#ifndef OSGEARTHX_COM_FEATURE_PRIMITIVE_IDL_H
#define OSGEARTHX_COM_FEATURE_PRIMITIVE_IDL_H 1

#include <COM/EarthObject/IEarthObject_idl.h>
#include <COM/Basis/GeoData/Feature/Feature_idl.h>

const INT IFeaturePrimitiveIdsCount = 0;
const INT IFeaturePrimitiveBeginId = IEarthObjectBeginId + IEarthObjectIdsCount;

[
	object,
	uuid(ED1BFB90-6A14-421B-BF7C-949889C5D487),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IFeaturePrimitive : IEarthObject{
	[ id( IFeaturePrimitiveBeginId + 1  ), helpstring( "set feature" ) ] HRESULT setFeature( [ in ] IFeature* pIFeature );
};

#endif