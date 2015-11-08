#ifndef OSGEARTHX_COM_LINEAR_IDL_H
#define OSGEARTHX_COM_LINEAR_IDL_H 1

#include <COM/Earth/IEarthDispatch_idl.h>

#include <COM/Basis/Units/UnitsType_idl.h>

const INT ILinearIdsCount = 1;
const INT ILinearBeginId = IEarthDispatchBeginId + IEarthDispatchIdsCount;

[
	object,
	uuid(185B69E3-4C29-4DF1-8080-8419CCD1E216),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ILinear : IEarthDispatch{
	[ id( ILinearBeginId + 1 ), helpstring("set linear value") ] HRESULT set( [ in ] DOUBLE dValue, [ in ] UnitsType eUnitsType );
};

#endif