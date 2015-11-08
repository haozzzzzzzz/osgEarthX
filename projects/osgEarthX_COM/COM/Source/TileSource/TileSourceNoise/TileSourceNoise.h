// TileSourceNoise.h : CTileSourceNoise 的声明

#pragma once
#include "resource.h"       // 主符号



#include "osgEarthX_COM_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
#endif

using namespace ATL;

#include <COM/Source/SourceDispatchImpl.h>
#include <osgEarthDrivers/noise/NoiseOptions>

// CTileSourceNoise
class CTileSourceNoise;
typedef 
	SourceDispatchImpl
	< 
	osgEarth::Drivers::Noise::NoiseOptions, 
	CTileSourceNoise, 
	ITileSourceNoise, 

	CLSID_TileSourceNoise,
	IID_ITileSourceNoise, 
	NULL, 
	CLSCTX_INPROC_SERVER,

	&LIBID_osgEarthX_COMLib, 
	/*wMajor =*/ 1, 
	/*wMinor =*/ 0 
	> 
	ITileSourceNoiseDispatchImpl;

class ATL_NO_VTABLE CTileSourceNoise :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CTileSourceNoise, &CLSID_TileSourceNoise>,
	public ISupportErrorInfo,
	public ITileSourceNoiseDispatchImpl
{
public:
	//ITileSourceNoise
	STDMETHOD( put_resolution )( DOUBLE dResolution );
	STDMETHOD( put_scale )( DOUBLE dScale );
	STDMETHOD( put_bias )( DOUBLE dBias );
	STDMETHOD( put_octaves )( INT iOctaves );
	STDMETHOD( put_frequency )( DOUBLE dFrequency );
	STDMETHOD( put_persistence )( DOUBLE dPersistence );
	STDMETHOD( put_lacunarity )( DOUBLE dLacunarity );
	STDMETHOD( put_seed )( INT iSeed );
	STDMETHOD( put_normalMap )( VARIANT_BOOL bNormalMap );
	STDMETHOD( put_minElevation )( FLOAT fMinElevation );
	STDMETHOD( put_maxElevation )( FLOAT fMaxElevation );

public:
	CTileSourceNoise() : ITileSourceNoiseDispatchImpl( TILE_SOURCE_NOISE )
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_TILESOURCENOISE)


BEGIN_COM_MAP(CTileSourceNoise)
	COM_INTERFACE_ENTRY(ITileSourceNoise)
	COM_INTERFACE_ENTRY(ITileSourceDispatch)
	COM_INTERFACE_ENTRY(ISourceDispatch)
	COM_INTERFACE_ENTRY(IEarthDispatch)
	COM_INTERFACE_ENTRY2(IDispatch, ITileSourceNoise)
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

OBJECT_ENTRY_AUTO(__uuidof(TileSourceNoise), CTileSourceNoise)
