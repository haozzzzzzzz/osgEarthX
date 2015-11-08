/**
	@brief 配合IEarthDispatch使用的类
	@author Hao Luo
	@date 2015/03/31
*/

#ifndef OSGEARTHX_COM_EARTH_DISPATCH_IMPL_H
#define OSGEARTHX_COM_EARTH_DISPATCH_IMPL_H 1

#include "stdafx.h"
#include "osgEarthX_COM_i.h"

//与IEarthDispatch实现类对应的内部类的基类模板
//可访问接口内部的osgEarth对象
/**
	获取IEarthDispatch实现类的内部对象
	T_ImplClassType为IEarthDispatch派生接口的实现类类型
	T_IDispatch为COM接口
	T_InnerClass为内部实际osgEarthX或者osgEarth对象的类型
*/
template
	< 
		class T_InnerClass, 
		class T_ImplClassType, 
		class T_IDispatch,
		REFCLSID rclsid,//类ID
		REFIID riid,//接口ID
		LPUNKNOWN pUnkOuter = NULL,
		DWORD dwClsContext = CLSCTX_INPROC_SERVER
	>
class EarthDispatch
{
public:
	static HRESULT createEarthDispatchInstance( IDispatch** ppIDispatch )
	{
		return CoCreateInstance( rclsid, pUnkOuter, dwClsContext, riid, ( void** ) ppIDispatch );
	}

	//静态类
	//通过接口访问接口实现类的内部实际对象
	static T_InnerClass* getEarthDispatchInnerObject( IDispatch* pIEarthDispatch, bool ifCreate = false )
	{
		T_ImplClassType* pEarthDispatchObject = dynamic_cast< T_ImplClassType * >( pIEarthDispatch );
		if( pEarthDispatchObject != NULL )
		{
			if( ifCreate )
			{
				return pEarthDispatchObject->getOrCreateInnerObject();
			}
			else
			{
				return pEarthDispatchObject->getInnerObject();
			}
		}

		return NULL;
	}

protected:
private:
};

template
	<
		class T_IDispatch,//IDispatch接口, T_IDispatch必须继承自IEarthDispatch
		const IID* piid = &__uuidof(T),
		const GUID* plibid = &CAtlModule::m_libid, 
		WORD wMajor = 1,
		WORD wMinor = 0,
		class tihclass = CComTypeInfoHolder
	>
class ATL_NO_VTABLE EarthDispatchImpl :
	public IDispatchImpl< T_IDispatch, piid, plibid, wMajor, wMinor, tihclass >
{
private:
	INT m_iData;

public:
	EarthDispatchImpl()
	{
		m_iData = 0;
	}

	virtual ~EarthDispatchImpl()
	{

	}

public:
	STDMETHOD( get_data )( INT* piData )
	{
		*piData = m_iData;
		return S_OK;
	}

	STDMETHOD( put_data )( INT iData )
	{
		m_iData = iData;
		return S_OK;
	}

protected:
private:
};

template
	<
		class T_ImplClass,//具体实现IDispatch的类
		class T_IDispatch//IDispatch接口, T_IDispatch必须继承自IEarthDispatch
	>
class ATL_NO_VTABLE EarthDispatchStockPropImpl :
	public CStockPropImpl< T_ImplClass, T_IDispatch >
{
private:
	INT m_iData;

public:
	EarthDispatchStockPropImpl()
	{
		m_iData = 0;
	}

	virtual ~EarthDispatchStockPropImpl()
	{

	}

public:
	STDMETHOD( get_data )( INT* piData )
	{
		*piData = m_iData;
		return S_OK;
	}

	STDMETHOD( put_data )( INT iData )
	{
		m_iData = iData;
		return S_OK;
	}

protected:
private:
};

#endif