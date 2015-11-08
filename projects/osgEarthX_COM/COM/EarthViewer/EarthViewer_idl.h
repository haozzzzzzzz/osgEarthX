#ifndef EARTH_VIEWER_IDL_H
#define EARTH_VIEWER_IDL_H 1

#include <COM/Earth/IEarthDispatch_idl.h>

const INT IEarthViewerIdsCount = 0;
const INT IEarthViewerBeginId = IEarthDispatchBeginId + IEarthDispatchIdsCount;

[
	object,
	uuid(6AB4E72D-E25A-4412-9CD5-0EB696D1D243),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IEarthViewer : IEarthDispatch{
};

#endif