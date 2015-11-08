#ifndef EARTH_OBJECT_LIB_IDL_H
#define EARTH_OBJECT_LIB_IDL_H 1

#include <COM/Earth/IEarthDisp_lib_idl.h>

const INT IEarthObjectEventsIdsCounts = 1;
const INT IEarthObjectEventsBeginId = IEarthDispBeginId + IEarthDispIdsCount;

[
	uuid(c99068c9-a22a-4282-9e6f-98e977b5c52b)
]
interface IEarthObjectEvents : IEarthDisp
{
	[id(IEarthObjectEventsBeginId + 1)] void onInitializeCompleted();
};

#endif