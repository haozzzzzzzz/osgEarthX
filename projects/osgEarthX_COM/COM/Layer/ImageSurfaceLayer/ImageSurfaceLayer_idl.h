#ifndef IMAGE_SURFACE_LAYER_IDL_H
#define IMAGE_SURFACE_LAYER_IDL_H 1

#include <COM/Layer/Layer/Layer_idl.h>

const INT IImageSurfaceLayerIdsCount = 1;
const INT IImageSurfaceLayerBeginId = ILayerBeginId + ILayerIdsCount;

[
	object,
	uuid(569576F6-5E3C-40B6-89CB-45F28C72EF7C),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IImageSurfaceLayer : ILayer{
	[ id( IImageSurfaceLayerBeginId + 1 ), propput ] HRESULT tileSource( [ in ] ITileSourceDispatch* pITileSourceDispatch );
};

#endif