/**
	@brief 地理数据对象静态工具类
	@author Hao Luo
	@date 2015/04/13
*/

#ifndef OSGEARTHX_COM_GEO_STATIC_UTILS_H
#define OSGEARTHX_COM_GEO_STATIC_UTILS_H 1

#include "osgEarthX_COM_i.h"

class GeoStaticUtils
{
public:
	static HRESULT createInstance( GeoClassType classType, IDispatch** ppIDispatch, void* innerParams = NULL );

protected:
private:
};

#endif