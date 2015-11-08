/*
	@brief æ≤Ã¨π§æﬂ¿‡
	@author Hao Luo
	@date 2014/11/27
*/

#ifndef OSGEARTHX_WEB_EARTH_OBJECT_STATIC_UTILS_H
#define OSGEARTHX_WEB_EARTH_OBJECT_STATIC_UTILS_H 1

#include <EarthWeb/EarthObject/IEarthObject.h>
#include <EarthWeb/EarthObject/EarthObjectClassType.h>
#include <Object/Object.h>

class EarthObjectStaticUtils
{
public:
	static IEarthObjectPtr createInstance( EarthObjectClassType classType, void* innerParams = NULL );

	static osgEarthX::Object* getInnerObject( IEarthObject* pIEarthObject, bool bCreateIfNull = false );

protected:
private:
};

#endif