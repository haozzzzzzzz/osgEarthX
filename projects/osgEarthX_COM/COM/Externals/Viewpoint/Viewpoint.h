// Viewpoint.h : CViewpoint 的声明

#pragma once
#include "resource.h"       // 主符号



#include "osgEarthX_COM_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
#endif

using namespace ATL;

#include <COM/EarthObject/EarthObjectDispatchImpl.h>

//osgEarthX
#include <Externals/Viewpoint.h>

// CViewpoint
class CViewpoint;
typedef 
	EarthObjectDispatchImpl
	< 
	osgEarthX::Viewpoint, 
	CViewpoint, 
	IViewpoint, 

	CLSID_Viewpoint,
	IID_IViewpoint, 
	NULL, 
	CLSCTX_INPROC_SERVER,

	&LIBID_osgEarthX_COMLib, 
	/*wMajor =*/ 1, 
	/*wMinor =*/ 0 
	> 
	IViewpointDispatchImpl;

class ATL_NO_VTABLE CViewpoint :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CViewpoint, &CLSID_Viewpoint>,
	public ISupportErrorInfo,
	public IViewpointDispatchImpl
{
public:
	//IViewpoint
	STDMETHOD( flyTo )( void );

	STDMETHOD( get_x )( DOUBLE* pX );
	STDMETHOD( put_x )( DOUBLE _x );

	STDMETHOD( get_y )( DOUBLE* pY );
	STDMETHOD( put_y )( DOUBLE _y);

	STDMETHOD( get_z )( DOUBLE* pZ );
	STDMETHOD( put_z )( DOUBLE _z );

	STDMETHOD( get_heading )( DOUBLE* pHeading );
	STDMETHOD( put_heading )( DOUBLE _heading );

	STDMETHOD( get_pitch )( DOUBLE* pPitch );
	STDMETHOD( put_pitch )( DOUBLE _pitch );

	STDMETHOD( get_range )( DOUBLE* pRange );
	STDMETHOD( put_range )( DOUBLE _range );

public:
	CViewpoint();
	CViewpoint( const CViewpoint& viewpoint );
	~CViewpoint();

DECLARE_REGISTRY_RESOURCEID(IDR_VIEWPOINT)


BEGIN_COM_MAP(CViewpoint)
	COM_INTERFACE_ENTRY(IViewpoint)
	COM_INTERFACE_ENTRY(IEarthObject)
	COM_INTERFACE_ENTRY(IEarthDispatch)
	COM_INTERFACE_ENTRY2(IDispatch, IViewpoint)
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

OBJECT_ENTRY_AUTO(__uuidof(Viewpoint), CViewpoint)
