#ifndef OSGEARTHX_COM_GRATICULE_IDL_H
#define OSGEARTHX_COM_GRATICULE_IDL_H 1

#include <COM/EarthObject/IEarthObject_idl.h>

const INT IGraticuleIdsCount = 0;
const INT IGraticuleBeginId = IEarthObjectBeginId + IEarthObjectIdsCount;

[
	object,
	uuid(06406A22-841C-4D8E-B255-ECB65686FEA9),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IGraticule : IEarthObject{
};

#endif