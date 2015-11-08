// ImageSurfaceLayer.h : CImageSurfaceLayer 的声明

#pragma once
#include "resource.h"       // 主符号



#include "osgEarthX_COM_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
#endif

using namespace ATL;

//osgEarthX_COM
#include <COM/EarthObject/EarthObjectDispatchImpl.h>
#include <COm/Layer/ImageSurfaceLayer/IDispImageSurfaceLayerEvents_CP.h>
//osgEarthX
#include <Layer/ImageSurfaceLayer.h>

// CImageSurfaceLayer
class CImageSurfaceLayer;
typedef 
	EarthObjectDispatchImpl
	< 
	osgEarthX::ImageSurfaceLayer, 
	CImageSurfaceLayer, 
	IImageSurfaceLayer, 

	CLSID_ImageSurfaceLayer,
	IID_IImageSurfaceLayer, 
	NULL, 
	CLSCTX_INPROC_SERVER,

	&LIBID_osgEarthX_COMLib, 
	/*wMajor =*/ 1, 
	/*wMinor =*/ 0 
	> 
	IImageSurfaceLayerDispatchImpl;

class ATL_NO_VTABLE CImageSurfaceLayer :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CImageSurfaceLayer, &CLSID_ImageSurfaceLayer>,
	public ISupportErrorInfo,
	public IImageSurfaceLayerDispatchImpl,
	public IConnectionPointContainerImpl<CImageSurfaceLayer>,
	public CProxyIDispImageSurfaceLayerEvents<CImageSurfaceLayer>
{
public:
	//IImageSurfaceLayer
	STDMETHOD( put_tileSource )( ITileSourceDispatch* pITileSourceDispatch );

public:
	CImageSurfaceLayer();
	CImageSurfaceLayer(const CImageSurfaceLayer&imageSurfaceLayer);
	virtual ~CImageSurfaceLayer();

DECLARE_REGISTRY_RESOURCEID(IDR_IMAGESURFACELAYER)


BEGIN_COM_MAP(CImageSurfaceLayer)
	COM_INTERFACE_ENTRY(IImageSurfaceLayer)
	COM_INTERFACE_ENTRY(ILayer)
	COM_INTERFACE_ENTRY(IEarthObject)
	COM_INTERFACE_ENTRY(IEarthDispatch)
	COM_INTERFACE_ENTRY2(IDispatch,IImageSurfaceLayer)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CImageSurfaceLayer)
	CONNECTION_POINT_ENTRY(__uuidof(IDispImageSurfaceLayerEvents))
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

OBJECT_ENTRY_AUTO(__uuidof(ImageSurfaceLayer), CImageSurfaceLayer)
