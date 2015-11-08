/**
	@brief æ≤Ã¨π§æﬂ¿‡
	@author Hao Luo
	@date 2015/03/23
*/

#ifndef EARTH_STATIC_UTILS_H
#define EARTH_STATIC_UTILS_H 1

#include "osgEarthX_COM_i.h"

class EarthStaticUtils
{
public:
	static HRESULT createInstance( EarthClassType classType, IDispatch** ppIDispatch, void* innerParams = NULL);

protected:
private:
};

#endif