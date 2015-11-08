

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Sun Nov 08 21:23:10 2015
 */
/* Compiler settings for osgEarthX_COM.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "osgEarthX_COM_i.h"

#define TYPE_FORMAT_STRING_SIZE   1619                              
#define PROC_FORMAT_STRING_SIZE   6943                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _osgEarthX_COM_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } osgEarthX_COM_MIDL_TYPE_FORMAT_STRING;

typedef struct _osgEarthX_COM_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } osgEarthX_COM_MIDL_PROC_FORMAT_STRING;

typedef struct _osgEarthX_COM_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } osgEarthX_COM_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const osgEarthX_COM_MIDL_TYPE_FORMAT_STRING osgEarthX_COM__MIDL_TypeFormatString;
extern const osgEarthX_COM_MIDL_PROC_FORMAT_STRING osgEarthX_COM__MIDL_ProcFormatString;
extern const osgEarthX_COM_MIDL_EXPR_FORMAT_STRING osgEarthX_COM__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEarthDispatch_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEarthDispatch_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISpatialReference_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISpatialReference_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IGeoPoint_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IGeoPoint_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVec3d_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVec3d_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IGeometry_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IGeometry_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILinear_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILinear_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAngular_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAngular_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILineStringGeometry_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILineStringGeometry_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRingGeometry_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRingGeometry_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPolygonGeometry_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPolygonGeometry_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISourceDispatch_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISourceDispatch_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITileSourceDispatch_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITileSourceDispatch_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVectorSourceDispatch_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVectorSourceDispatch_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFeatureSourceDispatch_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFeatureSourceDispatch_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFeatureSourceOGR_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFeatureSourceOGR_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFeatureSourceTFS_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFeatureSourceTFS_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFeatureSourceWFS_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFeatureSourceWFS_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITileSourceAGGLite_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITileSourceAGGLite_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITileSourceArcGIS_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITileSourceArcGIS_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITileSourceBing_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITileSourceBing_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITileSourceColorRamp_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITileSourceColorRamp_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITileSourceDebug_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITileSourceDebug_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITileSourceGDAL_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITileSourceGDAL_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITileSourceMBTiles_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITileSourceMBTiles_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITileSourceNoise_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITileSourceNoise_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITileSourceOSG_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITileSourceOSG_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITileSourceTileCache_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITileSourceTileCache_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITileSourceTileService_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITileSourceTileService_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITileSourceTMS_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITileSourceTMS_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITileSourceVPB_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITileSourceVPB_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITileSourceWCS_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITileSourceWCS_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITileSourceWMS_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITileSourceWMS_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITileSourceXYZ_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITileSourceXYZ_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITileSourceYahoo_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITileSourceYahoo_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVectorSourceGeom_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVectorSourceGeom_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVectorSourceSimple_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVectorSourceSimple_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVectorSourceStencil_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVectorSourceStencil_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStyle_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStyle_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEarthObject_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEarthObject_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEarthGroup_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEarthGroup_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEarthViewer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEarthViewer_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEarthMap_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEarthMap_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISky_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISky_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IViewpoint_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IViewpoint_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IGraticule_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IGraticule_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEarthCtrl_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEarthCtrl_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEarthTreeCtrl_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEarthTreeCtrl_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILayer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILayer_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IImageSurfaceLayer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IImageSurfaceLayer_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVectorSurfaceLayer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVectorSurfaceLayer_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IElevationSurfaceLayer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IElevationSurfaceLayer_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPlace_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPlace_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IImageOverlay_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IImageOverlay_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ICircle_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ICircle_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFeaturePrimitive_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFeaturePrimitive_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IModel_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IModel_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITextLabel_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITextLabel_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRectanglePrimitive_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRectanglePrimitive_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEllipsePrimitive_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEllipsePrimitive_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IObjectFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IObjectFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IComponentRegistrar_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IComponentRegistrar_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const osgEarthX_COM_MIDL_PROC_FORMAT_STRING osgEarthX_COM__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure get_data */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter piData */

/* 24 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_data */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x8 ),	/* 8 */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	NdrFcShort( 0x8 ),	/* 8 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 52 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iData */

/* 60 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 66 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 68 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure equal */

/* 72 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x9 ),	/* 9 */
/* 80 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x22 ),	/* 34 */
/* 86 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 88 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIEarthDispatch */

/* 96 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 98 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 100 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter pIfEqual */

/* 102 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 106 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 110 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_x */

/* 114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0xa ),	/* 10 */
/* 122 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 124 */	NdrFcShort( 0x10 ),	/* 16 */
/* 126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 128 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 130 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dX */

/* 138 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 140 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 142 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 146 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_x */

/* 150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0xb ),	/* 11 */
/* 158 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x2c ),	/* 44 */
/* 164 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 166 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pX */

/* 174 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 178 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 180 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 182 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_scale */


	/* Procedure put_y */

/* 186 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0xc ),	/* 12 */
/* 194 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 196 */	NdrFcShort( 0x10 ),	/* 16 */
/* 198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 200 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 202 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dScale */


	/* Parameter dY */

/* 210 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 212 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 214 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 218 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_y */

/* 222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0xd ),	/* 13 */
/* 230 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x2c ),	/* 44 */
/* 236 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 238 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pY */

/* 246 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 248 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 250 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 254 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_z */

/* 258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0xe ),	/* 14 */
/* 266 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 268 */	NdrFcShort( 0x10 ),	/* 16 */
/* 270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 272 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 274 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dZ */

/* 282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 284 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 286 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 290 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_x */


	/* Procedure get_z */

/* 294 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0xf ),	/* 15 */
/* 302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x2c ),	/* 44 */
/* 308 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 310 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pX */


	/* Parameter pZ */

/* 318 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 320 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 322 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 324 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 326 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_srs */

/* 330 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x10 ),	/* 16 */
/* 338 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 342 */	NdrFcShort( 0x8 ),	/* 8 */
/* 344 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 346 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pISpatialReference */

/* 354 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 356 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 358 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 362 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_srs */

/* 366 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x11 ),	/* 17 */
/* 374 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 378 */	NdrFcShort( 0x8 ),	/* 8 */
/* 380 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 382 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppISpatialReference */

/* 390 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 392 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 394 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Return value */

/* 396 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 398 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure set */

/* 402 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 408 */	NdrFcShort( 0xa ),	/* 10 */
/* 410 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 412 */	NdrFcShort( 0x30 ),	/* 48 */
/* 414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 416 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 418 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 424 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dX */

/* 426 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 428 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 430 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dY */

/* 432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 434 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 436 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dZ */

/* 438 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 440 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 442 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 446 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_resolution */


	/* Procedure put_x */

/* 450 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 456 */	NdrFcShort( 0xb ),	/* 11 */
/* 458 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 460 */	NdrFcShort( 0x10 ),	/* 16 */
/* 462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 464 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 466 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dResolution */


	/* Parameter dX */

/* 474 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 476 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 478 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 482 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_x */

/* 486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 492 */	NdrFcShort( 0xc ),	/* 12 */
/* 494 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x2c ),	/* 44 */
/* 500 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 502 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pX */

/* 510 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 514 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_bias */


	/* Procedure put_y */

/* 522 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 528 */	NdrFcShort( 0xd ),	/* 13 */
/* 530 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 532 */	NdrFcShort( 0x10 ),	/* 16 */
/* 534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 536 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 538 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dBias */


	/* Parameter dY */

/* 546 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 548 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 550 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 554 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_y */

/* 558 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0xe ),	/* 14 */
/* 566 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 570 */	NdrFcShort( 0x2c ),	/* 44 */
/* 572 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 574 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pY */

/* 582 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 584 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 586 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 588 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 590 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_frequency */


	/* Procedure put_z */

/* 594 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0xf ),	/* 15 */
/* 602 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 604 */	NdrFcShort( 0x10 ),	/* 16 */
/* 606 */	NdrFcShort( 0x8 ),	/* 8 */
/* 608 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 610 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dFrequency */


	/* Parameter dZ */

/* 618 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 620 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 622 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 626 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_z */

/* 630 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0x10 ),	/* 16 */
/* 638 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0x2c ),	/* 44 */
/* 644 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 646 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pZ */

/* 654 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 656 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 658 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 662 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_classType */


	/* Procedure get_classType */


	/* Procedure get_classType */

/* 666 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0xa ),	/* 10 */
/* 674 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 678 */	NdrFcShort( 0x22 ),	/* 34 */
/* 680 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 682 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pEarthObjectClassType */


	/* Parameter pClassType */


	/* Parameter pClassType */

/* 690 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 692 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 694 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 698 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure push_back */

/* 702 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0xb ),	/* 11 */
/* 710 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 716 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 718 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIVec3d */

/* 726 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 728 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 730 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 732 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 734 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setGeometry */

/* 738 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0xa ),	/* 10 */
/* 746 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x8 ),	/* 8 */
/* 752 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 754 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIGeometry */

/* 762 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 764 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 766 */	NdrFcShort( 0x4c ),	/* Type Offset=76 */

	/* Return value */

/* 768 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 770 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure set */


	/* Procedure set */

/* 774 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 776 */	NdrFcLong( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0xa ),	/* 10 */
/* 782 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 784 */	NdrFcShort( 0x16 ),	/* 22 */
/* 786 */	NdrFcShort( 0x8 ),	/* 8 */
/* 788 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 790 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 796 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dValue */


	/* Parameter dValue */

/* 798 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 800 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 802 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter eUnitsType */


	/* Parameter eUnitsType */

/* 804 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 806 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 808 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 810 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 812 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RegisterComponent */


	/* Procedure put_url */


	/* Procedure put_fileName */


	/* Procedure put_url */


	/* Procedure put_url */


	/* Procedure put_url */

/* 816 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 822 */	NdrFcShort( 0xb ),	/* 11 */
/* 824 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 830 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 832 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 836 */	NdrFcShort( 0x1 ),	/* 1 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrCLSID */


	/* Parameter strUrl */


	/* Parameter bstrFileName */


	/* Parameter strUrl */


	/* Parameter strUrl */


	/* Parameter strUrl */

/* 840 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 842 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 844 */	NdrFcShort( 0x78 ),	/* Type Offset=120 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 846 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 848 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_url */


	/* Procedure get_url */


	/* Procedure get_url */


	/* Procedure get_url */

/* 852 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0xc ),	/* 12 */
/* 860 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 864 */	NdrFcShort( 0x8 ),	/* 8 */
/* 866 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 868 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 870 */	NdrFcShort( 0x1 ),	/* 1 */
/* 872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 874 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pUrl */


	/* Parameter pUrl */


	/* Parameter pUrl */


	/* Parameter pUrl */

/* 876 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 878 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 880 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 882 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 884 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_featureSource */


	/* Procedure put_featureSource */

/* 888 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 890 */	NdrFcLong( 0x0 ),	/* 0 */
/* 894 */	NdrFcShort( 0xb ),	/* 11 */
/* 896 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 902 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 904 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIFeatureSourceDispatch */


	/* Parameter pIFeatureSourceDispatch */

/* 912 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 914 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 916 */	NdrFcShort( 0x94 ),	/* Type Offset=148 */

	/* Return value */


	/* Return value */

/* 918 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 920 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnregisterComponent */


	/* Procedure put_format */

/* 924 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 926 */	NdrFcLong( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0xc ),	/* 12 */
/* 932 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 936 */	NdrFcShort( 0x8 ),	/* 8 */
/* 938 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 940 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 944 */	NdrFcShort( 0x1 ),	/* 1 */
/* 946 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrCLSID */


	/* Parameter bstrFormat */

/* 948 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 950 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 952 */	NdrFcShort( 0x78 ),	/* Type Offset=120 */

	/* Return value */


	/* Return value */

/* 954 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 956 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_computeLevels */

/* 960 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 962 */	NdrFcLong( 0x0 ),	/* 0 */
/* 966 */	NdrFcShort( 0xd ),	/* 13 */
/* 968 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 970 */	NdrFcShort( 0x6 ),	/* 6 */
/* 972 */	NdrFcShort( 0x8 ),	/* 8 */
/* 974 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 976 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 982 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bComputeLevels */

/* 984 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 986 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 988 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 990 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 992 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_BorderColor */


	/* Procedure put_octaves */

/* 996 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1002 */	NdrFcShort( 0xe ),	/* 14 */
/* 1004 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1006 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1008 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1010 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1012 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clr */


	/* Parameter iOctaves */

/* 1020 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1022 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1026 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1028 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_x */


	/* Procedure put_persistence */

/* 1032 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1040 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1042 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1044 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1046 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1048 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1054 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _x */


	/* Parameter dPersistence */

/* 1056 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1058 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1060 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1062 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1064 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_lacunarity */

/* 1068 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1074 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1076 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1078 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1080 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1082 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1084 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1090 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dLacunarity */

/* 1092 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1094 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1096 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 1098 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1100 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_BorderWidth */


	/* Procedure put_seed */

/* 1104 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1110 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1112 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1118 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1120 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1126 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter width */


	/* Parameter iSeed */

/* 1128 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1130 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1134 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1136 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_normalMap */

/* 1140 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1142 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1146 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1148 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1150 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1152 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1154 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1156 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bNormalMap */

/* 1164 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1166 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1168 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1172 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_minElevation */

/* 1176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1182 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1184 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1190 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1192 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fMinElevation */

/* 1200 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1202 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1204 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 1206 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1208 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_maxElevation */

/* 1212 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1218 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1220 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1222 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1226 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1228 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1234 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fMaxElevation */

/* 1236 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1238 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1240 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 1242 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1244 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_visible */

/* 1248 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1254 */	NdrFcShort( 0xb ),	/* 11 */
/* 1256 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1258 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1262 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1264 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ifVisible */

/* 1272 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1274 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1276 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1280 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_visible */

/* 1284 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0xc ),	/* 12 */
/* 1292 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1296 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1298 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1300 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1306 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIfVisible */

/* 1308 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1310 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1312 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1316 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_enabled */

/* 1320 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0xd ),	/* 13 */
/* 1328 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1332 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1334 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1336 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIfEnabled */

/* 1344 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1346 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1348 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1350 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1352 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addChild */

/* 1356 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1358 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1362 */	NdrFcShort( 0xe ),	/* 14 */
/* 1364 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1368 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1370 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1372 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1378 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIEarthObject */

/* 1380 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1382 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1384 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 1386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1388 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeChild */

/* 1392 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1398 */	NdrFcShort( 0xf ),	/* 15 */
/* 1400 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1406 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1408 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIEarthObject */

/* 1416 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1418 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1420 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 1422 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1424 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_BorderStyle */


	/* Procedure removeChildByPos */

/* 1428 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1434 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1436 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1438 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1440 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1442 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1444 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1450 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter style */


	/* Parameter uiPos */

/* 1452 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1454 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1458 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1460 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getChild */

/* 1464 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1466 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1470 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1472 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1476 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1478 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1480 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1486 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uiPos */

/* 1488 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1490 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppIEarthObject */

/* 1494 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1496 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1498 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Return value */

/* 1500 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1502 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getPosOfChild */

/* 1506 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1508 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1512 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1514 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1518 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1520 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1522 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1528 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIEarthObject */

/* 1530 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1532 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1534 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Parameter pPos */

/* 1536 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1538 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1542 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1544 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure moveChild */

/* 1548 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1554 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1556 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1558 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1562 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1564 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIEarthObject */

/* 1572 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1574 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1576 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Parameter uiNewPos */

/* 1578 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1580 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1584 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1586 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure moveChildFromCurPos */

/* 1590 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1596 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1598 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1600 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1602 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1604 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1606 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1612 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uiCurPos */

/* 1614 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1616 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter uiNewPos */

/* 1620 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1622 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1626 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1628 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DrawMode */


	/* Procedure getChildrenCount */

/* 1632 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1638 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1640 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1644 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1646 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1648 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pmode */


	/* Parameter pCount */

/* 1656 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1658 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1664 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeChildren */

/* 1668 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1674 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1676 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1680 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1682 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1684 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1690 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1692 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1694 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure insertChild */

/* 1698 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1700 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1704 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1706 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1710 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1712 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1714 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1720 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIEarthObject */

/* 1722 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1724 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1726 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Parameter uiInsertPos */

/* 1728 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1730 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1736 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_BackColor */


	/* Procedure put_maxThreadsNum */

/* 1740 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1746 */	NdrFcShort( 0xa ),	/* 10 */
/* 1748 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1750 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1754 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1756 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1762 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clr */


	/* Parameter uiNum */

/* 1764 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1766 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1770 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1772 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BackColor */


	/* Procedure get_maxThreadsNum */

/* 1776 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1778 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1782 */	NdrFcShort( 0xb ),	/* 11 */
/* 1784 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1788 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1790 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1792 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1798 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pclr */


	/* Parameter pUiNum */

/* 1800 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1802 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1806 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1808 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSRS */

/* 1812 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1818 */	NdrFcShort( 0xc ),	/* 12 */
/* 1820 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1826 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1828 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1834 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppISRS */

/* 1836 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1838 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1840 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Return value */

/* 1842 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1844 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_enableLighting */

/* 1848 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1850 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1854 */	NdrFcShort( 0xe ),	/* 14 */
/* 1856 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1860 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1862 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1864 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1870 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pEnableLighting */

/* 1872 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1874 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1876 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1878 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1880 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_enableLighting */

/* 1884 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1890 */	NdrFcShort( 0xf ),	/* 15 */
/* 1892 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1894 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1896 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1898 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1900 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1906 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ifEnable */

/* 1908 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1910 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1912 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1914 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1916 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ambient */

/* 1920 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1926 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1928 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1932 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1934 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1936 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1942 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pAmbient */

/* 1944 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1946 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1948 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 1950 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1952 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ambient */

/* 1956 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1958 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1962 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1964 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1966 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1968 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1970 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1972 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1978 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fAmbient */

/* 1980 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1982 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1984 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 1986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1988 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_hours */

/* 1992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1998 */	NdrFcShort( 0x12 ),	/* 18 */
/* 2000 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2006 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2008 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fHours */

/* 2016 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2018 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2020 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 2022 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2024 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_hours */

/* 2028 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2030 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2034 */	NdrFcShort( 0x13 ),	/* 19 */
/* 2036 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2040 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2042 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2044 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2050 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pHours */

/* 2052 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2054 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2056 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 2058 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2060 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure flyTo */

/* 2064 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2066 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2070 */	NdrFcShort( 0xe ),	/* 14 */
/* 2072 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2076 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2078 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2080 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2086 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2088 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2090 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_y */

/* 2094 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2096 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2100 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2102 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2106 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2108 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2110 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2116 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pY */

/* 2118 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2120 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2122 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2124 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2126 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_y */

/* 2130 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2136 */	NdrFcShort( 0x12 ),	/* 18 */
/* 2138 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2140 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2144 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2146 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2152 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _y */

/* 2154 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2156 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2158 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2162 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_z */

/* 2166 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2172 */	NdrFcShort( 0x13 ),	/* 19 */
/* 2174 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2178 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2180 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2182 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2188 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pZ */

/* 2190 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2192 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2194 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2196 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2198 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_z */

/* 2202 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2204 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2208 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2210 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2212 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2214 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2216 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2218 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2224 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _z */

/* 2226 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2228 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2230 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2232 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2234 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_heading */

/* 2238 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2240 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2244 */	NdrFcShort( 0x15 ),	/* 21 */
/* 2246 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2250 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2252 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2254 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2260 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pHeading */

/* 2262 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2264 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2266 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2268 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2270 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_heading */

/* 2274 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2280 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2282 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2284 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2286 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2288 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2290 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2296 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _heading */

/* 2298 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2300 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2302 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2306 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_pitch */

/* 2310 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2316 */	NdrFcShort( 0x17 ),	/* 23 */
/* 2318 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2322 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2324 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2326 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2332 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pPitch */

/* 2334 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2336 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2338 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2340 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2342 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_pitch */

/* 2346 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2348 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2352 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2354 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2356 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2358 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2360 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2362 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2368 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _pitch */

/* 2370 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2372 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2374 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2376 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2378 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_range */

/* 2382 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2388 */	NdrFcShort( 0x19 ),	/* 25 */
/* 2390 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2394 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2396 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2398 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2404 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pRange */

/* 2406 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2408 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2410 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2412 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2414 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_range */

/* 2418 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2424 */	NdrFcShort( 0x1a ),	/* 26 */
/* 2426 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2428 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2430 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2432 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2434 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2440 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _range */

/* 2442 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2444 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2446 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2450 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure run */

/* 2454 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2460 */	NdrFcShort( 0xa ),	/* 10 */
/* 2462 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2468 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2470 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2476 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2478 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2480 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getEarthViewer */

/* 2484 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2490 */	NdrFcShort( 0xb ),	/* 11 */
/* 2492 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2498 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2500 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2506 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppEarthViewer */

/* 2508 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2510 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2512 */	NdrFcShort( 0xc0 ),	/* Type Offset=192 */

	/* Return value */

/* 2514 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2516 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getEarthMap */

/* 2520 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2526 */	NdrFcShort( 0xc ),	/* 12 */
/* 2528 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2532 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2534 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2536 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2542 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppEarthMap */

/* 2544 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2546 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2548 */	NdrFcShort( 0xd6 ),	/* Type Offset=214 */

	/* Return value */

/* 2550 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2552 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getUtilObjectFactory */

/* 2556 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2562 */	NdrFcShort( 0xd ),	/* 13 */
/* 2564 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2568 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2570 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2572 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIDispatch */

/* 2580 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2582 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2584 */	NdrFcShort( 0xec ),	/* Type Offset=236 */

	/* Return value */

/* 2586 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2588 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getEarthRoot */

/* 2592 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2598 */	NdrFcShort( 0xe ),	/* 14 */
/* 2600 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2604 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2606 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2608 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2614 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIEarthGroup */

/* 2616 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2618 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2620 */	NdrFcShort( 0x102 ),	/* Type Offset=258 */

	/* Return value */

/* 2622 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2624 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setActiveSky */

/* 2628 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2634 */	NdrFcShort( 0xf ),	/* 15 */
/* 2636 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2640 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2642 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2644 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2650 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pISky */

/* 2652 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2654 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2656 */	NdrFcShort( 0x118 ),	/* Type Offset=280 */

	/* Return value */

/* 2658 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2660 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeActiveSky */

/* 2664 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2670 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2672 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2676 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2678 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2680 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2686 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2688 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2690 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setHomeViewpoint */

/* 2694 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2700 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2702 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2706 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2708 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2710 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2716 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIViewpoint */

/* 2718 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2720 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2722 */	NdrFcShort( 0x12a ),	/* Type Offset=298 */

	/* Return value */

/* 2724 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2726 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setActiveGraticule */

/* 2730 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2736 */	NdrFcShort( 0x12 ),	/* 18 */
/* 2738 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2744 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2746 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2752 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIGraticule */

/* 2754 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2756 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2758 */	NdrFcShort( 0x13c ),	/* Type Offset=316 */

	/* Return value */

/* 2760 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2762 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeActiveGraticule */

/* 2766 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2768 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2772 */	NdrFcShort( 0x13 ),	/* 19 */
/* 2774 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2778 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2780 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2782 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2788 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2790 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2792 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setPie */


	/* Procedure put_AutoSize */

/* 2796 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2802 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2804 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2806 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2808 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2810 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2812 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2818 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vbPie */


	/* Parameter vbool */

/* 2820 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2822 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2824 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2828 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AutoSize */

/* 2832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2838 */	NdrFcShort( 0x15 ),	/* 21 */
/* 2840 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2844 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2846 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2848 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2854 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 2856 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2858 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2860 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2862 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2864 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DrawStyle */


	/* Procedure put_BackColor */

/* 2868 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2870 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2874 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2876 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2878 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2882 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2884 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2890 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter style */


	/* Parameter clr */

/* 2892 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2894 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2898 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2900 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DrawStyle */


	/* Procedure get_BackColor */

/* 2904 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2906 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2910 */	NdrFcShort( 0x17 ),	/* 23 */
/* 2912 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2916 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2918 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2920 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2926 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstyle */


	/* Parameter pclr */

/* 2928 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2930 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2934 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2936 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DrawWidth */


	/* Procedure put_BackStyle */

/* 2940 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2946 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2948 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2950 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2954 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2956 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2962 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter width */


	/* Parameter style */

/* 2964 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2966 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2970 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2972 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DrawWidth */


	/* Procedure get_BackStyle */

/* 2976 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2978 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2982 */	NdrFcShort( 0x19 ),	/* 25 */
/* 2984 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2988 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2990 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2992 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2998 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwidth */


	/* Parameter pstyle */

/* 3000 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3002 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3006 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3008 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_FillColor */


	/* Procedure put_BorderColor */

/* 3012 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3014 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3018 */	NdrFcShort( 0x1a ),	/* 26 */
/* 3020 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3022 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3024 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3026 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3028 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3034 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clr */


	/* Parameter clr */

/* 3036 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3038 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3040 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3042 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3044 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FillColor */


	/* Procedure get_BorderColor */

/* 3048 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3050 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3054 */	NdrFcShort( 0x1b ),	/* 27 */
/* 3056 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3060 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3062 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3064 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3070 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pclr */


	/* Parameter pclr */

/* 3072 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3074 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3078 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3080 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_FillStyle */


	/* Procedure put_BorderStyle */

/* 3084 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3086 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3090 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3092 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3094 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3096 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3098 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3100 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter style */


	/* Parameter style */

/* 3108 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3110 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3116 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FillStyle */


	/* Procedure get_BorderStyle */

/* 3120 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3126 */	NdrFcShort( 0x1d ),	/* 29 */
/* 3128 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3132 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3134 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3136 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstyle */


	/* Parameter pstyle */

/* 3144 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3146 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3152 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_BorderWidth */

/* 3156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3162 */	NdrFcShort( 0x1e ),	/* 30 */
/* 3164 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3170 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3172 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter width */

/* 3180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3182 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3188 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BorderWidth */

/* 3192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3198 */	NdrFcShort( 0x1f ),	/* 31 */
/* 3200 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3204 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3206 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3208 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter width */

/* 3216 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3224 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DrawMode */

/* 3228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3234 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3236 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3240 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3242 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3244 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mode */

/* 3252 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3254 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3260 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DrawMode */

/* 3264 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3270 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3272 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3276 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3278 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3280 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pmode */

/* 3288 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3294 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3296 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DrawStyle */

/* 3300 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3306 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3308 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3314 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3316 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter style */

/* 3324 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3326 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3330 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3332 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DrawStyle */

/* 3336 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3342 */	NdrFcShort( 0x23 ),	/* 35 */
/* 3344 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3348 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3350 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3352 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstyle */

/* 3360 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3362 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3366 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3368 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DrawWidth */

/* 3372 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3378 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3380 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3382 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3384 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3386 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3388 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3394 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter width */

/* 3396 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3398 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3404 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HWND */


	/* Procedure get_DrawWidth */

/* 3408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3414 */	NdrFcShort( 0x25 ),	/* 37 */
/* 3416 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3420 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3422 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3424 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pHWND */


	/* Parameter pwidth */

/* 3432 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3434 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3438 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3440 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_FillColor */

/* 3444 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3450 */	NdrFcShort( 0x26 ),	/* 38 */
/* 3452 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3454 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3456 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3458 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3460 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clr */

/* 3468 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3470 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3476 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FillColor */

/* 3480 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3486 */	NdrFcShort( 0x27 ),	/* 39 */
/* 3488 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3492 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3494 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3496 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pclr */

/* 3504 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3506 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3512 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_FillStyle */

/* 3516 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3522 */	NdrFcShort( 0x28 ),	/* 40 */
/* 3524 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3526 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3528 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3530 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3532 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3538 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter style */

/* 3540 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3542 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3546 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3548 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FillStyle */

/* 3552 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3554 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3558 */	NdrFcShort( 0x29 ),	/* 41 */
/* 3560 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3564 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3566 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3568 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3574 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstyle */

/* 3576 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3578 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3582 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3584 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure putref_Font */

/* 3588 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3590 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3594 */	NdrFcShort( 0x2a ),	/* 42 */
/* 3596 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3600 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3602 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3604 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3610 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pFont */

/* 3612 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3614 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3616 */	NdrFcShort( 0x14e ),	/* Type Offset=334 */

	/* Return value */

/* 3618 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3620 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Font */

/* 3624 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3630 */	NdrFcShort( 0x2b ),	/* 43 */
/* 3632 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3636 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3638 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3640 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3646 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pFont */

/* 3648 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3650 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3652 */	NdrFcShort( 0x14e ),	/* Type Offset=334 */

	/* Return value */

/* 3654 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3656 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Font */

/* 3660 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3666 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3668 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3672 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3674 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3676 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3682 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppFont */

/* 3684 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3686 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3688 */	NdrFcShort( 0x160 ),	/* Type Offset=352 */

	/* Return value */

/* 3690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3692 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ForeColor */

/* 3696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3702 */	NdrFcShort( 0x2d ),	/* 45 */
/* 3704 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3706 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3710 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3712 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3718 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clr */

/* 3720 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3722 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3726 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3728 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ForeColor */

/* 3732 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3738 */	NdrFcShort( 0x2e ),	/* 46 */
/* 3740 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3744 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3746 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3748 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pclr */

/* 3756 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3758 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3762 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3764 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Enabled */

/* 3768 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3770 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3774 */	NdrFcShort( 0x2f ),	/* 47 */
/* 3776 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3778 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3780 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3782 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3784 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3790 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vbool */

/* 3792 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3794 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3796 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3798 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3800 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Enabled */

/* 3804 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3806 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3810 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3812 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3816 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3818 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3820 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 3828 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3830 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3832 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3834 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3836 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MousePointer */


	/* Procedure get_HWND */

/* 3840 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3846 */	NdrFcShort( 0x31 ),	/* 49 */
/* 3848 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3852 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3854 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3856 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppointer */


	/* Parameter pHWND */

/* 3864 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3866 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3872 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TabStop */

/* 3876 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3882 */	NdrFcShort( 0x32 ),	/* 50 */
/* 3884 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3886 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3888 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3890 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3892 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3898 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vbool */

/* 3900 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3902 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3904 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3906 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3908 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TabStop */

/* 3912 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3918 */	NdrFcShort( 0x33 ),	/* 51 */
/* 3920 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3924 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3926 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3928 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 3936 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3938 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3940 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3944 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Text */

/* 3948 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3954 */	NdrFcShort( 0x34 ),	/* 52 */
/* 3956 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3962 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3964 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3968 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strText */

/* 3972 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3974 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3976 */	NdrFcShort( 0x78 ),	/* Type Offset=120 */

	/* Return value */

/* 3978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3980 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Text */

/* 3984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3990 */	NdrFcShort( 0x35 ),	/* 53 */
/* 3992 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3996 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3998 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4000 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4002 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstrText */

/* 4008 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4010 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4012 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 4014 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4016 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Caption */

/* 4020 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4026 */	NdrFcShort( 0x36 ),	/* 54 */
/* 4028 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4034 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4036 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4040 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strCaption */

/* 4044 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4046 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4048 */	NdrFcShort( 0x78 ),	/* Type Offset=120 */

	/* Return value */

/* 4050 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4052 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Caption */

/* 4056 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4058 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4062 */	NdrFcShort( 0x37 ),	/* 55 */
/* 4064 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4068 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4070 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4072 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4074 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4078 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstrCaption */

/* 4080 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4082 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4084 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 4086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4088 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Valid */


	/* Procedure put_BorderVisible */

/* 4092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4098 */	NdrFcShort( 0x38 ),	/* 56 */
/* 4100 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4102 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4106 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4108 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vbool */


	/* Parameter vbool */

/* 4116 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4118 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4120 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4124 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Valid */


	/* Procedure get_BorderVisible */

/* 4128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4134 */	NdrFcShort( 0x39 ),	/* 57 */
/* 4136 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4140 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4142 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4144 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */


	/* Parameter pbool */

/* 4152 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4154 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4156 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4158 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4160 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Appearance */

/* 4164 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4170 */	NdrFcShort( 0x3a ),	/* 58 */
/* 4172 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4174 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4176 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4178 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4180 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4186 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nAppearance */

/* 4188 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4190 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4192 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4196 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Appearance */

/* 4200 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4206 */	NdrFcShort( 0x3b ),	/* 59 */
/* 4208 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4212 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4214 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4216 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pnAppearance */

/* 4224 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4226 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4228 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4232 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_MousePointer */

/* 4236 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4242 */	NdrFcShort( 0x3c ),	/* 60 */
/* 4244 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4250 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4252 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pointer */

/* 4260 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4262 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4266 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4268 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MousePointer */

/* 4272 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4278 */	NdrFcShort( 0x3d ),	/* 61 */
/* 4280 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4284 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4286 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4288 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4294 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppointer */

/* 4296 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4298 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4302 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4304 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure putref_MouseIcon */

/* 4308 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4314 */	NdrFcShort( 0x3e ),	/* 62 */
/* 4316 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4322 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4324 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4330 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pMouseIcon */

/* 4332 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4334 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4336 */	NdrFcShort( 0x164 ),	/* Type Offset=356 */

	/* Return value */

/* 4338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4340 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_MouseIcon */

/* 4344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4350 */	NdrFcShort( 0x3f ),	/* 63 */
/* 4352 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4358 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4360 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pMouseIcon */

/* 4368 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4370 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4372 */	NdrFcShort( 0x164 ),	/* Type Offset=356 */

	/* Return value */

/* 4374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4376 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MouseIcon */

/* 4380 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4386 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4388 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4394 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4396 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppMouseIcon */

/* 4404 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4406 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4408 */	NdrFcShort( 0x176 ),	/* Type Offset=374 */

	/* Return value */

/* 4410 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4412 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure putref_Picture */

/* 4416 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4418 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4422 */	NdrFcShort( 0x41 ),	/* 65 */
/* 4424 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4428 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4430 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4432 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4438 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pPicture */

/* 4440 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4442 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4444 */	NdrFcShort( 0x164 ),	/* Type Offset=356 */

	/* Return value */

/* 4446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4448 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Picture */

/* 4452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4458 */	NdrFcShort( 0x42 ),	/* 66 */
/* 4460 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4466 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4468 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4474 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pPicture */

/* 4476 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4478 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4480 */	NdrFcShort( 0x164 ),	/* Type Offset=356 */

	/* Return value */

/* 4482 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4484 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Picture */

/* 4488 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4490 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4494 */	NdrFcShort( 0x43 ),	/* 67 */
/* 4496 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4500 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4502 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4504 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppPicture */

/* 4512 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4514 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4516 */	NdrFcShort( 0x176 ),	/* Type Offset=374 */

	/* Return value */

/* 4518 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4520 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Valid */

/* 4524 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4530 */	NdrFcShort( 0x44 ),	/* 68 */
/* 4532 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4534 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4536 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4538 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4540 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vbool */

/* 4548 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4550 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4552 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4556 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Valid */

/* 4560 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4566 */	NdrFcShort( 0x45 ),	/* 69 */
/* 4568 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4572 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4574 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4576 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 4584 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4586 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4588 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4592 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ReadyState */

/* 4596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4602 */	NdrFcShort( 0x46 ),	/* 70 */
/* 4604 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4606 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4608 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4610 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4612 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter state */

/* 4620 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4622 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4626 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4628 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ReadyState */

/* 4632 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4638 */	NdrFcShort( 0x47 ),	/* 71 */
/* 4640 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4644 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4646 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4648 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstate */

/* 4656 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4658 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4664 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure bindEarthCtrl */

/* 4668 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4674 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4676 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4680 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4682 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4684 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4690 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIEarthCtrl */

/* 4692 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4694 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4696 */	NdrFcShort( 0x17a ),	/* Type Offset=378 */

	/* Return value */

/* 4698 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4700 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AutoSize */

/* 4704 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4710 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4712 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4714 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4716 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4718 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4720 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4726 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vbool */

/* 4728 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4730 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4732 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4736 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AutoSize */

/* 4740 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4746 */	NdrFcShort( 0x9 ),	/* 9 */
/* 4748 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4752 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4754 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4756 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4762 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 4764 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4766 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4768 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4770 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4772 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_BackStyle */

/* 4776 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4778 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4782 */	NdrFcShort( 0xc ),	/* 12 */
/* 4784 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4786 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4788 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4790 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4792 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4798 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter style */

/* 4800 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4802 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4806 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4808 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BackStyle */

/* 4812 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4818 */	NdrFcShort( 0xd ),	/* 13 */
/* 4820 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4824 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4826 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4828 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4834 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstyle */

/* 4836 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4838 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4842 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4844 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BorderColor */

/* 4848 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4850 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4854 */	NdrFcShort( 0xf ),	/* 15 */
/* 4856 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4860 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4862 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4864 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4870 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pclr */

/* 4872 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4874 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4878 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4880 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BorderStyle */

/* 4884 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4890 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4892 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4896 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4898 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4900 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4906 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstyle */

/* 4908 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4910 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4914 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4916 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BorderWidth */

/* 4920 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4926 */	NdrFcShort( 0x13 ),	/* 19 */
/* 4928 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4932 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4934 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4936 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4942 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter width */

/* 4944 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4946 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4950 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4952 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DrawMode */

/* 4956 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4958 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4962 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4964 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4966 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4968 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4970 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4972 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4978 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mode */

/* 4980 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4982 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4988 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure putref_Font */

/* 4992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4998 */	NdrFcShort( 0x1e ),	/* 30 */
/* 5000 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5006 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5008 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pFont */

/* 5016 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5018 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5020 */	NdrFcShort( 0x18c ),	/* Type Offset=396 */

	/* Return value */

/* 5022 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5024 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Font */

/* 5028 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5030 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5034 */	NdrFcShort( 0x1f ),	/* 31 */
/* 5036 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5040 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5042 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5044 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5050 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pFont */

/* 5052 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5054 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5056 */	NdrFcShort( 0x18c ),	/* Type Offset=396 */

	/* Return value */

/* 5058 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5060 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Font */

/* 5064 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5066 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5070 */	NdrFcShort( 0x20 ),	/* 32 */
/* 5072 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5076 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5078 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5080 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5086 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppFont */

/* 5088 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5090 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5092 */	NdrFcShort( 0x19e ),	/* Type Offset=414 */

	/* Return value */

/* 5094 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5096 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ForeColor */

/* 5100 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5106 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5108 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5114 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5116 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5122 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clr */

/* 5124 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5126 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5130 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5132 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ForeColor */

/* 5136 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5142 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5144 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5148 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5150 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5152 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5158 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pclr */

/* 5160 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5162 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5166 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5168 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Enabled */

/* 5172 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5178 */	NdrFcShort( 0x23 ),	/* 35 */
/* 5180 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5182 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5184 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5186 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5188 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5194 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vbool */

/* 5196 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5198 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5200 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 5202 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5204 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Enabled */

/* 5208 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5214 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5216 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5220 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5222 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5224 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 5232 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5234 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5236 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 5238 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5240 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TabStop */

/* 5244 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5246 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5250 */	NdrFcShort( 0x26 ),	/* 38 */
/* 5252 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5254 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5256 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5258 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5260 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5266 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vbool */

/* 5268 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5270 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5272 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 5274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5276 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TabStop */

/* 5280 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5286 */	NdrFcShort( 0x27 ),	/* 39 */
/* 5288 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5292 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5294 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5296 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 5304 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5306 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5308 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 5310 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5312 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Text */

/* 5316 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5322 */	NdrFcShort( 0x28 ),	/* 40 */
/* 5324 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5330 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5332 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5336 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5338 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strText */

/* 5340 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5342 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5344 */	NdrFcShort( 0x78 ),	/* Type Offset=120 */

	/* Return value */

/* 5346 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5348 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Text */

/* 5352 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5358 */	NdrFcShort( 0x29 ),	/* 41 */
/* 5360 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5366 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5368 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5370 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5374 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstrText */

/* 5376 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5378 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5380 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 5382 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5384 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Caption */

/* 5388 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5390 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5394 */	NdrFcShort( 0x2a ),	/* 42 */
/* 5396 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5400 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5402 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5404 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5408 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5410 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strCaption */

/* 5412 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5414 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5416 */	NdrFcShort( 0x78 ),	/* Type Offset=120 */

	/* Return value */

/* 5418 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5420 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Caption */

/* 5424 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5430 */	NdrFcShort( 0x2b ),	/* 43 */
/* 5432 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5436 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5438 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5440 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5442 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5446 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstrCaption */

/* 5448 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5450 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5452 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 5454 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5456 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_BorderVisible */

/* 5460 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5462 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5466 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5468 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5470 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5472 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5474 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5476 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5482 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vbool */

/* 5484 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5486 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5488 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 5490 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5492 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BorderVisible */

/* 5496 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5502 */	NdrFcShort( 0x2d ),	/* 45 */
/* 5504 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5508 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5510 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5512 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5518 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 5520 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5522 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5524 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 5526 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5528 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Appearance */

/* 5532 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5534 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5538 */	NdrFcShort( 0x2e ),	/* 46 */
/* 5540 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5542 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5544 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5546 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5548 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nAppearance */

/* 5556 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5558 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5560 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 5562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5564 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Appearance */

/* 5568 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5574 */	NdrFcShort( 0x2f ),	/* 47 */
/* 5576 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5580 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5582 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5584 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5590 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pnAppearance */

/* 5592 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5594 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5596 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 5598 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5600 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_MousePointer */

/* 5604 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5610 */	NdrFcShort( 0x30 ),	/* 48 */
/* 5612 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5614 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5616 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5618 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5620 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5626 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pointer */

/* 5628 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5630 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5634 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5636 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure putref_MouseIcon */

/* 5640 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5646 */	NdrFcShort( 0x32 ),	/* 50 */
/* 5648 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5652 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5654 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5656 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5662 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pMouseIcon */

/* 5664 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5666 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5668 */	NdrFcShort( 0x1a2 ),	/* Type Offset=418 */

	/* Return value */

/* 5670 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5672 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_MouseIcon */

/* 5676 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5682 */	NdrFcShort( 0x33 ),	/* 51 */
/* 5684 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5688 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5690 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5692 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5698 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pMouseIcon */

/* 5700 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5702 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5704 */	NdrFcShort( 0x1a2 ),	/* Type Offset=418 */

	/* Return value */

/* 5706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5708 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MouseIcon */

/* 5712 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5718 */	NdrFcShort( 0x34 ),	/* 52 */
/* 5720 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5724 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5726 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5728 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5734 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppMouseIcon */

/* 5736 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5738 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5740 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Return value */

/* 5742 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5744 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure putref_Picture */

/* 5748 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5750 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5754 */	NdrFcShort( 0x35 ),	/* 53 */
/* 5756 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5760 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5762 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5764 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5770 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pPicture */

/* 5772 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5774 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5776 */	NdrFcShort( 0x1a2 ),	/* Type Offset=418 */

	/* Return value */

/* 5778 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5780 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Picture */

/* 5784 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5790 */	NdrFcShort( 0x36 ),	/* 54 */
/* 5792 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5796 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5798 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5800 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pPicture */

/* 5808 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5810 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5812 */	NdrFcShort( 0x1a2 ),	/* Type Offset=418 */

	/* Return value */

/* 5814 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5816 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Picture */

/* 5820 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5822 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5826 */	NdrFcShort( 0x37 ),	/* 55 */
/* 5828 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5832 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5834 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5836 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5842 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppPicture */

/* 5844 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5846 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5848 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Return value */

/* 5850 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5852 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5854 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ReadyState */

/* 5856 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5858 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5862 */	NdrFcShort( 0x3a ),	/* 58 */
/* 5864 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5866 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5868 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5870 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5872 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5878 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter state */

/* 5880 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5882 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5886 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5888 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ReadyState */

/* 5892 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5894 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5898 */	NdrFcShort( 0x3b ),	/* 59 */
/* 5900 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5904 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5906 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5908 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5914 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstate */

/* 5916 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5918 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5922 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5924 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5926 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_tileSource */


	/* Procedure put_tileSource */

/* 5928 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5930 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5934 */	NdrFcShort( 0xe ),	/* 14 */
/* 5936 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5940 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5942 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5944 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5950 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pITileSourceDispatch */


	/* Parameter pITileSourceDispatch */

/* 5952 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5954 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5956 */	NdrFcShort( 0x1b8 ),	/* Type Offset=440 */

	/* Return value */


	/* Return value */

/* 5958 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5960 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5962 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_vectorSource */

/* 5964 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5966 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5970 */	NdrFcShort( 0xe ),	/* 14 */
/* 5972 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5976 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5978 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5980 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5986 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIVectorSourceDispatch */

/* 5988 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5990 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5992 */	NdrFcShort( 0x1ca ),	/* Type Offset=458 */

	/* Return value */

/* 5994 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5996 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5998 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setPosition */


	/* Procedure setPosition */


	/* Procedure setPosition */


	/* Procedure setPosition */


	/* Procedure setPosition */

/* 6000 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6002 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6006 */	NdrFcShort( 0xe ),	/* 14 */
/* 6008 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6012 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6014 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6016 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6022 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIGeoPoint */


	/* Parameter pGeoPoint */


	/* Parameter pIGeoPoint */


	/* Parameter pIGeoPoint */


	/* Parameter pIGeoPoint */

/* 6024 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6026 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6028 */	NdrFcShort( 0x1dc ),	/* Type Offset=476 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 6030 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6032 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getPosition */


	/* Procedure getPosition */

/* 6036 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6038 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6042 */	NdrFcShort( 0xf ),	/* 15 */
/* 6044 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6048 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6050 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6052 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6058 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIGeoPoint */


	/* Parameter pIGeoPoint */

/* 6060 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6062 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6064 */	NdrFcShort( 0x1ee ),	/* Type Offset=494 */

	/* Return value */


	/* Return value */

/* 6066 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6068 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setText */


	/* Procedure setText */

/* 6072 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6078 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6080 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6084 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6086 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6088 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6092 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6094 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strText */


	/* Parameter strText */

/* 6096 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6098 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6100 */	NdrFcShort( 0x78 ),	/* Type Offset=120 */

	/* Return value */


	/* Return value */

/* 6102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getText */


	/* Procedure getText */

/* 6108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6114 */	NdrFcShort( 0x11 ),	/* 17 */
/* 6116 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6122 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6124 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6126 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStrText */


	/* Parameter pStrText */

/* 6132 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6136 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */


	/* Return value */

/* 6138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setImageSrc */

/* 6144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6150 */	NdrFcShort( 0x12 ),	/* 18 */
/* 6152 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6158 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6160 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6164 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strImageSrc */

/* 6168 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6172 */	NdrFcShort( 0x78 ),	/* Type Offset=120 */

	/* Return value */

/* 6174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setModelPath */


	/* Procedure setImageSrc */

/* 6180 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6186 */	NdrFcShort( 0xe ),	/* 14 */
/* 6188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6194 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6196 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6200 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrModelPath */


	/* Parameter bstrImgSrc */

/* 6204 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6206 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6208 */	NdrFcShort( 0x78 ),	/* Type Offset=120 */

	/* Return value */


	/* Return value */

/* 6210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6212 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setBounds */

/* 6216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6222 */	NdrFcShort( 0xf ),	/* 15 */
/* 6224 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 6226 */	NdrFcShort( 0x40 ),	/* 64 */
/* 6228 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6230 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 6232 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lowerLeftX */

/* 6240 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6244 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter lowerLeftY */

/* 6246 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6248 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6250 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter upperRightX */

/* 6252 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6254 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6256 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter upperRightY */

/* 6258 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6260 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6262 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 6264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6266 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 6268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setRadiusMajor */


	/* Procedure setWidth */


	/* Procedure setRadius */

/* 6270 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6276 */	NdrFcShort( 0xf ),	/* 15 */
/* 6278 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6284 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6286 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6292 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pILinear */


	/* Parameter pILinear */


	/* Parameter pILinear */

/* 6294 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6296 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6298 */	NdrFcShort( 0x1f2 ),	/* Type Offset=498 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 6300 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6302 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setArcStart */

/* 6306 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6312 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6314 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6318 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6320 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6322 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIAngular */

/* 6330 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6332 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6334 */	NdrFcShort( 0x204 ),	/* Type Offset=516 */

	/* Return value */

/* 6336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6338 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setRotationAngle */


	/* Procedure setArcEnd */

/* 6342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6348 */	NdrFcShort( 0x11 ),	/* 17 */
/* 6350 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6356 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6358 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIAngular */


	/* Parameter pIAngular */

/* 6366 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6370 */	NdrFcShort( 0x204 ),	/* Type Offset=516 */

	/* Return value */


	/* Return value */

/* 6372 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6374 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setPie */

/* 6378 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6384 */	NdrFcShort( 0x12 ),	/* 18 */
/* 6386 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6388 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6390 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6392 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6394 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vbPie */

/* 6402 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6404 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6406 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 6408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6410 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setFeature */

/* 6414 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6420 */	NdrFcShort( 0xe ),	/* 14 */
/* 6422 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6428 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6430 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6436 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIFeature */

/* 6438 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6440 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6442 */	NdrFcShort( 0x216 ),	/* Type Offset=534 */

	/* Return value */

/* 6444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6446 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setPosition */

/* 6450 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6456 */	NdrFcShort( 0xf ),	/* 15 */
/* 6458 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6464 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6466 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIGeoPoint */

/* 6474 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6476 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6478 */	NdrFcShort( 0x1dc ),	/* Type Offset=476 */

	/* Return value */

/* 6480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6482 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setRadiusMinor */


	/* Procedure setHeight */

/* 6486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6492 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6494 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6500 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6502 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pILinear */


	/* Parameter pILinear */

/* 6510 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6514 */	NdrFcShort( 0x1f2 ),	/* Type Offset=498 */

	/* Return value */


	/* Return value */

/* 6516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setArcStart */

/* 6522 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6528 */	NdrFcShort( 0x12 ),	/* 18 */
/* 6530 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6536 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6538 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIAngular */

/* 6546 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6548 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6550 */	NdrFcShort( 0x204 ),	/* Type Offset=516 */

	/* Return value */

/* 6552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6554 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setArcEnd */

/* 6558 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6564 */	NdrFcShort( 0x13 ),	/* 19 */
/* 6566 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6570 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6572 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6574 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6580 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIAngular */

/* 6582 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6584 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6586 */	NdrFcShort( 0x204 ),	/* Type Offset=516 */

	/* Return value */

/* 6588 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6590 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createByEarthObjectClassType */

/* 6594 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6600 */	NdrFcShort( 0x7 ),	/* 7 */
/* 6602 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6604 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6606 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6608 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6610 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6616 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter classType */

/* 6618 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6620 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6622 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppIDispatch */

/* 6624 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6626 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6628 */	NdrFcShort( 0x228 ),	/* Type Offset=552 */

	/* Return value */

/* 6630 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6632 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createByEarthClassType */

/* 6636 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6644 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6646 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6648 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6650 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6652 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter classType */

/* 6660 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6662 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6664 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppIDispatch */

/* 6666 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6668 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6670 */	NdrFcShort( 0x228 ),	/* Type Offset=552 */

	/* Return value */

/* 6672 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6674 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createBySourceClassType */

/* 6678 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6684 */	NdrFcShort( 0x9 ),	/* 9 */
/* 6686 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6688 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6690 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6692 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6694 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6700 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter classType */

/* 6702 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6704 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6706 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppIDispatch */

/* 6708 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6710 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6712 */	NdrFcShort( 0x228 ),	/* Type Offset=552 */

	/* Return value */

/* 6714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6716 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createByGeoClassType */

/* 6720 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6726 */	NdrFcShort( 0xa ),	/* 10 */
/* 6728 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6730 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6732 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6734 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6736 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6742 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter classType */

/* 6744 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6746 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6748 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppIDisaptch */

/* 6750 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6752 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6754 */	NdrFcShort( 0x228 ),	/* Type Offset=552 */

	/* Return value */

/* 6756 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6758 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createByUnitClassType */

/* 6762 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6768 */	NdrFcShort( 0xb ),	/* 11 */
/* 6770 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6772 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6774 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6776 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6778 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6784 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter classType */

/* 6786 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6788 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6790 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppIDispatch */

/* 6792 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6794 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6796 */	NdrFcShort( 0x228 ),	/* Type Offset=552 */

	/* Return value */

/* 6798 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6800 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Attach */

/* 6804 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6806 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6810 */	NdrFcShort( 0x7 ),	/* 7 */
/* 6812 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6816 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6818 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6820 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6824 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrPath */

/* 6828 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6830 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6832 */	NdrFcShort( 0x78 ),	/* Type Offset=120 */

	/* Return value */

/* 6834 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6836 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RegisterAll */

/* 6840 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6846 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6848 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6852 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6854 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 6856 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 6864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6866 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnregisterAll */

/* 6870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6876 */	NdrFcShort( 0x9 ),	/* 9 */
/* 6878 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6884 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 6886 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 6894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6896 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetComponents */

/* 6900 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6906 */	NdrFcShort( 0xa ),	/* 10 */
/* 6908 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6914 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6916 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6918 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6922 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstrCLSIDs */

/* 6924 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6926 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6928 */	NdrFcShort( 0x648 ),	/* Type Offset=1608 */

	/* Parameter pbstrDescriptions */

/* 6930 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6932 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6934 */	NdrFcShort( 0x648 ),	/* Type Offset=1608 */

	/* Return value */

/* 6936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6938 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const osgEarthX_COM_MIDL_TYPE_FORMAT_STRING osgEarthX_COM__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/*  8 */	NdrFcLong( 0xa19426b7 ),	/* -1584126281 */
/* 12 */	NdrFcShort( 0x7677 ),	/* 30327 */
/* 14 */	NdrFcShort( 0x442b ),	/* 17451 */
/* 16 */	0xb0,		/* 176 */
			0xc4,		/* 196 */
/* 18 */	0x3f,		/* 63 */
			0x7a,		/* 122 */
/* 20 */	0x76,		/* 118 */
			0x38,		/* 56 */
/* 22 */	0xea,		/* 234 */
			0x2b,		/* 43 */
/* 24 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 26 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 28 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 30 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 32 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 34 */	NdrFcLong( 0x375604d3 ),	/* 928384211 */
/* 38 */	NdrFcShort( 0x7b ),	/* 123 */
/* 40 */	NdrFcShort( 0x429a ),	/* 17050 */
/* 42 */	0x9d,		/* 157 */
			0x20,		/* 32 */
/* 44 */	0xfb,		/* 251 */
			0x24,		/* 36 */
/* 46 */	0x84,		/* 132 */
			0x40,		/* 64 */
/* 48 */	0xd9,		/* 217 */
			0xb3,		/* 179 */
/* 50 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 52 */	NdrFcShort( 0xffec ),	/* Offset= -20 (32) */
/* 54 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 56 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */
/* 58 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 60 */	NdrFcLong( 0x727201b6 ),	/* 1920074166 */
/* 64 */	NdrFcShort( 0x3ac ),	/* 940 */
/* 66 */	NdrFcShort( 0x49a1 ),	/* 18849 */
/* 68 */	0x81,		/* 129 */
			0x71,		/* 113 */
/* 70 */	0xc7,		/* 199 */
			0x14,		/* 20 */
/* 72 */	0x49,		/* 73 */
			0xe9,		/* 233 */
/* 74 */	0xf1,		/* 241 */
			0xf5,		/* 245 */
/* 76 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 78 */	NdrFcLong( 0x9ee2be10 ),	/* -1629307376 */
/* 82 */	NdrFcShort( 0xa27f ),	/* -23937 */
/* 84 */	NdrFcShort( 0x4641 ),	/* 17985 */
/* 86 */	0xb8,		/* 184 */
			0xc6,		/* 198 */
/* 88 */	0x20,		/* 32 */
			0xd6,		/* 214 */
/* 90 */	0x5c,		/* 92 */
			0xc4,		/* 196 */
/* 92 */	0xf0,		/* 240 */
			0x56,		/* 86 */
/* 94 */	
			0x12, 0x0,	/* FC_UP */
/* 96 */	NdrFcShort( 0xe ),	/* Offset= 14 (110) */
/* 98 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 100 */	NdrFcShort( 0x2 ),	/* 2 */
/* 102 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 104 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 106 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 108 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 110 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 114 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (98) */
/* 116 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 118 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 120 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x4 ),	/* 4 */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0xffde ),	/* Offset= -34 (94) */
/* 130 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 132 */	NdrFcShort( 0x6 ),	/* Offset= 6 (138) */
/* 134 */	
			0x13, 0x0,	/* FC_OP */
/* 136 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (110) */
/* 138 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0x4 ),	/* 4 */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 146 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (134) */
/* 148 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 150 */	NdrFcLong( 0xbaa39933 ),	/* -1163683533 */
/* 154 */	NdrFcShort( 0x9137 ),	/* -28361 */
/* 156 */	NdrFcShort( 0x4d83 ),	/* 19843 */
/* 158 */	0xae,		/* 174 */
			0x81,		/* 129 */
/* 160 */	0x1a,		/* 26 */
			0xf7,		/* 247 */
/* 162 */	0xef,		/* 239 */
			0x83,		/* 131 */
/* 164 */	0x5d,		/* 93 */
			0x29,		/* 41 */
/* 166 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 168 */	NdrFcLong( 0x263c6640 ),	/* 641492544 */
/* 172 */	NdrFcShort( 0x608e ),	/* 24718 */
/* 174 */	NdrFcShort( 0x4aa6 ),	/* 19110 */
/* 176 */	0x8b,		/* 139 */
			0x62,		/* 98 */
/* 178 */	0x50,		/* 80 */
			0x79,		/* 121 */
/* 180 */	0x14,		/* 20 */
			0xf2,		/* 242 */
/* 182 */	0x79,		/* 121 */
			0x54,		/* 84 */
/* 184 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 186 */	NdrFcShort( 0xffec ),	/* Offset= -20 (166) */
/* 188 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 190 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 192 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 194 */	NdrFcShort( 0x2 ),	/* Offset= 2 (196) */
/* 196 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 198 */	NdrFcLong( 0x6ab4e72d ),	/* 1790240557 */
/* 202 */	NdrFcShort( 0xe25a ),	/* -7590 */
/* 204 */	NdrFcShort( 0x4412 ),	/* 17426 */
/* 206 */	0x9c,		/* 156 */
			0xd5,		/* 213 */
/* 208 */	0xe,		/* 14 */
			0xb6,		/* 182 */
/* 210 */	0x96,		/* 150 */
			0xd1,		/* 209 */
/* 212 */	0xd2,		/* 210 */
			0x43,		/* 67 */
/* 214 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 216 */	NdrFcShort( 0x2 ),	/* Offset= 2 (218) */
/* 218 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 220 */	NdrFcLong( 0xe18d8d71 ),	/* -510816911 */
/* 224 */	NdrFcShort( 0x85f8 ),	/* -31240 */
/* 226 */	NdrFcShort( 0x49f2 ),	/* 18930 */
/* 228 */	0xae,		/* 174 */
			0xf0,		/* 240 */
/* 230 */	0x71,		/* 113 */
			0xed,		/* 237 */
/* 232 */	0xe,		/* 14 */
			0xdf,		/* 223 */
/* 234 */	0x2b,		/* 43 */
			0xf4,		/* 244 */
/* 236 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 238 */	NdrFcShort( 0x2 ),	/* Offset= 2 (240) */
/* 240 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 242 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 252 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 254 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 256 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 258 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 260 */	NdrFcShort( 0x2 ),	/* Offset= 2 (262) */
/* 262 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 264 */	NdrFcLong( 0x5afc2da3 ),	/* 1526476195 */
/* 268 */	NdrFcShort( 0x1f48 ),	/* 8008 */
/* 270 */	NdrFcShort( 0x4ddc ),	/* 19932 */
/* 272 */	0x98,		/* 152 */
			0xd8,		/* 216 */
/* 274 */	0x5,		/* 5 */
			0xe4,		/* 228 */
/* 276 */	0x76,		/* 118 */
			0x35,		/* 53 */
/* 278 */	0x40,		/* 64 */
			0x79,		/* 121 */
/* 280 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 282 */	NdrFcLong( 0xba5628d4 ),	/* -1168758572 */
/* 286 */	NdrFcShort( 0x3e46 ),	/* 15942 */
/* 288 */	NdrFcShort( 0x44c8 ),	/* 17608 */
/* 290 */	0x94,		/* 148 */
			0xe,		/* 14 */
/* 292 */	0x3a,		/* 58 */
			0xdc,		/* 220 */
/* 294 */	0x72,		/* 114 */
			0x75,		/* 117 */
/* 296 */	0x39,		/* 57 */
			0xa0,		/* 160 */
/* 298 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 300 */	NdrFcLong( 0x21ba1141 ),	/* 565842241 */
/* 304 */	NdrFcShort( 0x5a5d ),	/* 23133 */
/* 306 */	NdrFcShort( 0x449a ),	/* 17562 */
/* 308 */	0xaf,		/* 175 */
			0x21,		/* 33 */
/* 310 */	0xe1,		/* 225 */
			0x88,		/* 136 */
/* 312 */	0x99,		/* 153 */
			0x30,		/* 48 */
/* 314 */	0x4f,		/* 79 */
			0x79,		/* 121 */
/* 316 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 318 */	NdrFcLong( 0x6406a22 ),	/* 104884770 */
/* 322 */	NdrFcShort( 0x841c ),	/* -31716 */
/* 324 */	NdrFcShort( 0x4d8e ),	/* 19854 */
/* 326 */	0xb2,		/* 178 */
			0x55,		/* 85 */
/* 328 */	0xec,		/* 236 */
			0xb6,		/* 182 */
/* 330 */	0x56,		/* 86 */
			0x86,		/* 134 */
/* 332 */	0xfe,		/* 254 */
			0xa9,		/* 169 */
/* 334 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 336 */	NdrFcLong( 0xbef6e003 ),	/* -1091117053 */
/* 340 */	NdrFcShort( 0xa874 ),	/* -22412 */
/* 342 */	NdrFcShort( 0x101a ),	/* 4122 */
/* 344 */	0x8b,		/* 139 */
			0xba,		/* 186 */
/* 346 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 348 */	0x0,		/* 0 */
			0x30,		/* 48 */
/* 350 */	0xc,		/* 12 */
			0xab,		/* 171 */
/* 352 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 354 */	NdrFcShort( 0xffec ),	/* Offset= -20 (334) */
/* 356 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 358 */	NdrFcLong( 0x7bf80981 ),	/* 2079852929 */
/* 362 */	NdrFcShort( 0xbf32 ),	/* -16590 */
/* 364 */	NdrFcShort( 0x101a ),	/* 4122 */
/* 366 */	0x8b,		/* 139 */
			0xbb,		/* 187 */
/* 368 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 370 */	0x0,		/* 0 */
			0x30,		/* 48 */
/* 372 */	0xc,		/* 12 */
			0xab,		/* 171 */
/* 374 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 376 */	NdrFcShort( 0xffec ),	/* Offset= -20 (356) */
/* 378 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 380 */	NdrFcLong( 0x978e39f ),	/* 158917535 */
/* 384 */	NdrFcShort( 0x8910 ),	/* -30448 */
/* 386 */	NdrFcShort( 0x4cfc ),	/* 19708 */
/* 388 */	0x83,		/* 131 */
			0xc,		/* 12 */
/* 390 */	0x78,		/* 120 */
			0xbf,		/* 191 */
/* 392 */	0x13,		/* 19 */
			0x78,		/* 120 */
/* 394 */	0x66,		/* 102 */
			0x63,		/* 99 */
/* 396 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 398 */	NdrFcLong( 0xbef6e003 ),	/* -1091117053 */
/* 402 */	NdrFcShort( 0xa874 ),	/* -22412 */
/* 404 */	NdrFcShort( 0x101a ),	/* 4122 */
/* 406 */	0x8b,		/* 139 */
			0xba,		/* 186 */
/* 408 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 410 */	0x0,		/* 0 */
			0x30,		/* 48 */
/* 412 */	0xc,		/* 12 */
			0xab,		/* 171 */
/* 414 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 416 */	NdrFcShort( 0xffec ),	/* Offset= -20 (396) */
/* 418 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 420 */	NdrFcLong( 0x7bf80981 ),	/* 2079852929 */
/* 424 */	NdrFcShort( 0xbf32 ),	/* -16590 */
/* 426 */	NdrFcShort( 0x101a ),	/* 4122 */
/* 428 */	0x8b,		/* 139 */
			0xbb,		/* 187 */
/* 430 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 432 */	0x0,		/* 0 */
			0x30,		/* 48 */
/* 434 */	0xc,		/* 12 */
			0xab,		/* 171 */
/* 436 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 438 */	NdrFcShort( 0xffec ),	/* Offset= -20 (418) */
/* 440 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 442 */	NdrFcLong( 0xa9e09563 ),	/* -1444899485 */
/* 446 */	NdrFcShort( 0x3471 ),	/* 13425 */
/* 448 */	NdrFcShort( 0x4b40 ),	/* 19264 */
/* 450 */	0x86,		/* 134 */
			0xd8,		/* 216 */
/* 452 */	0xcb,		/* 203 */
			0xb2,		/* 178 */
/* 454 */	0xb4,		/* 180 */
			0x72,		/* 114 */
/* 456 */	0x99,		/* 153 */
			0x2e,		/* 46 */
/* 458 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 460 */	NdrFcLong( 0xf645160e ),	/* -163244530 */
/* 464 */	NdrFcShort( 0x9102 ),	/* -28414 */
/* 466 */	NdrFcShort( 0x4e02 ),	/* 19970 */
/* 468 */	0xb5,		/* 181 */
			0x92,		/* 146 */
/* 470 */	0x3d,		/* 61 */
			0x6e,		/* 110 */
/* 472 */	0x8,		/* 8 */
			0x16,		/* 22 */
/* 474 */	0xda,		/* 218 */
			0xfa,		/* 250 */
/* 476 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 478 */	NdrFcLong( 0x8deb0d28 ),	/* -1913975512 */
/* 482 */	NdrFcShort( 0x96b5 ),	/* -26955 */
/* 484 */	NdrFcShort( 0x4653 ),	/* 18003 */
/* 486 */	0x9f,		/* 159 */
			0xd4,		/* 212 */
/* 488 */	0xa6,		/* 166 */
			0xdd,		/* 221 */
/* 490 */	0xbc,		/* 188 */
			0x61,		/* 97 */
/* 492 */	0x45,		/* 69 */
			0xec,		/* 236 */
/* 494 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 496 */	NdrFcShort( 0xffec ),	/* Offset= -20 (476) */
/* 498 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 500 */	NdrFcLong( 0x185b69e3 ),	/* 408644067 */
/* 504 */	NdrFcShort( 0x4c29 ),	/* 19497 */
/* 506 */	NdrFcShort( 0x4df1 ),	/* 19953 */
/* 508 */	0x80,		/* 128 */
			0x80,		/* 128 */
/* 510 */	0x84,		/* 132 */
			0x19,		/* 25 */
/* 512 */	0xcc,		/* 204 */
			0xd1,		/* 209 */
/* 514 */	0xe2,		/* 226 */
			0x16,		/* 22 */
/* 516 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 518 */	NdrFcLong( 0xbc4518b2 ),	/* -1136322382 */
/* 522 */	NdrFcShort( 0x2c77 ),	/* 11383 */
/* 524 */	NdrFcShort( 0x492f ),	/* 18735 */
/* 526 */	0xb2,		/* 178 */
			0x6c,		/* 108 */
/* 528 */	0x25,		/* 37 */
			0x23,		/* 35 */
/* 530 */	0xfe,		/* 254 */
			0xbf,		/* 191 */
/* 532 */	0x2f,		/* 47 */
			0xb3,		/* 179 */
/* 534 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 536 */	NdrFcLong( 0x32e9a775 ),	/* 854173557 */
/* 540 */	NdrFcShort( 0x8511 ),	/* -31471 */
/* 542 */	NdrFcShort( 0x4570 ),	/* 17776 */
/* 544 */	0xa6,		/* 166 */
			0x3f,		/* 63 */
/* 546 */	0x57,		/* 87 */
			0x97,		/* 151 */
/* 548 */	0x27,		/* 39 */
			0xba,		/* 186 */
/* 550 */	0x53,		/* 83 */
			0x22,		/* 34 */
/* 552 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 554 */	NdrFcShort( 0x2 ),	/* Offset= 2 (556) */
/* 556 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 558 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 566 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 568 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 570 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 572 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 574 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 576 */	NdrFcShort( 0x408 ),	/* Offset= 1032 (1608) */
/* 578 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 580 */	NdrFcShort( 0x2 ),	/* Offset= 2 (582) */
/* 582 */	
			0x13, 0x0,	/* FC_OP */
/* 584 */	NdrFcShort( 0x3ee ),	/* Offset= 1006 (1590) */
/* 586 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 588 */	NdrFcShort( 0x18 ),	/* 24 */
/* 590 */	NdrFcShort( 0xa ),	/* 10 */
/* 592 */	NdrFcLong( 0x8 ),	/* 8 */
/* 596 */	NdrFcShort( 0x5a ),	/* Offset= 90 (686) */
/* 598 */	NdrFcLong( 0xd ),	/* 13 */
/* 602 */	NdrFcShort( 0x90 ),	/* Offset= 144 (746) */
/* 604 */	NdrFcLong( 0x9 ),	/* 9 */
/* 608 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (784) */
/* 610 */	NdrFcLong( 0xc ),	/* 12 */
/* 614 */	NdrFcShort( 0x2bc ),	/* Offset= 700 (1314) */
/* 616 */	NdrFcLong( 0x24 ),	/* 36 */
/* 620 */	NdrFcShort( 0x2e6 ),	/* Offset= 742 (1362) */
/* 622 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 626 */	NdrFcShort( 0x318 ),	/* Offset= 792 (1418) */
/* 628 */	NdrFcLong( 0x10 ),	/* 16 */
/* 632 */	NdrFcShort( 0x332 ),	/* Offset= 818 (1450) */
/* 634 */	NdrFcLong( 0x2 ),	/* 2 */
/* 638 */	NdrFcShort( 0x34c ),	/* Offset= 844 (1482) */
/* 640 */	NdrFcLong( 0x3 ),	/* 3 */
/* 644 */	NdrFcShort( 0x366 ),	/* Offset= 870 (1514) */
/* 646 */	NdrFcLong( 0x14 ),	/* 20 */
/* 650 */	NdrFcShort( 0x380 ),	/* Offset= 896 (1546) */
/* 652 */	NdrFcShort( 0xffff ),	/* Offset= -1 (651) */
/* 654 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 656 */	NdrFcShort( 0x4 ),	/* 4 */
/* 658 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 662 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 664 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 666 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 668 */	NdrFcShort( 0x4 ),	/* 4 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x1 ),	/* 1 */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 678 */	0x13, 0x0,	/* FC_OP */
/* 680 */	NdrFcShort( 0xfdc6 ),	/* Offset= -570 (110) */
/* 682 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 684 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 686 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 688 */	NdrFcShort( 0x8 ),	/* 8 */
/* 690 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 692 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 694 */	NdrFcShort( 0x4 ),	/* 4 */
/* 696 */	NdrFcShort( 0x4 ),	/* 4 */
/* 698 */	0x11, 0x0,	/* FC_RP */
/* 700 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (654) */
/* 702 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 704 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 706 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 708 */	NdrFcLong( 0x0 ),	/* 0 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 716 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 718 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 720 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 722 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 724 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 734 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 738 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 740 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 742 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (706) */
/* 744 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 746 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 748 */	NdrFcShort( 0x8 ),	/* 8 */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	NdrFcShort( 0x6 ),	/* Offset= 6 (758) */
/* 754 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 756 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 758 */	
			0x11, 0x0,	/* FC_RP */
/* 760 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (724) */
/* 762 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 766 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 772 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 776 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 778 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 780 */	NdrFcShort( 0xff20 ),	/* Offset= -224 (556) */
/* 782 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 784 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 786 */	NdrFcShort( 0x8 ),	/* 8 */
/* 788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0x6 ),	/* Offset= 6 (796) */
/* 792 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 794 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 796 */	
			0x11, 0x0,	/* FC_RP */
/* 798 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (762) */
/* 800 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 802 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 804 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 806 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 808 */	NdrFcShort( 0x2 ),	/* Offset= 2 (810) */
/* 810 */	NdrFcShort( 0x10 ),	/* 16 */
/* 812 */	NdrFcShort( 0x2f ),	/* 47 */
/* 814 */	NdrFcLong( 0x14 ),	/* 20 */
/* 818 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 820 */	NdrFcLong( 0x3 ),	/* 3 */
/* 824 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 826 */	NdrFcLong( 0x11 ),	/* 17 */
/* 830 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 832 */	NdrFcLong( 0x2 ),	/* 2 */
/* 836 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 838 */	NdrFcLong( 0x4 ),	/* 4 */
/* 842 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 844 */	NdrFcLong( 0x5 ),	/* 5 */
/* 848 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 850 */	NdrFcLong( 0xb ),	/* 11 */
/* 854 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 856 */	NdrFcLong( 0xa ),	/* 10 */
/* 860 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 862 */	NdrFcLong( 0x6 ),	/* 6 */
/* 866 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (1098) */
/* 868 */	NdrFcLong( 0x7 ),	/* 7 */
/* 872 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 874 */	NdrFcLong( 0x8 ),	/* 8 */
/* 878 */	NdrFcShort( 0xfd18 ),	/* Offset= -744 (134) */
/* 880 */	NdrFcLong( 0xd ),	/* 13 */
/* 884 */	NdrFcShort( 0xdc ),	/* Offset= 220 (1104) */
/* 886 */	NdrFcLong( 0x9 ),	/* 9 */
/* 890 */	NdrFcShort( 0xfeb2 ),	/* Offset= -334 (556) */
/* 892 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 896 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (1122) */
/* 898 */	NdrFcLong( 0x24 ),	/* 36 */
/* 902 */	NdrFcShort( 0xe4 ),	/* Offset= 228 (1130) */
/* 904 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 908 */	NdrFcShort( 0xde ),	/* Offset= 222 (1130) */
/* 910 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 914 */	NdrFcShort( 0x10e ),	/* Offset= 270 (1184) */
/* 916 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 920 */	NdrFcShort( 0x10c ),	/* Offset= 268 (1188) */
/* 922 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 926 */	NdrFcShort( 0x10a ),	/* Offset= 266 (1192) */
/* 928 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 932 */	NdrFcShort( 0x108 ),	/* Offset= 264 (1196) */
/* 934 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 938 */	NdrFcShort( 0x106 ),	/* Offset= 262 (1200) */
/* 940 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 944 */	NdrFcShort( 0x104 ),	/* Offset= 260 (1204) */
/* 946 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 950 */	NdrFcShort( 0xee ),	/* Offset= 238 (1188) */
/* 952 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 956 */	NdrFcShort( 0xec ),	/* Offset= 236 (1192) */
/* 958 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 962 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (1208) */
/* 964 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 968 */	NdrFcShort( 0xec ),	/* Offset= 236 (1204) */
/* 970 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 974 */	NdrFcShort( 0xee ),	/* Offset= 238 (1212) */
/* 976 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 980 */	NdrFcShort( 0xec ),	/* Offset= 236 (1216) */
/* 982 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 986 */	NdrFcShort( 0xea ),	/* Offset= 234 (1220) */
/* 988 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 992 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (1224) */
/* 994 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 998 */	NdrFcShort( 0xee ),	/* Offset= 238 (1236) */
/* 1000 */	NdrFcLong( 0x10 ),	/* 16 */
/* 1004 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 1006 */	NdrFcLong( 0x12 ),	/* 18 */
/* 1010 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 1012 */	NdrFcLong( 0x13 ),	/* 19 */
/* 1016 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1018 */	NdrFcLong( 0x15 ),	/* 21 */
/* 1022 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 1024 */	NdrFcLong( 0x16 ),	/* 22 */
/* 1028 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1030 */	NdrFcLong( 0x17 ),	/* 23 */
/* 1034 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1036 */	NdrFcLong( 0xe ),	/* 14 */
/* 1040 */	NdrFcShort( 0xcc ),	/* Offset= 204 (1244) */
/* 1042 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 1046 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (1254) */
/* 1048 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 1052 */	NdrFcShort( 0xce ),	/* Offset= 206 (1258) */
/* 1054 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 1058 */	NdrFcShort( 0x82 ),	/* Offset= 130 (1188) */
/* 1060 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 1064 */	NdrFcShort( 0x80 ),	/* Offset= 128 (1192) */
/* 1066 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 1070 */	NdrFcShort( 0x7e ),	/* Offset= 126 (1196) */
/* 1072 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 1076 */	NdrFcShort( 0x74 ),	/* Offset= 116 (1192) */
/* 1078 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 1082 */	NdrFcShort( 0x6e ),	/* Offset= 110 (1192) */
/* 1084 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1088 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1088) */
/* 1090 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1094 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1094) */
/* 1096 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1095) */
/* 1098 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1100 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1102 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1104 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1114 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1116 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1118 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1120 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1122 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1124 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1126) */
/* 1126 */	
			0x13, 0x0,	/* FC_OP */
/* 1128 */	NdrFcShort( 0x1ce ),	/* Offset= 462 (1590) */
/* 1130 */	
			0x13, 0x0,	/* FC_OP */
/* 1132 */	NdrFcShort( 0x20 ),	/* Offset= 32 (1164) */
/* 1134 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1136 */	NdrFcLong( 0x2f ),	/* 47 */
/* 1140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1144 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1146 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1148 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1150 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1152 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1154 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1156 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1158 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1160 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1162 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1164 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1166 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1170 */	NdrFcShort( 0xa ),	/* Offset= 10 (1180) */
/* 1172 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1174 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1176 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (1134) */
/* 1178 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1180 */	
			0x13, 0x0,	/* FC_OP */
/* 1182 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1152) */
/* 1184 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1186 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1188 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1190 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1192 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1194 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1196 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1198 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1200 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1202 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1204 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1206 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1208 */	
			0x13, 0x0,	/* FC_OP */
/* 1210 */	NdrFcShort( 0xff90 ),	/* Offset= -112 (1098) */
/* 1212 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1214 */	NdrFcShort( 0xfbc8 ),	/* Offset= -1080 (134) */
/* 1216 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1218 */	NdrFcShort( 0xff8e ),	/* Offset= -114 (1104) */
/* 1220 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1222 */	NdrFcShort( 0xfd66 ),	/* Offset= -666 (556) */
/* 1224 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1226 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1228) */
/* 1228 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1230 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1232) */
/* 1232 */	
			0x13, 0x0,	/* FC_OP */
/* 1234 */	NdrFcShort( 0x164 ),	/* Offset= 356 (1590) */
/* 1236 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1238 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1240) */
/* 1240 */	
			0x13, 0x0,	/* FC_OP */
/* 1242 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1262) */
/* 1244 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1246 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1248 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1250 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1252 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1254 */	
			0x13, 0x0,	/* FC_OP */
/* 1256 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1244) */
/* 1258 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1260 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1262 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1264 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1268 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1268) */
/* 1270 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1272 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1274 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1276 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1278 */	NdrFcShort( 0xfe22 ),	/* Offset= -478 (800) */
/* 1280 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1282 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1284 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1286 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1292 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1294 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1296 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1300 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1306 */	0x13, 0x0,	/* FC_OP */
/* 1308 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1262) */
/* 1310 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1312 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1314 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1316 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1320 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1326) */
/* 1322 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1324 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1326 */	
			0x11, 0x0,	/* FC_RP */
/* 1328 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1282) */
/* 1330 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1332 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1334 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1338 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1340 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1342 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1344 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1348 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1354 */	0x13, 0x0,	/* FC_OP */
/* 1356 */	NdrFcShort( 0xff40 ),	/* Offset= -192 (1164) */
/* 1358 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1360 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1362 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1368 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1374) */
/* 1370 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1372 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1374 */	
			0x11, 0x0,	/* FC_RP */
/* 1376 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1330) */
/* 1378 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 1380 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1382 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1384 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1386 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1388 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1390 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1392 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (1378) */
			0x5b,		/* FC_END */
/* 1396 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1400 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1406 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1410 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1412 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1414 */	NdrFcShort( 0xfeca ),	/* Offset= -310 (1104) */
/* 1416 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1418 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1420 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1424 */	NdrFcShort( 0xa ),	/* Offset= 10 (1434) */
/* 1426 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1428 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1430 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1384) */
/* 1432 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1434 */	
			0x11, 0x0,	/* FC_RP */
/* 1436 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (1396) */
/* 1438 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1440 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1442 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1446 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1448 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1450 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1452 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1454 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1456 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1458 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1460 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1462 */	0x13, 0x0,	/* FC_OP */
/* 1464 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1438) */
/* 1466 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1468 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1470 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1472 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1474 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1478 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1480 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1482 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1484 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1486 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1488 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1490 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1492 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1494 */	0x13, 0x0,	/* FC_OP */
/* 1496 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1470) */
/* 1498 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1500 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1502 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1504 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1506 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1510 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1512 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1514 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1516 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1518 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1520 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1522 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1524 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1526 */	0x13, 0x0,	/* FC_OP */
/* 1528 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1502) */
/* 1530 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1532 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1534 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1536 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1538 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1542 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1544 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1546 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1548 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1550 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1552 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1554 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1556 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1558 */	0x13, 0x0,	/* FC_OP */
/* 1560 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1534) */
/* 1562 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1564 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1566 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1568 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1570 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1572 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1574 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1578 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1580 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1582 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1584 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1586 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1566) */
/* 1588 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1590 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1592 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1594 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1574) */
/* 1596 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1596) */
/* 1598 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1600 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1602 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1604 */	NdrFcShort( 0xfc06 ),	/* Offset= -1018 (586) */
/* 1606 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1608 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1610 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1612 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1616 */	NdrFcShort( 0xfbf2 ),	/* Offset= -1038 (578) */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            LPSAFEARRAY_UserSize
            ,LPSAFEARRAY_UserMarshal
            ,LPSAFEARRAY_UserUnmarshal
            ,LPSAFEARRAY_UserFree
            }

        };



/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IEarthDispatch, ver. 0.0,
   GUID={0xa19426b7,0x7677,0x442b,{0xb0,0xc4,0x3f,0x7a,0x76,0x38,0xea,0x2b}} */

#pragma code_seg(".orpc")
static const unsigned short IEarthDispatch_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72
    };

static const MIDL_STUBLESS_PROXY_INFO IEarthDispatch_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IEarthDispatch_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IEarthDispatch_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IEarthDispatch_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IEarthDispatchProxyVtbl = 
{
    &IEarthDispatch_ProxyInfo,
    &IID_IEarthDispatch,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */
};


static const PRPC_STUB_FUNCTION IEarthDispatch_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IEarthDispatchStubVtbl =
{
    &IID_IEarthDispatch,
    &IEarthDispatch_ServerInfo,
    10,
    &IEarthDispatch_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISpatialReference, ver. 0.0,
   GUID={0x375604D3,0x007B,0x429A,{0x9D,0x20,0xFB,0x24,0x84,0x40,0xD9,0xB3}} */

#pragma code_seg(".orpc")
static const unsigned short ISpatialReference_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ISpatialReference_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ISpatialReference_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISpatialReference_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ISpatialReference_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _ISpatialReferenceProxyVtbl = 
{
    0,
    &IID_ISpatialReference,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */
};


static const PRPC_STUB_FUNCTION ISpatialReference_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ISpatialReferenceStubVtbl =
{
    &IID_ISpatialReference,
    &ISpatialReference_ServerInfo,
    10,
    &ISpatialReference_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0002, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IGeoPoint, ver. 0.0,
   GUID={0x8DEB0D28,0x96B5,0x4653,{0x9F,0xD4,0xA6,0xDD,0xBC,0x61,0x45,0xEC}} */

#pragma code_seg(".orpc")
static const unsigned short IGeoPoint_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    114,
    150,
    186,
    222,
    258,
    294,
    330,
    366
    };

static const MIDL_STUBLESS_PROXY_INFO IGeoPoint_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IGeoPoint_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IGeoPoint_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IGeoPoint_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(18) _IGeoPointProxyVtbl = 
{
    &IGeoPoint_ProxyInfo,
    &IID_IGeoPoint,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* IGeoPoint::put_x */ ,
    (void *) (INT_PTR) -1 /* IGeoPoint::get_x */ ,
    (void *) (INT_PTR) -1 /* IGeoPoint::put_y */ ,
    (void *) (INT_PTR) -1 /* IGeoPoint::get_y */ ,
    (void *) (INT_PTR) -1 /* IGeoPoint::put_z */ ,
    (void *) (INT_PTR) -1 /* IGeoPoint::get_z */ ,
    (void *) (INT_PTR) -1 /* IGeoPoint::put_srs */ ,
    (void *) (INT_PTR) -1 /* IGeoPoint::get_srs */
};


static const PRPC_STUB_FUNCTION IGeoPoint_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IGeoPointStubVtbl =
{
    &IID_IGeoPoint,
    &IGeoPoint_ServerInfo,
    18,
    &IGeoPoint_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0003, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IVec3d, ver. 0.0,
   GUID={0x727201B6,0x03AC,0x49A1,{0x81,0x71,0xC7,0x14,0x49,0xE9,0xF1,0xF5}} */

#pragma code_seg(".orpc")
static const unsigned short IVec3d_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    402,
    450,
    486,
    522,
    558,
    594,
    630
    };

static const MIDL_STUBLESS_PROXY_INFO IVec3d_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IVec3d_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVec3d_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IVec3d_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(17) _IVec3dProxyVtbl = 
{
    &IVec3d_ProxyInfo,
    &IID_IVec3d,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* IVec3d::set */ ,
    (void *) (INT_PTR) -1 /* IVec3d::put_x */ ,
    (void *) (INT_PTR) -1 /* IVec3d::get_x */ ,
    (void *) (INT_PTR) -1 /* IVec3d::put_y */ ,
    (void *) (INT_PTR) -1 /* IVec3d::get_y */ ,
    (void *) (INT_PTR) -1 /* IVec3d::put_z */ ,
    (void *) (INT_PTR) -1 /* IVec3d::get_z */
};


static const PRPC_STUB_FUNCTION IVec3d_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IVec3dStubVtbl =
{
    &IID_IVec3d,
    &IVec3d_ServerInfo,
    17,
    &IVec3d_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0004, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IGeometry, ver. 0.0,
   GUID={0x9ee2be10,0xa27f,0x4641,{0xb8,0xc6,0x20,0xd6,0x5c,0xc4,0xf0,0x56}} */

#pragma code_seg(".orpc")
static const unsigned short IGeometry_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    702
    };

static const MIDL_STUBLESS_PROXY_INFO IGeometry_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IGeometry_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IGeometry_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IGeometry_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IGeometryProxyVtbl = 
{
    &IGeometry_ProxyInfo,
    &IID_IGeometry,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* IGeometry::get_classType */ ,
    (void *) (INT_PTR) -1 /* IGeometry::push_back */
};


static const PRPC_STUB_FUNCTION IGeometry_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IGeometryStubVtbl =
{
    &IID_IGeometry,
    &IGeometry_ServerInfo,
    12,
    &IGeometry_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0005, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IFeature, ver. 0.0,
   GUID={0x32E9A775,0x8511,0x4570,{0xA6,0x3F,0x57,0x97,0x27,0xBA,0x53,0x22}} */

#pragma code_seg(".orpc")
static const unsigned short IFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    738
    };

static const MIDL_STUBLESS_PROXY_INFO IFeature_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IFeatureProxyVtbl = 
{
    &IFeature_ProxyInfo,
    &IID_IFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* IFeature::setGeometry */
};


static const PRPC_STUB_FUNCTION IFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IFeatureStubVtbl =
{
    &IID_IFeature,
    &IFeature_ServerInfo,
    11,
    &IFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0006, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILinear, ver. 0.0,
   GUID={0x185B69E3,0x4C29,0x4DF1,{0x80,0x80,0x84,0x19,0xCC,0xD1,0xE2,0x16}} */

#pragma code_seg(".orpc")
static const unsigned short ILinear_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    774
    };

static const MIDL_STUBLESS_PROXY_INFO ILinear_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ILinear_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ILinear_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ILinear_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _ILinearProxyVtbl = 
{
    &ILinear_ProxyInfo,
    &IID_ILinear,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* ILinear::set */
};


static const PRPC_STUB_FUNCTION ILinear_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ILinearStubVtbl =
{
    &IID_ILinear,
    &ILinear_ServerInfo,
    11,
    &ILinear_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0007, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAngular, ver. 0.0,
   GUID={0xBC4518B2,0x2C77,0x492F,{0xB2,0x6C,0x25,0x23,0xFE,0xBF,0x2F,0xB3}} */

#pragma code_seg(".orpc")
static const unsigned short IAngular_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    774
    };

static const MIDL_STUBLESS_PROXY_INFO IAngular_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IAngular_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAngular_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IAngular_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IAngularProxyVtbl = 
{
    &IAngular_ProxyInfo,
    &IID_IAngular,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* IAngular::set */
};


static const PRPC_STUB_FUNCTION IAngular_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IAngularStubVtbl =
{
    &IID_IAngular,
    &IAngular_ServerInfo,
    11,
    &IAngular_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0008, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILineStringGeometry, ver. 0.0,
   GUID={0xCC3C1644,0x714E,0x436E,{0x8A,0x2B,0x80,0x89,0x7D,0xD7,0x6A,0xD2}} */

#pragma code_seg(".orpc")
static const unsigned short ILineStringGeometry_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    702,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ILineStringGeometry_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ILineStringGeometry_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ILineStringGeometry_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ILineStringGeometry_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _ILineStringGeometryProxyVtbl = 
{
    0,
    &IID_ILineStringGeometry,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */ ,
    0 /* forced delegation IGeometry::get_classType */ ,
    0 /* forced delegation IGeometry::push_back */
};


static const PRPC_STUB_FUNCTION ILineStringGeometry_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ILineStringGeometryStubVtbl =
{
    &IID_ILineStringGeometry,
    &ILineStringGeometry_ServerInfo,
    12,
    &ILineStringGeometry_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0009, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IRingGeometry, ver. 0.0,
   GUID={0x687C2064,0x3973,0x4B84,{0x93,0x30,0x57,0x23,0xBD,0x8E,0x52,0xCE}} */

#pragma code_seg(".orpc")
static const unsigned short IRingGeometry_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    702,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IRingGeometry_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IRingGeometry_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IRingGeometry_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IRingGeometry_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IRingGeometryProxyVtbl = 
{
    0,
    &IID_IRingGeometry,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */ ,
    0 /* forced delegation IGeometry::get_classType */ ,
    0 /* forced delegation IGeometry::push_back */
};


static const PRPC_STUB_FUNCTION IRingGeometry_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IRingGeometryStubVtbl =
{
    &IID_IRingGeometry,
    &IRingGeometry_ServerInfo,
    12,
    &IRingGeometry_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0010, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IPolygonGeometry, ver. 0.0,
   GUID={0x40D84433,0x03C2,0x4FE3,{0xB2,0xE6,0x0B,0x04,0x9E,0xB9,0xAA,0x05}} */

#pragma code_seg(".orpc")
static const unsigned short IPolygonGeometry_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    702,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IPolygonGeometry_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IPolygonGeometry_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPolygonGeometry_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IPolygonGeometry_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IPolygonGeometryProxyVtbl = 
{
    0,
    &IID_IPolygonGeometry,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */ ,
    0 /* forced delegation IGeometry::get_classType */ ,
    0 /* forced delegation IGeometry::push_back */
};


static const PRPC_STUB_FUNCTION IPolygonGeometry_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPolygonGeometryStubVtbl =
{
    &IID_IPolygonGeometry,
    &IPolygonGeometry_ServerInfo,
    12,
    &IPolygonGeometry_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0011, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISourceDispatch, ver. 0.0,
   GUID={0x5fd19a2e,0xd274,0x4d96,{0xb8,0x25,0x85,0x19,0xa6,0x8a,0xe9,0xe6}} */

#pragma code_seg(".orpc")
static const unsigned short ISourceDispatch_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666
    };

static const MIDL_STUBLESS_PROXY_INFO ISourceDispatch_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ISourceDispatch_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISourceDispatch_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ISourceDispatch_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _ISourceDispatchProxyVtbl = 
{
    &ISourceDispatch_ProxyInfo,
    &IID_ISourceDispatch,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* ISourceDispatch::get_classType */
};


static const PRPC_STUB_FUNCTION ISourceDispatch_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ISourceDispatchStubVtbl =
{
    &IID_ISourceDispatch,
    &ISourceDispatch_ServerInfo,
    11,
    &ISourceDispatch_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0012, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITileSourceDispatch, ver. 0.0,
   GUID={0xa9e09563,0x3471,0x4b40,{0x86,0xd8,0xcb,0xb2,0xb4,0x72,0x99,0x2e}} */

#pragma code_seg(".orpc")
static const unsigned short ITileSourceDispatch_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITileSourceDispatch_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceDispatch_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITileSourceDispatch_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceDispatch_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _ITileSourceDispatchProxyVtbl = 
{
    0,
    &IID_ITileSourceDispatch,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */ ,
    0 /* forced delegation ISourceDispatch::get_classType */
};


static const PRPC_STUB_FUNCTION ITileSourceDispatch_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITileSourceDispatchStubVtbl =
{
    &IID_ITileSourceDispatch,
    &ITileSourceDispatch_ServerInfo,
    11,
    &ITileSourceDispatch_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0013, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IVectorSourceDispatch, ver. 0.0,
   GUID={0xf645160e,0x9102,0x4e02,{0xb5,0x92,0x3d,0x6e,0x08,0x16,0xda,0xfa}} */

#pragma code_seg(".orpc")
static const unsigned short IVectorSourceDispatch_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IVectorSourceDispatch_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IVectorSourceDispatch_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVectorSourceDispatch_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IVectorSourceDispatch_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IVectorSourceDispatchProxyVtbl = 
{
    0,
    &IID_IVectorSourceDispatch,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */ ,
    0 /* forced delegation ISourceDispatch::get_classType */
};


static const PRPC_STUB_FUNCTION IVectorSourceDispatch_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IVectorSourceDispatchStubVtbl =
{
    &IID_IVectorSourceDispatch,
    &IVectorSourceDispatch_ServerInfo,
    11,
    &IVectorSourceDispatch_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0014, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IFeatureSourceDispatch, ver. 0.0,
   GUID={0xbaa39933,0x9137,0x4d83,{0xae,0x81,0x1a,0xf7,0xef,0x83,0x5d,0x29}} */

#pragma code_seg(".orpc")
static const unsigned short IFeatureSourceDispatch_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IFeatureSourceDispatch_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IFeatureSourceDispatch_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IFeatureSourceDispatch_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IFeatureSourceDispatch_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IFeatureSourceDispatchProxyVtbl = 
{
    0,
    &IID_IFeatureSourceDispatch,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */ ,
    0 /* forced delegation ISourceDispatch::get_classType */
};


static const PRPC_STUB_FUNCTION IFeatureSourceDispatch_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IFeatureSourceDispatchStubVtbl =
{
    &IID_IFeatureSourceDispatch,
    &IFeatureSourceDispatch_ServerInfo,
    11,
    &IFeatureSourceDispatch_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0015, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IFeatureSourceOGR, ver. 0.0,
   GUID={0x21DEF583,0xA689,0x4CCF,{0x87,0x81,0x18,0xC8,0xDD,0x9F,0xF9,0x6E}} */

#pragma code_seg(".orpc")
static const unsigned short IFeatureSourceOGR_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    816,
    852
    };

static const MIDL_STUBLESS_PROXY_INFO IFeatureSourceOGR_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IFeatureSourceOGR_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IFeatureSourceOGR_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IFeatureSourceOGR_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IFeatureSourceOGRProxyVtbl = 
{
    &IFeatureSourceOGR_ProxyInfo,
    &IID_IFeatureSourceOGR,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* ISourceDispatch::get_classType */ ,
    (void *) (INT_PTR) -1 /* IFeatureSourceOGR::put_url */ ,
    (void *) (INT_PTR) -1 /* IFeatureSourceOGR::get_url */
};


static const PRPC_STUB_FUNCTION IFeatureSourceOGR_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IFeatureSourceOGRStubVtbl =
{
    &IID_IFeatureSourceOGR,
    &IFeatureSourceOGR_ServerInfo,
    13,
    &IFeatureSourceOGR_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0016, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IFeatureSourceTFS, ver. 0.0,
   GUID={0xD0D80434,0x6B4A,0x4885,{0x97,0x8B,0x83,0x6C,0x08,0x65,0x6E,0xB3}} */

#pragma code_seg(".orpc")
static const unsigned short IFeatureSourceTFS_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IFeatureSourceTFS_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IFeatureSourceTFS_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IFeatureSourceTFS_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IFeatureSourceTFS_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IFeatureSourceTFSProxyVtbl = 
{
    0,
    &IID_IFeatureSourceTFS,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */ ,
    0 /* forced delegation ISourceDispatch::get_classType */
};


static const PRPC_STUB_FUNCTION IFeatureSourceTFS_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IFeatureSourceTFSStubVtbl =
{
    &IID_IFeatureSourceTFS,
    &IFeatureSourceTFS_ServerInfo,
    11,
    &IFeatureSourceTFS_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0017, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IFeatureSourceWFS, ver. 0.0,
   GUID={0xB5F72630,0x282A,0x42CB,{0xB8,0x10,0x67,0x4F,0x56,0xDE,0x40,0x08}} */

#pragma code_seg(".orpc")
static const unsigned short IFeatureSourceWFS_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IFeatureSourceWFS_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IFeatureSourceWFS_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IFeatureSourceWFS_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IFeatureSourceWFS_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IFeatureSourceWFSProxyVtbl = 
{
    0,
    &IID_IFeatureSourceWFS,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */ ,
    0 /* forced delegation ISourceDispatch::get_classType */
};


static const PRPC_STUB_FUNCTION IFeatureSourceWFS_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IFeatureSourceWFSStubVtbl =
{
    &IID_IFeatureSourceWFS,
    &IFeatureSourceWFS_ServerInfo,
    11,
    &IFeatureSourceWFS_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0018, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITileSourceAGGLite, ver. 0.0,
   GUID={0x455F2841,0xD4C5,0x45E4,{0x96,0xAC,0x4D,0xEE,0x86,0x93,0x0B,0x8E}} */

#pragma code_seg(".orpc")
static const unsigned short ITileSourceAGGLite_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    888
    };

static const MIDL_STUBLESS_PROXY_INFO ITileSourceAGGLite_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceAGGLite_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITileSourceAGGLite_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceAGGLite_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _ITileSourceAGGLiteProxyVtbl = 
{
    &ITileSourceAGGLite_ProxyInfo,
    &IID_ITileSourceAGGLite,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* ISourceDispatch::get_classType */ ,
    (void *) (INT_PTR) -1 /* ITileSourceAGGLite::put_featureSource */
};


static const PRPC_STUB_FUNCTION ITileSourceAGGLite_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITileSourceAGGLiteStubVtbl =
{
    &IID_ITileSourceAGGLite,
    &ITileSourceAGGLite_ServerInfo,
    12,
    &ITileSourceAGGLite_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0019, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITileSourceArcGIS, ver. 0.0,
   GUID={0x4B90237D,0x18D8,0x499E,{0x97,0x80,0x69,0x15,0xB3,0x1F,0xCA,0x16}} */

#pragma code_seg(".orpc")
static const unsigned short ITileSourceArcGIS_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    816,
    852
    };

static const MIDL_STUBLESS_PROXY_INFO ITileSourceArcGIS_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceArcGIS_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITileSourceArcGIS_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceArcGIS_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _ITileSourceArcGISProxyVtbl = 
{
    &ITileSourceArcGIS_ProxyInfo,
    &IID_ITileSourceArcGIS,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* ISourceDispatch::get_classType */ ,
    (void *) (INT_PTR) -1 /* ITileSourceArcGIS::put_url */ ,
    (void *) (INT_PTR) -1 /* ITileSourceArcGIS::get_url */
};


static const PRPC_STUB_FUNCTION ITileSourceArcGIS_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITileSourceArcGISStubVtbl =
{
    &IID_ITileSourceArcGIS,
    &ITileSourceArcGIS_ServerInfo,
    13,
    &ITileSourceArcGIS_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0020, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITileSourceBing, ver. 0.0,
   GUID={0xEFAEFF1E,0x29CB,0x416B,{0x90,0xE8,0x0A,0x68,0x79,0x03,0xC9,0xB5}} */

#pragma code_seg(".orpc")
static const unsigned short ITileSourceBing_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITileSourceBing_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceBing_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITileSourceBing_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceBing_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _ITileSourceBingProxyVtbl = 
{
    0,
    &IID_ITileSourceBing,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */ ,
    0 /* forced delegation ISourceDispatch::get_classType */
};


static const PRPC_STUB_FUNCTION ITileSourceBing_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITileSourceBingStubVtbl =
{
    &IID_ITileSourceBing,
    &ITileSourceBing_ServerInfo,
    11,
    &ITileSourceBing_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0021, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITileSourceColorRamp, ver. 0.0,
   GUID={0x2B8ED8F6,0xDF28,0x408D,{0xAB,0x3D,0x82,0xE3,0x2F,0x4A,0x7B,0x9F}} */

#pragma code_seg(".orpc")
static const unsigned short ITileSourceColorRamp_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITileSourceColorRamp_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceColorRamp_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITileSourceColorRamp_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceColorRamp_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _ITileSourceColorRampProxyVtbl = 
{
    0,
    &IID_ITileSourceColorRamp,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */ ,
    0 /* forced delegation ISourceDispatch::get_classType */
};


static const PRPC_STUB_FUNCTION ITileSourceColorRamp_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITileSourceColorRampStubVtbl =
{
    &IID_ITileSourceColorRamp,
    &ITileSourceColorRamp_ServerInfo,
    11,
    &ITileSourceColorRamp_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0022, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITileSourceDebug, ver. 0.0,
   GUID={0x830F0E48,0xB7F1,0x4A75,{0xBA,0x64,0x34,0x38,0x9A,0xAB,0x15,0x3D}} */

#pragma code_seg(".orpc")
static const unsigned short ITileSourceDebug_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITileSourceDebug_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceDebug_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITileSourceDebug_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceDebug_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _ITileSourceDebugProxyVtbl = 
{
    0,
    &IID_ITileSourceDebug,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */ ,
    0 /* forced delegation ISourceDispatch::get_classType */
};


static const PRPC_STUB_FUNCTION ITileSourceDebug_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITileSourceDebugStubVtbl =
{
    &IID_ITileSourceDebug,
    &ITileSourceDebug_ServerInfo,
    11,
    &ITileSourceDebug_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0023, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITileSourceGDAL, ver. 0.0,
   GUID={0x4A2FC843,0xDEE0,0x4C8B,{0x97,0xC2,0xE0,0xE6,0xDE,0x0B,0xBE,0x96}} */

#pragma code_seg(".orpc")
static const unsigned short ITileSourceGDAL_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    816,
    852
    };

static const MIDL_STUBLESS_PROXY_INFO ITileSourceGDAL_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceGDAL_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITileSourceGDAL_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceGDAL_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _ITileSourceGDALProxyVtbl = 
{
    &ITileSourceGDAL_ProxyInfo,
    &IID_ITileSourceGDAL,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* ISourceDispatch::get_classType */ ,
    (void *) (INT_PTR) -1 /* ITileSourceGDAL::put_url */ ,
    (void *) (INT_PTR) -1 /* ITileSourceGDAL::get_url */
};


static const PRPC_STUB_FUNCTION ITileSourceGDAL_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITileSourceGDALStubVtbl =
{
    &IID_ITileSourceGDAL,
    &ITileSourceGDAL_ServerInfo,
    13,
    &ITileSourceGDAL_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0024, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITileSourceMBTiles, ver. 0.0,
   GUID={0x38E92073,0x8FE0,0x4F75,{0x91,0x9E,0x54,0x63,0xA2,0x2D,0xDE,0xFB}} */

#pragma code_seg(".orpc")
static const unsigned short ITileSourceMBTiles_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    816,
    924,
    960
    };

static const MIDL_STUBLESS_PROXY_INFO ITileSourceMBTiles_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceMBTiles_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITileSourceMBTiles_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceMBTiles_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _ITileSourceMBTilesProxyVtbl = 
{
    &ITileSourceMBTiles_ProxyInfo,
    &IID_ITileSourceMBTiles,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* ISourceDispatch::get_classType */ ,
    (void *) (INT_PTR) -1 /* ITileSourceMBTiles::put_fileName */ ,
    (void *) (INT_PTR) -1 /* ITileSourceMBTiles::put_format */ ,
    (void *) (INT_PTR) -1 /* ITileSourceMBTiles::put_computeLevels */
};


static const PRPC_STUB_FUNCTION ITileSourceMBTiles_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITileSourceMBTilesStubVtbl =
{
    &IID_ITileSourceMBTiles,
    &ITileSourceMBTiles_ServerInfo,
    14,
    &ITileSourceMBTiles_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0025, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITileSourceNoise, ver. 0.0,
   GUID={0xF351EF1C,0x12AE,0x429E,{0xBD,0x65,0xCD,0xFC,0x38,0x4F,0x31,0x4D}} */

#pragma code_seg(".orpc")
static const unsigned short ITileSourceNoise_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    450,
    186,
    522,
    996,
    594,
    1032,
    1068,
    1104,
    1140,
    1176,
    1212
    };

static const MIDL_STUBLESS_PROXY_INFO ITileSourceNoise_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceNoise_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITileSourceNoise_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceNoise_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(22) _ITileSourceNoiseProxyVtbl = 
{
    &ITileSourceNoise_ProxyInfo,
    &IID_ITileSourceNoise,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* ISourceDispatch::get_classType */ ,
    (void *) (INT_PTR) -1 /* ITileSourceNoise::put_resolution */ ,
    (void *) (INT_PTR) -1 /* ITileSourceNoise::put_scale */ ,
    (void *) (INT_PTR) -1 /* ITileSourceNoise::put_bias */ ,
    (void *) (INT_PTR) -1 /* ITileSourceNoise::put_octaves */ ,
    (void *) (INT_PTR) -1 /* ITileSourceNoise::put_frequency */ ,
    (void *) (INT_PTR) -1 /* ITileSourceNoise::put_persistence */ ,
    (void *) (INT_PTR) -1 /* ITileSourceNoise::put_lacunarity */ ,
    (void *) (INT_PTR) -1 /* ITileSourceNoise::put_seed */ ,
    (void *) (INT_PTR) -1 /* ITileSourceNoise::put_normalMap */ ,
    (void *) (INT_PTR) -1 /* ITileSourceNoise::put_minElevation */ ,
    (void *) (INT_PTR) -1 /* ITileSourceNoise::put_maxElevation */
};


static const PRPC_STUB_FUNCTION ITileSourceNoise_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITileSourceNoiseStubVtbl =
{
    &IID_ITileSourceNoise,
    &ITileSourceNoise_ServerInfo,
    22,
    &ITileSourceNoise_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0026, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITileSourceOSG, ver. 0.0,
   GUID={0x267BD9F7,0x73DC,0x41C8,{0x92,0x9A,0x14,0x71,0x59,0x53,0x55,0x92}} */

#pragma code_seg(".orpc")
static const unsigned short ITileSourceOSG_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITileSourceOSG_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceOSG_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITileSourceOSG_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceOSG_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _ITileSourceOSGProxyVtbl = 
{
    0,
    &IID_ITileSourceOSG,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */ ,
    0 /* forced delegation ISourceDispatch::get_classType */
};


static const PRPC_STUB_FUNCTION ITileSourceOSG_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITileSourceOSGStubVtbl =
{
    &IID_ITileSourceOSG,
    &ITileSourceOSG_ServerInfo,
    11,
    &ITileSourceOSG_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0027, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITileSourceTileCache, ver. 0.0,
   GUID={0x83428B22,0x3F62,0x46B0,{0x8B,0xE9,0x7B,0xD8,0x9A,0xE3,0xE8,0xF6}} */

#pragma code_seg(".orpc")
static const unsigned short ITileSourceTileCache_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITileSourceTileCache_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceTileCache_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITileSourceTileCache_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceTileCache_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _ITileSourceTileCacheProxyVtbl = 
{
    0,
    &IID_ITileSourceTileCache,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */ ,
    0 /* forced delegation ISourceDispatch::get_classType */
};


static const PRPC_STUB_FUNCTION ITileSourceTileCache_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITileSourceTileCacheStubVtbl =
{
    &IID_ITileSourceTileCache,
    &ITileSourceTileCache_ServerInfo,
    11,
    &ITileSourceTileCache_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0028, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITileSourceTileService, ver. 0.0,
   GUID={0xFC61EF10,0x9CD5,0x4815,{0x83,0xAA,0xBF,0x9A,0xBA,0xE9,0x21,0x59}} */

#pragma code_seg(".orpc")
static const unsigned short ITileSourceTileService_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITileSourceTileService_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceTileService_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITileSourceTileService_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceTileService_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _ITileSourceTileServiceProxyVtbl = 
{
    0,
    &IID_ITileSourceTileService,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */ ,
    0 /* forced delegation ISourceDispatch::get_classType */
};


static const PRPC_STUB_FUNCTION ITileSourceTileService_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITileSourceTileServiceStubVtbl =
{
    &IID_ITileSourceTileService,
    &ITileSourceTileService_ServerInfo,
    11,
    &ITileSourceTileService_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0029, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITileSourceTMS, ver. 0.0,
   GUID={0x5F892AF2,0x73A1,0x48FE,{0xB8,0x61,0xB6,0x4D,0x5F,0xD8,0xF5,0xDC}} */

#pragma code_seg(".orpc")
static const unsigned short ITileSourceTMS_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    816,
    852
    };

static const MIDL_STUBLESS_PROXY_INFO ITileSourceTMS_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceTMS_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITileSourceTMS_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceTMS_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _ITileSourceTMSProxyVtbl = 
{
    &ITileSourceTMS_ProxyInfo,
    &IID_ITileSourceTMS,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* ISourceDispatch::get_classType */ ,
    (void *) (INT_PTR) -1 /* ITileSourceTMS::put_url */ ,
    (void *) (INT_PTR) -1 /* ITileSourceTMS::get_url */
};


static const PRPC_STUB_FUNCTION ITileSourceTMS_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITileSourceTMSStubVtbl =
{
    &IID_ITileSourceTMS,
    &ITileSourceTMS_ServerInfo,
    13,
    &ITileSourceTMS_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0030, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITileSourceVPB, ver. 0.0,
   GUID={0x1699395E,0xE6CD,0x414A,{0xB4,0x1F,0x8D,0x90,0xA0,0xDD,0x68,0x65}} */

#pragma code_seg(".orpc")
static const unsigned short ITileSourceVPB_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITileSourceVPB_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceVPB_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITileSourceVPB_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceVPB_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _ITileSourceVPBProxyVtbl = 
{
    0,
    &IID_ITileSourceVPB,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */ ,
    0 /* forced delegation ISourceDispatch::get_classType */
};


static const PRPC_STUB_FUNCTION ITileSourceVPB_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITileSourceVPBStubVtbl =
{
    &IID_ITileSourceVPB,
    &ITileSourceVPB_ServerInfo,
    11,
    &ITileSourceVPB_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0031, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITileSourceWCS, ver. 0.0,
   GUID={0x095F7009,0xD5A0,0x42A9,{0x9D,0x59,0x63,0x79,0x2D,0xE7,0x40,0xC5}} */

#pragma code_seg(".orpc")
static const unsigned short ITileSourceWCS_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITileSourceWCS_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceWCS_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITileSourceWCS_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceWCS_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _ITileSourceWCSProxyVtbl = 
{
    0,
    &IID_ITileSourceWCS,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */ ,
    0 /* forced delegation ISourceDispatch::get_classType */
};


static const PRPC_STUB_FUNCTION ITileSourceWCS_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITileSourceWCSStubVtbl =
{
    &IID_ITileSourceWCS,
    &ITileSourceWCS_ServerInfo,
    11,
    &ITileSourceWCS_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0032, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITileSourceWMS, ver. 0.0,
   GUID={0x261C004D,0x8496,0x4362,{0xAD,0x79,0x4C,0x63,0x31,0x7C,0xB6,0x30}} */

#pragma code_seg(".orpc")
static const unsigned short ITileSourceWMS_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITileSourceWMS_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceWMS_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITileSourceWMS_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceWMS_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _ITileSourceWMSProxyVtbl = 
{
    0,
    &IID_ITileSourceWMS,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */ ,
    0 /* forced delegation ISourceDispatch::get_classType */
};


static const PRPC_STUB_FUNCTION ITileSourceWMS_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITileSourceWMSStubVtbl =
{
    &IID_ITileSourceWMS,
    &ITileSourceWMS_ServerInfo,
    11,
    &ITileSourceWMS_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0033, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITileSourceXYZ, ver. 0.0,
   GUID={0xA5023EAB,0x8CDF,0x4781,{0x9B,0x36,0xF8,0x46,0xEF,0x8B,0x7C,0xEC}} */

#pragma code_seg(".orpc")
static const unsigned short ITileSourceXYZ_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITileSourceXYZ_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceXYZ_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITileSourceXYZ_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceXYZ_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _ITileSourceXYZProxyVtbl = 
{
    0,
    &IID_ITileSourceXYZ,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */ ,
    0 /* forced delegation ISourceDispatch::get_classType */
};


static const PRPC_STUB_FUNCTION ITileSourceXYZ_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITileSourceXYZStubVtbl =
{
    &IID_ITileSourceXYZ,
    &ITileSourceXYZ_ServerInfo,
    11,
    &ITileSourceXYZ_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0034, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITileSourceYahoo, ver. 0.0,
   GUID={0x10DBE691,0x1006,0x4C68,{0x97,0x6D,0x6C,0x03,0x64,0xFA,0xB1,0xAB}} */

#pragma code_seg(".orpc")
static const unsigned short ITileSourceYahoo_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITileSourceYahoo_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceYahoo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITileSourceYahoo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITileSourceYahoo_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _ITileSourceYahooProxyVtbl = 
{
    0,
    &IID_ITileSourceYahoo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */ ,
    0 /* forced delegation ISourceDispatch::get_classType */
};


static const PRPC_STUB_FUNCTION ITileSourceYahoo_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITileSourceYahooStubVtbl =
{
    &IID_ITileSourceYahoo,
    &ITileSourceYahoo_ServerInfo,
    11,
    &ITileSourceYahoo_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0035, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IVectorSourceGeom, ver. 0.0,
   GUID={0x7848C86A,0x2A7B,0x48C1,{0xA5,0xD1,0xBF,0x0C,0xDD,0x37,0x85,0x8E}} */

#pragma code_seg(".orpc")
static const unsigned short IVectorSourceGeom_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    888
    };

static const MIDL_STUBLESS_PROXY_INFO IVectorSourceGeom_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IVectorSourceGeom_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVectorSourceGeom_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IVectorSourceGeom_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IVectorSourceGeomProxyVtbl = 
{
    &IVectorSourceGeom_ProxyInfo,
    &IID_IVectorSourceGeom,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* ISourceDispatch::get_classType */ ,
    (void *) (INT_PTR) -1 /* IVectorSourceGeom::put_featureSource */
};


static const PRPC_STUB_FUNCTION IVectorSourceGeom_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IVectorSourceGeomStubVtbl =
{
    &IID_IVectorSourceGeom,
    &IVectorSourceGeom_ServerInfo,
    12,
    &IVectorSourceGeom_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0036, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IVectorSourceSimple, ver. 0.0,
   GUID={0x4A5FC24C,0xB1A1,0x4C51,{0x82,0x5A,0x4F,0x5E,0x12,0x43,0xD0,0xE2}} */

#pragma code_seg(".orpc")
static const unsigned short IVectorSourceSimple_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IVectorSourceSimple_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IVectorSourceSimple_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVectorSourceSimple_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IVectorSourceSimple_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IVectorSourceSimpleProxyVtbl = 
{
    0,
    &IID_IVectorSourceSimple,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */ ,
    0 /* forced delegation ISourceDispatch::get_classType */
};


static const PRPC_STUB_FUNCTION IVectorSourceSimple_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IVectorSourceSimpleStubVtbl =
{
    &IID_IVectorSourceSimple,
    &IVectorSourceSimple_ServerInfo,
    11,
    &IVectorSourceSimple_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0037, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IVectorSourceStencil, ver. 0.0,
   GUID={0x4D744CA0,0x8D2F,0x4E36,{0x81,0xE4,0x52,0x5D,0x33,0xC5,0x6E,0x19}} */

#pragma code_seg(".orpc")
static const unsigned short IVectorSourceStencil_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IVectorSourceStencil_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IVectorSourceStencil_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVectorSourceStencil_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IVectorSourceStencil_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IVectorSourceStencilProxyVtbl = 
{
    0,
    &IID_IVectorSourceStencil,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */ ,
    0 /* forced delegation ISourceDispatch::get_classType */
};


static const PRPC_STUB_FUNCTION IVectorSourceStencil_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IVectorSourceStencilStubVtbl =
{
    &IID_IVectorSourceStencil,
    &IVectorSourceStencil_ServerInfo,
    11,
    &IVectorSourceStencil_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStyle, ver. 0.0,
   GUID={0x07414829,0x2F57,0x423A,{0x99,0x6C,0x06,0xF0,0x5D,0x4C,0x77,0xF0}} */

#pragma code_seg(".orpc")
static const unsigned short IStyle_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IStyle_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IStyle_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStyle_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IStyle_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IStyleProxyVtbl = 
{
    0,
    &IID_IStyle,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION IStyle_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IStyleStubVtbl =
{
    &IID_IStyle,
    &IStyle_ServerInfo,
    7,
    &IStyle_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0039, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IEarthObject, ver. 0.0,
   GUID={0x263c6640,0x608e,0x4aa6,{0x8b,0x62,0x50,0x79,0x14,0xf2,0x79,0x54}} */

#pragma code_seg(".orpc")
static const unsigned short IEarthObject_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    1248,
    1284,
    1320
    };

static const MIDL_STUBLESS_PROXY_INFO IEarthObject_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IEarthObject_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IEarthObject_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IEarthObject_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IEarthObjectProxyVtbl = 
{
    &IEarthObject_ProxyInfo,
    &IID_IEarthObject,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_classType */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::put_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_enabled */
};


static const PRPC_STUB_FUNCTION IEarthObject_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IEarthObjectStubVtbl =
{
    &IID_IEarthObject,
    &IEarthObject_ServerInfo,
    14,
    &IEarthObject_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0040, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IEarthGroup, ver. 0.0,
   GUID={0x5AFC2DA3,0x1F48,0x4DDC,{0x98,0xD8,0x05,0xE4,0x76,0x35,0x40,0x79}} */

#pragma code_seg(".orpc")
static const unsigned short IEarthGroup_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    1248,
    1284,
    1320,
    1356,
    1392,
    1428,
    1464,
    1506,
    1548,
    1590,
    1632,
    1668,
    1698
    };

static const MIDL_STUBLESS_PROXY_INFO IEarthGroup_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IEarthGroup_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IEarthGroup_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IEarthGroup_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(24) _IEarthGroupProxyVtbl = 
{
    &IEarthGroup_ProxyInfo,
    &IID_IEarthGroup,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_classType */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::put_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_enabled */ ,
    (void *) (INT_PTR) -1 /* IEarthGroup::addChild */ ,
    (void *) (INT_PTR) -1 /* IEarthGroup::removeChild */ ,
    (void *) (INT_PTR) -1 /* IEarthGroup::removeChildByPos */ ,
    (void *) (INT_PTR) -1 /* IEarthGroup::getChild */ ,
    (void *) (INT_PTR) -1 /* IEarthGroup::getPosOfChild */ ,
    (void *) (INT_PTR) -1 /* IEarthGroup::moveChild */ ,
    (void *) (INT_PTR) -1 /* IEarthGroup::moveChildFromCurPos */ ,
    (void *) (INT_PTR) -1 /* IEarthGroup::getChildrenCount */ ,
    (void *) (INT_PTR) -1 /* IEarthGroup::removeChildren */ ,
    (void *) (INT_PTR) -1 /* IEarthGroup::insertChild */
};


static const PRPC_STUB_FUNCTION IEarthGroup_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IEarthGroupStubVtbl =
{
    &IID_IEarthGroup,
    &IEarthGroup_ServerInfo,
    24,
    &IEarthGroup_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0041, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IEarthViewer, ver. 0.0,
   GUID={0x6AB4E72D,0xE25A,0x4412,{0x9C,0xD5,0x0E,0xB6,0x96,0xD1,0xD2,0x43}} */

#pragma code_seg(".orpc")
static const unsigned short IEarthViewer_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IEarthViewer_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IEarthViewer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IEarthViewer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IEarthViewer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IEarthViewerProxyVtbl = 
{
    0,
    &IID_IEarthViewer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */
};


static const PRPC_STUB_FUNCTION IEarthViewer_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IEarthViewerStubVtbl =
{
    &IID_IEarthViewer,
    &IEarthViewer_ServerInfo,
    10,
    &IEarthViewer_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0042, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IEarthMap, ver. 0.0,
   GUID={0xE18D8D71,0x85F8,0x49F2,{0xAE,0xF0,0x71,0xED,0x0E,0xDF,0x2B,0xF4}} */

#pragma code_seg(".orpc")
static const unsigned short IEarthMap_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    1740,
    1776,
    1812
    };

static const MIDL_STUBLESS_PROXY_INFO IEarthMap_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IEarthMap_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IEarthMap_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IEarthMap_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IEarthMapProxyVtbl = 
{
    &IEarthMap_ProxyInfo,
    &IID_IEarthMap,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* IEarthMap::put_maxThreadsNum */ ,
    (void *) (INT_PTR) -1 /* IEarthMap::get_maxThreadsNum */ ,
    (void *) (INT_PTR) -1 /* IEarthMap::getSRS */
};


static const PRPC_STUB_FUNCTION IEarthMap_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IEarthMapStubVtbl =
{
    &IID_IEarthMap,
    &IEarthMap_ServerInfo,
    13,
    &IEarthMap_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0043, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISky, ver. 0.0,
   GUID={0xBA5628D4,0x3E46,0x44C8,{0x94,0x0E,0x3A,0xDC,0x72,0x75,0x39,0xA0}} */

#pragma code_seg(".orpc")
static const unsigned short ISky_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    1248,
    1284,
    1320,
    1848,
    1884,
    1920,
    1956,
    1992,
    2028
    };

static const MIDL_STUBLESS_PROXY_INFO ISky_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ISky_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISky_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ISky_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(20) _ISkyProxyVtbl = 
{
    &ISky_ProxyInfo,
    &IID_ISky,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_classType */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::put_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_enabled */ ,
    (void *) (INT_PTR) -1 /* ISky::get_enableLighting */ ,
    (void *) (INT_PTR) -1 /* ISky::put_enableLighting */ ,
    (void *) (INT_PTR) -1 /* ISky::get_ambient */ ,
    (void *) (INT_PTR) -1 /* ISky::put_ambient */ ,
    (void *) (INT_PTR) -1 /* ISky::put_hours */ ,
    (void *) (INT_PTR) -1 /* ISky::get_hours */
};


static const PRPC_STUB_FUNCTION ISky_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ISkyStubVtbl =
{
    &IID_ISky,
    &ISky_ServerInfo,
    20,
    &ISky_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0044, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IViewpoint, ver. 0.0,
   GUID={0x21BA1141,0x5A5D,0x449A,{0xAF,0x21,0xE1,0x88,0x99,0x30,0x4F,0x79}} */

#pragma code_seg(".orpc")
static const unsigned short IViewpoint_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    1248,
    1284,
    1320,
    2064,
    294,
    1032,
    2094,
    2130,
    2166,
    2202,
    2238,
    2274,
    2310,
    2346,
    2382,
    2418
    };

static const MIDL_STUBLESS_PROXY_INFO IViewpoint_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IViewpoint_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IViewpoint_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IViewpoint_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(27) _IViewpointProxyVtbl = 
{
    &IViewpoint_ProxyInfo,
    &IID_IViewpoint,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_classType */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::put_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_enabled */ ,
    (void *) (INT_PTR) -1 /* IViewpoint::flyTo */ ,
    (void *) (INT_PTR) -1 /* IViewpoint::get_x */ ,
    (void *) (INT_PTR) -1 /* IViewpoint::put_x */ ,
    (void *) (INT_PTR) -1 /* IViewpoint::get_y */ ,
    (void *) (INT_PTR) -1 /* IViewpoint::put_y */ ,
    (void *) (INT_PTR) -1 /* IViewpoint::get_z */ ,
    (void *) (INT_PTR) -1 /* IViewpoint::put_z */ ,
    (void *) (INT_PTR) -1 /* IViewpoint::get_heading */ ,
    (void *) (INT_PTR) -1 /* IViewpoint::put_heading */ ,
    (void *) (INT_PTR) -1 /* IViewpoint::get_pitch */ ,
    (void *) (INT_PTR) -1 /* IViewpoint::put_pitch */ ,
    (void *) (INT_PTR) -1 /* IViewpoint::get_range */ ,
    (void *) (INT_PTR) -1 /* IViewpoint::put_range */
};


static const PRPC_STUB_FUNCTION IViewpoint_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IViewpointStubVtbl =
{
    &IID_IViewpoint,
    &IViewpoint_ServerInfo,
    27,
    &IViewpoint_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0045, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IGraticule, ver. 0.0,
   GUID={0x06406A22,0x841C,0x4D8E,{0xB2,0x55,0xEC,0xB6,0x56,0x86,0xFE,0xA9}} */

#pragma code_seg(".orpc")
static const unsigned short IGraticule_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    1248,
    1284,
    1320,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IGraticule_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IGraticule_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IGraticule_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IGraticule_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IGraticuleProxyVtbl = 
{
    0,
    &IID_IGraticule,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */ ,
    0 /* forced delegation IEarthObject::get_classType */ ,
    0 /* forced delegation IEarthObject::put_visible */ ,
    0 /* forced delegation IEarthObject::get_visible */ ,
    0 /* forced delegation IEarthObject::get_enabled */
};


static const PRPC_STUB_FUNCTION IGraticule_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IGraticuleStubVtbl =
{
    &IID_IGraticule,
    &IGraticule_ServerInfo,
    14,
    &IGraticule_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0046, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IEarthCtrl, ver. 0.0,
   GUID={0x0978E39F,0x8910,0x4CFC,{0x83,0x0C,0x78,0xBF,0x13,0x78,0x66,0x63}} */

#pragma code_seg(".orpc")
static const unsigned short IEarthCtrl_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    2454,
    2484,
    2520,
    2556,
    2592,
    2628,
    2664,
    2694,
    2730,
    2766,
    2796,
    2832,
    2868,
    2904,
    2940,
    2976,
    3012,
    3048,
    3084,
    3120,
    3156,
    3192,
    3228,
    3264,
    3300,
    3336,
    3372,
    3408,
    3444,
    3480,
    3516,
    3552,
    3588,
    3624,
    3660,
    3696,
    3732,
    3768,
    3804,
    3840,
    3876,
    3912,
    3948,
    3984,
    4020,
    4056,
    4092,
    4128,
    4164,
    4200,
    4236,
    4272,
    4308,
    4344,
    4380,
    4416,
    4452,
    4488,
    4524,
    4560,
    4596,
    4632
    };

static const MIDL_STUBLESS_PROXY_INFO IEarthCtrl_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IEarthCtrl_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IEarthCtrl_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IEarthCtrl_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(72) _IEarthCtrlProxyVtbl = 
{
    &IEarthCtrl_ProxyInfo,
    &IID_IEarthCtrl,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::run */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::getEarthViewer */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::getEarthMap */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::getUtilObjectFactory */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::getEarthRoot */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::setActiveSky */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::removeActiveSky */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::setHomeViewpoint */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::setActiveGraticule */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::removeActiveGraticule */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::put_AutoSize */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_AutoSize */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::put_BackColor */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_BackColor */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::put_BackStyle */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_BackStyle */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::put_BorderColor */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_BorderColor */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::put_BorderStyle */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_BorderStyle */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::put_BorderWidth */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_BorderWidth */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::put_DrawMode */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_DrawMode */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::put_DrawStyle */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_DrawStyle */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::put_DrawWidth */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_DrawWidth */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::put_FillColor */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_FillColor */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::put_FillStyle */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_FillStyle */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::putref_Font */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::put_Font */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_Font */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::put_ForeColor */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_ForeColor */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::put_Enabled */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_Enabled */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_HWND */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::put_TabStop */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_TabStop */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::put_Text */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_Text */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::put_Caption */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_Caption */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::put_BorderVisible */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_BorderVisible */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::put_Appearance */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_Appearance */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::put_MousePointer */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_MousePointer */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::putref_MouseIcon */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::put_MouseIcon */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_MouseIcon */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::putref_Picture */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::put_Picture */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_Picture */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::put_Valid */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_Valid */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::put_ReadyState */ ,
    (void *) (INT_PTR) -1 /* IEarthCtrl::get_ReadyState */
};


static const PRPC_STUB_FUNCTION IEarthCtrl_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IEarthCtrlStubVtbl =
{
    &IID_IEarthCtrl,
    &IEarthCtrl_ServerInfo,
    72,
    &IEarthCtrl_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0047, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IEarthTreeCtrl, ver. 0.0,
   GUID={0xC7C822D0,0x440B,0x4F5E,{0xBC,0x3E,0x78,0xD1,0x0D,0xC3,0xB0,0x84}} */

#pragma code_seg(".orpc")
static const unsigned short IEarthTreeCtrl_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4668,
    4704,
    4740,
    1740,
    1776,
    4776,
    4812,
    996,
    4848,
    1428,
    4884,
    1104,
    4920,
    4956,
    1632,
    2868,
    2904,
    2940,
    2976,
    3012,
    3048,
    3084,
    3120,
    4992,
    5028,
    5064,
    5100,
    5136,
    5172,
    5208,
    3408,
    5244,
    5280,
    5316,
    5352,
    5388,
    5424,
    5460,
    5496,
    5532,
    5568,
    5604,
    3840,
    5640,
    5676,
    5712,
    5748,
    5784,
    5820,
    4092,
    4128,
    5856,
    5892
    };

static const MIDL_STUBLESS_PROXY_INFO IEarthTreeCtrl_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IEarthTreeCtrl_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IEarthTreeCtrl_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IEarthTreeCtrl_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(60) _IEarthTreeCtrlProxyVtbl = 
{
    &IEarthTreeCtrl_ProxyInfo,
    &IID_IEarthTreeCtrl,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::bindEarthCtrl */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::put_AutoSize */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_AutoSize */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::put_BackColor */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_BackColor */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::put_BackStyle */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_BackStyle */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::put_BorderColor */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_BorderColor */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::put_BorderStyle */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_BorderStyle */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::put_BorderWidth */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_BorderWidth */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::put_DrawMode */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_DrawMode */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::put_DrawStyle */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_DrawStyle */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::put_DrawWidth */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_DrawWidth */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::put_FillColor */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_FillColor */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::put_FillStyle */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_FillStyle */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::putref_Font */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::put_Font */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_Font */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::put_ForeColor */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_ForeColor */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::put_Enabled */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_Enabled */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_HWND */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::put_TabStop */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_TabStop */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::put_Text */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_Text */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::put_Caption */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_Caption */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::put_BorderVisible */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_BorderVisible */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::put_Appearance */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_Appearance */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::put_MousePointer */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_MousePointer */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::putref_MouseIcon */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::put_MouseIcon */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_MouseIcon */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::putref_Picture */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::put_Picture */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_Picture */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::put_Valid */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_Valid */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::put_ReadyState */ ,
    (void *) (INT_PTR) -1 /* IEarthTreeCtrl::get_ReadyState */
};


static const PRPC_STUB_FUNCTION IEarthTreeCtrl_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IEarthTreeCtrlStubVtbl =
{
    &IID_IEarthTreeCtrl,
    &IEarthTreeCtrl_ServerInfo,
    60,
    &IEarthTreeCtrl_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0048, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILayer, ver. 0.0,
   GUID={0xf5b65182,0x5d68,0x45e6,{0x9f,0x39,0x81,0x5a,0x06,0xca,0x90,0x9e}} */

#pragma code_seg(".orpc")
static const unsigned short ILayer_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    1248,
    1284,
    1320,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ILayer_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ILayer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ILayer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ILayer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _ILayerProxyVtbl = 
{
    0,
    &IID_ILayer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IEarthDispatch::get_data */ ,
    0 /* forced delegation IEarthDispatch::put_data */ ,
    0 /* forced delegation IEarthDispatch::equal */ ,
    0 /* forced delegation IEarthObject::get_classType */ ,
    0 /* forced delegation IEarthObject::put_visible */ ,
    0 /* forced delegation IEarthObject::get_visible */ ,
    0 /* forced delegation IEarthObject::get_enabled */
};


static const PRPC_STUB_FUNCTION ILayer_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ILayerStubVtbl =
{
    &IID_ILayer,
    &ILayer_ServerInfo,
    14,
    &ILayer_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0049, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IImageSurfaceLayer, ver. 0.0,
   GUID={0x569576F6,0x5E3C,0x40B6,{0x89,0xCB,0x45,0xF2,0x8C,0x72,0xEF,0x7C}} */

#pragma code_seg(".orpc")
static const unsigned short IImageSurfaceLayer_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    1248,
    1284,
    1320,
    5928
    };

static const MIDL_STUBLESS_PROXY_INFO IImageSurfaceLayer_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IImageSurfaceLayer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IImageSurfaceLayer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IImageSurfaceLayer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(15) _IImageSurfaceLayerProxyVtbl = 
{
    &IImageSurfaceLayer_ProxyInfo,
    &IID_IImageSurfaceLayer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_classType */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::put_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_enabled */ ,
    (void *) (INT_PTR) -1 /* IImageSurfaceLayer::put_tileSource */
};


static const PRPC_STUB_FUNCTION IImageSurfaceLayer_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IImageSurfaceLayerStubVtbl =
{
    &IID_IImageSurfaceLayer,
    &IImageSurfaceLayer_ServerInfo,
    15,
    &IImageSurfaceLayer_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0050, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IVectorSurfaceLayer, ver. 0.0,
   GUID={0x04E1522A,0x6B6E,0x4196,{0xBD,0x94,0x64,0x48,0xE8,0x99,0x36,0x26}} */

#pragma code_seg(".orpc")
static const unsigned short IVectorSurfaceLayer_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    1248,
    1284,
    1320,
    5964
    };

static const MIDL_STUBLESS_PROXY_INFO IVectorSurfaceLayer_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IVectorSurfaceLayer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVectorSurfaceLayer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IVectorSurfaceLayer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(15) _IVectorSurfaceLayerProxyVtbl = 
{
    &IVectorSurfaceLayer_ProxyInfo,
    &IID_IVectorSurfaceLayer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_classType */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::put_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_enabled */ ,
    (void *) (INT_PTR) -1 /* IVectorSurfaceLayer::put_vectorSource */
};


static const PRPC_STUB_FUNCTION IVectorSurfaceLayer_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IVectorSurfaceLayerStubVtbl =
{
    &IID_IVectorSurfaceLayer,
    &IVectorSurfaceLayer_ServerInfo,
    15,
    &IVectorSurfaceLayer_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0051, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IElevationSurfaceLayer, ver. 0.0,
   GUID={0xBC2F437C,0xB0CA,0x4160,{0xBB,0x20,0xF8,0xCA,0x90,0x1C,0x1E,0x25}} */

#pragma code_seg(".orpc")
static const unsigned short IElevationSurfaceLayer_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    1248,
    1284,
    1320,
    5928
    };

static const MIDL_STUBLESS_PROXY_INFO IElevationSurfaceLayer_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IElevationSurfaceLayer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IElevationSurfaceLayer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IElevationSurfaceLayer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(15) _IElevationSurfaceLayerProxyVtbl = 
{
    &IElevationSurfaceLayer_ProxyInfo,
    &IID_IElevationSurfaceLayer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_classType */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::put_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_enabled */ ,
    (void *) (INT_PTR) -1 /* IElevationSurfaceLayer::put_tileSource */
};


static const PRPC_STUB_FUNCTION IElevationSurfaceLayer_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IElevationSurfaceLayerStubVtbl =
{
    &IID_IElevationSurfaceLayer,
    &IElevationSurfaceLayer_ServerInfo,
    15,
    &IElevationSurfaceLayer_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0052, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IPlace, ver. 0.0,
   GUID={0x015B8CC6,0x96F6,0x48EF,{0x88,0x96,0x0A,0x74,0x00,0x8B,0x0E,0xF8}} */

#pragma code_seg(".orpc")
static const unsigned short IPlace_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    1248,
    1284,
    1320,
    6000,
    6036,
    6072,
    6108,
    6144
    };

static const MIDL_STUBLESS_PROXY_INFO IPlace_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IPlace_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPlace_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IPlace_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(19) _IPlaceProxyVtbl = 
{
    &IPlace_ProxyInfo,
    &IID_IPlace,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_classType */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::put_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_enabled */ ,
    (void *) (INT_PTR) -1 /* IPlace::setPosition */ ,
    (void *) (INT_PTR) -1 /* IPlace::getPosition */ ,
    (void *) (INT_PTR) -1 /* IPlace::setText */ ,
    (void *) (INT_PTR) -1 /* IPlace::getText */ ,
    (void *) (INT_PTR) -1 /* IPlace::setImageSrc */
};


static const PRPC_STUB_FUNCTION IPlace_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPlaceStubVtbl =
{
    &IID_IPlace,
    &IPlace_ServerInfo,
    19,
    &IPlace_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0053, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IImageOverlay, ver. 0.0,
   GUID={0xE46E3C9B,0x362E,0x4B06,{0x89,0x6F,0x7B,0x18,0x22,0xB6,0xAD,0x59}} */

#pragma code_seg(".orpc")
static const unsigned short IImageOverlay_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    1248,
    1284,
    1320,
    6180,
    6216
    };

static const MIDL_STUBLESS_PROXY_INFO IImageOverlay_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IImageOverlay_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IImageOverlay_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IImageOverlay_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(16) _IImageOverlayProxyVtbl = 
{
    &IImageOverlay_ProxyInfo,
    &IID_IImageOverlay,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_classType */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::put_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_enabled */ ,
    (void *) (INT_PTR) -1 /* IImageOverlay::setImageSrc */ ,
    (void *) (INT_PTR) -1 /* IImageOverlay::setBounds */
};


static const PRPC_STUB_FUNCTION IImageOverlay_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IImageOverlayStubVtbl =
{
    &IID_IImageOverlay,
    &IImageOverlay_ServerInfo,
    16,
    &IImageOverlay_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0054, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICircle, ver. 0.0,
   GUID={0xD23FB784,0xB31F,0x42C0,{0x8B,0x11,0xEF,0xB7,0x21,0xAC,0xD2,0x02}} */

#pragma code_seg(".orpc")
static const unsigned short ICircle_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    1248,
    1284,
    1320,
    6000,
    6270,
    6306,
    6342,
    6378
    };

static const MIDL_STUBLESS_PROXY_INFO ICircle_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ICircle_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ICircle_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ICircle_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(19) _ICircleProxyVtbl = 
{
    &ICircle_ProxyInfo,
    &IID_ICircle,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_classType */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::put_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_enabled */ ,
    (void *) (INT_PTR) -1 /* ICircle::setPosition */ ,
    (void *) (INT_PTR) -1 /* ICircle::setRadius */ ,
    (void *) (INT_PTR) -1 /* ICircle::setArcStart */ ,
    (void *) (INT_PTR) -1 /* ICircle::setArcEnd */ ,
    (void *) (INT_PTR) -1 /* ICircle::setPie */
};


static const PRPC_STUB_FUNCTION ICircle_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ICircleStubVtbl =
{
    &IID_ICircle,
    &ICircle_ServerInfo,
    19,
    &ICircle_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0055, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IFeaturePrimitive, ver. 0.0,
   GUID={0xED1BFB90,0x6A14,0x421B,{0xBF,0x7C,0x94,0x98,0x89,0xC5,0xD4,0x87}} */

#pragma code_seg(".orpc")
static const unsigned short IFeaturePrimitive_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    1248,
    1284,
    1320,
    6414
    };

static const MIDL_STUBLESS_PROXY_INFO IFeaturePrimitive_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IFeaturePrimitive_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IFeaturePrimitive_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IFeaturePrimitive_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(15) _IFeaturePrimitiveProxyVtbl = 
{
    &IFeaturePrimitive_ProxyInfo,
    &IID_IFeaturePrimitive,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_classType */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::put_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_enabled */ ,
    (void *) (INT_PTR) -1 /* IFeaturePrimitive::setFeature */
};


static const PRPC_STUB_FUNCTION IFeaturePrimitive_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IFeaturePrimitiveStubVtbl =
{
    &IID_IFeaturePrimitive,
    &IFeaturePrimitive_ServerInfo,
    15,
    &IFeaturePrimitive_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0056, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IModel, ver. 0.0,
   GUID={0xD7B08885,0x2188,0x420D,{0xB6,0x26,0xA5,0x4B,0xA5,0x59,0xA3,0x34}} */

#pragma code_seg(".orpc")
static const unsigned short IModel_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    1248,
    1284,
    1320,
    6180,
    6450
    };

static const MIDL_STUBLESS_PROXY_INFO IModel_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IModel_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IModel_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IModel_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(16) _IModelProxyVtbl = 
{
    &IModel_ProxyInfo,
    &IID_IModel,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_classType */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::put_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_enabled */ ,
    (void *) (INT_PTR) -1 /* IModel::setModelPath */ ,
    (void *) (INT_PTR) -1 /* IModel::setPosition */
};


static const PRPC_STUB_FUNCTION IModel_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IModelStubVtbl =
{
    &IID_IModel,
    &IModel_ServerInfo,
    16,
    &IModel_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0057, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITextLabel, ver. 0.0,
   GUID={0xCE04978B,0xCFFD,0x4751,{0xB8,0xD4,0x0E,0xC5,0xD4,0x8B,0x62,0xFD}} */

#pragma code_seg(".orpc")
static const unsigned short ITextLabel_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    1248,
    1284,
    1320,
    6000,
    6036,
    6072,
    6108
    };

static const MIDL_STUBLESS_PROXY_INFO ITextLabel_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITextLabel_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITextLabel_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &ITextLabel_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(18) _ITextLabelProxyVtbl = 
{
    &ITextLabel_ProxyInfo,
    &IID_ITextLabel,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_classType */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::put_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_enabled */ ,
    (void *) (INT_PTR) -1 /* ITextLabel::setPosition */ ,
    (void *) (INT_PTR) -1 /* ITextLabel::getPosition */ ,
    (void *) (INT_PTR) -1 /* ITextLabel::setText */ ,
    (void *) (INT_PTR) -1 /* ITextLabel::getText */
};


static const PRPC_STUB_FUNCTION ITextLabel_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITextLabelStubVtbl =
{
    &IID_ITextLabel,
    &ITextLabel_ServerInfo,
    18,
    &ITextLabel_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0058, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IRectanglePrimitive, ver. 0.0,
   GUID={0x17BF3870,0x1C64,0x4905,{0xA6,0xE9,0x84,0x79,0x13,0x9D,0x63,0xA8}} */

#pragma code_seg(".orpc")
static const unsigned short IRectanglePrimitive_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    1248,
    1284,
    1320,
    6000,
    6270,
    6486
    };

static const MIDL_STUBLESS_PROXY_INFO IRectanglePrimitive_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IRectanglePrimitive_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IRectanglePrimitive_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IRectanglePrimitive_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(17) _IRectanglePrimitiveProxyVtbl = 
{
    &IRectanglePrimitive_ProxyInfo,
    &IID_IRectanglePrimitive,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_classType */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::put_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_enabled */ ,
    (void *) (INT_PTR) -1 /* IRectanglePrimitive::setPosition */ ,
    (void *) (INT_PTR) -1 /* IRectanglePrimitive::setWidth */ ,
    (void *) (INT_PTR) -1 /* IRectanglePrimitive::setHeight */
};


static const PRPC_STUB_FUNCTION IRectanglePrimitive_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IRectanglePrimitiveStubVtbl =
{
    &IID_IRectanglePrimitive,
    &IRectanglePrimitive_ServerInfo,
    17,
    &IRectanglePrimitive_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0059, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IEllipsePrimitive, ver. 0.0,
   GUID={0x762E9F97,0x674F,0x4821,{0x97,0x46,0x5E,0x26,0x26,0x07,0xEB,0x67}} */

#pragma code_seg(".orpc")
static const unsigned short IEllipsePrimitive_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    666,
    1248,
    1284,
    1320,
    6000,
    6270,
    6486,
    6342,
    6522,
    6558,
    2796
    };

static const MIDL_STUBLESS_PROXY_INFO IEllipsePrimitive_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IEllipsePrimitive_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IEllipsePrimitive_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IEllipsePrimitive_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(21) _IEllipsePrimitiveProxyVtbl = 
{
    &IEllipsePrimitive_ProxyInfo,
    &IID_IEllipsePrimitive,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::get_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::put_data */ ,
    (void *) (INT_PTR) -1 /* IEarthDispatch::equal */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_classType */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::put_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_visible */ ,
    (void *) (INT_PTR) -1 /* IEarthObject::get_enabled */ ,
    (void *) (INT_PTR) -1 /* IEllipsePrimitive::setPosition */ ,
    (void *) (INT_PTR) -1 /* IEllipsePrimitive::setRadiusMajor */ ,
    (void *) (INT_PTR) -1 /* IEllipsePrimitive::setRadiusMinor */ ,
    (void *) (INT_PTR) -1 /* IEllipsePrimitive::setRotationAngle */ ,
    (void *) (INT_PTR) -1 /* IEllipsePrimitive::setArcStart */ ,
    (void *) (INT_PTR) -1 /* IEllipsePrimitive::setArcEnd */ ,
    (void *) (INT_PTR) -1 /* IEllipsePrimitive::setPie */
};


static const PRPC_STUB_FUNCTION IEllipsePrimitive_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IEllipsePrimitiveStubVtbl =
{
    &IID_IEllipsePrimitive,
    &IEllipsePrimitive_ServerInfo,
    21,
    &IEllipsePrimitive_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_osgEarthX_COM_0000_0060, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IObjectFactory, ver. 0.0,
   GUID={0x6BA1D54B,0xF2A8,0x48FF,{0xAC,0x76,0xBF,0x78,0x62,0x73,0xE1,0xA2}} */

#pragma code_seg(".orpc")
static const unsigned short IObjectFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    6594,
    6636,
    6678,
    6720,
    6762
    };

static const MIDL_STUBLESS_PROXY_INFO IObjectFactory_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IObjectFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IObjectFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IObjectFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IObjectFactoryProxyVtbl = 
{
    &IObjectFactory_ProxyInfo,
    &IID_IObjectFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IObjectFactory::createByEarthObjectClassType */ ,
    (void *) (INT_PTR) -1 /* IObjectFactory::createByEarthClassType */ ,
    (void *) (INT_PTR) -1 /* IObjectFactory::createBySourceClassType */ ,
    (void *) (INT_PTR) -1 /* IObjectFactory::createByGeoClassType */ ,
    (void *) (INT_PTR) -1 /* IObjectFactory::createByUnitClassType */
};


static const PRPC_STUB_FUNCTION IObjectFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IObjectFactoryStubVtbl =
{
    &IID_IObjectFactory,
    &IObjectFactory_ServerInfo,
    12,
    &IObjectFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IComponentRegistrar, ver. 0.0,
   GUID={0xa817e7a2,0x43fa,0x11d0,{0x9e,0x44,0x00,0xaa,0x00,0xb6,0x77,0x0a}} */

#pragma code_seg(".orpc")
static const unsigned short IComponentRegistrar_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    6804,
    6840,
    6870,
    6900,
    816,
    924
    };

static const MIDL_STUBLESS_PROXY_INFO IComponentRegistrar_ProxyInfo =
    {
    &Object_StubDesc,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IComponentRegistrar_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IComponentRegistrar_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    osgEarthX_COM__MIDL_ProcFormatString.Format,
    &IComponentRegistrar_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IComponentRegistrarProxyVtbl = 
{
    &IComponentRegistrar_ProxyInfo,
    &IID_IComponentRegistrar,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IComponentRegistrar::Attach */ ,
    (void *) (INT_PTR) -1 /* IComponentRegistrar::RegisterAll */ ,
    (void *) (INT_PTR) -1 /* IComponentRegistrar::UnregisterAll */ ,
    (void *) (INT_PTR) -1 /* IComponentRegistrar::GetComponents */ ,
    (void *) (INT_PTR) -1 /* IComponentRegistrar::RegisterComponent */ ,
    (void *) (INT_PTR) -1 /* IComponentRegistrar::UnregisterComponent */
};


static const PRPC_STUB_FUNCTION IComponentRegistrar_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IComponentRegistrarStubVtbl =
{
    &IID_IComponentRegistrar,
    &IComponentRegistrar_ServerInfo,
    13,
    &IComponentRegistrar_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    osgEarthX_COM__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x700022b, /* MIDL Version 7.0.555 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _osgEarthX_COM_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ITileSourceWCSProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVectorSourceDispatchProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IGeometryProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITileSourceTileServiceProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITileSourceNoiseProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITileSourceBingProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IGraticuleProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITileSourceTileCacheProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IGeoPointProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStyleProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVectorSurfaceLayerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEarthViewerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISourceDispatchProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IFeatureSourceWFSProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPolygonGeometryProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IFeatureSourceDispatchProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IFeatureSourceTFSProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEarthObjectProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IViewpointProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITileSourceAGGLiteProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITileSourceGDALProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ILineStringGeometryProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITileSourceDebugProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IObjectFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVectorSourceSimpleProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITileSourceWMSProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITileSourceVPBProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITileSourceDispatchProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRingGeometryProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVectorSourceGeomProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRectanglePrimitiveProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEarthMapProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITileSourceMBTilesProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IElevationSurfaceLayerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITileSourceArcGISProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ILayerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IFeatureSourceOGRProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ICircleProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IModelProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITextLabelProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IFeaturePrimitiveProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITileSourceYahooProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEllipsePrimitiveProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IImageOverlayProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEarthCtrlProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVectorSourceStencilProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IComponentRegistrarProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEarthGroupProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITileSourceXYZProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAngularProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVec3dProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEarthDispatchProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPlaceProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEarthTreeCtrlProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISpatialReferenceProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISkyProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ILinearProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITileSourceTMSProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IImageSurfaceLayerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITileSourceColorRampProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITileSourceOSGProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _osgEarthX_COM_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ITileSourceWCSStubVtbl,
    ( CInterfaceStubVtbl *) &_IVectorSourceDispatchStubVtbl,
    ( CInterfaceStubVtbl *) &_IGeometryStubVtbl,
    ( CInterfaceStubVtbl *) &_ITileSourceTileServiceStubVtbl,
    ( CInterfaceStubVtbl *) &_ITileSourceNoiseStubVtbl,
    ( CInterfaceStubVtbl *) &_ITileSourceBingStubVtbl,
    ( CInterfaceStubVtbl *) &_IGraticuleStubVtbl,
    ( CInterfaceStubVtbl *) &_ITileSourceTileCacheStubVtbl,
    ( CInterfaceStubVtbl *) &_IGeoPointStubVtbl,
    ( CInterfaceStubVtbl *) &_IStyleStubVtbl,
    ( CInterfaceStubVtbl *) &_IVectorSurfaceLayerStubVtbl,
    ( CInterfaceStubVtbl *) &_IEarthViewerStubVtbl,
    ( CInterfaceStubVtbl *) &_ISourceDispatchStubVtbl,
    ( CInterfaceStubVtbl *) &_IFeatureSourceWFSStubVtbl,
    ( CInterfaceStubVtbl *) &_IPolygonGeometryStubVtbl,
    ( CInterfaceStubVtbl *) &_IFeatureSourceDispatchStubVtbl,
    ( CInterfaceStubVtbl *) &_IFeatureSourceTFSStubVtbl,
    ( CInterfaceStubVtbl *) &_IEarthObjectStubVtbl,
    ( CInterfaceStubVtbl *) &_IViewpointStubVtbl,
    ( CInterfaceStubVtbl *) &_ITileSourceAGGLiteStubVtbl,
    ( CInterfaceStubVtbl *) &_ITileSourceGDALStubVtbl,
    ( CInterfaceStubVtbl *) &_ILineStringGeometryStubVtbl,
    ( CInterfaceStubVtbl *) &_ITileSourceDebugStubVtbl,
    ( CInterfaceStubVtbl *) &_IObjectFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &_IVectorSourceSimpleStubVtbl,
    ( CInterfaceStubVtbl *) &_ITileSourceWMSStubVtbl,
    ( CInterfaceStubVtbl *) &_ITileSourceVPBStubVtbl,
    ( CInterfaceStubVtbl *) &_ITileSourceDispatchStubVtbl,
    ( CInterfaceStubVtbl *) &_IRingGeometryStubVtbl,
    ( CInterfaceStubVtbl *) &_IVectorSourceGeomStubVtbl,
    ( CInterfaceStubVtbl *) &_IRectanglePrimitiveStubVtbl,
    ( CInterfaceStubVtbl *) &_IEarthMapStubVtbl,
    ( CInterfaceStubVtbl *) &_ITileSourceMBTilesStubVtbl,
    ( CInterfaceStubVtbl *) &_IFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_IElevationSurfaceLayerStubVtbl,
    ( CInterfaceStubVtbl *) &_ITileSourceArcGISStubVtbl,
    ( CInterfaceStubVtbl *) &_ILayerStubVtbl,
    ( CInterfaceStubVtbl *) &_IFeatureSourceOGRStubVtbl,
    ( CInterfaceStubVtbl *) &_ICircleStubVtbl,
    ( CInterfaceStubVtbl *) &_IModelStubVtbl,
    ( CInterfaceStubVtbl *) &_ITextLabelStubVtbl,
    ( CInterfaceStubVtbl *) &_IFeaturePrimitiveStubVtbl,
    ( CInterfaceStubVtbl *) &_ITileSourceYahooStubVtbl,
    ( CInterfaceStubVtbl *) &_IEllipsePrimitiveStubVtbl,
    ( CInterfaceStubVtbl *) &_IImageOverlayStubVtbl,
    ( CInterfaceStubVtbl *) &_IEarthCtrlStubVtbl,
    ( CInterfaceStubVtbl *) &_IVectorSourceStencilStubVtbl,
    ( CInterfaceStubVtbl *) &_IComponentRegistrarStubVtbl,
    ( CInterfaceStubVtbl *) &_IEarthGroupStubVtbl,
    ( CInterfaceStubVtbl *) &_ITileSourceXYZStubVtbl,
    ( CInterfaceStubVtbl *) &_IAngularStubVtbl,
    ( CInterfaceStubVtbl *) &_IVec3dStubVtbl,
    ( CInterfaceStubVtbl *) &_IEarthDispatchStubVtbl,
    ( CInterfaceStubVtbl *) &_IPlaceStubVtbl,
    ( CInterfaceStubVtbl *) &_IEarthTreeCtrlStubVtbl,
    ( CInterfaceStubVtbl *) &_ISpatialReferenceStubVtbl,
    ( CInterfaceStubVtbl *) &_ISkyStubVtbl,
    ( CInterfaceStubVtbl *) &_ILinearStubVtbl,
    ( CInterfaceStubVtbl *) &_ITileSourceTMSStubVtbl,
    ( CInterfaceStubVtbl *) &_IImageSurfaceLayerStubVtbl,
    ( CInterfaceStubVtbl *) &_ITileSourceColorRampStubVtbl,
    ( CInterfaceStubVtbl *) &_ITileSourceOSGStubVtbl,
    0
};

PCInterfaceName const _osgEarthX_COM_InterfaceNamesList[] = 
{
    "ITileSourceWCS",
    "IVectorSourceDispatch",
    "IGeometry",
    "ITileSourceTileService",
    "ITileSourceNoise",
    "ITileSourceBing",
    "IGraticule",
    "ITileSourceTileCache",
    "IGeoPoint",
    "IStyle",
    "IVectorSurfaceLayer",
    "IEarthViewer",
    "ISourceDispatch",
    "IFeatureSourceWFS",
    "IPolygonGeometry",
    "IFeatureSourceDispatch",
    "IFeatureSourceTFS",
    "IEarthObject",
    "IViewpoint",
    "ITileSourceAGGLite",
    "ITileSourceGDAL",
    "ILineStringGeometry",
    "ITileSourceDebug",
    "IObjectFactory",
    "IVectorSourceSimple",
    "ITileSourceWMS",
    "ITileSourceVPB",
    "ITileSourceDispatch",
    "IRingGeometry",
    "IVectorSourceGeom",
    "IRectanglePrimitive",
    "IEarthMap",
    "ITileSourceMBTiles",
    "IFeature",
    "IElevationSurfaceLayer",
    "ITileSourceArcGIS",
    "ILayer",
    "IFeatureSourceOGR",
    "ICircle",
    "IModel",
    "ITextLabel",
    "IFeaturePrimitive",
    "ITileSourceYahoo",
    "IEllipsePrimitive",
    "IImageOverlay",
    "IEarthCtrl",
    "IVectorSourceStencil",
    "IComponentRegistrar",
    "IEarthGroup",
    "ITileSourceXYZ",
    "IAngular",
    "IVec3d",
    "IEarthDispatch",
    "IPlace",
    "IEarthTreeCtrl",
    "ISpatialReference",
    "ISky",
    "ILinear",
    "ITileSourceTMS",
    "IImageSurfaceLayer",
    "ITileSourceColorRamp",
    "ITileSourceOSG",
    0
};

const IID *  const _osgEarthX_COM_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _osgEarthX_COM_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _osgEarthX_COM, pIID, n)

int __stdcall _osgEarthX_COM_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _osgEarthX_COM, 62, 32 )
    IID_BS_LOOKUP_NEXT_TEST( _osgEarthX_COM, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _osgEarthX_COM, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _osgEarthX_COM, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _osgEarthX_COM, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _osgEarthX_COM, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _osgEarthX_COM, 62, *pIndex )
    
}

const ExtendedProxyFileInfo osgEarthX_COM_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _osgEarthX_COM_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _osgEarthX_COM_StubVtblList,
    (const PCInterfaceName * ) & _osgEarthX_COM_InterfaceNamesList,
    (const IID ** ) & _osgEarthX_COM_BaseIIDList,
    & _osgEarthX_COM_IID_Lookup, 
    62,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

