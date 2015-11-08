#ifndef LAYER_IDL_H
#define LAYER_IDL_H 1

#include <COM/EarthObject/IEarthObject_idl.h>

const INT ILayerIdsCount = 0;
const INT ILayerBeginId = IEarthObjectBeginId + IEarthObjectIdsCount;

[
	object,
	uuid(f5b65182-5d68-45e6-9f39-815a06ca909e),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ILayer : IEarthObject
{
};

#endif