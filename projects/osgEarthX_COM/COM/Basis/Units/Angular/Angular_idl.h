#ifndef OSGEARTHX_COM_ANGULAR_IDL_H
#define OSGEARTHX_COM_ANGULAR_IDL_H 1

#include <COM/Earth/IEarthDispatch_idl.h>

#include <COM/Basis/Units/UnitsType_idl.h>

const INT IAngularIdsCount = 1;
const INT IAngularBeginId = IEarthDispatchBeginId + IEarthDispatchIdsCount;

[
	object,
	uuid(BC4518B2-2C77-492F-B26C-2523FEBF2FB3),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IAngular : IEarthDispatch{
	[ id( ILinearBeginId + 1 ), helpstring("set angular value") ] HRESULT set( [ in ] DOUBLE dValue, [ in ] UnitsType eUnitsType );
};

#endif