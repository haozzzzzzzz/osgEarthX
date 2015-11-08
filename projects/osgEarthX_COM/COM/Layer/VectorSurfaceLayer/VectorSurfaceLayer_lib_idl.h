#ifndef VECTOR_SURFACE_LAYER_LIB_IDL_H
#define VECTOR_SURFACE_LAYER_LIB_IDL_H 1

#include <COM/Layer/Layer/Layer_lib_idl.h>

const INT IVectorSurfaceLayerEventsIdsCount = 0;
const INT IVectorSurfaceLayerEventsBeginId = ILayerEventsBeginId + ILayerEventsIdsCount;

[
	uuid(e9bdab8e-525d-4735-818f-4566b9de41a1)
]
interface IVectorSurfaceLayerEvents : ILayerEvents
{

};

[
	uuid(6be570c8-a647-49e2-8372-91b290ba8dde)
]
dispinterface IDispVectorSurfaceLayerEvents
{
	interface IVectorSurfaceLayerEvents;
};

[
	uuid(E14A8A95-1D6E-4C78-B13C-38F475CC2E0A)		
]
coclass VectorSurfaceLayer
{
	[default] interface IVectorSurfaceLayer;
	[default,source] dispinterface IDispVectorSurfaceLayerEvents;
};

#endif