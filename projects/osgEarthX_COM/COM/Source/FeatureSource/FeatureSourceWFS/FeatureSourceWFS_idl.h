#ifndef OSGEARTHX_COM_FEATURE_SOURCE_WFS_IDL_H
#define OSGEARTHX_COM_FEATURE_SOURCE_WFS_IDL_H 1

#include <COM/Source/FeatureSource/IFeatureSouceDispatch_idl.h>

const INT IFeatureSourceWFSIdsCount = 0;
const INT IFeatureSourceWFSBeginId = IFeatureSourceDispatchBeginId + IFeatureSourceDispatchIdsCount;

[
	object,
	uuid(B5F72630-282A-42CB-B810-674F56DE4008),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IFeatureSourceWFS : IFeatureSourceDispatch{
};

#endif