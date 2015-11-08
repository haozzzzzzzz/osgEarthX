#ifndef OSGEARTHX_COM_TILE_SOURCE_AGGLITE_IDL_H
#define OSGEARTHX_COM_TILE_SOURCE_AGGLITE_IDL_H 1

#include <COM/Source/TileSource/ITileSourceDispatch_idl.h>
#include <COM/Source/FeatureSource/IFeatureSouceDispatch_idl.h>

const INT ITileSourceAGGLiteIdsCount = 0;
const INT ITileSourceAGGLiteBeginId = ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount;

[
	object,
	uuid(455F2841-D4C5-45E4-96AC-4DEE86930B8E),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ITileSourceAGGLite : ITileSourceDispatch{
	[ id( ITileSourceAGGLiteBeginId + 1 ), propput ] HRESULT featureSource( [ in ] IFeatureSourceDispatch* pIFeatureSourceDispatch );
};

#endif