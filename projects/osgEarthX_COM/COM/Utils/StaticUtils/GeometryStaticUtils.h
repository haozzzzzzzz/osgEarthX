#ifndef OSGEARTHX_COM_GEOMETRY_STATIC_UTILS_H
#define OSGEARTHX_COM_GEOMETRY_STATIC_UTILS_H 1

#include "osgEarthX_COM_i.h"

#include <osgEarthSymbology/Geometry>

class GeometryStaticUtils
{
public:

	/**
		根据ClassType创建对象，可提供初始化参数innerParams
		输出ppIDispatch
	*/
	static HRESULT createInstance( GeometryClassType classType, IDispatch** ppIDispatch, osgEarth::Symbology::Geometry* pGeometry = NULL );

	/**
		获取不同IGeometry实现类内部的osgEarth::Symbology::Geometry
	*/
	static osgEarth::Symbology::Geometry* getInnerObject( IGeometry* pIGeometry, bool bCreateIfNull = false );

protected:
private:
};

#endif