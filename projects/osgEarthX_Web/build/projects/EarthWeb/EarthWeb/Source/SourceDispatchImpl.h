/**
	@brief 数据接口实现模板
	@author Hao Luo
	@date 2015/03/27
*/

#ifndef OSGEARTHX_WEB_SOURCE_DISPATCH_IMPL_H
#define OSGEARTHX_WEB_SOURCE_DISPATCH_IMPL_H 1

#include <EarthWeb/Earth/PtrEarthDispatchImpl.h>
#include <EarthWeb/Source/SourceClassType.h>

template
	<
		class T_InnerClass, //内部对象类
		class T_ImplClass, //实现T_IDispatch的类
		class T_IDispatch // ISourceDispatch子类
	>
class SourceDispatchImpl : 
	public PtrEarthDispatchImpl< SourceClassType, T_InnerClass, T_ImplClass, T_IDispatch >
{
public:
	SourceDispatchImpl( SourceClassType classType ) : PtrEarthDispatchImpl< SourceClassType, T_InnerClass, T_ImplClass, T_IDispatch >( classType ){}
	virtual ~SourceDispatchImpl(){}

	virtual SourceClassType get_classType()
	{
		return m_ClassType;
	}

protected:
private:
};

#endif