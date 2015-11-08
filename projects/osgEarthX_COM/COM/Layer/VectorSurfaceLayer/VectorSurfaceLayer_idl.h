#ifndef VECTOR_SURFACE_LAYER_IDL_H
#define VECTOR_SURFACE_LAYER_IDL_H 1

#include <COM/Layer/Layer/Layer_idl.h>
#include <COM/Source/VectorSource/IVectorSourceDispatch_idl.h>

const INT IVectorSurfaceLayerIdsCount = 0;
const INT IVectorSurfaceLayerBeginId = ILayerBeginId + ILayerIdsCount;

[
	object,
	uuid(04E1522A-6B6E-4196-BD94-6448E8993626),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IVectorSurfaceLayer : ILayer{
	[ id( IVectorSurfaceLayerBeginId + 1 ), propput ] HRESULT vectorSource( [ in ] IVectorSourceDispatch* pIVectorSourceDispatch );
};

#endif