/**
	@brief 配合IEarthDispatch使用的类
	@author Hao Luo
	@date 2015/01/25
*/

#ifndef OSGEARTHX_WEB_REF_EARTH_DISPATCH_IMPL_H
#define OSGEARTHX_WEB_REF_EARTH_DISPATCH_IMPL_H 1

#include <EarthWeb/Earth/IEarthDispatch.h>

#include <osg/ref_ptr>
template
	<
		class T_ClassType,
		class T_InnerClass
	>
class RefEarthDispatch
{
public:
	RefEarthDispatch( T_ClassType classType ) : m_ClassType( classType )
	{
	}

	RefEarthDispatch( const RefEarthDispatch& disp ) : m_ClassType( disp.m_ClassType )
	{
		m_refInnerObject = disp.m_refInnerObject;
	}

	virtual ~RefEarthDispatch()
	{

	}

	T_InnerClass* getInnerObject()
	{
		return m_refInnerObject;
	}

	virtual void setInnerObject( T_InnerClass* pObject )
	{
		m_refInnerObject = pObject;
	}

	T_InnerClass* getOrCreateInnerObject()
	{
		if ( m_refInnerObject.get() == 0 )
		{
			setInnerObject( new T_InnerClass() );
		}

		return m_refInnerObject;
	}

protected:
	const T_ClassType m_ClassType;
	osg::ref_ptr<T_InnerClass> m_refInnerObject;
};

template
	< 
		class T_ClassType,//类型枚举
		class T_InnerClass, //内部对象类
		class T_ImplClass, //实现T_IDispatch的类
		class T_IDispatch // IEarthDispatch子类
	>
class RefEarthDispatchImpl : 
	public RefEarthDispatch< T_ClassType, T_InnerClass >,
	public T_IDispatch
{
public:
	RefEarthDispatchImpl( T_ClassType classType ) : RefEarthDispatch< T_ClassType, T_InnerClass >( classType ){}
	RefEarthDispatchImpl( const RefEarthDispatchImpl& impl ) : RefEarthDispatch< T_ClassType, T_InnerClass >( impl ){}

	//T_IDispatch
	virtual bool equal( IEarthDispatchPtr ptr )
	{
		boost::shared_ptr< T_ImplClass > pImplClass = boost::dynamic_pointer_cast< T_ImplClass >( ptr );
		if ( pImplClass.get() == NULL )
		{
			return false;
		}

		return pImplClass->getInnerObject() == this->getInnerObject();
	}

private:
};

#endif