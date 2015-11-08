#ifndef LAYER_LIB_IDL_H
#define LAYER_LIB_IDL_H 1

#include <COM/EarthObject/IEarthObject_lib_idl.h>

const INT ILayerEventsIdsCount = 2;
const INT ILayerEventsBeginId = IEarthObjectEventsBeginId + IEarthObjectEventsIdsCounts;
[
	uuid(e80d0428-dba8-412e-83ee-bec02cbc81a3)
]
interface ILayerEvents : IEarthObjectEvents
{
	[id(ILayerEventsBeginId + 1)] void onVisible();
	[id(ILayerEventsBeginId + 2)] void onHidden();
};

#endif