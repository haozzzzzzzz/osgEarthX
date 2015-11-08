#ifndef OSGEARTHX_COM_I_FEATURE_SOURCE_DISPATCH_IDL_H
#define OSGEARTHX_COM_I_FEATURE_SOURCE_DISPATCH_IDL_H 1

#include <COM/Source/ISourceDispatch_idl.h>

const INT IFeatureSourceDispatchIdsCount = 0;
const INT IFeatureSourceDispatchBeginId = ISourceDispatchBeginId + ISourceDispatchIdsCount;

[
	object,
	uuid(baa39933-9137-4d83-ae81-1af7ef835d29),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IFeatureSourceDispatch : ISourceDispatch
{

};

#endif