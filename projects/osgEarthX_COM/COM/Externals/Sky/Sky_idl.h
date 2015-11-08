#ifndef SKY_IDL_H
#define SKY_IDL_H 1

#include <COM/EarthObject/IEarthObject_idl.h>

const INT ISkyIdsCount = 3;
const INT ISkyBeginId = IEarthObjectBeginId + IEarthObjectIdsCount;

[
	object,
	uuid(BA5628D4-3E46-44C8-940E-3ADC727539A0),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ISky : IEarthObject{
	[ id ( ISkyBeginId + 1 ), propget, helpstring( " get enableLighting " ) ] HRESULT enableLighting( [ out, retval ] VARIANT_BOOL* pEnableLighting );
	[ id ( ISkyBeginId + 1 ), propput, helpstring( " put enableLighting " ) ] HRESULT enableLighting( [ in ] VARIANT_BOOL ifEnable );

	[ id ( ISkyBeginId + 2 ), propget, helpstring( " get ambient " ) ] HRESULT ambient( [ out, retval ] FLOAT* pAmbient );
	[ id ( ISkyBeginId + 2 ), propput, helpstring( " put ambient " ) ] HRESULT ambient( [ in ] FLOAT fAmbient );

	[ id ( ISkyBeginId + 3 ), propput, helpstring( " put hours " ) ] HRESULT hours( [in] FLOAT fHours );
	[ id ( ISkyBeginId + 3 ), propget, helpstring( " get hours " ) ] HRESULT hours( [ out, retval ] FLOAT* pHours );

};

#endif