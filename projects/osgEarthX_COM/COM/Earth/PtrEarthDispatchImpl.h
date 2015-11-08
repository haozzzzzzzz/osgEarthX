/**
	@brief ConfigOptions派生类的接口实现
	@author Hao Luo
	@date 2015/03/23
*/

#ifndef OSGEARTHX_COM_PTR_EARTH_DISPATCH_IMPL_H
#define OSGEARTHX_COM_PTR_EARTH_DISPATCH_IMPL_H 1

#include <COM/Earth/EarthDispatchImpl.h>

#define EarthDispatchTemplate EarthDispatch< T_InnerClass, T_ImplClass, T_IDispatch, rclsid, riid, pUnkOuter, dwClsContext >

template
	< 
		class T_ClassType,
		class T_InnerClass,
		class T_ImplClass,//实现T_IDispatch的类
		class T_IDispatch,//IDispatch接口, T_IDispatch必须继承自IEarthDispatch
		REFCLSID rclsid,//类ID
		REFIID riid,//接口ID
		LPUNKNOWN pUnkOuter = NULL,
		DWORD dwClsContext = CLSCTX_INPROC_SERVER
	>
class PtrEarthDispatch : public EarthDispatchTemplate
{

public:
	static HRESULT createEarthDispatchInstance( IDispatch** ppIDispatch, T_InnerClass* pInnerObject = NULL )
	{
		HRESULT hr = S_FALSE;
		hr = EarthDispatchTemplate::createEarthDispatchInstance( ppIDispatch );
		if ( SUCCEEDED( hr ) && pInnerObject )
		{
			T_ImplClass* pDispatchInstance = dynamic_cast< T_ImplClass* >( *ppIDispatch );
			* ( pDispatchInstance->getOrCreateInnerObject() ) = * pInnerObject;//值复制
		}
		return hr;
	}

protected:
	T_ClassType m_ClassType;
	T_InnerClass* m_pInnerObject;

public:
	PtrEarthDispatch( T_ClassType classType )
	{
		m_ClassType = classType;
		m_pInnerObject = NULL;
	}

	virtual ~PtrEarthDispatch()
	{
		delete m_pInnerObject;
	}

	T_InnerClass* getInnerObject()
	{
		return m_pInnerObject;
	}

	T_InnerClass* getOrCreateInnerObject()
	{
		if ( m_pInnerObject == NULL )
		{
			m_pInnerObject = new T_InnerClass();
		}
		return m_pInnerObject;
	}
};

#define PtrEarthDispatchTemplate PtrEarthDispatch< T_ClassType, T_InnerClass, T_ImplClass, T_IDispatch, rclsid, riid, pUnkOuter, dwClsContext >
template
	< 
		class T_ClassType,//类型枚举
		class T_InnerClass,//内部类型
		class T_ImplClass,//实现T_IDispatch的类
		class T_IDispatch,//IDispatch接口, T_IDispatch必须继承自IEarthDispatch

		/**
			创建接口对象模板参数
		*/
		REFCLSID rclsid,//类ID
		REFIID riid,//接口ID
		LPUNKNOWN pUnkOuter = NULL,
		DWORD dwClsContext = CLSCTX_INPROC_SERVER,

		/**
			创建接口类模板参数
		*/
		const GUID* plibid = &CAtlModule::m_libid, 
		WORD wMajor = 1,
		WORD wMinor = 0,
		class tihclass = CComTypeInfoHolder
	>
class ATL_NO_VTABLE PtrEarthDispatchImpl :
	public PtrEarthDispatchTemplate,
	public EarthDispatchImpl< T_IDispatch, &riid, plibid, wMajor, wMinor, tihclass >
{
public:
	PtrEarthDispatchImpl( T_ClassType classType ) : PtrEarthDispatchTemplate( classType )
	{

	}

	virtual ~PtrEarthDispatchImpl(){}

	//IEarthDispatch
	STDMETHOD( equal )( IEarthDispatch *pIEarthDispatch, VARIANT_BOOL *pIfEqual )
	{
		T_ImplClass* pImpClass = static_cast< T_ImplClass* >( pIEarthDispatch );
		*pIfEqual = VARIANT_FALSE;
		if ( pImpClass && pImpClass->getInnerObject() == this->getInnerObject() )
		{
			*pIfEqual = VARIANT_TRUE;
		}

		return S_OK;
	}

protected:
private:
};

#endif