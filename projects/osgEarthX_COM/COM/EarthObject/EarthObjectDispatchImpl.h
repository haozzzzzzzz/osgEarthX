/**
	@brief 实现IEarthObjectDispatch接口的部分方法。
	@author Hao Luo
	@date 2015/03/25
*/
#ifndef OSGEARTHX_COM_EARTH_OBJECT_DISPATCH_IMPL_H
#define OSGEARTHX_COM_EARTH_OBJECT_DISPATCH_IMPL_H 1

#include <COM/Earth/RefEarthDispatchImpl.h>

#define EarthObjectRefEarthDispatchImplTemplate RefEarthDispatchImpl< EarthObjectClassType, T_InnerClass, T_ImplClass, T_IDispatch,rclsid, riid, pUnkOuter, dwClsContext, plibid, wMajor, wMinor, tihclass >
template
	< 
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
class ATL_NO_VTABLE EarthObjectDispatchImpl : 
	public EarthObjectRefEarthDispatchImplTemplate
{
public:
	EarthObjectDispatchImpl( EarthObjectClassType classType ) : 
		EarthObjectRefEarthDispatchImplTemplate( classType )
	{

	}

	EarthObjectDispatchImpl( const EarthObjectDispatchImpl& disp ) : 
		EarthObjectRefEarthDispatchImplTemplate( disp )
	{
	}

	//IEarthDispatch
	STDMETHOD( get_classType )( EarthObjectClassType* pEarthObjectClassType )
	{
		*pEarthObjectClassType = m_ClassType;
		return S_OK;
	}

	//IEarthObject
	STDMETHOD( put_visible )( VARIANT_BOOL ifVisible )
	{
		getOrCreateInnerObject()->setVisible( ifVisible == VARIANT_TRUE );
		return S_OK;
	}

	STDMETHOD( get_visible )( VARIANT_BOOL* pIfVisible )
	{
		*pIfVisible = getOrCreateInnerObject()->isVisible();
		return S_OK;
	}

	STDMETHOD( get_enabled )( VARIANT_BOOL* pIfEnabled )
	{
		*pIfEnabled = getOrCreateInnerObject()->isEnabled();
		return S_OK;
	}

protected:
private:
};

#endif