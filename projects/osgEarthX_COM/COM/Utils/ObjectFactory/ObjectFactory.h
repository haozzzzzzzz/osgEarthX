// ObjectFactory.h : CObjectFactory 的声明

#pragma once
#include "resource.h"       // 主符号



#include "osgEarthX_COM_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
#endif

using namespace ATL;


// CObjectFactory

class ATL_NO_VTABLE CObjectFactory :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CObjectFactory, &CLSID_ObjectFactory>,
	public ISupportErrorInfo,
	public IDispatchImpl<IObjectFactory, &IID_IObjectFactory, &LIBID_osgEarthX_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	STDMETHOD( createByEarthObjectClassType )( EarthObjectClassType classType, IDispatch**ppIDispatch );
	STDMETHOD( createByEarthClassType )( EarthClassType classType, IDispatch**ppIDispatch );
	STDMETHOD( createBySourceClassType )( SourceClassType classType, IDispatch** ppIDispatch );
	STDMETHOD( createByGeoClassType )( GeoClassType classType, IDispatch **ppIDisaptch );
	STDMETHOD( createByUnitClassType )( UnitClassType classType, IDispatch** ppIDispatch );

public:
	CObjectFactory()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_OBJECTFACTORY)


BEGIN_COM_MAP(CObjectFactory)
	COM_INTERFACE_ENTRY(IObjectFactory)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



};

OBJECT_ENTRY_AUTO(__uuidof(ObjectFactory), CObjectFactory)
