/**
	@brief EarthObject实现共同的接口
	@author Hao Luo
	@date 2015/03/26
*/

#ifndef OSGEARTHX_WEB_EARTH_OBJECT_DISPATCH_IMPL_H
#define OSGEARTHX_WEB_EARTH_OBJECT_DISPATCH_IMPL_H 1

#include <EarthWeb/Earth/RefEarthDispatchImpl.h>
#include <EarthWeb/EarthObject/EarthObjectClassType.h>

template
	<
		class T_InnerClass, //内部对象类
		class T_ImplClass, //实现T_IDispatch的类
		class T_IDispatch // IEarthObjectDispatch子类
	>
class EarthObjectDispatchImpl : public RefEarthDispatchImpl< EarthObjectClassType, T_InnerClass, T_ImplClass, T_IDispatch >
{
public:
	EarthObjectDispatchImpl( EarthObjectClassType classType ) : RefEarthDispatchImpl< EarthObjectClassType, T_InnerClass, T_ImplClass, T_IDispatch >( classType )
	{
	}

	EarthObjectDispatchImpl( const EarthObjectDispatchImpl& disp ) : RefEarthDispatchImpl< EarthObjectClassType, T_InnerClass, T_ImplClass, T_IDispatch >( disp )
	{
	}

	virtual ~EarthObjectDispatchImpl()
	{

	}

	virtual EarthObjectClassType get_classType()
	{
		return m_ClassType;
	}

protected:
private:
};

#endif