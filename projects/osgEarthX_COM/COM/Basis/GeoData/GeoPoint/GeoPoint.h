// GeoPoint.h : CGeoPoint 的声明

#pragma once
#include "resource.h"       // 主符号



#include "osgEarthX_COM_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
#endif

using namespace ATL;

#include <COM/Earth/PtrEarthDispatchImpl.h>
#include <osgEarth/GeoData>

class CGeoPoint;
// CGeoPoint
typedef 
	PtrEarthDispatchImpl
	< 
	GeoClassType, 
	osgEarth::GeoPoint, 
	CGeoPoint, 
	IGeoPoint, 

	CLSID_GeoPoint,
	IID_IGeoPoint, 
	NULL, 
	CLSCTX_INPROC_SERVER,

	&LIBID_osgEarthX_COMLib, 
	/*wMajor =*/ 1, 
	/*wMinor =*/ 0
	> 
	IGeoPointDispatchImpl;

class ATL_NO_VTABLE CGeoPoint :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CGeoPoint, &CLSID_GeoPoint>,
	public ISupportErrorInfo,
	public IGeoPointDispatchImpl
{
public:
	STDMETHOD( put_x )( DOUBLE dX );
	STDMETHOD( get_x )( DOUBLE *pX );
	STDMETHOD( put_y )( DOUBLE dY );
	STDMETHOD( get_y )( DOUBLE *pY );
	STDMETHOD( put_z )( DOUBLE dZ );
	STDMETHOD( get_z )( DOUBLE *pZ );
	STDMETHOD( put_srs )( ISpatialReference* pISpatialReference );
	STDMETHOD( get_srs )( ISpatialReference** ppISpatialReference );

public:
	CGeoPoint() : IGeoPointDispatchImpl( GEO_CLASS_GEO_POINT )
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_GEOPOINT)


BEGIN_COM_MAP(CGeoPoint)
	COM_INTERFACE_ENTRY(IGeoPoint)
	COM_INTERFACE_ENTRY(IEarthDispatch)
	COM_INTERFACE_ENTRY2(IDispatch, IGeoPoint)
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

OBJECT_ENTRY_AUTO(__uuidof(GeoPoint), CGeoPoint)
