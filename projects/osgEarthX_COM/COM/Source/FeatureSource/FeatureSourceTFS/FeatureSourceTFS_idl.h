#ifndef OSGEARTHX_COM_FEATURE_SOURCE_TFS_IDL_H
#define OSGEARTHX_COM_FEATURE_SOURCE_TFS_IDL_H 1

#include <COM/Source/FeatureSource/IFeatureSouceDispatch_idl.h>

const INT IFeatureSourceTFSIdsCount = 0;
const INT IFeatureSourceTFSBeginId = IFeatureSourceDispatchBeginId + IFeatureSourceDispatchIdsCount;

[
	object,
	uuid(D0D80434-6B4A-4885-978B-836C08656EB3),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IFeatureSourceTFS : IFeatureSourceDispatch{
};

#endif