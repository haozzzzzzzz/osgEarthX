#ifndef EARTH_MAP_IDL_H
#define EARTH_MAP_IDL_H 1

#include <COM/Earth/IEarthDispatch_idl.h>

#include <COM/Basis/GeoData/SpatialReference/SpatialReference_idl.h>

const INT IEarthMapIdsCount = 2;
const INT IEarthMapBeginId = IEarthObjectIdsCount + IEarthObjectBeginId;

[
	object,
	uuid(E18D8D71-85F8-49F2-AEF0-71ED0EDF2BF4),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IEarthMap : IEarthDispatch{
	[id(IEarthMapBeginId + 1), propput] HRESULT maxThreadsNum([in]UINT uiNum);
	[id(IEarthMapBeginId + 1), propget] HRESULT maxThreadsNum([out,retval] UINT* pUiNum);
	[ id( IEarthMapBeginId + 2 ), helpstring( " get EarthMap spatial reference" ) ] HRESULT getSRS( [ out, retval ] ISpatialReference** ppISRS );
};

#endif