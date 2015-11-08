#ifndef IMAGE_SURFACE_LAYER_LIB_IDL_H
#define IMAGE_SURFACE_LAYER_LIB_IDL_H 1

#include <COM/Layer/Layer/Layer_lib_idl.h>

const INT IImageSurfaceEventsIdsCount = 0;
const INT IImageSurfaceEventsBeginId = ILayerEventsBeginId + ILayerEventsIdsCount;

[
	uuid(b53dbf9c-e32b-46c7-986b-7fc94c169f3d)
]
interface IImageSurfaceEvents : ILayerEvents
{

};

[
	uuid(df7442fe-8ab4-47df-b32c-36f80bf8e107)
]
dispinterface IDispImageSurfaceLayerEvents
{
	interface IImageSurfaceEvents;
};

[
	uuid(91F28979-3713-4F11-B893-F491585D1E69)		
]
coclass ImageSurfaceLayer
{
	[default] interface IImageSurfaceLayer;
	[default,source] dispinterface IDispImageSurfaceLayerEvents;
};

#endif