// E:\OpenSceneGraph\osgEarthX\projects\osgEarthX_COM\COM\EarthViewer\EarthViewer.h : CEarthViewer 的声明

#pragma once
#include "resource.h"       // 主符号



#include "osgEarthX_COM_i.h"
#include "_IEarthViewerEvents_CP.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
#endif

using namespace ATL;

//osgEarthX
#include <EarthViewer/EarthViewer.h>

#include <COM/Earth/RefEarthDispatchImpl.h>

// CEarthViewer
class CEarthViewer;
typedef 
	RefEarthDispatchImpl
	< 
	EarthClassType, 
	osgEarthX::EarthViewer, 
	CEarthViewer, 
	IEarthViewer, 

	CLSID_EarthViewer,
	IID_IEarthViewer, 
	NULL, 
	CLSCTX_INPROC_SERVER,

	&LIBID_osgEarthX_COMLib, 
	/*wMajor =*/ 1, 
	/*wMinor =*/ 0 
	> 
	IEarthViewerDispatchImpl;

class ATL_NO_VTABLE CEarthViewer :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CEarthViewer, &CLSID_EarthViewer>,
	public ISupportErrorInfo,
	public IConnectionPointContainerImpl<CEarthViewer>,
	public CProxy_IEarthViewerEvents<CEarthViewer>,
	public IEarthViewerDispatchImpl
{
public:
	CEarthViewer();
	CEarthViewer(const CEarthViewer&earthViewer);

DECLARE_REGISTRY_RESOURCEID(IDR_EARTHVIEWER)


BEGIN_COM_MAP(CEarthViewer)
	COM_INTERFACE_ENTRY(IEarthViewer)
	COM_INTERFACE_ENTRY(IEarthDispatch)
	COM_INTERFACE_ENTRY2(IDispatch, IEarthViewer)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CEarthViewer)
	CONNECTION_POINT_ENTRY(__uuidof(_IEarthViewerEvents))
END_CONNECTION_POINT_MAP()
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

OBJECT_ENTRY_AUTO(__uuidof(EarthViewer), CEarthViewer)
