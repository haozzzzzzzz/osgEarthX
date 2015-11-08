/**
	@brief Earth及其相关类的静态工具
	@author Hao Luo
	@date 2015/03/26
*/

#ifndef OSGEARTHX_WEB_EARTH_STATIC_UTILS_H
#define OSGEARTHX_WEB_EARTH_STATIC_UTILS_H 1

#include "JSAPIAuto.h"
#include <EarthWeb/Earth/EarthClassType.h>

class EarthStaticUtils
{
public:
	static FB::JSAPIPtr createInstance( EarthClassType classType, void* innerParams = NULL );
};

#endif