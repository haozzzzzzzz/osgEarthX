/**
	@brief static utils for units
	@author Hao Luo
	@date 2015/10/29
*/

#ifndef OSGEARTHX_COM_UNITS_STATIC_UTILS_H
#define OSGEARTHX_COM_UNITS_STATIC_UTILS_H 1

#include "osgEarthX_COM_i.h"

class UnitsStaticUtils
{
public:
	static HRESULT createInstance( UnitClassType classType, IDispatch** ppIDispatch, void* innerParams = NULL );

protected:
private:
};

#endif