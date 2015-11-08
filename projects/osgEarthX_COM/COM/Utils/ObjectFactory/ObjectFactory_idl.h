#ifndef OBJECT_FACTORY_IDL_H
#define OBJECT_FACTORY_IDL_H 1

#include <COM/Earth/EarthClassType_idl.h>
#include <COM/EarthObject/EarthObjectClassType_idl.h>
#include <COM/Source/SourceClassType_idl.h>
#include <COM/Basis/GeoData/GeoClassType_idl.h>

const INT IObjectFactoryIdsCount = 5;
const INT IObjectFactoryBeginId = 0;

[
	object,
	uuid(6BA1D54B-F2A8-48FF-AC76-BF786273E1A2),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IObjectFactory : IDispatch{
	[ id( IObjectFactoryBeginId + 1 ), helpstring( "根据EarthObjectClassType接口ID创建接口对象" ) ] HRESULT createByEarthObjectClassType( [ in ] EarthObjectClassType classType, [ out, retval ] IDispatch**ppIDispatch );
	[ id( IObjectFactoryBeginId + 2 ), helpstring( "根据EarthClassType接口ID创建接口对象" ) ] HRESULT createByEarthClassType( [ in ] EarthClassType classType, [ out, retval ] IDispatch**ppIDispatch );
	[ id( IObjectFactoryBeginId + 3 ), helpstring( "根据DSourceClassType创建接口对象" ) ] HRESULT createBySourceClassType( [ in ] SourceClassType classType, [ out, retval ] IDispatch** ppIDispatch );
	[ id( IObjectFactoryBeginId + 4 ), helpstring( "create instance by GeoClassType" ) ] HRESULT createByGeoClassType( [ in ] GeoClassType classType, [ out, retval ] IDispatch** ppIDisaptch );
	[ id( IObjectFactoryBeginId + 5 ), helpstring( "create instance by UnitClassType" ) ] HRESULT createByUnitClassType( [ in ] UnitClassType classType, [ out, retval ] IDispatch** ppIDispatch );
};

#endif