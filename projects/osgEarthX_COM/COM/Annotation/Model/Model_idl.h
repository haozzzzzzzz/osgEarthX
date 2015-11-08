#ifndef OSGEARTHX_COM_MODEL_IDL_H
#define OSGEARTHX_COM_MODEL_IDL_H 1

#include <COM/EarthObject/IEarthObject_idl.h>

#include <COM/Basis/GeoData/GeoPoint/GeoPoint_idl.h>

const INT IModelIdsCount = 2;
const INT IModelBeginId = IEarthObjectBeginId + IEarthObjectIdsCount;

[
	object,
	uuid(D7B08885-2188-420D-B626-A54BA559A334),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IModel : IEarthObject{
	[ id( IModelBeginId + 1 ), helpstring( "set model path" ) ] HRESULT setModelPath( [ in ] BSTR bstrModelPath );
	[ id( IModelBeginId + 2 ), helpstring( "set model position" ) ] HRESULT setPosition( [ in ] IGeoPoint* pIGeoPoint );

};

#endif