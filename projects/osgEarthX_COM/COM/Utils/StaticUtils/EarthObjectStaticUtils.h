/**
	@brief 内部EarthObject相关类静态工具类
	@author Hao Luo
	@date 2014/11/26
*/

#ifndef EARTH_OBJECT_STATIC_UTILS_H
#define EARTH_OBJECT_STATIC_UTILS_H 1

#include "osgEarthX_COM_i.h"

//osgEarthX
#include <Object/Object.h>

class EarthObjectStaticUtils
{
public:

	/**
		根据ClassType创建对象，可提供初始化参数innerParams
		输出ppIDispatch
	*/
	static HRESULT createInstance( EarthObjectClassType classType, IDispatch** ppIDispatch, osgEarthX::Object* pInnerObject = NULL );

	/**
		获取不同IEarthObject实现类内部的osgEarthX::Object
	*/
	static osgEarthX::Object* getInnerObject( IEarthObject* pIEarthObject, bool bCreateIfNull = false );

protected:
private:
};
#endif