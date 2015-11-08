#ifndef ELEVATION_SURFACE_LAYER_IDL_H
#define ELEVATION_SURFACE_LAYER_IDL_H 1

#include <COM/Layer/Layer/Layer_idl.h>

const INT IElevationSurfaceLayerIdsCount = 1;
const INT IElevationSurfaceLayerBeginId = ILayerBeginId + ILayerIdsCount;

[
	object,
	uuid(BC2F437C-B0CA-4160-BB20-F8CA901C1E25),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IElevationSurfaceLayer : ILayer{
	[ id( IElevationSurfaceLayerBeginId + 1 ), propput ] HRESULT tileSource( [ in ] ITileSourceDispatch* pITileSourceDispatch );
};

#endif