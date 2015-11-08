

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Sun Nov 01 18:45:40 2015
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

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __osgEarthX_COM_i_h__
#define __osgEarthX_COM_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IEarthDispatch_FWD_DEFINED__
#define __IEarthDispatch_FWD_DEFINED__
typedef interface IEarthDispatch IEarthDispatch;
#endif 	/* __IEarthDispatch_FWD_DEFINED__ */


#ifndef __ISpatialReference_FWD_DEFINED__
#define __ISpatialReference_FWD_DEFINED__
typedef interface ISpatialReference ISpatialReference;
#endif 	/* __ISpatialReference_FWD_DEFINED__ */


#ifndef __IGeoPoint_FWD_DEFINED__
#define __IGeoPoint_FWD_DEFINED__
typedef interface IGeoPoint IGeoPoint;
#endif 	/* __IGeoPoint_FWD_DEFINED__ */


#ifndef __IVec3d_FWD_DEFINED__
#define __IVec3d_FWD_DEFINED__
typedef interface IVec3d IVec3d;
#endif 	/* __IVec3d_FWD_DEFINED__ */


#ifndef __IGeometry_FWD_DEFINED__
#define __IGeometry_FWD_DEFINED__
typedef interface IGeometry IGeometry;
#endif 	/* __IGeometry_FWD_DEFINED__ */


#ifndef __IFeature_FWD_DEFINED__
#define __IFeature_FWD_DEFINED__
typedef interface IFeature IFeature;
#endif 	/* __IFeature_FWD_DEFINED__ */


#ifndef __ILinear_FWD_DEFINED__
#define __ILinear_FWD_DEFINED__
typedef interface ILinear ILinear;
#endif 	/* __ILinear_FWD_DEFINED__ */


#ifndef __IAngular_FWD_DEFINED__
#define __IAngular_FWD_DEFINED__
typedef interface IAngular IAngular;
#endif 	/* __IAngular_FWD_DEFINED__ */


#ifndef __ILineStringGeometry_FWD_DEFINED__
#define __ILineStringGeometry_FWD_DEFINED__
typedef interface ILineStringGeometry ILineStringGeometry;
#endif 	/* __ILineStringGeometry_FWD_DEFINED__ */


#ifndef __IRingGeometry_FWD_DEFINED__
#define __IRingGeometry_FWD_DEFINED__
typedef interface IRingGeometry IRingGeometry;
#endif 	/* __IRingGeometry_FWD_DEFINED__ */


#ifndef __IPolygonGeometry_FWD_DEFINED__
#define __IPolygonGeometry_FWD_DEFINED__
typedef interface IPolygonGeometry IPolygonGeometry;
#endif 	/* __IPolygonGeometry_FWD_DEFINED__ */


#ifndef __ISourceDispatch_FWD_DEFINED__
#define __ISourceDispatch_FWD_DEFINED__
typedef interface ISourceDispatch ISourceDispatch;
#endif 	/* __ISourceDispatch_FWD_DEFINED__ */


#ifndef __ITileSourceDispatch_FWD_DEFINED__
#define __ITileSourceDispatch_FWD_DEFINED__
typedef interface ITileSourceDispatch ITileSourceDispatch;
#endif 	/* __ITileSourceDispatch_FWD_DEFINED__ */


#ifndef __IVectorSourceDispatch_FWD_DEFINED__
#define __IVectorSourceDispatch_FWD_DEFINED__
typedef interface IVectorSourceDispatch IVectorSourceDispatch;
#endif 	/* __IVectorSourceDispatch_FWD_DEFINED__ */


#ifndef __IFeatureSourceDispatch_FWD_DEFINED__
#define __IFeatureSourceDispatch_FWD_DEFINED__
typedef interface IFeatureSourceDispatch IFeatureSourceDispatch;
#endif 	/* __IFeatureSourceDispatch_FWD_DEFINED__ */


#ifndef __IFeatureSourceOGR_FWD_DEFINED__
#define __IFeatureSourceOGR_FWD_DEFINED__
typedef interface IFeatureSourceOGR IFeatureSourceOGR;
#endif 	/* __IFeatureSourceOGR_FWD_DEFINED__ */


#ifndef __IFeatureSourceTFS_FWD_DEFINED__
#define __IFeatureSourceTFS_FWD_DEFINED__
typedef interface IFeatureSourceTFS IFeatureSourceTFS;
#endif 	/* __IFeatureSourceTFS_FWD_DEFINED__ */


#ifndef __IFeatureSourceWFS_FWD_DEFINED__
#define __IFeatureSourceWFS_FWD_DEFINED__
typedef interface IFeatureSourceWFS IFeatureSourceWFS;
#endif 	/* __IFeatureSourceWFS_FWD_DEFINED__ */


#ifndef __ITileSourceAGGLite_FWD_DEFINED__
#define __ITileSourceAGGLite_FWD_DEFINED__
typedef interface ITileSourceAGGLite ITileSourceAGGLite;
#endif 	/* __ITileSourceAGGLite_FWD_DEFINED__ */


#ifndef __ITileSourceArcGIS_FWD_DEFINED__
#define __ITileSourceArcGIS_FWD_DEFINED__
typedef interface ITileSourceArcGIS ITileSourceArcGIS;
#endif 	/* __ITileSourceArcGIS_FWD_DEFINED__ */


#ifndef __ITileSourceBing_FWD_DEFINED__
#define __ITileSourceBing_FWD_DEFINED__
typedef interface ITileSourceBing ITileSourceBing;
#endif 	/* __ITileSourceBing_FWD_DEFINED__ */


#ifndef __ITileSourceColorRamp_FWD_DEFINED__
#define __ITileSourceColorRamp_FWD_DEFINED__
typedef interface ITileSourceColorRamp ITileSourceColorRamp;
#endif 	/* __ITileSourceColorRamp_FWD_DEFINED__ */


#ifndef __ITileSourceDebug_FWD_DEFINED__
#define __ITileSourceDebug_FWD_DEFINED__
typedef interface ITileSourceDebug ITileSourceDebug;
#endif 	/* __ITileSourceDebug_FWD_DEFINED__ */


#ifndef __ITileSourceGDAL_FWD_DEFINED__
#define __ITileSourceGDAL_FWD_DEFINED__
typedef interface ITileSourceGDAL ITileSourceGDAL;
#endif 	/* __ITileSourceGDAL_FWD_DEFINED__ */


#ifndef __ITileSourceMBTiles_FWD_DEFINED__
#define __ITileSourceMBTiles_FWD_DEFINED__
typedef interface ITileSourceMBTiles ITileSourceMBTiles;
#endif 	/* __ITileSourceMBTiles_FWD_DEFINED__ */


#ifndef __ITileSourceNoise_FWD_DEFINED__
#define __ITileSourceNoise_FWD_DEFINED__
typedef interface ITileSourceNoise ITileSourceNoise;
#endif 	/* __ITileSourceNoise_FWD_DEFINED__ */


#ifndef __ITileSourceOSG_FWD_DEFINED__
#define __ITileSourceOSG_FWD_DEFINED__
typedef interface ITileSourceOSG ITileSourceOSG;
#endif 	/* __ITileSourceOSG_FWD_DEFINED__ */


#ifndef __ITileSourceTileCache_FWD_DEFINED__
#define __ITileSourceTileCache_FWD_DEFINED__
typedef interface ITileSourceTileCache ITileSourceTileCache;
#endif 	/* __ITileSourceTileCache_FWD_DEFINED__ */


#ifndef __ITileSourceTileService_FWD_DEFINED__
#define __ITileSourceTileService_FWD_DEFINED__
typedef interface ITileSourceTileService ITileSourceTileService;
#endif 	/* __ITileSourceTileService_FWD_DEFINED__ */


#ifndef __ITileSourceTMS_FWD_DEFINED__
#define __ITileSourceTMS_FWD_DEFINED__
typedef interface ITileSourceTMS ITileSourceTMS;
#endif 	/* __ITileSourceTMS_FWD_DEFINED__ */


#ifndef __ITileSourceVPB_FWD_DEFINED__
#define __ITileSourceVPB_FWD_DEFINED__
typedef interface ITileSourceVPB ITileSourceVPB;
#endif 	/* __ITileSourceVPB_FWD_DEFINED__ */


#ifndef __ITileSourceWCS_FWD_DEFINED__
#define __ITileSourceWCS_FWD_DEFINED__
typedef interface ITileSourceWCS ITileSourceWCS;
#endif 	/* __ITileSourceWCS_FWD_DEFINED__ */


#ifndef __ITileSourceWMS_FWD_DEFINED__
#define __ITileSourceWMS_FWD_DEFINED__
typedef interface ITileSourceWMS ITileSourceWMS;
#endif 	/* __ITileSourceWMS_FWD_DEFINED__ */


#ifndef __ITileSourceXYZ_FWD_DEFINED__
#define __ITileSourceXYZ_FWD_DEFINED__
typedef interface ITileSourceXYZ ITileSourceXYZ;
#endif 	/* __ITileSourceXYZ_FWD_DEFINED__ */


#ifndef __ITileSourceYahoo_FWD_DEFINED__
#define __ITileSourceYahoo_FWD_DEFINED__
typedef interface ITileSourceYahoo ITileSourceYahoo;
#endif 	/* __ITileSourceYahoo_FWD_DEFINED__ */


#ifndef __IVectorSourceGeom_FWD_DEFINED__
#define __IVectorSourceGeom_FWD_DEFINED__
typedef interface IVectorSourceGeom IVectorSourceGeom;
#endif 	/* __IVectorSourceGeom_FWD_DEFINED__ */


#ifndef __IVectorSourceSimple_FWD_DEFINED__
#define __IVectorSourceSimple_FWD_DEFINED__
typedef interface IVectorSourceSimple IVectorSourceSimple;
#endif 	/* __IVectorSourceSimple_FWD_DEFINED__ */


#ifndef __IVectorSourceStencil_FWD_DEFINED__
#define __IVectorSourceStencil_FWD_DEFINED__
typedef interface IVectorSourceStencil IVectorSourceStencil;
#endif 	/* __IVectorSourceStencil_FWD_DEFINED__ */


#ifndef __IStyle_FWD_DEFINED__
#define __IStyle_FWD_DEFINED__
typedef interface IStyle IStyle;
#endif 	/* __IStyle_FWD_DEFINED__ */


#ifndef __IEarthObject_FWD_DEFINED__
#define __IEarthObject_FWD_DEFINED__
typedef interface IEarthObject IEarthObject;
#endif 	/* __IEarthObject_FWD_DEFINED__ */


#ifndef __IEarthGroup_FWD_DEFINED__
#define __IEarthGroup_FWD_DEFINED__
typedef interface IEarthGroup IEarthGroup;
#endif 	/* __IEarthGroup_FWD_DEFINED__ */


#ifndef __IEarthViewer_FWD_DEFINED__
#define __IEarthViewer_FWD_DEFINED__
typedef interface IEarthViewer IEarthViewer;
#endif 	/* __IEarthViewer_FWD_DEFINED__ */


#ifndef __IEarthMap_FWD_DEFINED__
#define __IEarthMap_FWD_DEFINED__
typedef interface IEarthMap IEarthMap;
#endif 	/* __IEarthMap_FWD_DEFINED__ */


#ifndef __ISky_FWD_DEFINED__
#define __ISky_FWD_DEFINED__
typedef interface ISky ISky;
#endif 	/* __ISky_FWD_DEFINED__ */


#ifndef __IViewpoint_FWD_DEFINED__
#define __IViewpoint_FWD_DEFINED__
typedef interface IViewpoint IViewpoint;
#endif 	/* __IViewpoint_FWD_DEFINED__ */


#ifndef __IGraticule_FWD_DEFINED__
#define __IGraticule_FWD_DEFINED__
typedef interface IGraticule IGraticule;
#endif 	/* __IGraticule_FWD_DEFINED__ */


#ifndef __IEarthCtrl_FWD_DEFINED__
#define __IEarthCtrl_FWD_DEFINED__
typedef interface IEarthCtrl IEarthCtrl;
#endif 	/* __IEarthCtrl_FWD_DEFINED__ */


#ifndef __IEarthTreeCtrl_FWD_DEFINED__
#define __IEarthTreeCtrl_FWD_DEFINED__
typedef interface IEarthTreeCtrl IEarthTreeCtrl;
#endif 	/* __IEarthTreeCtrl_FWD_DEFINED__ */


#ifndef __ILayer_FWD_DEFINED__
#define __ILayer_FWD_DEFINED__
typedef interface ILayer ILayer;
#endif 	/* __ILayer_FWD_DEFINED__ */


#ifndef __IImageSurfaceLayer_FWD_DEFINED__
#define __IImageSurfaceLayer_FWD_DEFINED__
typedef interface IImageSurfaceLayer IImageSurfaceLayer;
#endif 	/* __IImageSurfaceLayer_FWD_DEFINED__ */


#ifndef __IVectorSurfaceLayer_FWD_DEFINED__
#define __IVectorSurfaceLayer_FWD_DEFINED__
typedef interface IVectorSurfaceLayer IVectorSurfaceLayer;
#endif 	/* __IVectorSurfaceLayer_FWD_DEFINED__ */


#ifndef __IElevationSurfaceLayer_FWD_DEFINED__
#define __IElevationSurfaceLayer_FWD_DEFINED__
typedef interface IElevationSurfaceLayer IElevationSurfaceLayer;
#endif 	/* __IElevationSurfaceLayer_FWD_DEFINED__ */


#ifndef __IPlace_FWD_DEFINED__
#define __IPlace_FWD_DEFINED__
typedef interface IPlace IPlace;
#endif 	/* __IPlace_FWD_DEFINED__ */


#ifndef __IImageOverlay_FWD_DEFINED__
#define __IImageOverlay_FWD_DEFINED__
typedef interface IImageOverlay IImageOverlay;
#endif 	/* __IImageOverlay_FWD_DEFINED__ */


#ifndef __ICircle_FWD_DEFINED__
#define __ICircle_FWD_DEFINED__
typedef interface ICircle ICircle;
#endif 	/* __ICircle_FWD_DEFINED__ */


#ifndef __IFeaturePrimitive_FWD_DEFINED__
#define __IFeaturePrimitive_FWD_DEFINED__
typedef interface IFeaturePrimitive IFeaturePrimitive;
#endif 	/* __IFeaturePrimitive_FWD_DEFINED__ */


#ifndef __IModel_FWD_DEFINED__
#define __IModel_FWD_DEFINED__
typedef interface IModel IModel;
#endif 	/* __IModel_FWD_DEFINED__ */


#ifndef __ITextLabel_FWD_DEFINED__
#define __ITextLabel_FWD_DEFINED__
typedef interface ITextLabel ITextLabel;
#endif 	/* __ITextLabel_FWD_DEFINED__ */


#ifndef __IRectanglePrimitive_FWD_DEFINED__
#define __IRectanglePrimitive_FWD_DEFINED__
typedef interface IRectanglePrimitive IRectanglePrimitive;
#endif 	/* __IRectanglePrimitive_FWD_DEFINED__ */


#ifndef __IEllipsePrimitive_FWD_DEFINED__
#define __IEllipsePrimitive_FWD_DEFINED__
typedef interface IEllipsePrimitive IEllipsePrimitive;
#endif 	/* __IEllipsePrimitive_FWD_DEFINED__ */


#ifndef __IObjectFactory_FWD_DEFINED__
#define __IObjectFactory_FWD_DEFINED__
typedef interface IObjectFactory IObjectFactory;
#endif 	/* __IObjectFactory_FWD_DEFINED__ */


#ifndef __IComponentRegistrar_FWD_DEFINED__
#define __IComponentRegistrar_FWD_DEFINED__
typedef interface IComponentRegistrar IComponentRegistrar;
#endif 	/* __IComponentRegistrar_FWD_DEFINED__ */


#ifndef __CompReg_FWD_DEFINED__
#define __CompReg_FWD_DEFINED__

#ifdef __cplusplus
typedef class CompReg CompReg;
#else
typedef struct CompReg CompReg;
#endif /* __cplusplus */

#endif 	/* __CompReg_FWD_DEFINED__ */


#ifndef __SpatialReference_FWD_DEFINED__
#define __SpatialReference_FWD_DEFINED__

#ifdef __cplusplus
typedef class SpatialReference SpatialReference;
#else
typedef struct SpatialReference SpatialReference;
#endif /* __cplusplus */

#endif 	/* __SpatialReference_FWD_DEFINED__ */


#ifndef __GeoPoint_FWD_DEFINED__
#define __GeoPoint_FWD_DEFINED__

#ifdef __cplusplus
typedef class GeoPoint GeoPoint;
#else
typedef struct GeoPoint GeoPoint;
#endif /* __cplusplus */

#endif 	/* __GeoPoint_FWD_DEFINED__ */


#ifndef __Feature_FWD_DEFINED__
#define __Feature_FWD_DEFINED__

#ifdef __cplusplus
typedef class Feature Feature;
#else
typedef struct Feature Feature;
#endif /* __cplusplus */

#endif 	/* __Feature_FWD_DEFINED__ */


#ifndef __Linear_FWD_DEFINED__
#define __Linear_FWD_DEFINED__

#ifdef __cplusplus
typedef class Linear Linear;
#else
typedef struct Linear Linear;
#endif /* __cplusplus */

#endif 	/* __Linear_FWD_DEFINED__ */


#ifndef __Angular_FWD_DEFINED__
#define __Angular_FWD_DEFINED__

#ifdef __cplusplus
typedef class Angular Angular;
#else
typedef struct Angular Angular;
#endif /* __cplusplus */

#endif 	/* __Angular_FWD_DEFINED__ */


#ifndef __Vec3d_FWD_DEFINED__
#define __Vec3d_FWD_DEFINED__

#ifdef __cplusplus
typedef class Vec3d Vec3d;
#else
typedef struct Vec3d Vec3d;
#endif /* __cplusplus */

#endif 	/* __Vec3d_FWD_DEFINED__ */


#ifndef __LineStringGeometry_FWD_DEFINED__
#define __LineStringGeometry_FWD_DEFINED__

#ifdef __cplusplus
typedef class LineStringGeometry LineStringGeometry;
#else
typedef struct LineStringGeometry LineStringGeometry;
#endif /* __cplusplus */

#endif 	/* __LineStringGeometry_FWD_DEFINED__ */


#ifndef __RingGeometry_FWD_DEFINED__
#define __RingGeometry_FWD_DEFINED__

#ifdef __cplusplus
typedef class RingGeometry RingGeometry;
#else
typedef struct RingGeometry RingGeometry;
#endif /* __cplusplus */

#endif 	/* __RingGeometry_FWD_DEFINED__ */


#ifndef __PolygonGeometry_FWD_DEFINED__
#define __PolygonGeometry_FWD_DEFINED__

#ifdef __cplusplus
typedef class PolygonGeometry PolygonGeometry;
#else
typedef struct PolygonGeometry PolygonGeometry;
#endif /* __cplusplus */

#endif 	/* __PolygonGeometry_FWD_DEFINED__ */


#ifndef __FeatureSourceOGR_FWD_DEFINED__
#define __FeatureSourceOGR_FWD_DEFINED__

#ifdef __cplusplus
typedef class FeatureSourceOGR FeatureSourceOGR;
#else
typedef struct FeatureSourceOGR FeatureSourceOGR;
#endif /* __cplusplus */

#endif 	/* __FeatureSourceOGR_FWD_DEFINED__ */


#ifndef __FeatureSourceTFS_FWD_DEFINED__
#define __FeatureSourceTFS_FWD_DEFINED__

#ifdef __cplusplus
typedef class FeatureSourceTFS FeatureSourceTFS;
#else
typedef struct FeatureSourceTFS FeatureSourceTFS;
#endif /* __cplusplus */

#endif 	/* __FeatureSourceTFS_FWD_DEFINED__ */


#ifndef __FeatureSourceWFS_FWD_DEFINED__
#define __FeatureSourceWFS_FWD_DEFINED__

#ifdef __cplusplus
typedef class FeatureSourceWFS FeatureSourceWFS;
#else
typedef struct FeatureSourceWFS FeatureSourceWFS;
#endif /* __cplusplus */

#endif 	/* __FeatureSourceWFS_FWD_DEFINED__ */


#ifndef __TileSourceAGGLite_FWD_DEFINED__
#define __TileSourceAGGLite_FWD_DEFINED__

#ifdef __cplusplus
typedef class TileSourceAGGLite TileSourceAGGLite;
#else
typedef struct TileSourceAGGLite TileSourceAGGLite;
#endif /* __cplusplus */

#endif 	/* __TileSourceAGGLite_FWD_DEFINED__ */


#ifndef __TileSourceArcGIS_FWD_DEFINED__
#define __TileSourceArcGIS_FWD_DEFINED__

#ifdef __cplusplus
typedef class TileSourceArcGIS TileSourceArcGIS;
#else
typedef struct TileSourceArcGIS TileSourceArcGIS;
#endif /* __cplusplus */

#endif 	/* __TileSourceArcGIS_FWD_DEFINED__ */


#ifndef __TileSourceBing_FWD_DEFINED__
#define __TileSourceBing_FWD_DEFINED__

#ifdef __cplusplus
typedef class TileSourceBing TileSourceBing;
#else
typedef struct TileSourceBing TileSourceBing;
#endif /* __cplusplus */

#endif 	/* __TileSourceBing_FWD_DEFINED__ */


#ifndef __TileSourceColorRamp_FWD_DEFINED__
#define __TileSourceColorRamp_FWD_DEFINED__

#ifdef __cplusplus
typedef class TileSourceColorRamp TileSourceColorRamp;
#else
typedef struct TileSourceColorRamp TileSourceColorRamp;
#endif /* __cplusplus */

#endif 	/* __TileSourceColorRamp_FWD_DEFINED__ */


#ifndef __TileSourceDebug_FWD_DEFINED__
#define __TileSourceDebug_FWD_DEFINED__

#ifdef __cplusplus
typedef class TileSourceDebug TileSourceDebug;
#else
typedef struct TileSourceDebug TileSourceDebug;
#endif /* __cplusplus */

#endif 	/* __TileSourceDebug_FWD_DEFINED__ */


#ifndef __TileSourceGDAL_FWD_DEFINED__
#define __TileSourceGDAL_FWD_DEFINED__

#ifdef __cplusplus
typedef class TileSourceGDAL TileSourceGDAL;
#else
typedef struct TileSourceGDAL TileSourceGDAL;
#endif /* __cplusplus */

#endif 	/* __TileSourceGDAL_FWD_DEFINED__ */


#ifndef __TileSourceMBTiles_FWD_DEFINED__
#define __TileSourceMBTiles_FWD_DEFINED__

#ifdef __cplusplus
typedef class TileSourceMBTiles TileSourceMBTiles;
#else
typedef struct TileSourceMBTiles TileSourceMBTiles;
#endif /* __cplusplus */

#endif 	/* __TileSourceMBTiles_FWD_DEFINED__ */


#ifndef __TileSourceNoise_FWD_DEFINED__
#define __TileSourceNoise_FWD_DEFINED__

#ifdef __cplusplus
typedef class TileSourceNoise TileSourceNoise;
#else
typedef struct TileSourceNoise TileSourceNoise;
#endif /* __cplusplus */

#endif 	/* __TileSourceNoise_FWD_DEFINED__ */


#ifndef __TileSourceOSG_FWD_DEFINED__
#define __TileSourceOSG_FWD_DEFINED__

#ifdef __cplusplus
typedef class TileSourceOSG TileSourceOSG;
#else
typedef struct TileSourceOSG TileSourceOSG;
#endif /* __cplusplus */

#endif 	/* __TileSourceOSG_FWD_DEFINED__ */


#ifndef __TileSourceTileCache_FWD_DEFINED__
#define __TileSourceTileCache_FWD_DEFINED__

#ifdef __cplusplus
typedef class TileSourceTileCache TileSourceTileCache;
#else
typedef struct TileSourceTileCache TileSourceTileCache;
#endif /* __cplusplus */

#endif 	/* __TileSourceTileCache_FWD_DEFINED__ */


#ifndef __TileSourceTileService_FWD_DEFINED__
#define __TileSourceTileService_FWD_DEFINED__

#ifdef __cplusplus
typedef class TileSourceTileService TileSourceTileService;
#else
typedef struct TileSourceTileService TileSourceTileService;
#endif /* __cplusplus */

#endif 	/* __TileSourceTileService_FWD_DEFINED__ */


#ifndef __TileSourceTMS_FWD_DEFINED__
#define __TileSourceTMS_FWD_DEFINED__

#ifdef __cplusplus
typedef class TileSourceTMS TileSourceTMS;
#else
typedef struct TileSourceTMS TileSourceTMS;
#endif /* __cplusplus */

#endif 	/* __TileSourceTMS_FWD_DEFINED__ */


#ifndef __TileSourceVPB_FWD_DEFINED__
#define __TileSourceVPB_FWD_DEFINED__

#ifdef __cplusplus
typedef class TileSourceVPB TileSourceVPB;
#else
typedef struct TileSourceVPB TileSourceVPB;
#endif /* __cplusplus */

#endif 	/* __TileSourceVPB_FWD_DEFINED__ */


#ifndef __TileSourceWCS_FWD_DEFINED__
#define __TileSourceWCS_FWD_DEFINED__

#ifdef __cplusplus
typedef class TileSourceWCS TileSourceWCS;
#else
typedef struct TileSourceWCS TileSourceWCS;
#endif /* __cplusplus */

#endif 	/* __TileSourceWCS_FWD_DEFINED__ */


#ifndef __TileSourceWMS_FWD_DEFINED__
#define __TileSourceWMS_FWD_DEFINED__

#ifdef __cplusplus
typedef class TileSourceWMS TileSourceWMS;
#else
typedef struct TileSourceWMS TileSourceWMS;
#endif /* __cplusplus */

#endif 	/* __TileSourceWMS_FWD_DEFINED__ */


#ifndef __TileSourceXYZ_FWD_DEFINED__
#define __TileSourceXYZ_FWD_DEFINED__

#ifdef __cplusplus
typedef class TileSourceXYZ TileSourceXYZ;
#else
typedef struct TileSourceXYZ TileSourceXYZ;
#endif /* __cplusplus */

#endif 	/* __TileSourceXYZ_FWD_DEFINED__ */


#ifndef __TileSourceYahoo_FWD_DEFINED__
#define __TileSourceYahoo_FWD_DEFINED__

#ifdef __cplusplus
typedef class TileSourceYahoo TileSourceYahoo;
#else
typedef struct TileSourceYahoo TileSourceYahoo;
#endif /* __cplusplus */

#endif 	/* __TileSourceYahoo_FWD_DEFINED__ */


#ifndef __VectorSourceGeom_FWD_DEFINED__
#define __VectorSourceGeom_FWD_DEFINED__

#ifdef __cplusplus
typedef class VectorSourceGeom VectorSourceGeom;
#else
typedef struct VectorSourceGeom VectorSourceGeom;
#endif /* __cplusplus */

#endif 	/* __VectorSourceGeom_FWD_DEFINED__ */


#ifndef __VectorSourceSimple_FWD_DEFINED__
#define __VectorSourceSimple_FWD_DEFINED__

#ifdef __cplusplus
typedef class VectorSourceSimple VectorSourceSimple;
#else
typedef struct VectorSourceSimple VectorSourceSimple;
#endif /* __cplusplus */

#endif 	/* __VectorSourceSimple_FWD_DEFINED__ */


#ifndef __VectorSourceStencil_FWD_DEFINED__
#define __VectorSourceStencil_FWD_DEFINED__

#ifdef __cplusplus
typedef class VectorSourceStencil VectorSourceStencil;
#else
typedef struct VectorSourceStencil VectorSourceStencil;
#endif /* __cplusplus */

#endif 	/* __VectorSourceStencil_FWD_DEFINED__ */


#ifndef __Style_FWD_DEFINED__
#define __Style_FWD_DEFINED__

#ifdef __cplusplus
typedef class Style Style;
#else
typedef struct Style Style;
#endif /* __cplusplus */

#endif 	/* __Style_FWD_DEFINED__ */


#ifndef ___IEarthCtrlEvents_FWD_DEFINED__
#define ___IEarthCtrlEvents_FWD_DEFINED__
typedef interface _IEarthCtrlEvents _IEarthCtrlEvents;
#endif 	/* ___IEarthCtrlEvents_FWD_DEFINED__ */


#ifndef __EarthCtrl_FWD_DEFINED__
#define __EarthCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class EarthCtrl EarthCtrl;
#else
typedef struct EarthCtrl EarthCtrl;
#endif /* __cplusplus */

#endif 	/* __EarthCtrl_FWD_DEFINED__ */


#ifndef ___IEarthTreeCtrlEvents_FWD_DEFINED__
#define ___IEarthTreeCtrlEvents_FWD_DEFINED__
typedef interface _IEarthTreeCtrlEvents _IEarthTreeCtrlEvents;
#endif 	/* ___IEarthTreeCtrlEvents_FWD_DEFINED__ */


#ifndef __EarthTreeCtrl_FWD_DEFINED__
#define __EarthTreeCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class EarthTreeCtrl EarthTreeCtrl;
#else
typedef struct EarthTreeCtrl EarthTreeCtrl;
#endif /* __cplusplus */

#endif 	/* __EarthTreeCtrl_FWD_DEFINED__ */


#ifndef ___IEarthViewerEvents_FWD_DEFINED__
#define ___IEarthViewerEvents_FWD_DEFINED__
typedef interface _IEarthViewerEvents _IEarthViewerEvents;
#endif 	/* ___IEarthViewerEvents_FWD_DEFINED__ */


#ifndef __EarthViewer_FWD_DEFINED__
#define __EarthViewer_FWD_DEFINED__

#ifdef __cplusplus
typedef class EarthViewer EarthViewer;
#else
typedef struct EarthViewer EarthViewer;
#endif /* __cplusplus */

#endif 	/* __EarthViewer_FWD_DEFINED__ */


#ifndef __EarthGroup_FWD_DEFINED__
#define __EarthGroup_FWD_DEFINED__

#ifdef __cplusplus
typedef class EarthGroup EarthGroup;
#else
typedef struct EarthGroup EarthGroup;
#endif /* __cplusplus */

#endif 	/* __EarthGroup_FWD_DEFINED__ */


#ifndef __EarthMap_FWD_DEFINED__
#define __EarthMap_FWD_DEFINED__

#ifdef __cplusplus
typedef class EarthMap EarthMap;
#else
typedef struct EarthMap EarthMap;
#endif /* __cplusplus */

#endif 	/* __EarthMap_FWD_DEFINED__ */


#ifndef __IEarthDisp_FWD_DEFINED__
#define __IEarthDisp_FWD_DEFINED__
typedef interface IEarthDisp IEarthDisp;
#endif 	/* __IEarthDisp_FWD_DEFINED__ */


#ifndef __IEarthObjectEvents_FWD_DEFINED__
#define __IEarthObjectEvents_FWD_DEFINED__
typedef interface IEarthObjectEvents IEarthObjectEvents;
#endif 	/* __IEarthObjectEvents_FWD_DEFINED__ */


#ifndef __ILayerEvents_FWD_DEFINED__
#define __ILayerEvents_FWD_DEFINED__
typedef interface ILayerEvents ILayerEvents;
#endif 	/* __ILayerEvents_FWD_DEFINED__ */


#ifndef __IImageSurfaceEvents_FWD_DEFINED__
#define __IImageSurfaceEvents_FWD_DEFINED__
typedef interface IImageSurfaceEvents IImageSurfaceEvents;
#endif 	/* __IImageSurfaceEvents_FWD_DEFINED__ */


#ifndef __IDispImageSurfaceLayerEvents_FWD_DEFINED__
#define __IDispImageSurfaceLayerEvents_FWD_DEFINED__
typedef interface IDispImageSurfaceLayerEvents IDispImageSurfaceLayerEvents;
#endif 	/* __IDispImageSurfaceLayerEvents_FWD_DEFINED__ */


#ifndef __ImageSurfaceLayer_FWD_DEFINED__
#define __ImageSurfaceLayer_FWD_DEFINED__

#ifdef __cplusplus
typedef class ImageSurfaceLayer ImageSurfaceLayer;
#else
typedef struct ImageSurfaceLayer ImageSurfaceLayer;
#endif /* __cplusplus */

#endif 	/* __ImageSurfaceLayer_FWD_DEFINED__ */


#ifndef __IVectorSurfaceLayerEvents_FWD_DEFINED__
#define __IVectorSurfaceLayerEvents_FWD_DEFINED__
typedef interface IVectorSurfaceLayerEvents IVectorSurfaceLayerEvents;
#endif 	/* __IVectorSurfaceLayerEvents_FWD_DEFINED__ */


#ifndef __IDispVectorSurfaceLayerEvents_FWD_DEFINED__
#define __IDispVectorSurfaceLayerEvents_FWD_DEFINED__
typedef interface IDispVectorSurfaceLayerEvents IDispVectorSurfaceLayerEvents;
#endif 	/* __IDispVectorSurfaceLayerEvents_FWD_DEFINED__ */


#ifndef __VectorSurfaceLayer_FWD_DEFINED__
#define __VectorSurfaceLayer_FWD_DEFINED__

#ifdef __cplusplus
typedef class VectorSurfaceLayer VectorSurfaceLayer;
#else
typedef struct VectorSurfaceLayer VectorSurfaceLayer;
#endif /* __cplusplus */

#endif 	/* __VectorSurfaceLayer_FWD_DEFINED__ */


#ifndef __ElevationSurfaceLayer_FWD_DEFINED__
#define __ElevationSurfaceLayer_FWD_DEFINED__

#ifdef __cplusplus
typedef class ElevationSurfaceLayer ElevationSurfaceLayer;
#else
typedef struct ElevationSurfaceLayer ElevationSurfaceLayer;
#endif /* __cplusplus */

#endif 	/* __ElevationSurfaceLayer_FWD_DEFINED__ */


#ifndef __Sky_FWD_DEFINED__
#define __Sky_FWD_DEFINED__

#ifdef __cplusplus
typedef class Sky Sky;
#else
typedef struct Sky Sky;
#endif /* __cplusplus */

#endif 	/* __Sky_FWD_DEFINED__ */


#ifndef __Viewpoint_FWD_DEFINED__
#define __Viewpoint_FWD_DEFINED__

#ifdef __cplusplus
typedef class Viewpoint Viewpoint;
#else
typedef struct Viewpoint Viewpoint;
#endif /* __cplusplus */

#endif 	/* __Viewpoint_FWD_DEFINED__ */


#ifndef __Graticule_FWD_DEFINED__
#define __Graticule_FWD_DEFINED__

#ifdef __cplusplus
typedef class Graticule Graticule;
#else
typedef struct Graticule Graticule;
#endif /* __cplusplus */

#endif 	/* __Graticule_FWD_DEFINED__ */


#ifndef __Place_FWD_DEFINED__
#define __Place_FWD_DEFINED__

#ifdef __cplusplus
typedef class Place Place;
#else
typedef struct Place Place;
#endif /* __cplusplus */

#endif 	/* __Place_FWD_DEFINED__ */


#ifndef __ImageOverlay_FWD_DEFINED__
#define __ImageOverlay_FWD_DEFINED__

#ifdef __cplusplus
typedef class ImageOverlay ImageOverlay;
#else
typedef struct ImageOverlay ImageOverlay;
#endif /* __cplusplus */

#endif 	/* __ImageOverlay_FWD_DEFINED__ */


#ifndef __Circle_FWD_DEFINED__
#define __Circle_FWD_DEFINED__

#ifdef __cplusplus
typedef class Circle Circle;
#else
typedef struct Circle Circle;
#endif /* __cplusplus */

#endif 	/* __Circle_FWD_DEFINED__ */


#ifndef __FeaturePrimitive_FWD_DEFINED__
#define __FeaturePrimitive_FWD_DEFINED__

#ifdef __cplusplus
typedef class FeaturePrimitive FeaturePrimitive;
#else
typedef struct FeaturePrimitive FeaturePrimitive;
#endif /* __cplusplus */

#endif 	/* __FeaturePrimitive_FWD_DEFINED__ */


#ifndef __Model_FWD_DEFINED__
#define __Model_FWD_DEFINED__

#ifdef __cplusplus
typedef class Model Model;
#else
typedef struct Model Model;
#endif /* __cplusplus */

#endif 	/* __Model_FWD_DEFINED__ */


#ifndef __TextLabel_FWD_DEFINED__
#define __TextLabel_FWD_DEFINED__

#ifdef __cplusplus
typedef class TextLabel TextLabel;
#else
typedef struct TextLabel TextLabel;
#endif /* __cplusplus */

#endif 	/* __TextLabel_FWD_DEFINED__ */


#ifndef __RectanglePrimitive_FWD_DEFINED__
#define __RectanglePrimitive_FWD_DEFINED__

#ifdef __cplusplus
typedef class RectanglePrimitive RectanglePrimitive;
#else
typedef struct RectanglePrimitive RectanglePrimitive;
#endif /* __cplusplus */

#endif 	/* __RectanglePrimitive_FWD_DEFINED__ */


#ifndef __EllipsePrimitive_FWD_DEFINED__
#define __EllipsePrimitive_FWD_DEFINED__

#ifdef __cplusplus
typedef class EllipsePrimitive EllipsePrimitive;
#else
typedef struct EllipsePrimitive EllipsePrimitive;
#endif /* __cplusplus */

#endif 	/* __EllipsePrimitive_FWD_DEFINED__ */


#ifndef __ObjectFactory_FWD_DEFINED__
#define __ObjectFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class ObjectFactory ObjectFactory;
#else
typedef struct ObjectFactory ObjectFactory;
#endif /* __cplusplus */

#endif 	/* __ObjectFactory_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_osgEarthX_COM_0000_0000 */
/* [local] */ 

typedef /* [uuid] */  DECLSPEC_UUID("9ecc1b1b-6276-401c-82dc-b9bd87f4ccf6") 
enum GeoClassType
    {	GEO_CLASS_SPATIAL_REFERENCE	= 0,
	GEO_CLASS_GEO_POINT	= 1,
	GEO_CLASS_FEATURE	= ( GEO_CLASS_GEO_POINT + 1 ) 
    } 	GeoClassType;

typedef /* [uuid] */  DECLSPEC_UUID("bce373cf-8e45-4823-9aba-7da9b881119e") 
enum EarthClassType
    {	OBJECT_FACTORY	= 0,
	EARTH	= ( OBJECT_FACTORY + 1 ) ,
	EARTH_MAP	= ( EARTH + 1 ) ,
	EARTH_VIEWER	= ( EARTH_MAP + 1 ) 
    } 	EarthClassType;

#define	IEarthDispatchIdsCount	( 2 )

#define	IEarthDispatchBeginId	( 0 )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0000_v0_0_s_ifspec;

#ifndef __IEarthDispatch_INTERFACE_DEFINED__
#define __IEarthDispatch_INTERFACE_DEFINED__

/* interface IEarthDispatch */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IEarthDispatch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a19426b7-7677-442b-b0c4-3f7a7638ea2b")
    IEarthDispatch : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_data( 
            /* [retval][out] */ INT *piData) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_data( 
            /* [in] */ INT iData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE equal( 
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEarthDispatchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEarthDispatch * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEarthDispatch * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEarthDispatch * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEarthDispatch * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEarthDispatch * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEarthDispatch * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEarthDispatch * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IEarthDispatch * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IEarthDispatch * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IEarthDispatch * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        END_INTERFACE
    } IEarthDispatchVtbl;

    interface IEarthDispatch
    {
        CONST_VTBL struct IEarthDispatchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEarthDispatch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEarthDispatch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEarthDispatch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEarthDispatch_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEarthDispatch_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEarthDispatch_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEarthDispatch_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEarthDispatch_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IEarthDispatch_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IEarthDispatch_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEarthDispatch_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0001 */
/* [local] */ 

#define	ISpatialReferenceIdsCount	( 0 )

#define	ISpatialReferenceBeginId	( ( IEarthDispatchBeginId + IEarthDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0001_v0_0_s_ifspec;

#ifndef __ISpatialReference_INTERFACE_DEFINED__
#define __ISpatialReference_INTERFACE_DEFINED__

/* interface ISpatialReference */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISpatialReference;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("375604D3-007B-429A-9D20-FB248440D9B3")
    ISpatialReference : public IEarthDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ISpatialReferenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpatialReference * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpatialReference * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpatialReference * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISpatialReference * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISpatialReference * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISpatialReference * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISpatialReference * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ISpatialReference * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ISpatialReference * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ISpatialReference * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        END_INTERFACE
    } ISpatialReferenceVtbl;

    interface ISpatialReference
    {
        CONST_VTBL struct ISpatialReferenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpatialReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpatialReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpatialReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpatialReference_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISpatialReference_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISpatialReference_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISpatialReference_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISpatialReference_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ISpatialReference_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ISpatialReference_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpatialReference_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0002 */
/* [local] */ 

#define	IGeoPointIdsCount	( 4 )

#define	IGeoPointBeginId	( ( IEarthDispatchBeginId + IEarthDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0002_v0_0_s_ifspec;

#ifndef __IGeoPoint_INTERFACE_DEFINED__
#define __IGeoPoint_INTERFACE_DEFINED__

/* interface IGeoPoint */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IGeoPoint;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8DEB0D28-96B5-4653-9FD4-A6DDBC6145EC")
    IGeoPoint : public IEarthDispatch
    {
    public:
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_x( 
            /* [in] */ DOUBLE dX) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_x( 
            /* [retval][out] */ DOUBLE *pX) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_y( 
            /* [in] */ DOUBLE dY) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_y( 
            /* [retval][out] */ DOUBLE *pY) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_z( 
            /* [in] */ DOUBLE dZ) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_z( 
            /* [retval][out] */ DOUBLE *pZ) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_srs( 
            /* [in] */ ISpatialReference *pISpatialReference) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_srs( 
            /* [retval][out] */ ISpatialReference **ppISpatialReference) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IGeoPointVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGeoPoint * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGeoPoint * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGeoPoint * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IGeoPoint * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IGeoPoint * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IGeoPoint * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IGeoPoint * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IGeoPoint * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IGeoPoint * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IGeoPoint * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_x )( 
            IGeoPoint * This,
            /* [in] */ DOUBLE dX);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_x )( 
            IGeoPoint * This,
            /* [retval][out] */ DOUBLE *pX);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_y )( 
            IGeoPoint * This,
            /* [in] */ DOUBLE dY);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_y )( 
            IGeoPoint * This,
            /* [retval][out] */ DOUBLE *pY);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_z )( 
            IGeoPoint * This,
            /* [in] */ DOUBLE dZ);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_z )( 
            IGeoPoint * This,
            /* [retval][out] */ DOUBLE *pZ);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_srs )( 
            IGeoPoint * This,
            /* [in] */ ISpatialReference *pISpatialReference);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_srs )( 
            IGeoPoint * This,
            /* [retval][out] */ ISpatialReference **ppISpatialReference);
        
        END_INTERFACE
    } IGeoPointVtbl;

    interface IGeoPoint
    {
        CONST_VTBL struct IGeoPointVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGeoPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGeoPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGeoPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGeoPoint_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IGeoPoint_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IGeoPoint_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IGeoPoint_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IGeoPoint_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IGeoPoint_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IGeoPoint_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IGeoPoint_put_x(This,dX)	\
    ( (This)->lpVtbl -> put_x(This,dX) ) 

#define IGeoPoint_get_x(This,pX)	\
    ( (This)->lpVtbl -> get_x(This,pX) ) 

#define IGeoPoint_put_y(This,dY)	\
    ( (This)->lpVtbl -> put_y(This,dY) ) 

#define IGeoPoint_get_y(This,pY)	\
    ( (This)->lpVtbl -> get_y(This,pY) ) 

#define IGeoPoint_put_z(This,dZ)	\
    ( (This)->lpVtbl -> put_z(This,dZ) ) 

#define IGeoPoint_get_z(This,pZ)	\
    ( (This)->lpVtbl -> get_z(This,pZ) ) 

#define IGeoPoint_put_srs(This,pISpatialReference)	\
    ( (This)->lpVtbl -> put_srs(This,pISpatialReference) ) 

#define IGeoPoint_get_srs(This,ppISpatialReference)	\
    ( (This)->lpVtbl -> get_srs(This,ppISpatialReference) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGeoPoint_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0003 */
/* [local] */ 

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("30cb386d-c769-4087-b363-889edaf0a9ae") 
enum GeometryClassType
    {	GEOMETRY_CLASS_POINTSET	= 0,
	GEOMETRY_CLASS_LINESTRING	= ( GEOMETRY_CLASS_POINTSET + 1 ) ,
	GEOMETRY_CLASS_RING	= ( GEOMETRY_CLASS_LINESTRING + 1 ) ,
	GEOMETRY_CLASS_POLYGON	= ( GEOMETRY_CLASS_RING + 1 ) ,
	GEOMETRY_CLASS_MULTI	= ( GEOMETRY_CLASS_POLYGON + 1 ) 
    } 	GeometryClassType;

#define	IVec3dIdsCount	( 4 )

#define	IVec3dBeginId	( ( IEarthDispatchBeginId + IEarthDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0003_v0_0_s_ifspec;

#ifndef __IVec3d_INTERFACE_DEFINED__
#define __IVec3d_INTERFACE_DEFINED__

/* interface IVec3d */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IVec3d;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("727201B6-03AC-49A1-8171-C71449E9F1F5")
    IVec3d : public IEarthDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE set( 
            /* [in] */ DOUBLE dX,
            /* [in] */ DOUBLE dY,
            /* [in] */ DOUBLE dZ) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_x( 
            /* [in] */ DOUBLE dX) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_x( 
            /* [retval][out] */ DOUBLE *pX) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_y( 
            /* [in] */ DOUBLE dY) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_y( 
            /* [retval][out] */ DOUBLE *pY) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_z( 
            /* [in] */ DOUBLE dZ) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_z( 
            /* [retval][out] */ DOUBLE *pZ) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVec3dVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVec3d * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVec3d * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVec3d * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVec3d * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVec3d * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVec3d * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVec3d * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IVec3d * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IVec3d * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IVec3d * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *set )( 
            IVec3d * This,
            /* [in] */ DOUBLE dX,
            /* [in] */ DOUBLE dY,
            /* [in] */ DOUBLE dZ);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_x )( 
            IVec3d * This,
            /* [in] */ DOUBLE dX);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_x )( 
            IVec3d * This,
            /* [retval][out] */ DOUBLE *pX);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_y )( 
            IVec3d * This,
            /* [in] */ DOUBLE dY);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_y )( 
            IVec3d * This,
            /* [retval][out] */ DOUBLE *pY);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_z )( 
            IVec3d * This,
            /* [in] */ DOUBLE dZ);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_z )( 
            IVec3d * This,
            /* [retval][out] */ DOUBLE *pZ);
        
        END_INTERFACE
    } IVec3dVtbl;

    interface IVec3d
    {
        CONST_VTBL struct IVec3dVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVec3d_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVec3d_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVec3d_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVec3d_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVec3d_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVec3d_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVec3d_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVec3d_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IVec3d_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IVec3d_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IVec3d_set(This,dX,dY,dZ)	\
    ( (This)->lpVtbl -> set(This,dX,dY,dZ) ) 

#define IVec3d_put_x(This,dX)	\
    ( (This)->lpVtbl -> put_x(This,dX) ) 

#define IVec3d_get_x(This,pX)	\
    ( (This)->lpVtbl -> get_x(This,pX) ) 

#define IVec3d_put_y(This,dY)	\
    ( (This)->lpVtbl -> put_y(This,dY) ) 

#define IVec3d_get_y(This,pY)	\
    ( (This)->lpVtbl -> get_y(This,pY) ) 

#define IVec3d_put_z(This,dZ)	\
    ( (This)->lpVtbl -> put_z(This,dZ) ) 

#define IVec3d_get_z(This,pZ)	\
    ( (This)->lpVtbl -> get_z(This,pZ) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVec3d_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0004 */
/* [local] */ 

#define	IGeometryIdsCount	( 2 )

#define	IGeometryBeginId	( ( IEarthDispatchBeginId + IEarthDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0004_v0_0_s_ifspec;

#ifndef __IGeometry_INTERFACE_DEFINED__
#define __IGeometry_INTERFACE_DEFINED__

/* interface IGeometry */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IGeometry;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9ee2be10-a27f-4641-b8c6-20d65cc4f056")
    IGeometry : public IEarthDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_classType( 
            /* [retval][out] */ GeometryClassType *pClassType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE push_back( 
            /* [in] */ IVec3d *pIVec3d) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IGeometryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGeometry * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGeometry * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGeometry * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IGeometry * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IGeometry * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IGeometry * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IGeometry * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IGeometry * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IGeometry * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IGeometry * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            IGeometry * This,
            /* [retval][out] */ GeometryClassType *pClassType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *push_back )( 
            IGeometry * This,
            /* [in] */ IVec3d *pIVec3d);
        
        END_INTERFACE
    } IGeometryVtbl;

    interface IGeometry
    {
        CONST_VTBL struct IGeometryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGeometry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGeometry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGeometry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGeometry_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IGeometry_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IGeometry_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IGeometry_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IGeometry_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IGeometry_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IGeometry_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IGeometry_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 

#define IGeometry_push_back(This,pIVec3d)	\
    ( (This)->lpVtbl -> push_back(This,pIVec3d) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGeometry_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0005 */
/* [local] */ 

#define	IFeatureIdsCount	( 1 )

#define	IFeatureBeginId	( ( IEarthDispatchBeginId + IEarthDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0005_v0_0_s_ifspec;

#ifndef __IFeature_INTERFACE_DEFINED__
#define __IFeature_INTERFACE_DEFINED__

/* interface IFeature */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("32E9A775-8511-4570-A63F-579727BA5322")
    IFeature : public IEarthDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setGeometry( 
            /* [in] */ IGeometry *pIGeometry) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFeature * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IFeature * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IFeature * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IFeature * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setGeometry )( 
            IFeature * This,
            /* [in] */ IGeometry *pIGeometry);
        
        END_INTERFACE
    } IFeatureVtbl;

    interface IFeature
    {
        CONST_VTBL struct IFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFeature_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IFeature_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IFeature_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IFeature_setGeometry(This,pIGeometry)	\
    ( (This)->lpVtbl -> setGeometry(This,pIGeometry) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFeature_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0006 */
/* [local] */ 

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("6e8e212d-ce99-4ff3-859e-3691c7ea2e60") 
enum UnitsType
    {	UNIT_CENTIMETERS	= 0,
	UNIT_DATA_MILES	= ( UNIT_CENTIMETERS + 1 ) ,
	UNIT_FATHOMS	= ( UNIT_DATA_MILES + 1 ) ,
	UNIT_FEET	= ( UNIT_FATHOMS + 1 ) ,
	UNIT_FEET_US_SURVEY	= ( UNIT_FEET + 1 ) ,
	UNIT_INCHES	= ( UNIT_FEET_US_SURVEY + 1 ) ,
	UNIT_KILOFEET	= ( UNIT_INCHES + 1 ) ,
	UNIT_KILOMETERS	= ( UNIT_KILOFEET + 1 ) ,
	UNIT_KILOYARDS	= ( UNIT_KILOMETERS + 1 ) ,
	UNIT_METERS	= ( UNIT_KILOYARDS + 1 ) ,
	UNIT_MILES	= ( UNIT_METERS + 1 ) ,
	UNIT_MILLIMETERS	= ( UNIT_MILES + 1 ) ,
	UNIT_NAUTICAL_MILES	= ( UNIT_MILLIMETERS + 1 ) ,
	UNIT_YARDS	= ( UNIT_NAUTICAL_MILES + 1 ) ,
	UNIT_BAM	= ( UNIT_YARDS + 1 ) ,
	UNIT_DEGREES	= ( UNIT_BAM + 1 ) ,
	UNIT_NATO_MILS	= ( UNIT_DEGREES + 1 ) ,
	UNIT_RADIANS	= ( UNIT_NATO_MILS + 1 ) ,
	UNIT_DAYS	= ( UNIT_RADIANS + 1 ) ,
	UNIT_HOURS	= ( UNIT_DAYS + 1 ) ,
	UNIT_MICROSECONDS	= ( UNIT_HOURS + 1 ) ,
	UNIT_MILLISECONDS	= ( UNIT_MICROSECONDS + 1 ) ,
	UNIT_MINUTES	= ( UNIT_MILLISECONDS + 1 ) ,
	UNIT_SECONDS	= ( UNIT_MINUTES + 1 ) ,
	UNIT_WEEKS	= ( UNIT_SECONDS + 1 ) ,
	UNIT_FEET_PER_SECOND	= ( UNIT_WEEKS + 1 ) ,
	UNIT_YARDS_PER_SECOND	= ( UNIT_FEET_PER_SECOND + 1 ) ,
	UNIT_METERS_PER_SECOND	= ( UNIT_YARDS_PER_SECOND + 1 ) ,
	UNIT_KILOMETERS_PER_SECOND	= ( UNIT_METERS_PER_SECOND + 1 ) ,
	UNIT_KILOMETERS_PER_HOUR	= ( UNIT_KILOMETERS_PER_SECOND + 1 ) ,
	UNIT_MILES_PER_HOUR	= ( UNIT_KILOMETERS_PER_HOUR + 1 ) ,
	UNIT_DATA_MILES_PER_HOUR	= ( UNIT_MILES_PER_HOUR + 1 ) ,
	UNIT_KNOTS	= ( UNIT_DATA_MILES_PER_HOUR + 1 ) 
    } 	UnitsType;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("378c4086-d41c-4e2f-a663-a005a7b75d2a") 
enum UnitClassType
    {	UNIT_CLASS_LINEAR	= 0,
	UNIT_CLASS_ANGULAR	= ( UNIT_CLASS_LINEAR + 1 ) ,
	UNIT_CLASS_TEMPORAL	= ( UNIT_CLASS_ANGULAR + 1 ) ,
	UNIT_CLASS_SPEED	= ( UNIT_CLASS_TEMPORAL + 1 ) ,
	UNIT_CLASS_SCREEN_SIZE	= ( UNIT_CLASS_SPEED + 1 ) 
    } 	UnitClassType;

#define	ILinearIdsCount	( 1 )

#define	ILinearBeginId	( ( IEarthDispatchBeginId + IEarthDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0006_v0_0_s_ifspec;

#ifndef __ILinear_INTERFACE_DEFINED__
#define __ILinear_INTERFACE_DEFINED__

/* interface ILinear */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ILinear;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("185B69E3-4C29-4DF1-8080-8419CCD1E216")
    ILinear : public IEarthDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE set( 
            /* [in] */ DOUBLE dValue,
            /* [in] */ UnitsType eUnitsType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ILinearVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILinear * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILinear * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILinear * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ILinear * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ILinear * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ILinear * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ILinear * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ILinear * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ILinear * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ILinear * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *set )( 
            ILinear * This,
            /* [in] */ DOUBLE dValue,
            /* [in] */ UnitsType eUnitsType);
        
        END_INTERFACE
    } ILinearVtbl;

    interface ILinear
    {
        CONST_VTBL struct ILinearVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILinear_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILinear_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILinear_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILinear_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ILinear_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ILinear_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ILinear_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ILinear_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ILinear_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ILinear_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ILinear_set(This,dValue,eUnitsType)	\
    ( (This)->lpVtbl -> set(This,dValue,eUnitsType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILinear_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0007 */
/* [local] */ 

#define	IAngularIdsCount	( 1 )

#define	IAngularBeginId	( ( IEarthDispatchBeginId + IEarthDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0007_v0_0_s_ifspec;

#ifndef __IAngular_INTERFACE_DEFINED__
#define __IAngular_INTERFACE_DEFINED__

/* interface IAngular */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IAngular;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BC4518B2-2C77-492F-B26C-2523FEBF2FB3")
    IAngular : public IEarthDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE set( 
            /* [in] */ DOUBLE dValue,
            /* [in] */ UnitsType eUnitsType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAngularVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAngular * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAngular * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAngular * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAngular * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAngular * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAngular * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAngular * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IAngular * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IAngular * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IAngular * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *set )( 
            IAngular * This,
            /* [in] */ DOUBLE dValue,
            /* [in] */ UnitsType eUnitsType);
        
        END_INTERFACE
    } IAngularVtbl;

    interface IAngular
    {
        CONST_VTBL struct IAngularVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAngular_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAngular_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAngular_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAngular_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAngular_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAngular_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAngular_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAngular_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IAngular_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IAngular_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IAngular_set(This,dValue,eUnitsType)	\
    ( (This)->lpVtbl -> set(This,dValue,eUnitsType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAngular_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0008 */
/* [local] */ 

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("02720421-2278-424d-afc7-f625d33a2cde") 
enum VecClassType
    {	VEC_CLASS_VEC3D	= 0
    } 	VecClassType;

#define	ILineStringIdsCount	( 0 )

#define	ILineStringBeginId	( ( IGeometryBeginId + IGeometryIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0008_v0_0_s_ifspec;

#ifndef __ILineStringGeometry_INTERFACE_DEFINED__
#define __ILineStringGeometry_INTERFACE_DEFINED__

/* interface ILineStringGeometry */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ILineStringGeometry;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CC3C1644-714E-436E-8A2B-80897DD76AD2")
    ILineStringGeometry : public IGeometry
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ILineStringGeometryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILineStringGeometry * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILineStringGeometry * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILineStringGeometry * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ILineStringGeometry * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ILineStringGeometry * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ILineStringGeometry * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ILineStringGeometry * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ILineStringGeometry * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ILineStringGeometry * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ILineStringGeometry * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            ILineStringGeometry * This,
            /* [retval][out] */ GeometryClassType *pClassType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *push_back )( 
            ILineStringGeometry * This,
            /* [in] */ IVec3d *pIVec3d);
        
        END_INTERFACE
    } ILineStringGeometryVtbl;

    interface ILineStringGeometry
    {
        CONST_VTBL struct ILineStringGeometryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILineStringGeometry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILineStringGeometry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILineStringGeometry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILineStringGeometry_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ILineStringGeometry_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ILineStringGeometry_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ILineStringGeometry_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ILineStringGeometry_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ILineStringGeometry_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ILineStringGeometry_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ILineStringGeometry_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 

#define ILineStringGeometry_push_back(This,pIVec3d)	\
    ( (This)->lpVtbl -> push_back(This,pIVec3d) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILineStringGeometry_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0009 */
/* [local] */ 

#define	IRingGeometryIdsCount	( 0 )

#define	IRingGeometryBeginId	( ( IGeometryBeginId + IGeometryIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0009_v0_0_s_ifspec;

#ifndef __IRingGeometry_INTERFACE_DEFINED__
#define __IRingGeometry_INTERFACE_DEFINED__

/* interface IRingGeometry */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRingGeometry;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("687C2064-3973-4B84-9330-5723BD8E52CE")
    IRingGeometry : public IGeometry
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IRingGeometryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRingGeometry * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRingGeometry * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRingGeometry * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRingGeometry * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRingGeometry * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRingGeometry * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRingGeometry * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IRingGeometry * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IRingGeometry * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IRingGeometry * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            IRingGeometry * This,
            /* [retval][out] */ GeometryClassType *pClassType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *push_back )( 
            IRingGeometry * This,
            /* [in] */ IVec3d *pIVec3d);
        
        END_INTERFACE
    } IRingGeometryVtbl;

    interface IRingGeometry
    {
        CONST_VTBL struct IRingGeometryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRingGeometry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRingGeometry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRingGeometry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRingGeometry_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRingGeometry_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRingGeometry_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRingGeometry_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRingGeometry_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IRingGeometry_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IRingGeometry_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IRingGeometry_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 

#define IRingGeometry_push_back(This,pIVec3d)	\
    ( (This)->lpVtbl -> push_back(This,pIVec3d) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRingGeometry_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0010 */
/* [local] */ 

#define	IPolygonGeometryIdsCount	( 0 )

#define	IPolygonGeometryBeginId	( ( IRingGeometryBeginId + IRingGeometryIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0010_v0_0_s_ifspec;

#ifndef __IPolygonGeometry_INTERFACE_DEFINED__
#define __IPolygonGeometry_INTERFACE_DEFINED__

/* interface IPolygonGeometry */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IPolygonGeometry;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("40D84433-03C2-4FE3-B2E6-0B049EB9AA05")
    IPolygonGeometry : public IRingGeometry
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IPolygonGeometryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPolygonGeometry * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPolygonGeometry * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPolygonGeometry * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPolygonGeometry * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPolygonGeometry * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPolygonGeometry * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPolygonGeometry * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IPolygonGeometry * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IPolygonGeometry * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IPolygonGeometry * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            IPolygonGeometry * This,
            /* [retval][out] */ GeometryClassType *pClassType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *push_back )( 
            IPolygonGeometry * This,
            /* [in] */ IVec3d *pIVec3d);
        
        END_INTERFACE
    } IPolygonGeometryVtbl;

    interface IPolygonGeometry
    {
        CONST_VTBL struct IPolygonGeometryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPolygonGeometry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPolygonGeometry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPolygonGeometry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPolygonGeometry_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPolygonGeometry_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPolygonGeometry_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPolygonGeometry_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPolygonGeometry_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IPolygonGeometry_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IPolygonGeometry_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IPolygonGeometry_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 

#define IPolygonGeometry_push_back(This,pIVec3d)	\
    ( (This)->lpVtbl -> push_back(This,pIVec3d) ) 



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPolygonGeometry_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0011 */
/* [local] */ 

typedef /* [uuid] */  DECLSPEC_UUID("f5af84f7-5b55-4256-ae40-7372bae9cd75") 
enum SourceClassType
    {	TILE_SOURCE_AGGLITE	= 0,
	TILE_SOURCE_ARCGIS	= ( TILE_SOURCE_AGGLITE + 1 ) ,
	TILE_SOURCE_BING	= ( TILE_SOURCE_ARCGIS + 1 ) ,
	TILE_SOURCE_COLOR_RAMP	= ( TILE_SOURCE_BING + 1 ) ,
	TILE_SOURCE_DEBUG	= ( TILE_SOURCE_COLOR_RAMP + 1 ) ,
	TILE_SOURCE_GDAL	= ( TILE_SOURCE_DEBUG + 1 ) ,
	TILE_SOURCE_MBTILES	= ( TILE_SOURCE_GDAL + 1 ) ,
	TILE_SOURCE_NOISE	= ( TILE_SOURCE_MBTILES + 1 ) ,
	TILE_SOURCE_OSG	= ( TILE_SOURCE_NOISE + 1 ) ,
	TILE_SOURCE_TILE_CACHE	= ( TILE_SOURCE_OSG + 1 ) ,
	TILE_SOURCE_TILE_SERVICE	= ( TILE_SOURCE_TILE_CACHE + 1 ) ,
	TILE_SOURCE_TMS	= ( TILE_SOURCE_TILE_SERVICE + 1 ) ,
	TILE_SOURCE_VPB	= ( TILE_SOURCE_TMS + 1 ) ,
	TILE_SOURCE_WCS	= ( TILE_SOURCE_VPB + 1 ) ,
	TILE_SOURCE_WMS	= ( TILE_SOURCE_WCS + 1 ) ,
	TILE_SOURCE_XYZ	= ( TILE_SOURCE_WMS + 1 ) ,
	TILE_SOURCE_YAHOO	= ( TILE_SOURCE_XYZ + 1 ) ,
	VECTOR_SOURCE_GEOM	= ( TILE_SOURCE_YAHOO + 1 ) ,
	VECTOR_SOURCE_SIMPLE	= ( VECTOR_SOURCE_GEOM + 1 ) ,
	VECTOR_SOURCE_STENCIL	= ( VECTOR_SOURCE_SIMPLE + 1 ) ,
	FEATURE_SOURCE_OGR	= ( VECTOR_SOURCE_STENCIL + 1 ) ,
	FEATURE_SOURCE_TFS	= ( FEATURE_SOURCE_OGR + 1 ) ,
	FEATURE_SOURCE_WFS	= ( FEATURE_SOURCE_TFS + 1 ) 
    } 	SourceClassType;

#define	ISourceDispatchIdsCount	( 1 )

#define	ISourceDispatchBeginId	( ( IEarthDispatchBeginId + IEarthDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0011_v0_0_s_ifspec;

#ifndef __ISourceDispatch_INTERFACE_DEFINED__
#define __ISourceDispatch_INTERFACE_DEFINED__

/* interface ISourceDispatch */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISourceDispatch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5fd19a2e-d274-4d96-b825-8519a68ae9e6")
    ISourceDispatch : public IEarthDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_classType( 
            /* [retval][out] */ SourceClassType *pClassType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISourceDispatchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISourceDispatch * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISourceDispatch * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISourceDispatch * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISourceDispatch * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISourceDispatch * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISourceDispatch * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISourceDispatch * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ISourceDispatch * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ISourceDispatch * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ISourceDispatch * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            ISourceDispatch * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        END_INTERFACE
    } ISourceDispatchVtbl;

    interface ISourceDispatch
    {
        CONST_VTBL struct ISourceDispatchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISourceDispatch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISourceDispatch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISourceDispatch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISourceDispatch_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISourceDispatch_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISourceDispatch_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISourceDispatch_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISourceDispatch_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ISourceDispatch_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ISourceDispatch_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ISourceDispatch_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISourceDispatch_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0012 */
/* [local] */ 

#define	ITileSourceDispatchIdsCount	( 0 )

#define	ITileSourceDispatchBeginId	( ( ISourceDispatchBeginId + ISourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0012_v0_0_s_ifspec;

#ifndef __ITileSourceDispatch_INTERFACE_DEFINED__
#define __ITileSourceDispatch_INTERFACE_DEFINED__

/* interface ITileSourceDispatch */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITileSourceDispatch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a9e09563-3471-4b40-86d8-cbb2b472992e")
    ITileSourceDispatch : public ISourceDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITileSourceDispatchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITileSourceDispatch * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITileSourceDispatch * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITileSourceDispatch * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITileSourceDispatch * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITileSourceDispatch * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITileSourceDispatch * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITileSourceDispatch * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ITileSourceDispatch * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ITileSourceDispatch * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ITileSourceDispatch * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            ITileSourceDispatch * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        END_INTERFACE
    } ITileSourceDispatchVtbl;

    interface ITileSourceDispatch
    {
        CONST_VTBL struct ITileSourceDispatchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITileSourceDispatch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITileSourceDispatch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITileSourceDispatch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITileSourceDispatch_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITileSourceDispatch_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITileSourceDispatch_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITileSourceDispatch_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITileSourceDispatch_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ITileSourceDispatch_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ITileSourceDispatch_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ITileSourceDispatch_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITileSourceDispatch_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0013 */
/* [local] */ 

#define	IVectorSourceDispatchIdsCount	( 0 )

#define	IVectorSourceDispatchBeginId	( ( ISourceDispatchBeginId + ISourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0013_v0_0_s_ifspec;

#ifndef __IVectorSourceDispatch_INTERFACE_DEFINED__
#define __IVectorSourceDispatch_INTERFACE_DEFINED__

/* interface IVectorSourceDispatch */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IVectorSourceDispatch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f645160e-9102-4e02-b592-3d6e0816dafa")
    IVectorSourceDispatch : public ISourceDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IVectorSourceDispatchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVectorSourceDispatch * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVectorSourceDispatch * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVectorSourceDispatch * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVectorSourceDispatch * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVectorSourceDispatch * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVectorSourceDispatch * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVectorSourceDispatch * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IVectorSourceDispatch * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IVectorSourceDispatch * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IVectorSourceDispatch * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            IVectorSourceDispatch * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        END_INTERFACE
    } IVectorSourceDispatchVtbl;

    interface IVectorSourceDispatch
    {
        CONST_VTBL struct IVectorSourceDispatchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVectorSourceDispatch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVectorSourceDispatch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVectorSourceDispatch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVectorSourceDispatch_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVectorSourceDispatch_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVectorSourceDispatch_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVectorSourceDispatch_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVectorSourceDispatch_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IVectorSourceDispatch_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IVectorSourceDispatch_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IVectorSourceDispatch_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVectorSourceDispatch_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0014 */
/* [local] */ 

#define	IFeatureSourceDispatchIdsCount	( 0 )

#define	IFeatureSourceDispatchBeginId	( ( ISourceDispatchBeginId + ISourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0014_v0_0_s_ifspec;

#ifndef __IFeatureSourceDispatch_INTERFACE_DEFINED__
#define __IFeatureSourceDispatch_INTERFACE_DEFINED__

/* interface IFeatureSourceDispatch */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IFeatureSourceDispatch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("baa39933-9137-4d83-ae81-1af7ef835d29")
    IFeatureSourceDispatch : public ISourceDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IFeatureSourceDispatchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFeatureSourceDispatch * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFeatureSourceDispatch * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFeatureSourceDispatch * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFeatureSourceDispatch * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFeatureSourceDispatch * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFeatureSourceDispatch * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFeatureSourceDispatch * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IFeatureSourceDispatch * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IFeatureSourceDispatch * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IFeatureSourceDispatch * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            IFeatureSourceDispatch * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        END_INTERFACE
    } IFeatureSourceDispatchVtbl;

    interface IFeatureSourceDispatch
    {
        CONST_VTBL struct IFeatureSourceDispatchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFeatureSourceDispatch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFeatureSourceDispatch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFeatureSourceDispatch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFeatureSourceDispatch_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFeatureSourceDispatch_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFeatureSourceDispatch_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFeatureSourceDispatch_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFeatureSourceDispatch_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IFeatureSourceDispatch_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IFeatureSourceDispatch_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IFeatureSourceDispatch_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFeatureSourceDispatch_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0015 */
/* [local] */ 

#define	IFeatureSourceOGRIdsCount	( 1 )

#define	IFeatureSourceOGRBeginId	( ( IFeatureSourceDispatchBeginId + IFeatureSourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0015_v0_0_s_ifspec;

#ifndef __IFeatureSourceOGR_INTERFACE_DEFINED__
#define __IFeatureSourceOGR_INTERFACE_DEFINED__

/* interface IFeatureSourceOGR */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IFeatureSourceOGR;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("21DEF583-A689-4CCF-8781-18C8DD9FF96E")
    IFeatureSourceOGR : public IFeatureSourceDispatch
    {
    public:
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_url( 
            /* [in] */ BSTR strUrl) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_url( 
            /* [retval][out] */ BSTR *pUrl) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFeatureSourceOGRVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFeatureSourceOGR * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFeatureSourceOGR * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFeatureSourceOGR * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFeatureSourceOGR * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFeatureSourceOGR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFeatureSourceOGR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFeatureSourceOGR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IFeatureSourceOGR * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IFeatureSourceOGR * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IFeatureSourceOGR * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            IFeatureSourceOGR * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_url )( 
            IFeatureSourceOGR * This,
            /* [in] */ BSTR strUrl);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_url )( 
            IFeatureSourceOGR * This,
            /* [retval][out] */ BSTR *pUrl);
        
        END_INTERFACE
    } IFeatureSourceOGRVtbl;

    interface IFeatureSourceOGR
    {
        CONST_VTBL struct IFeatureSourceOGRVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFeatureSourceOGR_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFeatureSourceOGR_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFeatureSourceOGR_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFeatureSourceOGR_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFeatureSourceOGR_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFeatureSourceOGR_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFeatureSourceOGR_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFeatureSourceOGR_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IFeatureSourceOGR_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IFeatureSourceOGR_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IFeatureSourceOGR_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 



#define IFeatureSourceOGR_put_url(This,strUrl)	\
    ( (This)->lpVtbl -> put_url(This,strUrl) ) 

#define IFeatureSourceOGR_get_url(This,pUrl)	\
    ( (This)->lpVtbl -> get_url(This,pUrl) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFeatureSourceOGR_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0016 */
/* [local] */ 

#define	IFeatureSourceTFSIdsCount	( 0 )

#define	IFeatureSourceTFSBeginId	( ( IFeatureSourceDispatchBeginId + IFeatureSourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0016_v0_0_s_ifspec;

#ifndef __IFeatureSourceTFS_INTERFACE_DEFINED__
#define __IFeatureSourceTFS_INTERFACE_DEFINED__

/* interface IFeatureSourceTFS */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IFeatureSourceTFS;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D0D80434-6B4A-4885-978B-836C08656EB3")
    IFeatureSourceTFS : public IFeatureSourceDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IFeatureSourceTFSVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFeatureSourceTFS * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFeatureSourceTFS * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFeatureSourceTFS * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFeatureSourceTFS * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFeatureSourceTFS * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFeatureSourceTFS * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFeatureSourceTFS * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IFeatureSourceTFS * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IFeatureSourceTFS * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IFeatureSourceTFS * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            IFeatureSourceTFS * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        END_INTERFACE
    } IFeatureSourceTFSVtbl;

    interface IFeatureSourceTFS
    {
        CONST_VTBL struct IFeatureSourceTFSVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFeatureSourceTFS_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFeatureSourceTFS_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFeatureSourceTFS_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFeatureSourceTFS_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFeatureSourceTFS_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFeatureSourceTFS_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFeatureSourceTFS_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFeatureSourceTFS_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IFeatureSourceTFS_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IFeatureSourceTFS_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IFeatureSourceTFS_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFeatureSourceTFS_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0017 */
/* [local] */ 

#define	IFeatureSourceWFSIdsCount	( 0 )

#define	IFeatureSourceWFSBeginId	( ( IFeatureSourceDispatchBeginId + IFeatureSourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0017_v0_0_s_ifspec;

#ifndef __IFeatureSourceWFS_INTERFACE_DEFINED__
#define __IFeatureSourceWFS_INTERFACE_DEFINED__

/* interface IFeatureSourceWFS */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IFeatureSourceWFS;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B5F72630-282A-42CB-B810-674F56DE4008")
    IFeatureSourceWFS : public IFeatureSourceDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IFeatureSourceWFSVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFeatureSourceWFS * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFeatureSourceWFS * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFeatureSourceWFS * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFeatureSourceWFS * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFeatureSourceWFS * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFeatureSourceWFS * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFeatureSourceWFS * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IFeatureSourceWFS * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IFeatureSourceWFS * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IFeatureSourceWFS * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            IFeatureSourceWFS * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        END_INTERFACE
    } IFeatureSourceWFSVtbl;

    interface IFeatureSourceWFS
    {
        CONST_VTBL struct IFeatureSourceWFSVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFeatureSourceWFS_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFeatureSourceWFS_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFeatureSourceWFS_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFeatureSourceWFS_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFeatureSourceWFS_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFeatureSourceWFS_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFeatureSourceWFS_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFeatureSourceWFS_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IFeatureSourceWFS_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IFeatureSourceWFS_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IFeatureSourceWFS_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFeatureSourceWFS_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0018 */
/* [local] */ 

#define	ITileSourceAGGLiteIdsCount	( 0 )

#define	ITileSourceAGGLiteBeginId	( ( ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0018_v0_0_s_ifspec;

#ifndef __ITileSourceAGGLite_INTERFACE_DEFINED__
#define __ITileSourceAGGLite_INTERFACE_DEFINED__

/* interface ITileSourceAGGLite */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITileSourceAGGLite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("455F2841-D4C5-45E4-96AC-4DEE86930B8E")
    ITileSourceAGGLite : public ITileSourceDispatch
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_featureSource( 
            /* [in] */ IFeatureSourceDispatch *pIFeatureSourceDispatch) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITileSourceAGGLiteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITileSourceAGGLite * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITileSourceAGGLite * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITileSourceAGGLite * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITileSourceAGGLite * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITileSourceAGGLite * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITileSourceAGGLite * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITileSourceAGGLite * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ITileSourceAGGLite * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ITileSourceAGGLite * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ITileSourceAGGLite * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            ITileSourceAGGLite * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_featureSource )( 
            ITileSourceAGGLite * This,
            /* [in] */ IFeatureSourceDispatch *pIFeatureSourceDispatch);
        
        END_INTERFACE
    } ITileSourceAGGLiteVtbl;

    interface ITileSourceAGGLite
    {
        CONST_VTBL struct ITileSourceAGGLiteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITileSourceAGGLite_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITileSourceAGGLite_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITileSourceAGGLite_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITileSourceAGGLite_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITileSourceAGGLite_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITileSourceAGGLite_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITileSourceAGGLite_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITileSourceAGGLite_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ITileSourceAGGLite_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ITileSourceAGGLite_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ITileSourceAGGLite_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 



#define ITileSourceAGGLite_put_featureSource(This,pIFeatureSourceDispatch)	\
    ( (This)->lpVtbl -> put_featureSource(This,pIFeatureSourceDispatch) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITileSourceAGGLite_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0019 */
/* [local] */ 

#define	ITileSourceArcGISIdsCount	( 1 )

#define	ITileSourceArcGISBeginId	( ( ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0019_v0_0_s_ifspec;

#ifndef __ITileSourceArcGIS_INTERFACE_DEFINED__
#define __ITileSourceArcGIS_INTERFACE_DEFINED__

/* interface ITileSourceArcGIS */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITileSourceArcGIS;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4B90237D-18D8-499E-9780-6915B31FCA16")
    ITileSourceArcGIS : public ITileSourceDispatch
    {
    public:
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_url( 
            /* [in] */ BSTR strUrl) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_url( 
            /* [retval][out] */ BSTR *pUrl) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITileSourceArcGISVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITileSourceArcGIS * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITileSourceArcGIS * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITileSourceArcGIS * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITileSourceArcGIS * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITileSourceArcGIS * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITileSourceArcGIS * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITileSourceArcGIS * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ITileSourceArcGIS * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ITileSourceArcGIS * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ITileSourceArcGIS * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            ITileSourceArcGIS * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_url )( 
            ITileSourceArcGIS * This,
            /* [in] */ BSTR strUrl);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_url )( 
            ITileSourceArcGIS * This,
            /* [retval][out] */ BSTR *pUrl);
        
        END_INTERFACE
    } ITileSourceArcGISVtbl;

    interface ITileSourceArcGIS
    {
        CONST_VTBL struct ITileSourceArcGISVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITileSourceArcGIS_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITileSourceArcGIS_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITileSourceArcGIS_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITileSourceArcGIS_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITileSourceArcGIS_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITileSourceArcGIS_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITileSourceArcGIS_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITileSourceArcGIS_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ITileSourceArcGIS_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ITileSourceArcGIS_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ITileSourceArcGIS_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 



#define ITileSourceArcGIS_put_url(This,strUrl)	\
    ( (This)->lpVtbl -> put_url(This,strUrl) ) 

#define ITileSourceArcGIS_get_url(This,pUrl)	\
    ( (This)->lpVtbl -> get_url(This,pUrl) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITileSourceArcGIS_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0020 */
/* [local] */ 

#define	ITileSourceBingIdsCount	( 0 )

#define	ITileSourceBingBeginId	( ( ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0020_v0_0_s_ifspec;

#ifndef __ITileSourceBing_INTERFACE_DEFINED__
#define __ITileSourceBing_INTERFACE_DEFINED__

/* interface ITileSourceBing */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITileSourceBing;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EFAEFF1E-29CB-416B-90E8-0A687903C9B5")
    ITileSourceBing : public ITileSourceDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITileSourceBingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITileSourceBing * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITileSourceBing * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITileSourceBing * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITileSourceBing * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITileSourceBing * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITileSourceBing * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITileSourceBing * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ITileSourceBing * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ITileSourceBing * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ITileSourceBing * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            ITileSourceBing * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        END_INTERFACE
    } ITileSourceBingVtbl;

    interface ITileSourceBing
    {
        CONST_VTBL struct ITileSourceBingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITileSourceBing_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITileSourceBing_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITileSourceBing_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITileSourceBing_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITileSourceBing_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITileSourceBing_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITileSourceBing_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITileSourceBing_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ITileSourceBing_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ITileSourceBing_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ITileSourceBing_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITileSourceBing_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0021 */
/* [local] */ 

#define	ITileSourceColorRampIdsCount	( 0 )

#define	ITileSourceColorRampBeginId	( ( ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0021_v0_0_s_ifspec;

#ifndef __ITileSourceColorRamp_INTERFACE_DEFINED__
#define __ITileSourceColorRamp_INTERFACE_DEFINED__

/* interface ITileSourceColorRamp */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITileSourceColorRamp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2B8ED8F6-DF28-408D-AB3D-82E32F4A7B9F")
    ITileSourceColorRamp : public ITileSourceDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITileSourceColorRampVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITileSourceColorRamp * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITileSourceColorRamp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITileSourceColorRamp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITileSourceColorRamp * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITileSourceColorRamp * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITileSourceColorRamp * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITileSourceColorRamp * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ITileSourceColorRamp * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ITileSourceColorRamp * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ITileSourceColorRamp * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            ITileSourceColorRamp * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        END_INTERFACE
    } ITileSourceColorRampVtbl;

    interface ITileSourceColorRamp
    {
        CONST_VTBL struct ITileSourceColorRampVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITileSourceColorRamp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITileSourceColorRamp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITileSourceColorRamp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITileSourceColorRamp_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITileSourceColorRamp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITileSourceColorRamp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITileSourceColorRamp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITileSourceColorRamp_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ITileSourceColorRamp_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ITileSourceColorRamp_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ITileSourceColorRamp_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITileSourceColorRamp_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0022 */
/* [local] */ 

#define	ITileSourceDebugIdsCount	( 0 )

#define	ITileSourceDebugBeginId	( ( ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0022_v0_0_s_ifspec;

#ifndef __ITileSourceDebug_INTERFACE_DEFINED__
#define __ITileSourceDebug_INTERFACE_DEFINED__

/* interface ITileSourceDebug */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITileSourceDebug;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("830F0E48-B7F1-4A75-BA64-34389AAB153D")
    ITileSourceDebug : public ITileSourceDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITileSourceDebugVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITileSourceDebug * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITileSourceDebug * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITileSourceDebug * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITileSourceDebug * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITileSourceDebug * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITileSourceDebug * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITileSourceDebug * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ITileSourceDebug * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ITileSourceDebug * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ITileSourceDebug * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            ITileSourceDebug * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        END_INTERFACE
    } ITileSourceDebugVtbl;

    interface ITileSourceDebug
    {
        CONST_VTBL struct ITileSourceDebugVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITileSourceDebug_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITileSourceDebug_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITileSourceDebug_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITileSourceDebug_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITileSourceDebug_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITileSourceDebug_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITileSourceDebug_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITileSourceDebug_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ITileSourceDebug_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ITileSourceDebug_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ITileSourceDebug_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITileSourceDebug_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0023 */
/* [local] */ 

#define	ITileSourceGDALIdsCount	( 1 )

#define	ITileSourceGDALBeginId	( ( ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0023_v0_0_s_ifspec;

#ifndef __ITileSourceGDAL_INTERFACE_DEFINED__
#define __ITileSourceGDAL_INTERFACE_DEFINED__

/* interface ITileSourceGDAL */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITileSourceGDAL;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4A2FC843-DEE0-4C8B-97C2-E0E6DE0BBE96")
    ITileSourceGDAL : public ITileSourceDispatch
    {
    public:
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_url( 
            /* [in] */ BSTR strUrl) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_url( 
            /* [retval][out] */ BSTR *pUrl) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITileSourceGDALVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITileSourceGDAL * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITileSourceGDAL * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITileSourceGDAL * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITileSourceGDAL * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITileSourceGDAL * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITileSourceGDAL * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITileSourceGDAL * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ITileSourceGDAL * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ITileSourceGDAL * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ITileSourceGDAL * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            ITileSourceGDAL * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_url )( 
            ITileSourceGDAL * This,
            /* [in] */ BSTR strUrl);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_url )( 
            ITileSourceGDAL * This,
            /* [retval][out] */ BSTR *pUrl);
        
        END_INTERFACE
    } ITileSourceGDALVtbl;

    interface ITileSourceGDAL
    {
        CONST_VTBL struct ITileSourceGDALVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITileSourceGDAL_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITileSourceGDAL_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITileSourceGDAL_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITileSourceGDAL_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITileSourceGDAL_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITileSourceGDAL_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITileSourceGDAL_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITileSourceGDAL_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ITileSourceGDAL_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ITileSourceGDAL_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ITileSourceGDAL_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 



#define ITileSourceGDAL_put_url(This,strUrl)	\
    ( (This)->lpVtbl -> put_url(This,strUrl) ) 

#define ITileSourceGDAL_get_url(This,pUrl)	\
    ( (This)->lpVtbl -> get_url(This,pUrl) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITileSourceGDAL_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0024 */
/* [local] */ 

#define	ITileSourceMBTilesIdsCount	( 3 )

#define	ITileSourceMBTilesBeginId	( ( ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0024_v0_0_s_ifspec;

#ifndef __ITileSourceMBTiles_INTERFACE_DEFINED__
#define __ITileSourceMBTiles_INTERFACE_DEFINED__

/* interface ITileSourceMBTiles */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITileSourceMBTiles;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("38E92073-8FE0-4F75-919E-5463A22DDEFB")
    ITileSourceMBTiles : public ITileSourceDispatch
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_fileName( 
            /* [in] */ BSTR bstrFileName) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_format( 
            /* [in] */ BSTR bstrFormat) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_computeLevels( 
            /* [in] */ VARIANT_BOOL bComputeLevels) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITileSourceMBTilesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITileSourceMBTiles * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITileSourceMBTiles * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITileSourceMBTiles * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITileSourceMBTiles * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITileSourceMBTiles * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITileSourceMBTiles * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITileSourceMBTiles * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ITileSourceMBTiles * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ITileSourceMBTiles * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ITileSourceMBTiles * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            ITileSourceMBTiles * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_fileName )( 
            ITileSourceMBTiles * This,
            /* [in] */ BSTR bstrFileName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_format )( 
            ITileSourceMBTiles * This,
            /* [in] */ BSTR bstrFormat);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_computeLevels )( 
            ITileSourceMBTiles * This,
            /* [in] */ VARIANT_BOOL bComputeLevels);
        
        END_INTERFACE
    } ITileSourceMBTilesVtbl;

    interface ITileSourceMBTiles
    {
        CONST_VTBL struct ITileSourceMBTilesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITileSourceMBTiles_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITileSourceMBTiles_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITileSourceMBTiles_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITileSourceMBTiles_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITileSourceMBTiles_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITileSourceMBTiles_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITileSourceMBTiles_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITileSourceMBTiles_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ITileSourceMBTiles_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ITileSourceMBTiles_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ITileSourceMBTiles_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 



#define ITileSourceMBTiles_put_fileName(This,bstrFileName)	\
    ( (This)->lpVtbl -> put_fileName(This,bstrFileName) ) 

#define ITileSourceMBTiles_put_format(This,bstrFormat)	\
    ( (This)->lpVtbl -> put_format(This,bstrFormat) ) 

#define ITileSourceMBTiles_put_computeLevels(This,bComputeLevels)	\
    ( (This)->lpVtbl -> put_computeLevels(This,bComputeLevels) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITileSourceMBTiles_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0025 */
/* [local] */ 

#define	ITileSourceNoiseIdsCount	( 11 )

#define	ITileSourceNoiseBeginId	( ( ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0025_v0_0_s_ifspec;

#ifndef __ITileSourceNoise_INTERFACE_DEFINED__
#define __ITileSourceNoise_INTERFACE_DEFINED__

/* interface ITileSourceNoise */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITileSourceNoise;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F351EF1C-12AE-429E-BD65-CDFC384F314D")
    ITileSourceNoise : public ITileSourceDispatch
    {
    public:
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_resolution( 
            /* [in] */ DOUBLE dResolution) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_scale( 
            /* [in] */ DOUBLE dScale) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_bias( 
            /* [in] */ DOUBLE dBias) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_octaves( 
            /* [in] */ INT iOctaves) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_frequency( 
            /* [in] */ DOUBLE dFrequency) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_persistence( 
            /* [in] */ DOUBLE dPersistence) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_lacunarity( 
            /* [in] */ DOUBLE dLacunarity) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_seed( 
            /* [in] */ INT iSeed) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_normalMap( 
            /* [in] */ VARIANT_BOOL bNormalMap) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_minElevation( 
            /* [in] */ FLOAT fMinElevation) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_maxElevation( 
            /* [in] */ FLOAT fMaxElevation) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITileSourceNoiseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITileSourceNoise * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITileSourceNoise * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITileSourceNoise * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITileSourceNoise * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITileSourceNoise * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITileSourceNoise * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITileSourceNoise * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ITileSourceNoise * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ITileSourceNoise * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ITileSourceNoise * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            ITileSourceNoise * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_resolution )( 
            ITileSourceNoise * This,
            /* [in] */ DOUBLE dResolution);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_scale )( 
            ITileSourceNoise * This,
            /* [in] */ DOUBLE dScale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_bias )( 
            ITileSourceNoise * This,
            /* [in] */ DOUBLE dBias);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_octaves )( 
            ITileSourceNoise * This,
            /* [in] */ INT iOctaves);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_frequency )( 
            ITileSourceNoise * This,
            /* [in] */ DOUBLE dFrequency);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_persistence )( 
            ITileSourceNoise * This,
            /* [in] */ DOUBLE dPersistence);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_lacunarity )( 
            ITileSourceNoise * This,
            /* [in] */ DOUBLE dLacunarity);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_seed )( 
            ITileSourceNoise * This,
            /* [in] */ INT iSeed);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_normalMap )( 
            ITileSourceNoise * This,
            /* [in] */ VARIANT_BOOL bNormalMap);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_minElevation )( 
            ITileSourceNoise * This,
            /* [in] */ FLOAT fMinElevation);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_maxElevation )( 
            ITileSourceNoise * This,
            /* [in] */ FLOAT fMaxElevation);
        
        END_INTERFACE
    } ITileSourceNoiseVtbl;

    interface ITileSourceNoise
    {
        CONST_VTBL struct ITileSourceNoiseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITileSourceNoise_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITileSourceNoise_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITileSourceNoise_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITileSourceNoise_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITileSourceNoise_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITileSourceNoise_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITileSourceNoise_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITileSourceNoise_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ITileSourceNoise_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ITileSourceNoise_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ITileSourceNoise_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 



#define ITileSourceNoise_put_resolution(This,dResolution)	\
    ( (This)->lpVtbl -> put_resolution(This,dResolution) ) 

#define ITileSourceNoise_put_scale(This,dScale)	\
    ( (This)->lpVtbl -> put_scale(This,dScale) ) 

#define ITileSourceNoise_put_bias(This,dBias)	\
    ( (This)->lpVtbl -> put_bias(This,dBias) ) 

#define ITileSourceNoise_put_octaves(This,iOctaves)	\
    ( (This)->lpVtbl -> put_octaves(This,iOctaves) ) 

#define ITileSourceNoise_put_frequency(This,dFrequency)	\
    ( (This)->lpVtbl -> put_frequency(This,dFrequency) ) 

#define ITileSourceNoise_put_persistence(This,dPersistence)	\
    ( (This)->lpVtbl -> put_persistence(This,dPersistence) ) 

#define ITileSourceNoise_put_lacunarity(This,dLacunarity)	\
    ( (This)->lpVtbl -> put_lacunarity(This,dLacunarity) ) 

#define ITileSourceNoise_put_seed(This,iSeed)	\
    ( (This)->lpVtbl -> put_seed(This,iSeed) ) 

#define ITileSourceNoise_put_normalMap(This,bNormalMap)	\
    ( (This)->lpVtbl -> put_normalMap(This,bNormalMap) ) 

#define ITileSourceNoise_put_minElevation(This,fMinElevation)	\
    ( (This)->lpVtbl -> put_minElevation(This,fMinElevation) ) 

#define ITileSourceNoise_put_maxElevation(This,fMaxElevation)	\
    ( (This)->lpVtbl -> put_maxElevation(This,fMaxElevation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITileSourceNoise_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0026 */
/* [local] */ 

#define	ITileSourceOSGIdsCount	( 0 )

#define	ITileSourceOSGBeginId	( ( ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0026_v0_0_s_ifspec;

#ifndef __ITileSourceOSG_INTERFACE_DEFINED__
#define __ITileSourceOSG_INTERFACE_DEFINED__

/* interface ITileSourceOSG */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITileSourceOSG;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("267BD9F7-73DC-41C8-929A-147159535592")
    ITileSourceOSG : public ITileSourceDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITileSourceOSGVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITileSourceOSG * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITileSourceOSG * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITileSourceOSG * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITileSourceOSG * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITileSourceOSG * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITileSourceOSG * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITileSourceOSG * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ITileSourceOSG * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ITileSourceOSG * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ITileSourceOSG * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            ITileSourceOSG * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        END_INTERFACE
    } ITileSourceOSGVtbl;

    interface ITileSourceOSG
    {
        CONST_VTBL struct ITileSourceOSGVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITileSourceOSG_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITileSourceOSG_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITileSourceOSG_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITileSourceOSG_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITileSourceOSG_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITileSourceOSG_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITileSourceOSG_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITileSourceOSG_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ITileSourceOSG_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ITileSourceOSG_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ITileSourceOSG_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITileSourceOSG_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0027 */
/* [local] */ 

#define	ITileSourceTileCacheIdsCount	( 0 )

#define	ITileSourceTileCacheBeginId	( ( ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0027_v0_0_s_ifspec;

#ifndef __ITileSourceTileCache_INTERFACE_DEFINED__
#define __ITileSourceTileCache_INTERFACE_DEFINED__

/* interface ITileSourceTileCache */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITileSourceTileCache;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83428B22-3F62-46B0-8BE9-7BD89AE3E8F6")
    ITileSourceTileCache : public ITileSourceDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITileSourceTileCacheVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITileSourceTileCache * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITileSourceTileCache * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITileSourceTileCache * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITileSourceTileCache * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITileSourceTileCache * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITileSourceTileCache * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITileSourceTileCache * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ITileSourceTileCache * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ITileSourceTileCache * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ITileSourceTileCache * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            ITileSourceTileCache * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        END_INTERFACE
    } ITileSourceTileCacheVtbl;

    interface ITileSourceTileCache
    {
        CONST_VTBL struct ITileSourceTileCacheVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITileSourceTileCache_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITileSourceTileCache_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITileSourceTileCache_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITileSourceTileCache_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITileSourceTileCache_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITileSourceTileCache_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITileSourceTileCache_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITileSourceTileCache_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ITileSourceTileCache_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ITileSourceTileCache_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ITileSourceTileCache_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITileSourceTileCache_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0028 */
/* [local] */ 

#define	ITileSourceTileServiceIdsCount	( 0 )

#define	ITileSourceTileServiceBeginId	( ( ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0028_v0_0_s_ifspec;

#ifndef __ITileSourceTileService_INTERFACE_DEFINED__
#define __ITileSourceTileService_INTERFACE_DEFINED__

/* interface ITileSourceTileService */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITileSourceTileService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FC61EF10-9CD5-4815-83AA-BF9ABAE92159")
    ITileSourceTileService : public ITileSourceDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITileSourceTileServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITileSourceTileService * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITileSourceTileService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITileSourceTileService * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITileSourceTileService * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITileSourceTileService * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITileSourceTileService * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITileSourceTileService * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ITileSourceTileService * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ITileSourceTileService * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ITileSourceTileService * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            ITileSourceTileService * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        END_INTERFACE
    } ITileSourceTileServiceVtbl;

    interface ITileSourceTileService
    {
        CONST_VTBL struct ITileSourceTileServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITileSourceTileService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITileSourceTileService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITileSourceTileService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITileSourceTileService_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITileSourceTileService_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITileSourceTileService_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITileSourceTileService_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITileSourceTileService_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ITileSourceTileService_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ITileSourceTileService_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ITileSourceTileService_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITileSourceTileService_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0029 */
/* [local] */ 

#define	ITileSourceTMSIdsCount	( 1 )

#define	ITileSourceTMSBeginId	( ( ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0029_v0_0_s_ifspec;

#ifndef __ITileSourceTMS_INTERFACE_DEFINED__
#define __ITileSourceTMS_INTERFACE_DEFINED__

/* interface ITileSourceTMS */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITileSourceTMS;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5F892AF2-73A1-48FE-B861-B64D5FD8F5DC")
    ITileSourceTMS : public ITileSourceDispatch
    {
    public:
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_url( 
            /* [in] */ BSTR strUrl) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_url( 
            /* [retval][out] */ BSTR *pUrl) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITileSourceTMSVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITileSourceTMS * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITileSourceTMS * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITileSourceTMS * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITileSourceTMS * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITileSourceTMS * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITileSourceTMS * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITileSourceTMS * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ITileSourceTMS * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ITileSourceTMS * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ITileSourceTMS * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            ITileSourceTMS * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_url )( 
            ITileSourceTMS * This,
            /* [in] */ BSTR strUrl);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_url )( 
            ITileSourceTMS * This,
            /* [retval][out] */ BSTR *pUrl);
        
        END_INTERFACE
    } ITileSourceTMSVtbl;

    interface ITileSourceTMS
    {
        CONST_VTBL struct ITileSourceTMSVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITileSourceTMS_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITileSourceTMS_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITileSourceTMS_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITileSourceTMS_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITileSourceTMS_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITileSourceTMS_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITileSourceTMS_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITileSourceTMS_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ITileSourceTMS_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ITileSourceTMS_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ITileSourceTMS_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 



#define ITileSourceTMS_put_url(This,strUrl)	\
    ( (This)->lpVtbl -> put_url(This,strUrl) ) 

#define ITileSourceTMS_get_url(This,pUrl)	\
    ( (This)->lpVtbl -> get_url(This,pUrl) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITileSourceTMS_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0030 */
/* [local] */ 

#define	ITileSourceVPBIdsCount	( 0 )

#define	ITileSourceVPBBeginId	( ( ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0030_v0_0_s_ifspec;

#ifndef __ITileSourceVPB_INTERFACE_DEFINED__
#define __ITileSourceVPB_INTERFACE_DEFINED__

/* interface ITileSourceVPB */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITileSourceVPB;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1699395E-E6CD-414A-B41F-8D90A0DD6865")
    ITileSourceVPB : public ITileSourceDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITileSourceVPBVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITileSourceVPB * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITileSourceVPB * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITileSourceVPB * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITileSourceVPB * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITileSourceVPB * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITileSourceVPB * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITileSourceVPB * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ITileSourceVPB * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ITileSourceVPB * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ITileSourceVPB * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            ITileSourceVPB * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        END_INTERFACE
    } ITileSourceVPBVtbl;

    interface ITileSourceVPB
    {
        CONST_VTBL struct ITileSourceVPBVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITileSourceVPB_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITileSourceVPB_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITileSourceVPB_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITileSourceVPB_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITileSourceVPB_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITileSourceVPB_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITileSourceVPB_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITileSourceVPB_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ITileSourceVPB_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ITileSourceVPB_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ITileSourceVPB_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITileSourceVPB_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0031 */
/* [local] */ 

#define	ITileSourceWCSIdsCount	( 0 )

#define	ITileSourceWCSBeginId	( ( ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0031_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0031_v0_0_s_ifspec;

#ifndef __ITileSourceWCS_INTERFACE_DEFINED__
#define __ITileSourceWCS_INTERFACE_DEFINED__

/* interface ITileSourceWCS */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITileSourceWCS;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("095F7009-D5A0-42A9-9D59-63792DE740C5")
    ITileSourceWCS : public ITileSourceDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITileSourceWCSVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITileSourceWCS * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITileSourceWCS * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITileSourceWCS * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITileSourceWCS * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITileSourceWCS * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITileSourceWCS * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITileSourceWCS * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ITileSourceWCS * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ITileSourceWCS * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ITileSourceWCS * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            ITileSourceWCS * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        END_INTERFACE
    } ITileSourceWCSVtbl;

    interface ITileSourceWCS
    {
        CONST_VTBL struct ITileSourceWCSVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITileSourceWCS_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITileSourceWCS_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITileSourceWCS_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITileSourceWCS_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITileSourceWCS_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITileSourceWCS_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITileSourceWCS_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITileSourceWCS_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ITileSourceWCS_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ITileSourceWCS_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ITileSourceWCS_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITileSourceWCS_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0032 */
/* [local] */ 

#define	ITileSourceWMSIdsCount	( 0 )

#define	ITileSourceWMSBeginId	( ( ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0032_v0_0_s_ifspec;

#ifndef __ITileSourceWMS_INTERFACE_DEFINED__
#define __ITileSourceWMS_INTERFACE_DEFINED__

/* interface ITileSourceWMS */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITileSourceWMS;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("261C004D-8496-4362-AD79-4C63317CB630")
    ITileSourceWMS : public ITileSourceDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITileSourceWMSVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITileSourceWMS * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITileSourceWMS * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITileSourceWMS * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITileSourceWMS * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITileSourceWMS * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITileSourceWMS * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITileSourceWMS * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ITileSourceWMS * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ITileSourceWMS * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ITileSourceWMS * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            ITileSourceWMS * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        END_INTERFACE
    } ITileSourceWMSVtbl;

    interface ITileSourceWMS
    {
        CONST_VTBL struct ITileSourceWMSVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITileSourceWMS_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITileSourceWMS_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITileSourceWMS_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITileSourceWMS_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITileSourceWMS_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITileSourceWMS_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITileSourceWMS_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITileSourceWMS_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ITileSourceWMS_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ITileSourceWMS_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ITileSourceWMS_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITileSourceWMS_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0033 */
/* [local] */ 

#define	ITileSourceXYZIdsCount	( 0 )

#define	ITileSourceXYZBeginId	( ( ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0033_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0033_v0_0_s_ifspec;

#ifndef __ITileSourceXYZ_INTERFACE_DEFINED__
#define __ITileSourceXYZ_INTERFACE_DEFINED__

/* interface ITileSourceXYZ */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITileSourceXYZ;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A5023EAB-8CDF-4781-9B36-F846EF8B7CEC")
    ITileSourceXYZ : public ITileSourceDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITileSourceXYZVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITileSourceXYZ * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITileSourceXYZ * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITileSourceXYZ * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITileSourceXYZ * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITileSourceXYZ * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITileSourceXYZ * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITileSourceXYZ * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ITileSourceXYZ * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ITileSourceXYZ * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ITileSourceXYZ * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            ITileSourceXYZ * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        END_INTERFACE
    } ITileSourceXYZVtbl;

    interface ITileSourceXYZ
    {
        CONST_VTBL struct ITileSourceXYZVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITileSourceXYZ_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITileSourceXYZ_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITileSourceXYZ_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITileSourceXYZ_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITileSourceXYZ_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITileSourceXYZ_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITileSourceXYZ_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITileSourceXYZ_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ITileSourceXYZ_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ITileSourceXYZ_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ITileSourceXYZ_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITileSourceXYZ_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0034 */
/* [local] */ 

#define	ITileSourceYahooIdsCount	( 0 )

#define	ITileSourceYahooBeginId	( ( ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0034_v0_0_s_ifspec;

#ifndef __ITileSourceYahoo_INTERFACE_DEFINED__
#define __ITileSourceYahoo_INTERFACE_DEFINED__

/* interface ITileSourceYahoo */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITileSourceYahoo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("10DBE691-1006-4C68-976D-6C0364FAB1AB")
    ITileSourceYahoo : public ITileSourceDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITileSourceYahooVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITileSourceYahoo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITileSourceYahoo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITileSourceYahoo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITileSourceYahoo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITileSourceYahoo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITileSourceYahoo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITileSourceYahoo * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ITileSourceYahoo * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ITileSourceYahoo * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ITileSourceYahoo * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            ITileSourceYahoo * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        END_INTERFACE
    } ITileSourceYahooVtbl;

    interface ITileSourceYahoo
    {
        CONST_VTBL struct ITileSourceYahooVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITileSourceYahoo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITileSourceYahoo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITileSourceYahoo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITileSourceYahoo_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITileSourceYahoo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITileSourceYahoo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITileSourceYahoo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITileSourceYahoo_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ITileSourceYahoo_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ITileSourceYahoo_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ITileSourceYahoo_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITileSourceYahoo_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0035 */
/* [local] */ 

#define	IVectorSourceGeomIdsCount	( 1 )

#define	IVectorSourceGeomBeginId	( ( IVectorSourceDispatchBeginId + IVectorSourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0035_v0_0_s_ifspec;

#ifndef __IVectorSourceGeom_INTERFACE_DEFINED__
#define __IVectorSourceGeom_INTERFACE_DEFINED__

/* interface IVectorSourceGeom */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IVectorSourceGeom;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7848C86A-2A7B-48C1-A5D1-BF0CDD37858E")
    IVectorSourceGeom : public IVectorSourceDispatch
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_featureSource( 
            /* [in] */ IFeatureSourceDispatch *pIFeatureSourceDispatch) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVectorSourceGeomVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVectorSourceGeom * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVectorSourceGeom * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVectorSourceGeom * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVectorSourceGeom * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVectorSourceGeom * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVectorSourceGeom * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVectorSourceGeom * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IVectorSourceGeom * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IVectorSourceGeom * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IVectorSourceGeom * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            IVectorSourceGeom * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_featureSource )( 
            IVectorSourceGeom * This,
            /* [in] */ IFeatureSourceDispatch *pIFeatureSourceDispatch);
        
        END_INTERFACE
    } IVectorSourceGeomVtbl;

    interface IVectorSourceGeom
    {
        CONST_VTBL struct IVectorSourceGeomVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVectorSourceGeom_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVectorSourceGeom_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVectorSourceGeom_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVectorSourceGeom_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVectorSourceGeom_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVectorSourceGeom_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVectorSourceGeom_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVectorSourceGeom_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IVectorSourceGeom_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IVectorSourceGeom_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IVectorSourceGeom_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 



#define IVectorSourceGeom_put_featureSource(This,pIFeatureSourceDispatch)	\
    ( (This)->lpVtbl -> put_featureSource(This,pIFeatureSourceDispatch) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVectorSourceGeom_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0036 */
/* [local] */ 

#define	IVectorSourceSimpleIdsCount	( 0 )

#define	IVectorSourceSimpleBeginId	( ( IVectorSourceDispatchBeginId + IVectorSourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0036_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0036_v0_0_s_ifspec;

#ifndef __IVectorSourceSimple_INTERFACE_DEFINED__
#define __IVectorSourceSimple_INTERFACE_DEFINED__

/* interface IVectorSourceSimple */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IVectorSourceSimple;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4A5FC24C-B1A1-4C51-825A-4F5E1243D0E2")
    IVectorSourceSimple : public IVectorSourceDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IVectorSourceSimpleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVectorSourceSimple * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVectorSourceSimple * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVectorSourceSimple * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVectorSourceSimple * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVectorSourceSimple * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVectorSourceSimple * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVectorSourceSimple * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IVectorSourceSimple * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IVectorSourceSimple * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IVectorSourceSimple * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            IVectorSourceSimple * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        END_INTERFACE
    } IVectorSourceSimpleVtbl;

    interface IVectorSourceSimple
    {
        CONST_VTBL struct IVectorSourceSimpleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVectorSourceSimple_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVectorSourceSimple_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVectorSourceSimple_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVectorSourceSimple_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVectorSourceSimple_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVectorSourceSimple_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVectorSourceSimple_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVectorSourceSimple_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IVectorSourceSimple_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IVectorSourceSimple_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IVectorSourceSimple_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVectorSourceSimple_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0037 */
/* [local] */ 

#define	IVectorSourceStencilIdsCount	( 0 )

#define	IVectorSourceStencilBeginId	( ( IVectorSourceDispatchBeginId + IVectorSourceDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0037_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0037_v0_0_s_ifspec;

#ifndef __IVectorSourceStencil_INTERFACE_DEFINED__
#define __IVectorSourceStencil_INTERFACE_DEFINED__

/* interface IVectorSourceStencil */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IVectorSourceStencil;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4D744CA0-8D2F-4E36-81E4-525D33C56E19")
    IVectorSourceStencil : public IVectorSourceDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IVectorSourceStencilVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVectorSourceStencil * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVectorSourceStencil * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVectorSourceStencil * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVectorSourceStencil * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVectorSourceStencil * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVectorSourceStencil * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVectorSourceStencil * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IVectorSourceStencil * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IVectorSourceStencil * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IVectorSourceStencil * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            IVectorSourceStencil * This,
            /* [retval][out] */ SourceClassType *pClassType);
        
        END_INTERFACE
    } IVectorSourceStencilVtbl;

    interface IVectorSourceStencil
    {
        CONST_VTBL struct IVectorSourceStencilVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVectorSourceStencil_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVectorSourceStencil_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVectorSourceStencil_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVectorSourceStencil_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVectorSourceStencil_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVectorSourceStencil_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVectorSourceStencil_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVectorSourceStencil_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IVectorSourceStencil_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IVectorSourceStencil_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IVectorSourceStencil_get_classType(This,pClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pClassType) ) 



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVectorSourceStencil_INTERFACE_DEFINED__ */


#ifndef __IStyle_INTERFACE_DEFINED__
#define __IStyle_INTERFACE_DEFINED__

/* interface IStyle */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStyle;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("07414829-2F57-423A-996C-06F05D4C77F0")
    IStyle : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IStyleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStyle * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStyle * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStyle * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStyle * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStyle * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStyle * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStyle * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IStyleVtbl;

    interface IStyle
    {
        CONST_VTBL struct IStyleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStyle_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStyle_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStyle_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStyle_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStyle_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStyle_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStyle_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStyle_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0039 */
/* [local] */ 

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("69297707-bc99-43c6-8e4a-68f10dd4de68") 
enum EarthObjectClassType
    {	EARTH_GROUP	= 2,
	IMAGE_SURFACE_LAYER	= ( EARTH_GROUP + 1 ) ,
	VECTOR_SURFACE_LAYER	= ( IMAGE_SURFACE_LAYER + 1 ) ,
	ELEVATION_SURFACE_LAYER	= ( VECTOR_SURFACE_LAYER + 1 ) ,
	TERMASK_SURFACE_LAYER	= ( ELEVATION_SURFACE_LAYER + 1 ) ,
	EXTERNAL_GRATICULE	= ( TERMASK_SURFACE_LAYER + 1 ) ,
	EXTERNAL_SKY	= ( EXTERNAL_GRATICULE + 1 ) ,
	EXTERNAL_VIEWPOINT	= ( EXTERNAL_SKY + 1 ) ,
	ANNOTATION_TEXT_LABEL	= ( EXTERNAL_VIEWPOINT + 1 ) ,
	ANNOTATION_MODEL	= ( ANNOTATION_TEXT_LABEL + 1 ) ,
	ANNOTATION_IMAGE_OVERLAY	= ( ANNOTATION_MODEL + 1 ) ,
	ANNOTATION_FEATURE	= ( ANNOTATION_IMAGE_OVERLAY + 1 ) ,
	ANNOTATION_PLACE	= ( ANNOTATION_FEATURE + 1 ) ,
	ANNOTATION_CIRCLE	= ( ANNOTATION_PLACE + 1 ) ,
	ANNOTATION_RECTANGLE	= ( ANNOTATION_CIRCLE + 1 ) ,
	ANNOTATION_ELLIPSE	= ( ANNOTATION_RECTANGLE + 1 ) ,
	LABEL_SET_LAYER	= ( ANNOTATION_ELLIPSE + 1 ) ,
	MODEL_SET_LAYER	= ( LABEL_SET_LAYER + 1 ) ,
	OVERLAY_IMAGE_SET_LAYER	= ( MODEL_SET_LAYER + 1 ) ,
	SHAPE_SET_LAYER	= ( OVERLAY_IMAGE_SET_LAYER + 1 ) ,
	PLACE_SET_LAYER	= ( SHAPE_SET_LAYER + 1 ) ,
	VIEWPOINT_SET_LAYER	= ( PLACE_SET_LAYER + 1 ) 
    } 	EarthObjectClassType;

#define	IEarthObjectIdsCount	( 3 )

#define	IEarthObjectBeginId	( ( IEarthDispatchBeginId + IEarthDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0039_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0039_v0_0_s_ifspec;

#ifndef __IEarthObject_INTERFACE_DEFINED__
#define __IEarthObject_INTERFACE_DEFINED__

/* interface IEarthObject */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IEarthObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("263c6640-608e-4aa6-8b62-507914f27954")
    IEarthObject : public IEarthDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_classType( 
            /* [retval][out] */ EarthObjectClassType *pEarthObjectClassType) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_visible( 
            /* [in] */ VARIANT_BOOL ifVisible) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_visible( 
            /* [retval][out] */ VARIANT_BOOL *pIfVisible) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_enabled( 
            /* [retval][out] */ VARIANT_BOOL *pIfEnabled) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEarthObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEarthObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEarthObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEarthObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEarthObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEarthObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEarthObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEarthObject * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IEarthObject * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IEarthObject * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IEarthObject * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            IEarthObject * This,
            /* [retval][out] */ EarthObjectClassType *pEarthObjectClassType);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_visible )( 
            IEarthObject * This,
            /* [in] */ VARIANT_BOOL ifVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_visible )( 
            IEarthObject * This,
            /* [retval][out] */ VARIANT_BOOL *pIfVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_enabled )( 
            IEarthObject * This,
            /* [retval][out] */ VARIANT_BOOL *pIfEnabled);
        
        END_INTERFACE
    } IEarthObjectVtbl;

    interface IEarthObject
    {
        CONST_VTBL struct IEarthObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEarthObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEarthObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEarthObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEarthObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEarthObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEarthObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEarthObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEarthObject_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IEarthObject_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IEarthObject_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IEarthObject_get_classType(This,pEarthObjectClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pEarthObjectClassType) ) 

#define IEarthObject_put_visible(This,ifVisible)	\
    ( (This)->lpVtbl -> put_visible(This,ifVisible) ) 

#define IEarthObject_get_visible(This,pIfVisible)	\
    ( (This)->lpVtbl -> get_visible(This,pIfVisible) ) 

#define IEarthObject_get_enabled(This,pIfEnabled)	\
    ( (This)->lpVtbl -> get_enabled(This,pIfEnabled) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEarthObject_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0040 */
/* [local] */ 

#define	IEarthGroupIdsCount	( 9 )

#define	IEarthGroupBeginId	( ( IEarthObjectBeginId + IEarthObjectIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0040_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0040_v0_0_s_ifspec;

#ifndef __IEarthGroup_INTERFACE_DEFINED__
#define __IEarthGroup_INTERFACE_DEFINED__

/* interface IEarthGroup */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IEarthGroup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5AFC2DA3-1F48-4DDC-98D8-05E476354079")
    IEarthGroup : public IEarthObject
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE addChild( 
            /* [in] */ IEarthObject *pIEarthObject) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE removeChild( 
            /* [in] */ IEarthObject *pIEarthObject) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE removeChildByPos( 
            /* [in] */ UINT uiPos) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getChild( 
            /* [in] */ UINT uiPos,
            /* [retval][out] */ IEarthObject **ppIEarthObject) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getPosOfChild( 
            /* [in] */ IEarthObject *pIEarthObject,
            /* [retval][out] */ UINT *pPos) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE moveChild( 
            /* [in] */ IEarthObject *pIEarthObject,
            /* [in] */ UINT uiNewPos) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE moveChildFromCurPos( 
            /* [in] */ UINT uiCurPos,
            /* [in] */ UINT uiNewPos) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getChildrenCount( 
            /* [retval][out] */ UINT *pCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE removeChildren( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE insertChild( 
            /* [in] */ IEarthObject *pIEarthObject,
            /* [in] */ UINT uiInsertPos) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEarthGroupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEarthGroup * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEarthGroup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEarthGroup * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEarthGroup * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEarthGroup * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEarthGroup * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEarthGroup * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IEarthGroup * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IEarthGroup * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IEarthGroup * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            IEarthGroup * This,
            /* [retval][out] */ EarthObjectClassType *pEarthObjectClassType);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_visible )( 
            IEarthGroup * This,
            /* [in] */ VARIANT_BOOL ifVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_visible )( 
            IEarthGroup * This,
            /* [retval][out] */ VARIANT_BOOL *pIfVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_enabled )( 
            IEarthGroup * This,
            /* [retval][out] */ VARIANT_BOOL *pIfEnabled);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *addChild )( 
            IEarthGroup * This,
            /* [in] */ IEarthObject *pIEarthObject);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *removeChild )( 
            IEarthGroup * This,
            /* [in] */ IEarthObject *pIEarthObject);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *removeChildByPos )( 
            IEarthGroup * This,
            /* [in] */ UINT uiPos);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getChild )( 
            IEarthGroup * This,
            /* [in] */ UINT uiPos,
            /* [retval][out] */ IEarthObject **ppIEarthObject);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getPosOfChild )( 
            IEarthGroup * This,
            /* [in] */ IEarthObject *pIEarthObject,
            /* [retval][out] */ UINT *pPos);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *moveChild )( 
            IEarthGroup * This,
            /* [in] */ IEarthObject *pIEarthObject,
            /* [in] */ UINT uiNewPos);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *moveChildFromCurPos )( 
            IEarthGroup * This,
            /* [in] */ UINT uiCurPos,
            /* [in] */ UINT uiNewPos);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getChildrenCount )( 
            IEarthGroup * This,
            /* [retval][out] */ UINT *pCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *removeChildren )( 
            IEarthGroup * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *insertChild )( 
            IEarthGroup * This,
            /* [in] */ IEarthObject *pIEarthObject,
            /* [in] */ UINT uiInsertPos);
        
        END_INTERFACE
    } IEarthGroupVtbl;

    interface IEarthGroup
    {
        CONST_VTBL struct IEarthGroupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEarthGroup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEarthGroup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEarthGroup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEarthGroup_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEarthGroup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEarthGroup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEarthGroup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEarthGroup_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IEarthGroup_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IEarthGroup_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IEarthGroup_get_classType(This,pEarthObjectClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pEarthObjectClassType) ) 

#define IEarthGroup_put_visible(This,ifVisible)	\
    ( (This)->lpVtbl -> put_visible(This,ifVisible) ) 

#define IEarthGroup_get_visible(This,pIfVisible)	\
    ( (This)->lpVtbl -> get_visible(This,pIfVisible) ) 

#define IEarthGroup_get_enabled(This,pIfEnabled)	\
    ( (This)->lpVtbl -> get_enabled(This,pIfEnabled) ) 


#define IEarthGroup_addChild(This,pIEarthObject)	\
    ( (This)->lpVtbl -> addChild(This,pIEarthObject) ) 

#define IEarthGroup_removeChild(This,pIEarthObject)	\
    ( (This)->lpVtbl -> removeChild(This,pIEarthObject) ) 

#define IEarthGroup_removeChildByPos(This,uiPos)	\
    ( (This)->lpVtbl -> removeChildByPos(This,uiPos) ) 

#define IEarthGroup_getChild(This,uiPos,ppIEarthObject)	\
    ( (This)->lpVtbl -> getChild(This,uiPos,ppIEarthObject) ) 

#define IEarthGroup_getPosOfChild(This,pIEarthObject,pPos)	\
    ( (This)->lpVtbl -> getPosOfChild(This,pIEarthObject,pPos) ) 

#define IEarthGroup_moveChild(This,pIEarthObject,uiNewPos)	\
    ( (This)->lpVtbl -> moveChild(This,pIEarthObject,uiNewPos) ) 

#define IEarthGroup_moveChildFromCurPos(This,uiCurPos,uiNewPos)	\
    ( (This)->lpVtbl -> moveChildFromCurPos(This,uiCurPos,uiNewPos) ) 

#define IEarthGroup_getChildrenCount(This,pCount)	\
    ( (This)->lpVtbl -> getChildrenCount(This,pCount) ) 

#define IEarthGroup_removeChildren(This)	\
    ( (This)->lpVtbl -> removeChildren(This) ) 

#define IEarthGroup_insertChild(This,pIEarthObject,uiInsertPos)	\
    ( (This)->lpVtbl -> insertChild(This,pIEarthObject,uiInsertPos) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEarthGroup_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0041 */
/* [local] */ 

#define	IEarthViewerIdsCount	( 0 )

#define	IEarthViewerBeginId	( ( IEarthDispatchBeginId + IEarthDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0041_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0041_v0_0_s_ifspec;

#ifndef __IEarthViewer_INTERFACE_DEFINED__
#define __IEarthViewer_INTERFACE_DEFINED__

/* interface IEarthViewer */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IEarthViewer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6AB4E72D-E25A-4412-9CD5-0EB696D1D243")
    IEarthViewer : public IEarthDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IEarthViewerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEarthViewer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEarthViewer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEarthViewer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEarthViewer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEarthViewer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEarthViewer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEarthViewer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IEarthViewer * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IEarthViewer * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IEarthViewer * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        END_INTERFACE
    } IEarthViewerVtbl;

    interface IEarthViewer
    {
        CONST_VTBL struct IEarthViewerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEarthViewer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEarthViewer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEarthViewer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEarthViewer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEarthViewer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEarthViewer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEarthViewer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEarthViewer_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IEarthViewer_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IEarthViewer_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEarthViewer_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0042 */
/* [local] */ 

#define	IEarthMapIdsCount	( 2 )

#define	IEarthMapBeginId	( ( IEarthObjectIdsCount + IEarthObjectBeginId )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0042_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0042_v0_0_s_ifspec;

#ifndef __IEarthMap_INTERFACE_DEFINED__
#define __IEarthMap_INTERFACE_DEFINED__

/* interface IEarthMap */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IEarthMap;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E18D8D71-85F8-49F2-AEF0-71ED0EDF2BF4")
    IEarthMap : public IEarthDispatch
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_maxThreadsNum( 
            /* [in] */ UINT uiNum) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_maxThreadsNum( 
            /* [retval][out] */ UINT *pUiNum) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getSRS( 
            /* [retval][out] */ ISpatialReference **ppISRS) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEarthMapVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEarthMap * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEarthMap * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEarthMap * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEarthMap * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEarthMap * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEarthMap * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEarthMap * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IEarthMap * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IEarthMap * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IEarthMap * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_maxThreadsNum )( 
            IEarthMap * This,
            /* [in] */ UINT uiNum);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_maxThreadsNum )( 
            IEarthMap * This,
            /* [retval][out] */ UINT *pUiNum);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getSRS )( 
            IEarthMap * This,
            /* [retval][out] */ ISpatialReference **ppISRS);
        
        END_INTERFACE
    } IEarthMapVtbl;

    interface IEarthMap
    {
        CONST_VTBL struct IEarthMapVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEarthMap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEarthMap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEarthMap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEarthMap_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEarthMap_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEarthMap_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEarthMap_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEarthMap_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IEarthMap_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IEarthMap_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IEarthMap_put_maxThreadsNum(This,uiNum)	\
    ( (This)->lpVtbl -> put_maxThreadsNum(This,uiNum) ) 

#define IEarthMap_get_maxThreadsNum(This,pUiNum)	\
    ( (This)->lpVtbl -> get_maxThreadsNum(This,pUiNum) ) 

#define IEarthMap_getSRS(This,ppISRS)	\
    ( (This)->lpVtbl -> getSRS(This,ppISRS) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEarthMap_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0043 */
/* [local] */ 

#define	ISkyIdsCount	( 3 )

#define	ISkyBeginId	( ( IEarthObjectBeginId + IEarthObjectIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0043_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0043_v0_0_s_ifspec;

#ifndef __ISky_INTERFACE_DEFINED__
#define __ISky_INTERFACE_DEFINED__

/* interface ISky */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISky;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BA5628D4-3E46-44C8-940E-3ADC727539A0")
    ISky : public IEarthObject
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_enableLighting( 
            /* [retval][out] */ VARIANT_BOOL *pEnableLighting) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_enableLighting( 
            /* [in] */ VARIANT_BOOL ifEnable) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ambient( 
            /* [retval][out] */ FLOAT *pAmbient) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ambient( 
            /* [in] */ FLOAT fAmbient) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_hours( 
            /* [in] */ FLOAT fHours) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_hours( 
            /* [retval][out] */ FLOAT *pHours) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISky * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISky * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISky * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISky * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISky * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISky * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISky * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ISky * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ISky * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ISky * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            ISky * This,
            /* [retval][out] */ EarthObjectClassType *pEarthObjectClassType);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_visible )( 
            ISky * This,
            /* [in] */ VARIANT_BOOL ifVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_visible )( 
            ISky * This,
            /* [retval][out] */ VARIANT_BOOL *pIfVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_enabled )( 
            ISky * This,
            /* [retval][out] */ VARIANT_BOOL *pIfEnabled);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_enableLighting )( 
            ISky * This,
            /* [retval][out] */ VARIANT_BOOL *pEnableLighting);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_enableLighting )( 
            ISky * This,
            /* [in] */ VARIANT_BOOL ifEnable);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ambient )( 
            ISky * This,
            /* [retval][out] */ FLOAT *pAmbient);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ambient )( 
            ISky * This,
            /* [in] */ FLOAT fAmbient);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_hours )( 
            ISky * This,
            /* [in] */ FLOAT fHours);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_hours )( 
            ISky * This,
            /* [retval][out] */ FLOAT *pHours);
        
        END_INTERFACE
    } ISkyVtbl;

    interface ISky
    {
        CONST_VTBL struct ISkyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISky_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISky_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISky_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISky_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISky_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISky_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISky_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISky_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ISky_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ISky_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ISky_get_classType(This,pEarthObjectClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pEarthObjectClassType) ) 

#define ISky_put_visible(This,ifVisible)	\
    ( (This)->lpVtbl -> put_visible(This,ifVisible) ) 

#define ISky_get_visible(This,pIfVisible)	\
    ( (This)->lpVtbl -> get_visible(This,pIfVisible) ) 

#define ISky_get_enabled(This,pIfEnabled)	\
    ( (This)->lpVtbl -> get_enabled(This,pIfEnabled) ) 


#define ISky_get_enableLighting(This,pEnableLighting)	\
    ( (This)->lpVtbl -> get_enableLighting(This,pEnableLighting) ) 

#define ISky_put_enableLighting(This,ifEnable)	\
    ( (This)->lpVtbl -> put_enableLighting(This,ifEnable) ) 

#define ISky_get_ambient(This,pAmbient)	\
    ( (This)->lpVtbl -> get_ambient(This,pAmbient) ) 

#define ISky_put_ambient(This,fAmbient)	\
    ( (This)->lpVtbl -> put_ambient(This,fAmbient) ) 

#define ISky_put_hours(This,fHours)	\
    ( (This)->lpVtbl -> put_hours(This,fHours) ) 

#define ISky_get_hours(This,pHours)	\
    ( (This)->lpVtbl -> get_hours(This,pHours) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISky_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0044 */
/* [local] */ 

#define	IViewpointIdsCount	( 6 )

#define	IViewpointBeginId	( ( IEarthObjectBeginId + IEarthObjectIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0044_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0044_v0_0_s_ifspec;

#ifndef __IViewpoint_INTERFACE_DEFINED__
#define __IViewpoint_INTERFACE_DEFINED__

/* interface IViewpoint */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IViewpoint;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("21BA1141-5A5D-449A-AF21-E18899304F79")
    IViewpoint : public IEarthObject
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE flyTo( void) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_x( 
            /* [retval][out] */ DOUBLE *pX) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_x( 
            /* [in] */ DOUBLE _x) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_y( 
            /* [retval][out] */ DOUBLE *pY) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_y( 
            /* [in] */ DOUBLE _y) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_z( 
            /* [retval][out] */ DOUBLE *pZ) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_z( 
            /* [in] */ DOUBLE _z) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_heading( 
            /* [retval][out] */ DOUBLE *pHeading) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_heading( 
            /* [in] */ DOUBLE _heading) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_pitch( 
            /* [retval][out] */ DOUBLE *pPitch) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_pitch( 
            /* [in] */ DOUBLE _pitch) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_range( 
            /* [retval][out] */ DOUBLE *pRange) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_range( 
            /* [in] */ DOUBLE _range) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IViewpointVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IViewpoint * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IViewpoint * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IViewpoint * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IViewpoint * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IViewpoint * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IViewpoint * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IViewpoint * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IViewpoint * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IViewpoint * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IViewpoint * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            IViewpoint * This,
            /* [retval][out] */ EarthObjectClassType *pEarthObjectClassType);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_visible )( 
            IViewpoint * This,
            /* [in] */ VARIANT_BOOL ifVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_visible )( 
            IViewpoint * This,
            /* [retval][out] */ VARIANT_BOOL *pIfVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_enabled )( 
            IViewpoint * This,
            /* [retval][out] */ VARIANT_BOOL *pIfEnabled);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *flyTo )( 
            IViewpoint * This);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_x )( 
            IViewpoint * This,
            /* [retval][out] */ DOUBLE *pX);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_x )( 
            IViewpoint * This,
            /* [in] */ DOUBLE _x);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_y )( 
            IViewpoint * This,
            /* [retval][out] */ DOUBLE *pY);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_y )( 
            IViewpoint * This,
            /* [in] */ DOUBLE _y);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_z )( 
            IViewpoint * This,
            /* [retval][out] */ DOUBLE *pZ);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_z )( 
            IViewpoint * This,
            /* [in] */ DOUBLE _z);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_heading )( 
            IViewpoint * This,
            /* [retval][out] */ DOUBLE *pHeading);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_heading )( 
            IViewpoint * This,
            /* [in] */ DOUBLE _heading);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_pitch )( 
            IViewpoint * This,
            /* [retval][out] */ DOUBLE *pPitch);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_pitch )( 
            IViewpoint * This,
            /* [in] */ DOUBLE _pitch);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_range )( 
            IViewpoint * This,
            /* [retval][out] */ DOUBLE *pRange);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_range )( 
            IViewpoint * This,
            /* [in] */ DOUBLE _range);
        
        END_INTERFACE
    } IViewpointVtbl;

    interface IViewpoint
    {
        CONST_VTBL struct IViewpointVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IViewpoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IViewpoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IViewpoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IViewpoint_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IViewpoint_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IViewpoint_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IViewpoint_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IViewpoint_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IViewpoint_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IViewpoint_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IViewpoint_get_classType(This,pEarthObjectClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pEarthObjectClassType) ) 

#define IViewpoint_put_visible(This,ifVisible)	\
    ( (This)->lpVtbl -> put_visible(This,ifVisible) ) 

#define IViewpoint_get_visible(This,pIfVisible)	\
    ( (This)->lpVtbl -> get_visible(This,pIfVisible) ) 

#define IViewpoint_get_enabled(This,pIfEnabled)	\
    ( (This)->lpVtbl -> get_enabled(This,pIfEnabled) ) 


#define IViewpoint_flyTo(This)	\
    ( (This)->lpVtbl -> flyTo(This) ) 

#define IViewpoint_get_x(This,pX)	\
    ( (This)->lpVtbl -> get_x(This,pX) ) 

#define IViewpoint_put_x(This,_x)	\
    ( (This)->lpVtbl -> put_x(This,_x) ) 

#define IViewpoint_get_y(This,pY)	\
    ( (This)->lpVtbl -> get_y(This,pY) ) 

#define IViewpoint_put_y(This,_y)	\
    ( (This)->lpVtbl -> put_y(This,_y) ) 

#define IViewpoint_get_z(This,pZ)	\
    ( (This)->lpVtbl -> get_z(This,pZ) ) 

#define IViewpoint_put_z(This,_z)	\
    ( (This)->lpVtbl -> put_z(This,_z) ) 

#define IViewpoint_get_heading(This,pHeading)	\
    ( (This)->lpVtbl -> get_heading(This,pHeading) ) 

#define IViewpoint_put_heading(This,_heading)	\
    ( (This)->lpVtbl -> put_heading(This,_heading) ) 

#define IViewpoint_get_pitch(This,pPitch)	\
    ( (This)->lpVtbl -> get_pitch(This,pPitch) ) 

#define IViewpoint_put_pitch(This,_pitch)	\
    ( (This)->lpVtbl -> put_pitch(This,_pitch) ) 

#define IViewpoint_get_range(This,pRange)	\
    ( (This)->lpVtbl -> get_range(This,pRange) ) 

#define IViewpoint_put_range(This,_range)	\
    ( (This)->lpVtbl -> put_range(This,_range) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IViewpoint_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0045 */
/* [local] */ 

#define	IGraticuleIdsCount	( 0 )

#define	IGraticuleBeginId	( ( IEarthObjectBeginId + IEarthObjectIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0045_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0045_v0_0_s_ifspec;

#ifndef __IGraticule_INTERFACE_DEFINED__
#define __IGraticule_INTERFACE_DEFINED__

/* interface IGraticule */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IGraticule;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("06406A22-841C-4D8E-B255-ECB65686FEA9")
    IGraticule : public IEarthObject
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IGraticuleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGraticule * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGraticule * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGraticule * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IGraticule * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IGraticule * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IGraticule * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IGraticule * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IGraticule * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IGraticule * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IGraticule * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            IGraticule * This,
            /* [retval][out] */ EarthObjectClassType *pEarthObjectClassType);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_visible )( 
            IGraticule * This,
            /* [in] */ VARIANT_BOOL ifVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_visible )( 
            IGraticule * This,
            /* [retval][out] */ VARIANT_BOOL *pIfVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_enabled )( 
            IGraticule * This,
            /* [retval][out] */ VARIANT_BOOL *pIfEnabled);
        
        END_INTERFACE
    } IGraticuleVtbl;

    interface IGraticule
    {
        CONST_VTBL struct IGraticuleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGraticule_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGraticule_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGraticule_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGraticule_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IGraticule_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IGraticule_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IGraticule_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IGraticule_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IGraticule_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IGraticule_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IGraticule_get_classType(This,pEarthObjectClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pEarthObjectClassType) ) 

#define IGraticule_put_visible(This,ifVisible)	\
    ( (This)->lpVtbl -> put_visible(This,ifVisible) ) 

#define IGraticule_get_visible(This,pIfVisible)	\
    ( (This)->lpVtbl -> get_visible(This,pIfVisible) ) 

#define IGraticule_get_enabled(This,pIfEnabled)	\
    ( (This)->lpVtbl -> get_enabled(This,pIfEnabled) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGraticule_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0046 */
/* [local] */ 

#define	IEarthCtrlIdsCount	( 8 )

#define	IEarthCtrlBeginId	( ( IEarthDispatchBeginId + IEarthDispatchIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0046_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0046_v0_0_s_ifspec;

#ifndef __IEarthCtrl_INTERFACE_DEFINED__
#define __IEarthCtrl_INTERFACE_DEFINED__

/* interface IEarthCtrl */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IEarthCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0978E39F-8910-4CFC-830C-78BF13786663")
    IEarthCtrl : public IEarthDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE run( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getEarthViewer( 
            /* [retval][out] */ IEarthViewer **ppEarthViewer) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getEarthMap( 
            /* [retval][out] */ IEarthMap **ppEarthMap) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getUtilObjectFactory( 
            /* [retval][out] */ IDispatch **ppIDispatch) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getEarthRoot( 
            /* [retval][out] */ IEarthGroup **ppIEarthGroup) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setActiveSky( 
            /* [in] */ ISky *pISky) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE removeActiveSky( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setHomeViewpoint( 
            /* [in] */ IViewpoint *pIViewpoint) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setActiveGraticule( 
            /* [in] */ IGraticule *pIGraticule) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE removeActiveGraticule( void) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_AutoSize( 
            /* [in] */ VARIANT_BOOL vbool) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_AutoSize( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_BackColor( 
            /* [in] */ OLE_COLOR clr) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_BackColor( 
            /* [retval][out] */ OLE_COLOR *pclr) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_BackStyle( 
            /* [in] */ long style) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_BackStyle( 
            /* [retval][out] */ long *pstyle) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_BorderColor( 
            /* [in] */ OLE_COLOR clr) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_BorderColor( 
            /* [retval][out] */ OLE_COLOR *pclr) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_BorderStyle( 
            /* [in] */ long style) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_BorderStyle( 
            /* [retval][out] */ long *pstyle) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_BorderWidth( 
            /* [in] */ long width) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_BorderWidth( 
            /* [retval][out] */ long *width) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_DrawMode( 
            /* [in] */ long mode) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_DrawMode( 
            /* [retval][out] */ long *pmode) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_DrawStyle( 
            /* [in] */ long style) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_DrawStyle( 
            /* [retval][out] */ long *pstyle) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_DrawWidth( 
            /* [in] */ long width) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_DrawWidth( 
            /* [retval][out] */ long *pwidth) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_FillColor( 
            /* [in] */ OLE_COLOR clr) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_FillColor( 
            /* [retval][out] */ OLE_COLOR *pclr) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_FillStyle( 
            /* [in] */ long style) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_FillStyle( 
            /* [retval][out] */ long *pstyle) = 0;
        
        virtual /* [id][requestedit][bindable][propputref] */ HRESULT STDMETHODCALLTYPE putref_Font( 
            /* [in] */ IFontDisp *pFont) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_Font( 
            /* [in] */ IFontDisp *pFont) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_Font( 
            /* [retval][out] */ IFontDisp **ppFont) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_ForeColor( 
            /* [in] */ OLE_COLOR clr) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_ForeColor( 
            /* [retval][out] */ OLE_COLOR *pclr) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL vbool) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_HWND( 
            /* [retval][out] */ LONG_PTR *pHWND) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_TabStop( 
            /* [in] */ VARIANT_BOOL vbool) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_TabStop( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_Text( 
            /* [in] */ BSTR strText) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ BSTR *pstrText) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_Caption( 
            /* [in] */ BSTR strCaption) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_Caption( 
            /* [retval][out] */ BSTR *pstrCaption) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_BorderVisible( 
            /* [in] */ VARIANT_BOOL vbool) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_BorderVisible( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_Appearance( 
            /* [in] */ short nAppearance) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_Appearance( 
            /* [retval][out] */ short *pnAppearance) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_MousePointer( 
            /* [in] */ long pointer) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_MousePointer( 
            /* [retval][out] */ long *ppointer) = 0;
        
        virtual /* [id][requestedit][bindable][propputref] */ HRESULT STDMETHODCALLTYPE putref_MouseIcon( 
            /* [in] */ IPictureDisp *pMouseIcon) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_MouseIcon( 
            /* [in] */ IPictureDisp *pMouseIcon) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MouseIcon( 
            /* [retval][out] */ IPictureDisp **ppMouseIcon) = 0;
        
        virtual /* [id][requestedit][bindable][propputref] */ HRESULT STDMETHODCALLTYPE putref_Picture( 
            /* [in] */ IPictureDisp *pPicture) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_Picture( 
            /* [in] */ IPictureDisp *pPicture) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_Picture( 
            /* [retval][out] */ IPictureDisp **ppPicture) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_Valid( 
            /* [in] */ VARIANT_BOOL vbool) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_Valid( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_ReadyState( 
            /* [in] */ long state) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_ReadyState( 
            /* [retval][out] */ long *pstate) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEarthCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEarthCtrl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEarthCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEarthCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEarthCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEarthCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEarthCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEarthCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IEarthCtrl * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IEarthCtrl * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IEarthCtrl * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *run )( 
            IEarthCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getEarthViewer )( 
            IEarthCtrl * This,
            /* [retval][out] */ IEarthViewer **ppEarthViewer);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getEarthMap )( 
            IEarthCtrl * This,
            /* [retval][out] */ IEarthMap **ppEarthMap);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getUtilObjectFactory )( 
            IEarthCtrl * This,
            /* [retval][out] */ IDispatch **ppIDispatch);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getEarthRoot )( 
            IEarthCtrl * This,
            /* [retval][out] */ IEarthGroup **ppIEarthGroup);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setActiveSky )( 
            IEarthCtrl * This,
            /* [in] */ ISky *pISky);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *removeActiveSky )( 
            IEarthCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setHomeViewpoint )( 
            IEarthCtrl * This,
            /* [in] */ IViewpoint *pIViewpoint);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setActiveGraticule )( 
            IEarthCtrl * This,
            /* [in] */ IGraticule *pIGraticule);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *removeActiveGraticule )( 
            IEarthCtrl * This);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoSize )( 
            IEarthCtrl * This,
            /* [in] */ VARIANT_BOOL vbool);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoSize )( 
            IEarthCtrl * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BackColor )( 
            IEarthCtrl * This,
            /* [in] */ OLE_COLOR clr);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackColor )( 
            IEarthCtrl * This,
            /* [retval][out] */ OLE_COLOR *pclr);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BackStyle )( 
            IEarthCtrl * This,
            /* [in] */ long style);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackStyle )( 
            IEarthCtrl * This,
            /* [retval][out] */ long *pstyle);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BorderColor )( 
            IEarthCtrl * This,
            /* [in] */ OLE_COLOR clr);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BorderColor )( 
            IEarthCtrl * This,
            /* [retval][out] */ OLE_COLOR *pclr);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BorderStyle )( 
            IEarthCtrl * This,
            /* [in] */ long style);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BorderStyle )( 
            IEarthCtrl * This,
            /* [retval][out] */ long *pstyle);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BorderWidth )( 
            IEarthCtrl * This,
            /* [in] */ long width);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BorderWidth )( 
            IEarthCtrl * This,
            /* [retval][out] */ long *width);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DrawMode )( 
            IEarthCtrl * This,
            /* [in] */ long mode);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DrawMode )( 
            IEarthCtrl * This,
            /* [retval][out] */ long *pmode);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DrawStyle )( 
            IEarthCtrl * This,
            /* [in] */ long style);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DrawStyle )( 
            IEarthCtrl * This,
            /* [retval][out] */ long *pstyle);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DrawWidth )( 
            IEarthCtrl * This,
            /* [in] */ long width);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DrawWidth )( 
            IEarthCtrl * This,
            /* [retval][out] */ long *pwidth);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FillColor )( 
            IEarthCtrl * This,
            /* [in] */ OLE_COLOR clr);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FillColor )( 
            IEarthCtrl * This,
            /* [retval][out] */ OLE_COLOR *pclr);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FillStyle )( 
            IEarthCtrl * This,
            /* [in] */ long style);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FillStyle )( 
            IEarthCtrl * This,
            /* [retval][out] */ long *pstyle);
        
        /* [id][requestedit][bindable][propputref] */ HRESULT ( STDMETHODCALLTYPE *putref_Font )( 
            IEarthCtrl * This,
            /* [in] */ IFontDisp *pFont);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Font )( 
            IEarthCtrl * This,
            /* [in] */ IFontDisp *pFont);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Font )( 
            IEarthCtrl * This,
            /* [retval][out] */ IFontDisp **ppFont);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ForeColor )( 
            IEarthCtrl * This,
            /* [in] */ OLE_COLOR clr);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ForeColor )( 
            IEarthCtrl * This,
            /* [retval][out] */ OLE_COLOR *pclr);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IEarthCtrl * This,
            /* [in] */ VARIANT_BOOL vbool);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IEarthCtrl * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HWND )( 
            IEarthCtrl * This,
            /* [retval][out] */ LONG_PTR *pHWND);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TabStop )( 
            IEarthCtrl * This,
            /* [in] */ VARIANT_BOOL vbool);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TabStop )( 
            IEarthCtrl * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Text )( 
            IEarthCtrl * This,
            /* [in] */ BSTR strText);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IEarthCtrl * This,
            /* [retval][out] */ BSTR *pstrText);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Caption )( 
            IEarthCtrl * This,
            /* [in] */ BSTR strCaption);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Caption )( 
            IEarthCtrl * This,
            /* [retval][out] */ BSTR *pstrCaption);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BorderVisible )( 
            IEarthCtrl * This,
            /* [in] */ VARIANT_BOOL vbool);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BorderVisible )( 
            IEarthCtrl * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Appearance )( 
            IEarthCtrl * This,
            /* [in] */ short nAppearance);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Appearance )( 
            IEarthCtrl * This,
            /* [retval][out] */ short *pnAppearance);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MousePointer )( 
            IEarthCtrl * This,
            /* [in] */ long pointer);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MousePointer )( 
            IEarthCtrl * This,
            /* [retval][out] */ long *ppointer);
        
        /* [id][requestedit][bindable][propputref] */ HRESULT ( STDMETHODCALLTYPE *putref_MouseIcon )( 
            IEarthCtrl * This,
            /* [in] */ IPictureDisp *pMouseIcon);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MouseIcon )( 
            IEarthCtrl * This,
            /* [in] */ IPictureDisp *pMouseIcon);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MouseIcon )( 
            IEarthCtrl * This,
            /* [retval][out] */ IPictureDisp **ppMouseIcon);
        
        /* [id][requestedit][bindable][propputref] */ HRESULT ( STDMETHODCALLTYPE *putref_Picture )( 
            IEarthCtrl * This,
            /* [in] */ IPictureDisp *pPicture);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Picture )( 
            IEarthCtrl * This,
            /* [in] */ IPictureDisp *pPicture);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Picture )( 
            IEarthCtrl * This,
            /* [retval][out] */ IPictureDisp **ppPicture);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Valid )( 
            IEarthCtrl * This,
            /* [in] */ VARIANT_BOOL vbool);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Valid )( 
            IEarthCtrl * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReadyState )( 
            IEarthCtrl * This,
            /* [in] */ long state);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReadyState )( 
            IEarthCtrl * This,
            /* [retval][out] */ long *pstate);
        
        END_INTERFACE
    } IEarthCtrlVtbl;

    interface IEarthCtrl
    {
        CONST_VTBL struct IEarthCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEarthCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEarthCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEarthCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEarthCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEarthCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEarthCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEarthCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEarthCtrl_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IEarthCtrl_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IEarthCtrl_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IEarthCtrl_run(This)	\
    ( (This)->lpVtbl -> run(This) ) 

#define IEarthCtrl_getEarthViewer(This,ppEarthViewer)	\
    ( (This)->lpVtbl -> getEarthViewer(This,ppEarthViewer) ) 

#define IEarthCtrl_getEarthMap(This,ppEarthMap)	\
    ( (This)->lpVtbl -> getEarthMap(This,ppEarthMap) ) 

#define IEarthCtrl_getUtilObjectFactory(This,ppIDispatch)	\
    ( (This)->lpVtbl -> getUtilObjectFactory(This,ppIDispatch) ) 

#define IEarthCtrl_getEarthRoot(This,ppIEarthGroup)	\
    ( (This)->lpVtbl -> getEarthRoot(This,ppIEarthGroup) ) 

#define IEarthCtrl_setActiveSky(This,pISky)	\
    ( (This)->lpVtbl -> setActiveSky(This,pISky) ) 

#define IEarthCtrl_removeActiveSky(This)	\
    ( (This)->lpVtbl -> removeActiveSky(This) ) 

#define IEarthCtrl_setHomeViewpoint(This,pIViewpoint)	\
    ( (This)->lpVtbl -> setHomeViewpoint(This,pIViewpoint) ) 

#define IEarthCtrl_setActiveGraticule(This,pIGraticule)	\
    ( (This)->lpVtbl -> setActiveGraticule(This,pIGraticule) ) 

#define IEarthCtrl_removeActiveGraticule(This)	\
    ( (This)->lpVtbl -> removeActiveGraticule(This) ) 

#define IEarthCtrl_put_AutoSize(This,vbool)	\
    ( (This)->lpVtbl -> put_AutoSize(This,vbool) ) 

#define IEarthCtrl_get_AutoSize(This,pbool)	\
    ( (This)->lpVtbl -> get_AutoSize(This,pbool) ) 

#define IEarthCtrl_put_BackColor(This,clr)	\
    ( (This)->lpVtbl -> put_BackColor(This,clr) ) 

#define IEarthCtrl_get_BackColor(This,pclr)	\
    ( (This)->lpVtbl -> get_BackColor(This,pclr) ) 

#define IEarthCtrl_put_BackStyle(This,style)	\
    ( (This)->lpVtbl -> put_BackStyle(This,style) ) 

#define IEarthCtrl_get_BackStyle(This,pstyle)	\
    ( (This)->lpVtbl -> get_BackStyle(This,pstyle) ) 

#define IEarthCtrl_put_BorderColor(This,clr)	\
    ( (This)->lpVtbl -> put_BorderColor(This,clr) ) 

#define IEarthCtrl_get_BorderColor(This,pclr)	\
    ( (This)->lpVtbl -> get_BorderColor(This,pclr) ) 

#define IEarthCtrl_put_BorderStyle(This,style)	\
    ( (This)->lpVtbl -> put_BorderStyle(This,style) ) 

#define IEarthCtrl_get_BorderStyle(This,pstyle)	\
    ( (This)->lpVtbl -> get_BorderStyle(This,pstyle) ) 

#define IEarthCtrl_put_BorderWidth(This,width)	\
    ( (This)->lpVtbl -> put_BorderWidth(This,width) ) 

#define IEarthCtrl_get_BorderWidth(This,width)	\
    ( (This)->lpVtbl -> get_BorderWidth(This,width) ) 

#define IEarthCtrl_put_DrawMode(This,mode)	\
    ( (This)->lpVtbl -> put_DrawMode(This,mode) ) 

#define IEarthCtrl_get_DrawMode(This,pmode)	\
    ( (This)->lpVtbl -> get_DrawMode(This,pmode) ) 

#define IEarthCtrl_put_DrawStyle(This,style)	\
    ( (This)->lpVtbl -> put_DrawStyle(This,style) ) 

#define IEarthCtrl_get_DrawStyle(This,pstyle)	\
    ( (This)->lpVtbl -> get_DrawStyle(This,pstyle) ) 

#define IEarthCtrl_put_DrawWidth(This,width)	\
    ( (This)->lpVtbl -> put_DrawWidth(This,width) ) 

#define IEarthCtrl_get_DrawWidth(This,pwidth)	\
    ( (This)->lpVtbl -> get_DrawWidth(This,pwidth) ) 

#define IEarthCtrl_put_FillColor(This,clr)	\
    ( (This)->lpVtbl -> put_FillColor(This,clr) ) 

#define IEarthCtrl_get_FillColor(This,pclr)	\
    ( (This)->lpVtbl -> get_FillColor(This,pclr) ) 

#define IEarthCtrl_put_FillStyle(This,style)	\
    ( (This)->lpVtbl -> put_FillStyle(This,style) ) 

#define IEarthCtrl_get_FillStyle(This,pstyle)	\
    ( (This)->lpVtbl -> get_FillStyle(This,pstyle) ) 

#define IEarthCtrl_putref_Font(This,pFont)	\
    ( (This)->lpVtbl -> putref_Font(This,pFont) ) 

#define IEarthCtrl_put_Font(This,pFont)	\
    ( (This)->lpVtbl -> put_Font(This,pFont) ) 

#define IEarthCtrl_get_Font(This,ppFont)	\
    ( (This)->lpVtbl -> get_Font(This,ppFont) ) 

#define IEarthCtrl_put_ForeColor(This,clr)	\
    ( (This)->lpVtbl -> put_ForeColor(This,clr) ) 

#define IEarthCtrl_get_ForeColor(This,pclr)	\
    ( (This)->lpVtbl -> get_ForeColor(This,pclr) ) 

#define IEarthCtrl_put_Enabled(This,vbool)	\
    ( (This)->lpVtbl -> put_Enabled(This,vbool) ) 

#define IEarthCtrl_get_Enabled(This,pbool)	\
    ( (This)->lpVtbl -> get_Enabled(This,pbool) ) 

#define IEarthCtrl_get_HWND(This,pHWND)	\
    ( (This)->lpVtbl -> get_HWND(This,pHWND) ) 

#define IEarthCtrl_put_TabStop(This,vbool)	\
    ( (This)->lpVtbl -> put_TabStop(This,vbool) ) 

#define IEarthCtrl_get_TabStop(This,pbool)	\
    ( (This)->lpVtbl -> get_TabStop(This,pbool) ) 

#define IEarthCtrl_put_Text(This,strText)	\
    ( (This)->lpVtbl -> put_Text(This,strText) ) 

#define IEarthCtrl_get_Text(This,pstrText)	\
    ( (This)->lpVtbl -> get_Text(This,pstrText) ) 

#define IEarthCtrl_put_Caption(This,strCaption)	\
    ( (This)->lpVtbl -> put_Caption(This,strCaption) ) 

#define IEarthCtrl_get_Caption(This,pstrCaption)	\
    ( (This)->lpVtbl -> get_Caption(This,pstrCaption) ) 

#define IEarthCtrl_put_BorderVisible(This,vbool)	\
    ( (This)->lpVtbl -> put_BorderVisible(This,vbool) ) 

#define IEarthCtrl_get_BorderVisible(This,pbool)	\
    ( (This)->lpVtbl -> get_BorderVisible(This,pbool) ) 

#define IEarthCtrl_put_Appearance(This,nAppearance)	\
    ( (This)->lpVtbl -> put_Appearance(This,nAppearance) ) 

#define IEarthCtrl_get_Appearance(This,pnAppearance)	\
    ( (This)->lpVtbl -> get_Appearance(This,pnAppearance) ) 

#define IEarthCtrl_put_MousePointer(This,pointer)	\
    ( (This)->lpVtbl -> put_MousePointer(This,pointer) ) 

#define IEarthCtrl_get_MousePointer(This,ppointer)	\
    ( (This)->lpVtbl -> get_MousePointer(This,ppointer) ) 

#define IEarthCtrl_putref_MouseIcon(This,pMouseIcon)	\
    ( (This)->lpVtbl -> putref_MouseIcon(This,pMouseIcon) ) 

#define IEarthCtrl_put_MouseIcon(This,pMouseIcon)	\
    ( (This)->lpVtbl -> put_MouseIcon(This,pMouseIcon) ) 

#define IEarthCtrl_get_MouseIcon(This,ppMouseIcon)	\
    ( (This)->lpVtbl -> get_MouseIcon(This,ppMouseIcon) ) 

#define IEarthCtrl_putref_Picture(This,pPicture)	\
    ( (This)->lpVtbl -> putref_Picture(This,pPicture) ) 

#define IEarthCtrl_put_Picture(This,pPicture)	\
    ( (This)->lpVtbl -> put_Picture(This,pPicture) ) 

#define IEarthCtrl_get_Picture(This,ppPicture)	\
    ( (This)->lpVtbl -> get_Picture(This,ppPicture) ) 

#define IEarthCtrl_put_Valid(This,vbool)	\
    ( (This)->lpVtbl -> put_Valid(This,vbool) ) 

#define IEarthCtrl_get_Valid(This,pbool)	\
    ( (This)->lpVtbl -> get_Valid(This,pbool) ) 

#define IEarthCtrl_put_ReadyState(This,state)	\
    ( (This)->lpVtbl -> put_ReadyState(This,state) ) 

#define IEarthCtrl_get_ReadyState(This,pstate)	\
    ( (This)->lpVtbl -> get_ReadyState(This,pstate) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEarthCtrl_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0047 */
/* [local] */ 

#define	IEarthTreeCtrlIdsCount	( 1 )

#define	IEarthTreeCtrlBeginId	( 0 )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0047_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0047_v0_0_s_ifspec;

#ifndef __IEarthTreeCtrl_INTERFACE_DEFINED__
#define __IEarthTreeCtrl_INTERFACE_DEFINED__

/* interface IEarthTreeCtrl */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IEarthTreeCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C7C822D0-440B-4F5E-BC3E-78D10DC3B084")
    IEarthTreeCtrl : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE bindEarthCtrl( 
            /* [in] */ IEarthCtrl *pIEarthCtrl) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_AutoSize( 
            /* [in] */ VARIANT_BOOL vbool) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_AutoSize( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_BackColor( 
            /* [in] */ OLE_COLOR clr) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_BackColor( 
            /* [retval][out] */ OLE_COLOR *pclr) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_BackStyle( 
            /* [in] */ long style) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_BackStyle( 
            /* [retval][out] */ long *pstyle) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_BorderColor( 
            /* [in] */ OLE_COLOR clr) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_BorderColor( 
            /* [retval][out] */ OLE_COLOR *pclr) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_BorderStyle( 
            /* [in] */ long style) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_BorderStyle( 
            /* [retval][out] */ long *pstyle) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_BorderWidth( 
            /* [in] */ long width) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_BorderWidth( 
            /* [retval][out] */ long *width) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_DrawMode( 
            /* [in] */ long mode) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_DrawMode( 
            /* [retval][out] */ long *pmode) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_DrawStyle( 
            /* [in] */ long style) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_DrawStyle( 
            /* [retval][out] */ long *pstyle) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_DrawWidth( 
            /* [in] */ long width) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_DrawWidth( 
            /* [retval][out] */ long *pwidth) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_FillColor( 
            /* [in] */ OLE_COLOR clr) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_FillColor( 
            /* [retval][out] */ OLE_COLOR *pclr) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_FillStyle( 
            /* [in] */ long style) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_FillStyle( 
            /* [retval][out] */ long *pstyle) = 0;
        
        virtual /* [id][requestedit][bindable][propputref] */ HRESULT STDMETHODCALLTYPE putref_Font( 
            /* [in] */ IFontDisp *pFont) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_Font( 
            /* [in] */ IFontDisp *pFont) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_Font( 
            /* [retval][out] */ IFontDisp **ppFont) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_ForeColor( 
            /* [in] */ OLE_COLOR clr) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_ForeColor( 
            /* [retval][out] */ OLE_COLOR *pclr) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL vbool) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_HWND( 
            /* [retval][out] */ LONG_PTR *pHWND) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_TabStop( 
            /* [in] */ VARIANT_BOOL vbool) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_TabStop( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_Text( 
            /* [in] */ BSTR strText) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ BSTR *pstrText) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_Caption( 
            /* [in] */ BSTR strCaption) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_Caption( 
            /* [retval][out] */ BSTR *pstrCaption) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_BorderVisible( 
            /* [in] */ VARIANT_BOOL vbool) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_BorderVisible( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_Appearance( 
            /* [in] */ short nAppearance) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_Appearance( 
            /* [retval][out] */ short *pnAppearance) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_MousePointer( 
            /* [in] */ long pointer) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_MousePointer( 
            /* [retval][out] */ long *ppointer) = 0;
        
        virtual /* [id][requestedit][bindable][propputref] */ HRESULT STDMETHODCALLTYPE putref_MouseIcon( 
            /* [in] */ IPictureDisp *pMouseIcon) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_MouseIcon( 
            /* [in] */ IPictureDisp *pMouseIcon) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MouseIcon( 
            /* [retval][out] */ IPictureDisp **ppMouseIcon) = 0;
        
        virtual /* [id][requestedit][bindable][propputref] */ HRESULT STDMETHODCALLTYPE putref_Picture( 
            /* [in] */ IPictureDisp *pPicture) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_Picture( 
            /* [in] */ IPictureDisp *pPicture) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_Picture( 
            /* [retval][out] */ IPictureDisp **ppPicture) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_Valid( 
            /* [in] */ VARIANT_BOOL vbool) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_Valid( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_ReadyState( 
            /* [in] */ long state) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_ReadyState( 
            /* [retval][out] */ long *pstate) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEarthTreeCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEarthTreeCtrl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEarthTreeCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEarthTreeCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEarthTreeCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEarthTreeCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEarthTreeCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEarthTreeCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *bindEarthCtrl )( 
            IEarthTreeCtrl * This,
            /* [in] */ IEarthCtrl *pIEarthCtrl);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoSize )( 
            IEarthTreeCtrl * This,
            /* [in] */ VARIANT_BOOL vbool);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoSize )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BackColor )( 
            IEarthTreeCtrl * This,
            /* [in] */ OLE_COLOR clr);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackColor )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ OLE_COLOR *pclr);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BackStyle )( 
            IEarthTreeCtrl * This,
            /* [in] */ long style);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackStyle )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ long *pstyle);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BorderColor )( 
            IEarthTreeCtrl * This,
            /* [in] */ OLE_COLOR clr);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BorderColor )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ OLE_COLOR *pclr);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BorderStyle )( 
            IEarthTreeCtrl * This,
            /* [in] */ long style);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BorderStyle )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ long *pstyle);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BorderWidth )( 
            IEarthTreeCtrl * This,
            /* [in] */ long width);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BorderWidth )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ long *width);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DrawMode )( 
            IEarthTreeCtrl * This,
            /* [in] */ long mode);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DrawMode )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ long *pmode);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DrawStyle )( 
            IEarthTreeCtrl * This,
            /* [in] */ long style);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DrawStyle )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ long *pstyle);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DrawWidth )( 
            IEarthTreeCtrl * This,
            /* [in] */ long width);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DrawWidth )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ long *pwidth);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FillColor )( 
            IEarthTreeCtrl * This,
            /* [in] */ OLE_COLOR clr);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FillColor )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ OLE_COLOR *pclr);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FillStyle )( 
            IEarthTreeCtrl * This,
            /* [in] */ long style);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FillStyle )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ long *pstyle);
        
        /* [id][requestedit][bindable][propputref] */ HRESULT ( STDMETHODCALLTYPE *putref_Font )( 
            IEarthTreeCtrl * This,
            /* [in] */ IFontDisp *pFont);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Font )( 
            IEarthTreeCtrl * This,
            /* [in] */ IFontDisp *pFont);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Font )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ IFontDisp **ppFont);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ForeColor )( 
            IEarthTreeCtrl * This,
            /* [in] */ OLE_COLOR clr);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ForeColor )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ OLE_COLOR *pclr);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IEarthTreeCtrl * This,
            /* [in] */ VARIANT_BOOL vbool);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HWND )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ LONG_PTR *pHWND);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TabStop )( 
            IEarthTreeCtrl * This,
            /* [in] */ VARIANT_BOOL vbool);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TabStop )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Text )( 
            IEarthTreeCtrl * This,
            /* [in] */ BSTR strText);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ BSTR *pstrText);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Caption )( 
            IEarthTreeCtrl * This,
            /* [in] */ BSTR strCaption);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Caption )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ BSTR *pstrCaption);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BorderVisible )( 
            IEarthTreeCtrl * This,
            /* [in] */ VARIANT_BOOL vbool);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BorderVisible )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Appearance )( 
            IEarthTreeCtrl * This,
            /* [in] */ short nAppearance);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Appearance )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ short *pnAppearance);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MousePointer )( 
            IEarthTreeCtrl * This,
            /* [in] */ long pointer);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MousePointer )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ long *ppointer);
        
        /* [id][requestedit][bindable][propputref] */ HRESULT ( STDMETHODCALLTYPE *putref_MouseIcon )( 
            IEarthTreeCtrl * This,
            /* [in] */ IPictureDisp *pMouseIcon);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MouseIcon )( 
            IEarthTreeCtrl * This,
            /* [in] */ IPictureDisp *pMouseIcon);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MouseIcon )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ IPictureDisp **ppMouseIcon);
        
        /* [id][requestedit][bindable][propputref] */ HRESULT ( STDMETHODCALLTYPE *putref_Picture )( 
            IEarthTreeCtrl * This,
            /* [in] */ IPictureDisp *pPicture);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Picture )( 
            IEarthTreeCtrl * This,
            /* [in] */ IPictureDisp *pPicture);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Picture )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ IPictureDisp **ppPicture);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Valid )( 
            IEarthTreeCtrl * This,
            /* [in] */ VARIANT_BOOL vbool);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Valid )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReadyState )( 
            IEarthTreeCtrl * This,
            /* [in] */ long state);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReadyState )( 
            IEarthTreeCtrl * This,
            /* [retval][out] */ long *pstate);
        
        END_INTERFACE
    } IEarthTreeCtrlVtbl;

    interface IEarthTreeCtrl
    {
        CONST_VTBL struct IEarthTreeCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEarthTreeCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEarthTreeCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEarthTreeCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEarthTreeCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEarthTreeCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEarthTreeCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEarthTreeCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEarthTreeCtrl_bindEarthCtrl(This,pIEarthCtrl)	\
    ( (This)->lpVtbl -> bindEarthCtrl(This,pIEarthCtrl) ) 

#define IEarthTreeCtrl_put_AutoSize(This,vbool)	\
    ( (This)->lpVtbl -> put_AutoSize(This,vbool) ) 

#define IEarthTreeCtrl_get_AutoSize(This,pbool)	\
    ( (This)->lpVtbl -> get_AutoSize(This,pbool) ) 

#define IEarthTreeCtrl_put_BackColor(This,clr)	\
    ( (This)->lpVtbl -> put_BackColor(This,clr) ) 

#define IEarthTreeCtrl_get_BackColor(This,pclr)	\
    ( (This)->lpVtbl -> get_BackColor(This,pclr) ) 

#define IEarthTreeCtrl_put_BackStyle(This,style)	\
    ( (This)->lpVtbl -> put_BackStyle(This,style) ) 

#define IEarthTreeCtrl_get_BackStyle(This,pstyle)	\
    ( (This)->lpVtbl -> get_BackStyle(This,pstyle) ) 

#define IEarthTreeCtrl_put_BorderColor(This,clr)	\
    ( (This)->lpVtbl -> put_BorderColor(This,clr) ) 

#define IEarthTreeCtrl_get_BorderColor(This,pclr)	\
    ( (This)->lpVtbl -> get_BorderColor(This,pclr) ) 

#define IEarthTreeCtrl_put_BorderStyle(This,style)	\
    ( (This)->lpVtbl -> put_BorderStyle(This,style) ) 

#define IEarthTreeCtrl_get_BorderStyle(This,pstyle)	\
    ( (This)->lpVtbl -> get_BorderStyle(This,pstyle) ) 

#define IEarthTreeCtrl_put_BorderWidth(This,width)	\
    ( (This)->lpVtbl -> put_BorderWidth(This,width) ) 

#define IEarthTreeCtrl_get_BorderWidth(This,width)	\
    ( (This)->lpVtbl -> get_BorderWidth(This,width) ) 

#define IEarthTreeCtrl_put_DrawMode(This,mode)	\
    ( (This)->lpVtbl -> put_DrawMode(This,mode) ) 

#define IEarthTreeCtrl_get_DrawMode(This,pmode)	\
    ( (This)->lpVtbl -> get_DrawMode(This,pmode) ) 

#define IEarthTreeCtrl_put_DrawStyle(This,style)	\
    ( (This)->lpVtbl -> put_DrawStyle(This,style) ) 

#define IEarthTreeCtrl_get_DrawStyle(This,pstyle)	\
    ( (This)->lpVtbl -> get_DrawStyle(This,pstyle) ) 

#define IEarthTreeCtrl_put_DrawWidth(This,width)	\
    ( (This)->lpVtbl -> put_DrawWidth(This,width) ) 

#define IEarthTreeCtrl_get_DrawWidth(This,pwidth)	\
    ( (This)->lpVtbl -> get_DrawWidth(This,pwidth) ) 

#define IEarthTreeCtrl_put_FillColor(This,clr)	\
    ( (This)->lpVtbl -> put_FillColor(This,clr) ) 

#define IEarthTreeCtrl_get_FillColor(This,pclr)	\
    ( (This)->lpVtbl -> get_FillColor(This,pclr) ) 

#define IEarthTreeCtrl_put_FillStyle(This,style)	\
    ( (This)->lpVtbl -> put_FillStyle(This,style) ) 

#define IEarthTreeCtrl_get_FillStyle(This,pstyle)	\
    ( (This)->lpVtbl -> get_FillStyle(This,pstyle) ) 

#define IEarthTreeCtrl_putref_Font(This,pFont)	\
    ( (This)->lpVtbl -> putref_Font(This,pFont) ) 

#define IEarthTreeCtrl_put_Font(This,pFont)	\
    ( (This)->lpVtbl -> put_Font(This,pFont) ) 

#define IEarthTreeCtrl_get_Font(This,ppFont)	\
    ( (This)->lpVtbl -> get_Font(This,ppFont) ) 

#define IEarthTreeCtrl_put_ForeColor(This,clr)	\
    ( (This)->lpVtbl -> put_ForeColor(This,clr) ) 

#define IEarthTreeCtrl_get_ForeColor(This,pclr)	\
    ( (This)->lpVtbl -> get_ForeColor(This,pclr) ) 

#define IEarthTreeCtrl_put_Enabled(This,vbool)	\
    ( (This)->lpVtbl -> put_Enabled(This,vbool) ) 

#define IEarthTreeCtrl_get_Enabled(This,pbool)	\
    ( (This)->lpVtbl -> get_Enabled(This,pbool) ) 

#define IEarthTreeCtrl_get_HWND(This,pHWND)	\
    ( (This)->lpVtbl -> get_HWND(This,pHWND) ) 

#define IEarthTreeCtrl_put_TabStop(This,vbool)	\
    ( (This)->lpVtbl -> put_TabStop(This,vbool) ) 

#define IEarthTreeCtrl_get_TabStop(This,pbool)	\
    ( (This)->lpVtbl -> get_TabStop(This,pbool) ) 

#define IEarthTreeCtrl_put_Text(This,strText)	\
    ( (This)->lpVtbl -> put_Text(This,strText) ) 

#define IEarthTreeCtrl_get_Text(This,pstrText)	\
    ( (This)->lpVtbl -> get_Text(This,pstrText) ) 

#define IEarthTreeCtrl_put_Caption(This,strCaption)	\
    ( (This)->lpVtbl -> put_Caption(This,strCaption) ) 

#define IEarthTreeCtrl_get_Caption(This,pstrCaption)	\
    ( (This)->lpVtbl -> get_Caption(This,pstrCaption) ) 

#define IEarthTreeCtrl_put_BorderVisible(This,vbool)	\
    ( (This)->lpVtbl -> put_BorderVisible(This,vbool) ) 

#define IEarthTreeCtrl_get_BorderVisible(This,pbool)	\
    ( (This)->lpVtbl -> get_BorderVisible(This,pbool) ) 

#define IEarthTreeCtrl_put_Appearance(This,nAppearance)	\
    ( (This)->lpVtbl -> put_Appearance(This,nAppearance) ) 

#define IEarthTreeCtrl_get_Appearance(This,pnAppearance)	\
    ( (This)->lpVtbl -> get_Appearance(This,pnAppearance) ) 

#define IEarthTreeCtrl_put_MousePointer(This,pointer)	\
    ( (This)->lpVtbl -> put_MousePointer(This,pointer) ) 

#define IEarthTreeCtrl_get_MousePointer(This,ppointer)	\
    ( (This)->lpVtbl -> get_MousePointer(This,ppointer) ) 

#define IEarthTreeCtrl_putref_MouseIcon(This,pMouseIcon)	\
    ( (This)->lpVtbl -> putref_MouseIcon(This,pMouseIcon) ) 

#define IEarthTreeCtrl_put_MouseIcon(This,pMouseIcon)	\
    ( (This)->lpVtbl -> put_MouseIcon(This,pMouseIcon) ) 

#define IEarthTreeCtrl_get_MouseIcon(This,ppMouseIcon)	\
    ( (This)->lpVtbl -> get_MouseIcon(This,ppMouseIcon) ) 

#define IEarthTreeCtrl_putref_Picture(This,pPicture)	\
    ( (This)->lpVtbl -> putref_Picture(This,pPicture) ) 

#define IEarthTreeCtrl_put_Picture(This,pPicture)	\
    ( (This)->lpVtbl -> put_Picture(This,pPicture) ) 

#define IEarthTreeCtrl_get_Picture(This,ppPicture)	\
    ( (This)->lpVtbl -> get_Picture(This,ppPicture) ) 

#define IEarthTreeCtrl_put_Valid(This,vbool)	\
    ( (This)->lpVtbl -> put_Valid(This,vbool) ) 

#define IEarthTreeCtrl_get_Valid(This,pbool)	\
    ( (This)->lpVtbl -> get_Valid(This,pbool) ) 

#define IEarthTreeCtrl_put_ReadyState(This,state)	\
    ( (This)->lpVtbl -> put_ReadyState(This,state) ) 

#define IEarthTreeCtrl_get_ReadyState(This,pstate)	\
    ( (This)->lpVtbl -> get_ReadyState(This,pstate) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEarthTreeCtrl_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0048 */
/* [local] */ 

#define	ILayerIdsCount	( 0 )

#define	ILayerBeginId	( ( IEarthObjectBeginId + IEarthObjectIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0048_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0048_v0_0_s_ifspec;

#ifndef __ILayer_INTERFACE_DEFINED__
#define __ILayer_INTERFACE_DEFINED__

/* interface ILayer */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ILayer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f5b65182-5d68-45e6-9f39-815a06ca909e")
    ILayer : public IEarthObject
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ILayerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILayer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILayer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILayer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ILayer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ILayer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ILayer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ILayer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ILayer * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ILayer * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ILayer * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            ILayer * This,
            /* [retval][out] */ EarthObjectClassType *pEarthObjectClassType);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_visible )( 
            ILayer * This,
            /* [in] */ VARIANT_BOOL ifVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_visible )( 
            ILayer * This,
            /* [retval][out] */ VARIANT_BOOL *pIfVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_enabled )( 
            ILayer * This,
            /* [retval][out] */ VARIANT_BOOL *pIfEnabled);
        
        END_INTERFACE
    } ILayerVtbl;

    interface ILayer
    {
        CONST_VTBL struct ILayerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILayer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILayer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILayer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILayer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ILayer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ILayer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ILayer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ILayer_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ILayer_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ILayer_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ILayer_get_classType(This,pEarthObjectClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pEarthObjectClassType) ) 

#define ILayer_put_visible(This,ifVisible)	\
    ( (This)->lpVtbl -> put_visible(This,ifVisible) ) 

#define ILayer_get_visible(This,pIfVisible)	\
    ( (This)->lpVtbl -> get_visible(This,pIfVisible) ) 

#define ILayer_get_enabled(This,pIfEnabled)	\
    ( (This)->lpVtbl -> get_enabled(This,pIfEnabled) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILayer_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0049 */
/* [local] */ 

#define	IImageSurfaceLayerIdsCount	( 1 )

#define	IImageSurfaceLayerBeginId	( ( ILayerBeginId + ILayerIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0049_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0049_v0_0_s_ifspec;

#ifndef __IImageSurfaceLayer_INTERFACE_DEFINED__
#define __IImageSurfaceLayer_INTERFACE_DEFINED__

/* interface IImageSurfaceLayer */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IImageSurfaceLayer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("569576F6-5E3C-40B6-89CB-45F28C72EF7C")
    IImageSurfaceLayer : public ILayer
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_tileSource( 
            /* [in] */ ITileSourceDispatch *pITileSourceDispatch) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IImageSurfaceLayerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IImageSurfaceLayer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IImageSurfaceLayer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IImageSurfaceLayer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IImageSurfaceLayer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IImageSurfaceLayer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IImageSurfaceLayer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IImageSurfaceLayer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IImageSurfaceLayer * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IImageSurfaceLayer * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IImageSurfaceLayer * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            IImageSurfaceLayer * This,
            /* [retval][out] */ EarthObjectClassType *pEarthObjectClassType);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_visible )( 
            IImageSurfaceLayer * This,
            /* [in] */ VARIANT_BOOL ifVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_visible )( 
            IImageSurfaceLayer * This,
            /* [retval][out] */ VARIANT_BOOL *pIfVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_enabled )( 
            IImageSurfaceLayer * This,
            /* [retval][out] */ VARIANT_BOOL *pIfEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_tileSource )( 
            IImageSurfaceLayer * This,
            /* [in] */ ITileSourceDispatch *pITileSourceDispatch);
        
        END_INTERFACE
    } IImageSurfaceLayerVtbl;

    interface IImageSurfaceLayer
    {
        CONST_VTBL struct IImageSurfaceLayerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IImageSurfaceLayer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IImageSurfaceLayer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IImageSurfaceLayer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IImageSurfaceLayer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IImageSurfaceLayer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IImageSurfaceLayer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IImageSurfaceLayer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IImageSurfaceLayer_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IImageSurfaceLayer_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IImageSurfaceLayer_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IImageSurfaceLayer_get_classType(This,pEarthObjectClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pEarthObjectClassType) ) 

#define IImageSurfaceLayer_put_visible(This,ifVisible)	\
    ( (This)->lpVtbl -> put_visible(This,ifVisible) ) 

#define IImageSurfaceLayer_get_visible(This,pIfVisible)	\
    ( (This)->lpVtbl -> get_visible(This,pIfVisible) ) 

#define IImageSurfaceLayer_get_enabled(This,pIfEnabled)	\
    ( (This)->lpVtbl -> get_enabled(This,pIfEnabled) ) 



#define IImageSurfaceLayer_put_tileSource(This,pITileSourceDispatch)	\
    ( (This)->lpVtbl -> put_tileSource(This,pITileSourceDispatch) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IImageSurfaceLayer_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0050 */
/* [local] */ 

#define	IVectorSurfaceLayerIdsCount	( 0 )

#define	IVectorSurfaceLayerBeginId	( ( ILayerBeginId + ILayerIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0050_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0050_v0_0_s_ifspec;

#ifndef __IVectorSurfaceLayer_INTERFACE_DEFINED__
#define __IVectorSurfaceLayer_INTERFACE_DEFINED__

/* interface IVectorSurfaceLayer */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IVectorSurfaceLayer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("04E1522A-6B6E-4196-BD94-6448E8993626")
    IVectorSurfaceLayer : public ILayer
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_vectorSource( 
            /* [in] */ IVectorSourceDispatch *pIVectorSourceDispatch) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVectorSurfaceLayerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVectorSurfaceLayer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVectorSurfaceLayer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVectorSurfaceLayer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVectorSurfaceLayer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVectorSurfaceLayer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVectorSurfaceLayer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVectorSurfaceLayer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IVectorSurfaceLayer * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IVectorSurfaceLayer * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IVectorSurfaceLayer * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            IVectorSurfaceLayer * This,
            /* [retval][out] */ EarthObjectClassType *pEarthObjectClassType);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_visible )( 
            IVectorSurfaceLayer * This,
            /* [in] */ VARIANT_BOOL ifVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_visible )( 
            IVectorSurfaceLayer * This,
            /* [retval][out] */ VARIANT_BOOL *pIfVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_enabled )( 
            IVectorSurfaceLayer * This,
            /* [retval][out] */ VARIANT_BOOL *pIfEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_vectorSource )( 
            IVectorSurfaceLayer * This,
            /* [in] */ IVectorSourceDispatch *pIVectorSourceDispatch);
        
        END_INTERFACE
    } IVectorSurfaceLayerVtbl;

    interface IVectorSurfaceLayer
    {
        CONST_VTBL struct IVectorSurfaceLayerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVectorSurfaceLayer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVectorSurfaceLayer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVectorSurfaceLayer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVectorSurfaceLayer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVectorSurfaceLayer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVectorSurfaceLayer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVectorSurfaceLayer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVectorSurfaceLayer_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IVectorSurfaceLayer_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IVectorSurfaceLayer_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IVectorSurfaceLayer_get_classType(This,pEarthObjectClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pEarthObjectClassType) ) 

#define IVectorSurfaceLayer_put_visible(This,ifVisible)	\
    ( (This)->lpVtbl -> put_visible(This,ifVisible) ) 

#define IVectorSurfaceLayer_get_visible(This,pIfVisible)	\
    ( (This)->lpVtbl -> get_visible(This,pIfVisible) ) 

#define IVectorSurfaceLayer_get_enabled(This,pIfEnabled)	\
    ( (This)->lpVtbl -> get_enabled(This,pIfEnabled) ) 



#define IVectorSurfaceLayer_put_vectorSource(This,pIVectorSourceDispatch)	\
    ( (This)->lpVtbl -> put_vectorSource(This,pIVectorSourceDispatch) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVectorSurfaceLayer_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0051 */
/* [local] */ 

#define	IElevationSurfaceLayerIdsCount	( 1 )

#define	IElevationSurfaceLayerBeginId	( ( ILayerBeginId + ILayerIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0051_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0051_v0_0_s_ifspec;

#ifndef __IElevationSurfaceLayer_INTERFACE_DEFINED__
#define __IElevationSurfaceLayer_INTERFACE_DEFINED__

/* interface IElevationSurfaceLayer */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IElevationSurfaceLayer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BC2F437C-B0CA-4160-BB20-F8CA901C1E25")
    IElevationSurfaceLayer : public ILayer
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_tileSource( 
            /* [in] */ ITileSourceDispatch *pITileSourceDispatch) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IElevationSurfaceLayerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IElevationSurfaceLayer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IElevationSurfaceLayer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IElevationSurfaceLayer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IElevationSurfaceLayer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IElevationSurfaceLayer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IElevationSurfaceLayer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IElevationSurfaceLayer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IElevationSurfaceLayer * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IElevationSurfaceLayer * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IElevationSurfaceLayer * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            IElevationSurfaceLayer * This,
            /* [retval][out] */ EarthObjectClassType *pEarthObjectClassType);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_visible )( 
            IElevationSurfaceLayer * This,
            /* [in] */ VARIANT_BOOL ifVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_visible )( 
            IElevationSurfaceLayer * This,
            /* [retval][out] */ VARIANT_BOOL *pIfVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_enabled )( 
            IElevationSurfaceLayer * This,
            /* [retval][out] */ VARIANT_BOOL *pIfEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_tileSource )( 
            IElevationSurfaceLayer * This,
            /* [in] */ ITileSourceDispatch *pITileSourceDispatch);
        
        END_INTERFACE
    } IElevationSurfaceLayerVtbl;

    interface IElevationSurfaceLayer
    {
        CONST_VTBL struct IElevationSurfaceLayerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IElevationSurfaceLayer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IElevationSurfaceLayer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IElevationSurfaceLayer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IElevationSurfaceLayer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IElevationSurfaceLayer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IElevationSurfaceLayer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IElevationSurfaceLayer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IElevationSurfaceLayer_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IElevationSurfaceLayer_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IElevationSurfaceLayer_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IElevationSurfaceLayer_get_classType(This,pEarthObjectClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pEarthObjectClassType) ) 

#define IElevationSurfaceLayer_put_visible(This,ifVisible)	\
    ( (This)->lpVtbl -> put_visible(This,ifVisible) ) 

#define IElevationSurfaceLayer_get_visible(This,pIfVisible)	\
    ( (This)->lpVtbl -> get_visible(This,pIfVisible) ) 

#define IElevationSurfaceLayer_get_enabled(This,pIfEnabled)	\
    ( (This)->lpVtbl -> get_enabled(This,pIfEnabled) ) 



#define IElevationSurfaceLayer_put_tileSource(This,pITileSourceDispatch)	\
    ( (This)->lpVtbl -> put_tileSource(This,pITileSourceDispatch) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IElevationSurfaceLayer_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0052 */
/* [local] */ 

#define	IPlaceIdsCount	( 5 )

#define	IPlaceBeginId	( ( IEarthObjectBeginId + IEarthObjectIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0052_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0052_v0_0_s_ifspec;

#ifndef __IPlace_INTERFACE_DEFINED__
#define __IPlace_INTERFACE_DEFINED__

/* interface IPlace */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IPlace;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("015B8CC6-96F6-48EF-8896-0A74008B0EF8")
    IPlace : public IEarthObject
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setPosition( 
            /* [in] */ IGeoPoint *pIGeoPoint) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getPosition( 
            /* [retval][out] */ IGeoPoint **pIGeoPoint) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setText( 
            /* [in] */ BSTR strText) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getText( 
            /* [retval][out] */ BSTR *pStrText) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setImageSrc( 
            /* [in] */ BSTR strImageSrc) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPlaceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPlace * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPlace * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPlace * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPlace * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPlace * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPlace * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPlace * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IPlace * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IPlace * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IPlace * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            IPlace * This,
            /* [retval][out] */ EarthObjectClassType *pEarthObjectClassType);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_visible )( 
            IPlace * This,
            /* [in] */ VARIANT_BOOL ifVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_visible )( 
            IPlace * This,
            /* [retval][out] */ VARIANT_BOOL *pIfVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_enabled )( 
            IPlace * This,
            /* [retval][out] */ VARIANT_BOOL *pIfEnabled);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setPosition )( 
            IPlace * This,
            /* [in] */ IGeoPoint *pIGeoPoint);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getPosition )( 
            IPlace * This,
            /* [retval][out] */ IGeoPoint **pIGeoPoint);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setText )( 
            IPlace * This,
            /* [in] */ BSTR strText);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getText )( 
            IPlace * This,
            /* [retval][out] */ BSTR *pStrText);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setImageSrc )( 
            IPlace * This,
            /* [in] */ BSTR strImageSrc);
        
        END_INTERFACE
    } IPlaceVtbl;

    interface IPlace
    {
        CONST_VTBL struct IPlaceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPlace_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPlace_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPlace_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPlace_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPlace_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPlace_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPlace_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPlace_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IPlace_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IPlace_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IPlace_get_classType(This,pEarthObjectClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pEarthObjectClassType) ) 

#define IPlace_put_visible(This,ifVisible)	\
    ( (This)->lpVtbl -> put_visible(This,ifVisible) ) 

#define IPlace_get_visible(This,pIfVisible)	\
    ( (This)->lpVtbl -> get_visible(This,pIfVisible) ) 

#define IPlace_get_enabled(This,pIfEnabled)	\
    ( (This)->lpVtbl -> get_enabled(This,pIfEnabled) ) 


#define IPlace_setPosition(This,pIGeoPoint)	\
    ( (This)->lpVtbl -> setPosition(This,pIGeoPoint) ) 

#define IPlace_getPosition(This,pIGeoPoint)	\
    ( (This)->lpVtbl -> getPosition(This,pIGeoPoint) ) 

#define IPlace_setText(This,strText)	\
    ( (This)->lpVtbl -> setText(This,strText) ) 

#define IPlace_getText(This,pStrText)	\
    ( (This)->lpVtbl -> getText(This,pStrText) ) 

#define IPlace_setImageSrc(This,strImageSrc)	\
    ( (This)->lpVtbl -> setImageSrc(This,strImageSrc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPlace_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0053 */
/* [local] */ 

#define	IImageOverlayIdsCount	( 2 )

#define	IImageOverlayBeginId	( ( IEarthObjectBeginId + IEarthObjectIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0053_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0053_v0_0_s_ifspec;

#ifndef __IImageOverlay_INTERFACE_DEFINED__
#define __IImageOverlay_INTERFACE_DEFINED__

/* interface IImageOverlay */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IImageOverlay;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E46E3C9B-362E-4B06-896F-7B1822B6AD59")
    IImageOverlay : public IEarthObject
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setImageSrc( 
            /* [in] */ BSTR bstrImgSrc) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setBounds( 
            /* [in] */ DOUBLE lowerLeftX,
            /* [in] */ DOUBLE lowerLeftY,
            /* [in] */ DOUBLE upperRightX,
            /* [in] */ DOUBLE upperRightY) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IImageOverlayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IImageOverlay * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IImageOverlay * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IImageOverlay * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IImageOverlay * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IImageOverlay * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IImageOverlay * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IImageOverlay * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IImageOverlay * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IImageOverlay * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IImageOverlay * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            IImageOverlay * This,
            /* [retval][out] */ EarthObjectClassType *pEarthObjectClassType);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_visible )( 
            IImageOverlay * This,
            /* [in] */ VARIANT_BOOL ifVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_visible )( 
            IImageOverlay * This,
            /* [retval][out] */ VARIANT_BOOL *pIfVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_enabled )( 
            IImageOverlay * This,
            /* [retval][out] */ VARIANT_BOOL *pIfEnabled);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setImageSrc )( 
            IImageOverlay * This,
            /* [in] */ BSTR bstrImgSrc);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setBounds )( 
            IImageOverlay * This,
            /* [in] */ DOUBLE lowerLeftX,
            /* [in] */ DOUBLE lowerLeftY,
            /* [in] */ DOUBLE upperRightX,
            /* [in] */ DOUBLE upperRightY);
        
        END_INTERFACE
    } IImageOverlayVtbl;

    interface IImageOverlay
    {
        CONST_VTBL struct IImageOverlayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IImageOverlay_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IImageOverlay_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IImageOverlay_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IImageOverlay_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IImageOverlay_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IImageOverlay_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IImageOverlay_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IImageOverlay_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IImageOverlay_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IImageOverlay_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IImageOverlay_get_classType(This,pEarthObjectClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pEarthObjectClassType) ) 

#define IImageOverlay_put_visible(This,ifVisible)	\
    ( (This)->lpVtbl -> put_visible(This,ifVisible) ) 

#define IImageOverlay_get_visible(This,pIfVisible)	\
    ( (This)->lpVtbl -> get_visible(This,pIfVisible) ) 

#define IImageOverlay_get_enabled(This,pIfEnabled)	\
    ( (This)->lpVtbl -> get_enabled(This,pIfEnabled) ) 


#define IImageOverlay_setImageSrc(This,bstrImgSrc)	\
    ( (This)->lpVtbl -> setImageSrc(This,bstrImgSrc) ) 

#define IImageOverlay_setBounds(This,lowerLeftX,lowerLeftY,upperRightX,upperRightY)	\
    ( (This)->lpVtbl -> setBounds(This,lowerLeftX,lowerLeftY,upperRightX,upperRightY) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IImageOverlay_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0054 */
/* [local] */ 

#define	ICircleIdsCount	( 5 )

#define	ICircleBeginId	( ( IEarthObjectBeginId + IEarthObjectIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0054_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0054_v0_0_s_ifspec;

#ifndef __ICircle_INTERFACE_DEFINED__
#define __ICircle_INTERFACE_DEFINED__

/* interface ICircle */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICircle;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D23FB784-B31F-42C0-8B11-EFB721ACD202")
    ICircle : public IEarthObject
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setPosition( 
            /* [in] */ IGeoPoint *pIGeoPoint) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setRadius( 
            /* [in] */ ILinear *pILinear) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setArcStart( 
            /* [in] */ IAngular *pIAngular) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setArcEnd( 
            /* [in] */ IAngular *pIAngular) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setPie( 
            /* [in] */ VARIANT_BOOL vbPie) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICircleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICircle * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICircle * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICircle * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICircle * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICircle * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICircle * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICircle * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ICircle * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ICircle * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ICircle * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            ICircle * This,
            /* [retval][out] */ EarthObjectClassType *pEarthObjectClassType);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_visible )( 
            ICircle * This,
            /* [in] */ VARIANT_BOOL ifVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_visible )( 
            ICircle * This,
            /* [retval][out] */ VARIANT_BOOL *pIfVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_enabled )( 
            ICircle * This,
            /* [retval][out] */ VARIANT_BOOL *pIfEnabled);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setPosition )( 
            ICircle * This,
            /* [in] */ IGeoPoint *pIGeoPoint);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setRadius )( 
            ICircle * This,
            /* [in] */ ILinear *pILinear);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setArcStart )( 
            ICircle * This,
            /* [in] */ IAngular *pIAngular);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setArcEnd )( 
            ICircle * This,
            /* [in] */ IAngular *pIAngular);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setPie )( 
            ICircle * This,
            /* [in] */ VARIANT_BOOL vbPie);
        
        END_INTERFACE
    } ICircleVtbl;

    interface ICircle
    {
        CONST_VTBL struct ICircleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICircle_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICircle_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICircle_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICircle_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICircle_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICircle_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICircle_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICircle_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ICircle_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ICircle_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ICircle_get_classType(This,pEarthObjectClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pEarthObjectClassType) ) 

#define ICircle_put_visible(This,ifVisible)	\
    ( (This)->lpVtbl -> put_visible(This,ifVisible) ) 

#define ICircle_get_visible(This,pIfVisible)	\
    ( (This)->lpVtbl -> get_visible(This,pIfVisible) ) 

#define ICircle_get_enabled(This,pIfEnabled)	\
    ( (This)->lpVtbl -> get_enabled(This,pIfEnabled) ) 


#define ICircle_setPosition(This,pIGeoPoint)	\
    ( (This)->lpVtbl -> setPosition(This,pIGeoPoint) ) 

#define ICircle_setRadius(This,pILinear)	\
    ( (This)->lpVtbl -> setRadius(This,pILinear) ) 

#define ICircle_setArcStart(This,pIAngular)	\
    ( (This)->lpVtbl -> setArcStart(This,pIAngular) ) 

#define ICircle_setArcEnd(This,pIAngular)	\
    ( (This)->lpVtbl -> setArcEnd(This,pIAngular) ) 

#define ICircle_setPie(This,vbPie)	\
    ( (This)->lpVtbl -> setPie(This,vbPie) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICircle_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0055 */
/* [local] */ 

#define	IFeaturePrimitiveIdsCount	( 0 )

#define	IFeaturePrimitiveBeginId	( ( IEarthObjectBeginId + IEarthObjectIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0055_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0055_v0_0_s_ifspec;

#ifndef __IFeaturePrimitive_INTERFACE_DEFINED__
#define __IFeaturePrimitive_INTERFACE_DEFINED__

/* interface IFeaturePrimitive */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IFeaturePrimitive;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ED1BFB90-6A14-421B-BF7C-949889C5D487")
    IFeaturePrimitive : public IEarthObject
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setFeature( 
            /* [in] */ IFeature *pIFeature) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFeaturePrimitiveVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFeaturePrimitive * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFeaturePrimitive * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFeaturePrimitive * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFeaturePrimitive * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFeaturePrimitive * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFeaturePrimitive * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFeaturePrimitive * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IFeaturePrimitive * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IFeaturePrimitive * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IFeaturePrimitive * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            IFeaturePrimitive * This,
            /* [retval][out] */ EarthObjectClassType *pEarthObjectClassType);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_visible )( 
            IFeaturePrimitive * This,
            /* [in] */ VARIANT_BOOL ifVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_visible )( 
            IFeaturePrimitive * This,
            /* [retval][out] */ VARIANT_BOOL *pIfVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_enabled )( 
            IFeaturePrimitive * This,
            /* [retval][out] */ VARIANT_BOOL *pIfEnabled);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setFeature )( 
            IFeaturePrimitive * This,
            /* [in] */ IFeature *pIFeature);
        
        END_INTERFACE
    } IFeaturePrimitiveVtbl;

    interface IFeaturePrimitive
    {
        CONST_VTBL struct IFeaturePrimitiveVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFeaturePrimitive_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFeaturePrimitive_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFeaturePrimitive_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFeaturePrimitive_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFeaturePrimitive_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFeaturePrimitive_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFeaturePrimitive_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFeaturePrimitive_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IFeaturePrimitive_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IFeaturePrimitive_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IFeaturePrimitive_get_classType(This,pEarthObjectClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pEarthObjectClassType) ) 

#define IFeaturePrimitive_put_visible(This,ifVisible)	\
    ( (This)->lpVtbl -> put_visible(This,ifVisible) ) 

#define IFeaturePrimitive_get_visible(This,pIfVisible)	\
    ( (This)->lpVtbl -> get_visible(This,pIfVisible) ) 

#define IFeaturePrimitive_get_enabled(This,pIfEnabled)	\
    ( (This)->lpVtbl -> get_enabled(This,pIfEnabled) ) 


#define IFeaturePrimitive_setFeature(This,pIFeature)	\
    ( (This)->lpVtbl -> setFeature(This,pIFeature) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFeaturePrimitive_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0056 */
/* [local] */ 

#define	IModelIdsCount	( 2 )

#define	IModelBeginId	( ( IEarthObjectBeginId + IEarthObjectIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0056_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0056_v0_0_s_ifspec;

#ifndef __IModel_INTERFACE_DEFINED__
#define __IModel_INTERFACE_DEFINED__

/* interface IModel */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IModel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D7B08885-2188-420D-B626-A54BA559A334")
    IModel : public IEarthObject
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setModelPath( 
            /* [in] */ BSTR bstrModelPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setPosition( 
            /* [in] */ IGeoPoint *pIGeoPoint) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IModelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IModel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IModel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IModel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IModel * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IModel * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IModel * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IModel * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IModel * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IModel * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IModel * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            IModel * This,
            /* [retval][out] */ EarthObjectClassType *pEarthObjectClassType);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_visible )( 
            IModel * This,
            /* [in] */ VARIANT_BOOL ifVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_visible )( 
            IModel * This,
            /* [retval][out] */ VARIANT_BOOL *pIfVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_enabled )( 
            IModel * This,
            /* [retval][out] */ VARIANT_BOOL *pIfEnabled);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setModelPath )( 
            IModel * This,
            /* [in] */ BSTR bstrModelPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setPosition )( 
            IModel * This,
            /* [in] */ IGeoPoint *pIGeoPoint);
        
        END_INTERFACE
    } IModelVtbl;

    interface IModel
    {
        CONST_VTBL struct IModelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IModel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IModel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IModel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IModel_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IModel_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IModel_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IModel_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IModel_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IModel_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IModel_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IModel_get_classType(This,pEarthObjectClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pEarthObjectClassType) ) 

#define IModel_put_visible(This,ifVisible)	\
    ( (This)->lpVtbl -> put_visible(This,ifVisible) ) 

#define IModel_get_visible(This,pIfVisible)	\
    ( (This)->lpVtbl -> get_visible(This,pIfVisible) ) 

#define IModel_get_enabled(This,pIfEnabled)	\
    ( (This)->lpVtbl -> get_enabled(This,pIfEnabled) ) 


#define IModel_setModelPath(This,bstrModelPath)	\
    ( (This)->lpVtbl -> setModelPath(This,bstrModelPath) ) 

#define IModel_setPosition(This,pIGeoPoint)	\
    ( (This)->lpVtbl -> setPosition(This,pIGeoPoint) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IModel_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0057 */
/* [local] */ 

#define	ITextLabelIdsCount	( 4 )

#define	ITextLabelBeginId	( ( IEarthObjectBeginId + IEarthObjectIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0057_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0057_v0_0_s_ifspec;

#ifndef __ITextLabel_INTERFACE_DEFINED__
#define __ITextLabel_INTERFACE_DEFINED__

/* interface ITextLabel */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITextLabel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CE04978B-CFFD-4751-B8D4-0EC5D48B62FD")
    ITextLabel : public IEarthObject
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setPosition( 
            /* [in] */ IGeoPoint *pIGeoPoint) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getPosition( 
            /* [retval][out] */ IGeoPoint **pIGeoPoint) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setText( 
            /* [in] */ BSTR strText) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getText( 
            /* [retval][out] */ BSTR *pStrText) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITextLabelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITextLabel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITextLabel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITextLabel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITextLabel * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITextLabel * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITextLabel * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITextLabel * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            ITextLabel * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            ITextLabel * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            ITextLabel * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            ITextLabel * This,
            /* [retval][out] */ EarthObjectClassType *pEarthObjectClassType);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_visible )( 
            ITextLabel * This,
            /* [in] */ VARIANT_BOOL ifVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_visible )( 
            ITextLabel * This,
            /* [retval][out] */ VARIANT_BOOL *pIfVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_enabled )( 
            ITextLabel * This,
            /* [retval][out] */ VARIANT_BOOL *pIfEnabled);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setPosition )( 
            ITextLabel * This,
            /* [in] */ IGeoPoint *pIGeoPoint);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getPosition )( 
            ITextLabel * This,
            /* [retval][out] */ IGeoPoint **pIGeoPoint);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setText )( 
            ITextLabel * This,
            /* [in] */ BSTR strText);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getText )( 
            ITextLabel * This,
            /* [retval][out] */ BSTR *pStrText);
        
        END_INTERFACE
    } ITextLabelVtbl;

    interface ITextLabel
    {
        CONST_VTBL struct ITextLabelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITextLabel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITextLabel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITextLabel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITextLabel_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITextLabel_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITextLabel_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITextLabel_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITextLabel_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define ITextLabel_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define ITextLabel_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define ITextLabel_get_classType(This,pEarthObjectClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pEarthObjectClassType) ) 

#define ITextLabel_put_visible(This,ifVisible)	\
    ( (This)->lpVtbl -> put_visible(This,ifVisible) ) 

#define ITextLabel_get_visible(This,pIfVisible)	\
    ( (This)->lpVtbl -> get_visible(This,pIfVisible) ) 

#define ITextLabel_get_enabled(This,pIfEnabled)	\
    ( (This)->lpVtbl -> get_enabled(This,pIfEnabled) ) 


#define ITextLabel_setPosition(This,pIGeoPoint)	\
    ( (This)->lpVtbl -> setPosition(This,pIGeoPoint) ) 

#define ITextLabel_getPosition(This,pIGeoPoint)	\
    ( (This)->lpVtbl -> getPosition(This,pIGeoPoint) ) 

#define ITextLabel_setText(This,strText)	\
    ( (This)->lpVtbl -> setText(This,strText) ) 

#define ITextLabel_getText(This,pStrText)	\
    ( (This)->lpVtbl -> getText(This,pStrText) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITextLabel_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0058 */
/* [local] */ 

#define	IRectanglePrimitiveIdsCount	( 3 )

#define	IRectanglePrimitiveBeginId	( ( IEarthObjectBeginId + IEarthObjectIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0058_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0058_v0_0_s_ifspec;

#ifndef __IRectanglePrimitive_INTERFACE_DEFINED__
#define __IRectanglePrimitive_INTERFACE_DEFINED__

/* interface IRectanglePrimitive */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRectanglePrimitive;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("17BF3870-1C64-4905-A6E9-8479139D63A8")
    IRectanglePrimitive : public IEarthObject
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setPosition( 
            /* [in] */ IGeoPoint *pGeoPoint) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setWidth( 
            /* [in] */ ILinear *pILinear) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setHeight( 
            /* [in] */ ILinear *pILinear) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRectanglePrimitiveVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRectanglePrimitive * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRectanglePrimitive * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRectanglePrimitive * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRectanglePrimitive * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRectanglePrimitive * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRectanglePrimitive * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRectanglePrimitive * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IRectanglePrimitive * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IRectanglePrimitive * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IRectanglePrimitive * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            IRectanglePrimitive * This,
            /* [retval][out] */ EarthObjectClassType *pEarthObjectClassType);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_visible )( 
            IRectanglePrimitive * This,
            /* [in] */ VARIANT_BOOL ifVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_visible )( 
            IRectanglePrimitive * This,
            /* [retval][out] */ VARIANT_BOOL *pIfVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_enabled )( 
            IRectanglePrimitive * This,
            /* [retval][out] */ VARIANT_BOOL *pIfEnabled);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setPosition )( 
            IRectanglePrimitive * This,
            /* [in] */ IGeoPoint *pGeoPoint);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setWidth )( 
            IRectanglePrimitive * This,
            /* [in] */ ILinear *pILinear);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setHeight )( 
            IRectanglePrimitive * This,
            /* [in] */ ILinear *pILinear);
        
        END_INTERFACE
    } IRectanglePrimitiveVtbl;

    interface IRectanglePrimitive
    {
        CONST_VTBL struct IRectanglePrimitiveVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRectanglePrimitive_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRectanglePrimitive_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRectanglePrimitive_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRectanglePrimitive_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRectanglePrimitive_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRectanglePrimitive_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRectanglePrimitive_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRectanglePrimitive_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IRectanglePrimitive_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IRectanglePrimitive_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IRectanglePrimitive_get_classType(This,pEarthObjectClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pEarthObjectClassType) ) 

#define IRectanglePrimitive_put_visible(This,ifVisible)	\
    ( (This)->lpVtbl -> put_visible(This,ifVisible) ) 

#define IRectanglePrimitive_get_visible(This,pIfVisible)	\
    ( (This)->lpVtbl -> get_visible(This,pIfVisible) ) 

#define IRectanglePrimitive_get_enabled(This,pIfEnabled)	\
    ( (This)->lpVtbl -> get_enabled(This,pIfEnabled) ) 


#define IRectanglePrimitive_setPosition(This,pGeoPoint)	\
    ( (This)->lpVtbl -> setPosition(This,pGeoPoint) ) 

#define IRectanglePrimitive_setWidth(This,pILinear)	\
    ( (This)->lpVtbl -> setWidth(This,pILinear) ) 

#define IRectanglePrimitive_setHeight(This,pILinear)	\
    ( (This)->lpVtbl -> setHeight(This,pILinear) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRectanglePrimitive_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0059 */
/* [local] */ 

#define	IEllipsePrimitiveIdsCount	( 7 )

#define	IEllipsePrimitiveBeiginId	( ( IEarthObjectBeginId + IEarthObjectIdsCount )  )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0059_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0059_v0_0_s_ifspec;

#ifndef __IEllipsePrimitive_INTERFACE_DEFINED__
#define __IEllipsePrimitive_INTERFACE_DEFINED__

/* interface IEllipsePrimitive */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IEllipsePrimitive;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("762E9F97-674F-4821-9746-5E262607EB67")
    IEllipsePrimitive : public IEarthObject
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setPosition( 
            /* [in] */ IGeoPoint *pIGeoPoint) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setRadiusMajor( 
            /* [in] */ ILinear *pILinear) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setRadiusMinor( 
            /* [in] */ ILinear *pILinear) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setRotationAngle( 
            /* [in] */ IAngular *pIAngular) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setArcStart( 
            /* [in] */ IAngular *pIAngular) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setArcEnd( 
            /* [in] */ IAngular *pIAngular) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setPie( 
            /* [in] */ VARIANT_BOOL vbPie) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEllipsePrimitiveVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEllipsePrimitive * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEllipsePrimitive * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEllipsePrimitive * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEllipsePrimitive * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEllipsePrimitive * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEllipsePrimitive * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEllipsePrimitive * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IEllipsePrimitive * This,
            /* [retval][out] */ INT *piData);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_data )( 
            IEllipsePrimitive * This,
            /* [in] */ INT iData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *equal )( 
            IEllipsePrimitive * This,
            /* [in] */ IEarthDispatch *pIEarthDispatch,
            /* [retval][out] */ VARIANT_BOOL *pIfEqual);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_classType )( 
            IEllipsePrimitive * This,
            /* [retval][out] */ EarthObjectClassType *pEarthObjectClassType);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_visible )( 
            IEllipsePrimitive * This,
            /* [in] */ VARIANT_BOOL ifVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_visible )( 
            IEllipsePrimitive * This,
            /* [retval][out] */ VARIANT_BOOL *pIfVisible);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_enabled )( 
            IEllipsePrimitive * This,
            /* [retval][out] */ VARIANT_BOOL *pIfEnabled);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setPosition )( 
            IEllipsePrimitive * This,
            /* [in] */ IGeoPoint *pIGeoPoint);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setRadiusMajor )( 
            IEllipsePrimitive * This,
            /* [in] */ ILinear *pILinear);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setRadiusMinor )( 
            IEllipsePrimitive * This,
            /* [in] */ ILinear *pILinear);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setRotationAngle )( 
            IEllipsePrimitive * This,
            /* [in] */ IAngular *pIAngular);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setArcStart )( 
            IEllipsePrimitive * This,
            /* [in] */ IAngular *pIAngular);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setArcEnd )( 
            IEllipsePrimitive * This,
            /* [in] */ IAngular *pIAngular);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setPie )( 
            IEllipsePrimitive * This,
            /* [in] */ VARIANT_BOOL vbPie);
        
        END_INTERFACE
    } IEllipsePrimitiveVtbl;

    interface IEllipsePrimitive
    {
        CONST_VTBL struct IEllipsePrimitiveVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEllipsePrimitive_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEllipsePrimitive_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEllipsePrimitive_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEllipsePrimitive_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEllipsePrimitive_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEllipsePrimitive_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEllipsePrimitive_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEllipsePrimitive_get_data(This,piData)	\
    ( (This)->lpVtbl -> get_data(This,piData) ) 

#define IEllipsePrimitive_put_data(This,iData)	\
    ( (This)->lpVtbl -> put_data(This,iData) ) 

#define IEllipsePrimitive_equal(This,pIEarthDispatch,pIfEqual)	\
    ( (This)->lpVtbl -> equal(This,pIEarthDispatch,pIfEqual) ) 


#define IEllipsePrimitive_get_classType(This,pEarthObjectClassType)	\
    ( (This)->lpVtbl -> get_classType(This,pEarthObjectClassType) ) 

#define IEllipsePrimitive_put_visible(This,ifVisible)	\
    ( (This)->lpVtbl -> put_visible(This,ifVisible) ) 

#define IEllipsePrimitive_get_visible(This,pIfVisible)	\
    ( (This)->lpVtbl -> get_visible(This,pIfVisible) ) 

#define IEllipsePrimitive_get_enabled(This,pIfEnabled)	\
    ( (This)->lpVtbl -> get_enabled(This,pIfEnabled) ) 


#define IEllipsePrimitive_setPosition(This,pIGeoPoint)	\
    ( (This)->lpVtbl -> setPosition(This,pIGeoPoint) ) 

#define IEllipsePrimitive_setRadiusMajor(This,pILinear)	\
    ( (This)->lpVtbl -> setRadiusMajor(This,pILinear) ) 

#define IEllipsePrimitive_setRadiusMinor(This,pILinear)	\
    ( (This)->lpVtbl -> setRadiusMinor(This,pILinear) ) 

#define IEllipsePrimitive_setRotationAngle(This,pIAngular)	\
    ( (This)->lpVtbl -> setRotationAngle(This,pIAngular) ) 

#define IEllipsePrimitive_setArcStart(This,pIAngular)	\
    ( (This)->lpVtbl -> setArcStart(This,pIAngular) ) 

#define IEllipsePrimitive_setArcEnd(This,pIAngular)	\
    ( (This)->lpVtbl -> setArcEnd(This,pIAngular) ) 

#define IEllipsePrimitive_setPie(This,vbPie)	\
    ( (This)->lpVtbl -> setPie(This,vbPie) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEllipsePrimitive_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_osgEarthX_COM_0000_0060 */
/* [local] */ 

#define	IObjectFactoryIdsCount	( 5 )

#define	IObjectFactoryBeginId	( 0 )



extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0060_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_osgEarthX_COM_0000_0060_v0_0_s_ifspec;

#ifndef __IObjectFactory_INTERFACE_DEFINED__
#define __IObjectFactory_INTERFACE_DEFINED__

/* interface IObjectFactory */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IObjectFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6BA1D54B-F2A8-48FF-AC76-BF786273E1A2")
    IObjectFactory : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE createByEarthObjectClassType( 
            /* [in] */ EarthObjectClassType classType,
            /* [retval][out] */ IDispatch **ppIDispatch) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE createByEarthClassType( 
            /* [in] */ EarthClassType classType,
            /* [retval][out] */ IDispatch **ppIDispatch) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE createBySourceClassType( 
            /* [in] */ SourceClassType classType,
            /* [retval][out] */ IDispatch **ppIDispatch) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE createByGeoClassType( 
            /* [in] */ GeoClassType classType,
            /* [retval][out] */ IDispatch **ppIDisaptch) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE createByUnitClassType( 
            /* [in] */ UnitClassType classType,
            /* [retval][out] */ IDispatch **ppIDispatch) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IObjectFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IObjectFactory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IObjectFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IObjectFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IObjectFactory * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IObjectFactory * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IObjectFactory * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IObjectFactory * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *createByEarthObjectClassType )( 
            IObjectFactory * This,
            /* [in] */ EarthObjectClassType classType,
            /* [retval][out] */ IDispatch **ppIDispatch);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *createByEarthClassType )( 
            IObjectFactory * This,
            /* [in] */ EarthClassType classType,
            /* [retval][out] */ IDispatch **ppIDispatch);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *createBySourceClassType )( 
            IObjectFactory * This,
            /* [in] */ SourceClassType classType,
            /* [retval][out] */ IDispatch **ppIDispatch);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *createByGeoClassType )( 
            IObjectFactory * This,
            /* [in] */ GeoClassType classType,
            /* [retval][out] */ IDispatch **ppIDisaptch);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *createByUnitClassType )( 
            IObjectFactory * This,
            /* [in] */ UnitClassType classType,
            /* [retval][out] */ IDispatch **ppIDispatch);
        
        END_INTERFACE
    } IObjectFactoryVtbl;

    interface IObjectFactory
    {
        CONST_VTBL struct IObjectFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjectFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IObjectFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IObjectFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IObjectFactory_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IObjectFactory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IObjectFactory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IObjectFactory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IObjectFactory_createByEarthObjectClassType(This,classType,ppIDispatch)	\
    ( (This)->lpVtbl -> createByEarthObjectClassType(This,classType,ppIDispatch) ) 

#define IObjectFactory_createByEarthClassType(This,classType,ppIDispatch)	\
    ( (This)->lpVtbl -> createByEarthClassType(This,classType,ppIDispatch) ) 

#define IObjectFactory_createBySourceClassType(This,classType,ppIDispatch)	\
    ( (This)->lpVtbl -> createBySourceClassType(This,classType,ppIDispatch) ) 

#define IObjectFactory_createByGeoClassType(This,classType,ppIDisaptch)	\
    ( (This)->lpVtbl -> createByGeoClassType(This,classType,ppIDisaptch) ) 

#define IObjectFactory_createByUnitClassType(This,classType,ppIDispatch)	\
    ( (This)->lpVtbl -> createByUnitClassType(This,classType,ppIDispatch) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObjectFactory_INTERFACE_DEFINED__ */


#ifndef __IComponentRegistrar_INTERFACE_DEFINED__
#define __IComponentRegistrar_INTERFACE_DEFINED__

/* interface IComponentRegistrar */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IComponentRegistrar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a817e7a2-43fa-11d0-9e44-00aa00b6770a")
    IComponentRegistrar : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Attach( 
            /* [in] */ BSTR bstrPath) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RegisterAll( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE UnregisterAll( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetComponents( 
            /* [out] */ SAFEARRAY * *pbstrCLSIDs,
            /* [out] */ SAFEARRAY * *pbstrDescriptions) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RegisterComponent( 
            /* [in] */ BSTR bstrCLSID) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE UnregisterComponent( 
            /* [in] */ BSTR bstrCLSID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IComponentRegistrarVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IComponentRegistrar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IComponentRegistrar * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IComponentRegistrar * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IComponentRegistrar * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IComponentRegistrar * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IComponentRegistrar * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IComponentRegistrar * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Attach )( 
            IComponentRegistrar * This,
            /* [in] */ BSTR bstrPath);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RegisterAll )( 
            IComponentRegistrar * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *UnregisterAll )( 
            IComponentRegistrar * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetComponents )( 
            IComponentRegistrar * This,
            /* [out] */ SAFEARRAY * *pbstrCLSIDs,
            /* [out] */ SAFEARRAY * *pbstrDescriptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RegisterComponent )( 
            IComponentRegistrar * This,
            /* [in] */ BSTR bstrCLSID);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *UnregisterComponent )( 
            IComponentRegistrar * This,
            /* [in] */ BSTR bstrCLSID);
        
        END_INTERFACE
    } IComponentRegistrarVtbl;

    interface IComponentRegistrar
    {
        CONST_VTBL struct IComponentRegistrarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IComponentRegistrar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IComponentRegistrar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IComponentRegistrar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IComponentRegistrar_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IComponentRegistrar_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IComponentRegistrar_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IComponentRegistrar_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IComponentRegistrar_Attach(This,bstrPath)	\
    ( (This)->lpVtbl -> Attach(This,bstrPath) ) 

#define IComponentRegistrar_RegisterAll(This)	\
    ( (This)->lpVtbl -> RegisterAll(This) ) 

#define IComponentRegistrar_UnregisterAll(This)	\
    ( (This)->lpVtbl -> UnregisterAll(This) ) 

#define IComponentRegistrar_GetComponents(This,pbstrCLSIDs,pbstrDescriptions)	\
    ( (This)->lpVtbl -> GetComponents(This,pbstrCLSIDs,pbstrDescriptions) ) 

#define IComponentRegistrar_RegisterComponent(This,bstrCLSID)	\
    ( (This)->lpVtbl -> RegisterComponent(This,bstrCLSID) ) 

#define IComponentRegistrar_UnregisterComponent(This,bstrCLSID)	\
    ( (This)->lpVtbl -> UnregisterComponent(This,bstrCLSID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IComponentRegistrar_INTERFACE_DEFINED__ */



#ifndef __osgEarthX_COMLib_LIBRARY_DEFINED__
#define __osgEarthX_COMLib_LIBRARY_DEFINED__

/* library osgEarthX_COMLib */
/* [custom][version][uuid] */ 

#define	IEarthDispIdsCount	( 1 )

#define	IEarthDispBeginId	( 0 )

#define	IEarthObjectEventsIdsCounts	( 1 )

#define	IEarthObjectEventsBeginId	( ( IEarthDispBeginId + IEarthDispIdsCount )  )

#define	ILayerEventsIdsCount	( 2 )

#define	ILayerEventsBeginId	( ( IEarthObjectEventsBeginId + IEarthObjectEventsIdsCounts )  )

#define	IImageSurfaceEventsIdsCount	( 0 )

#define	IImageSurfaceEventsBeginId	( ( ILayerEventsBeginId + ILayerEventsIdsCount )  )

#define	IVectorSurfaceLayerEventsIdsCount	( 0 )

#define	IVectorSurfaceLayerEventsBeginId	( ( ILayerEventsBeginId + ILayerEventsIdsCount )  )


EXTERN_C const IID LIBID_osgEarthX_COMLib;

EXTERN_C const CLSID CLSID_CompReg;

#ifdef __cplusplus

class DECLSPEC_UUID("E1D574DB-7598-45BD-A68F-EF31936B3A4D")
CompReg;
#endif

EXTERN_C const CLSID CLSID_SpatialReference;

#ifdef __cplusplus

class DECLSPEC_UUID("7F036173-0314-468E-BB24-5DD0F30913EB")
SpatialReference;
#endif

EXTERN_C const CLSID CLSID_GeoPoint;

#ifdef __cplusplus

class DECLSPEC_UUID("CDD8D0AD-4D70-4D9D-9A9A-CD6129AA40A1")
GeoPoint;
#endif

EXTERN_C const CLSID CLSID_Feature;

#ifdef __cplusplus

class DECLSPEC_UUID("6E40A12C-83A5-4DAB-B434-4C4DD1795228")
Feature;
#endif

EXTERN_C const CLSID CLSID_Linear;

#ifdef __cplusplus

class DECLSPEC_UUID("5FB5B5A4-439D-4216-AC03-597913458F0F")
Linear;
#endif

EXTERN_C const CLSID CLSID_Angular;

#ifdef __cplusplus

class DECLSPEC_UUID("0EC68524-C8AF-4741-AA7C-A9256284A23B")
Angular;
#endif

EXTERN_C const CLSID CLSID_Vec3d;

#ifdef __cplusplus

class DECLSPEC_UUID("2A014170-D5A8-4855-95FF-46FEC96BE032")
Vec3d;
#endif

EXTERN_C const CLSID CLSID_LineStringGeometry;

#ifdef __cplusplus

class DECLSPEC_UUID("4E5309AF-E793-4726-82B8-DF2E5AC033B3")
LineStringGeometry;
#endif

EXTERN_C const CLSID CLSID_RingGeometry;

#ifdef __cplusplus

class DECLSPEC_UUID("C82E5AFE-E7D9-431F-83A6-EDF43150BBC3")
RingGeometry;
#endif

EXTERN_C const CLSID CLSID_PolygonGeometry;

#ifdef __cplusplus

class DECLSPEC_UUID("C23F8685-B904-4732-8953-27E589B81B16")
PolygonGeometry;
#endif

EXTERN_C const CLSID CLSID_FeatureSourceOGR;

#ifdef __cplusplus

class DECLSPEC_UUID("14942113-C795-4742-9AEB-C629BD1B985F")
FeatureSourceOGR;
#endif

EXTERN_C const CLSID CLSID_FeatureSourceTFS;

#ifdef __cplusplus

class DECLSPEC_UUID("DAD6DC20-3604-4A0B-BD9C-156BC4C6DF96")
FeatureSourceTFS;
#endif

EXTERN_C const CLSID CLSID_FeatureSourceWFS;

#ifdef __cplusplus

class DECLSPEC_UUID("4CADBE28-A421-41A9-80DE-5667D564A14A")
FeatureSourceWFS;
#endif

EXTERN_C const CLSID CLSID_TileSourceAGGLite;

#ifdef __cplusplus

class DECLSPEC_UUID("DDE98432-760A-4543-B561-E2A1FD35AC64")
TileSourceAGGLite;
#endif

EXTERN_C const CLSID CLSID_TileSourceArcGIS;

#ifdef __cplusplus

class DECLSPEC_UUID("D2851F71-50D9-4795-A98B-87D22308EB09")
TileSourceArcGIS;
#endif

EXTERN_C const CLSID CLSID_TileSourceBing;

#ifdef __cplusplus

class DECLSPEC_UUID("505F7703-C552-4E82-8AAC-11D69635458B")
TileSourceBing;
#endif

EXTERN_C const CLSID CLSID_TileSourceColorRamp;

#ifdef __cplusplus

class DECLSPEC_UUID("EB7CA566-38BD-4E3F-BA85-4DF2047B346C")
TileSourceColorRamp;
#endif

EXTERN_C const CLSID CLSID_TileSourceDebug;

#ifdef __cplusplus

class DECLSPEC_UUID("AA2B4DC0-28A0-4B02-9D10-78D2F41B3BCE")
TileSourceDebug;
#endif

EXTERN_C const CLSID CLSID_TileSourceGDAL;

#ifdef __cplusplus

class DECLSPEC_UUID("C4364DD5-68CB-4655-9FCD-02618F4C84A1")
TileSourceGDAL;
#endif

EXTERN_C const CLSID CLSID_TileSourceMBTiles;

#ifdef __cplusplus

class DECLSPEC_UUID("A29D182D-4E4A-40F0-907C-EEB531542792")
TileSourceMBTiles;
#endif

EXTERN_C const CLSID CLSID_TileSourceNoise;

#ifdef __cplusplus

class DECLSPEC_UUID("ED990C2C-1184-4F77-BF36-75314DE2FE60")
TileSourceNoise;
#endif

EXTERN_C const CLSID CLSID_TileSourceOSG;

#ifdef __cplusplus

class DECLSPEC_UUID("A84048C7-AB2A-4543-BDF5-C9F1FEC8D994")
TileSourceOSG;
#endif

EXTERN_C const CLSID CLSID_TileSourceTileCache;

#ifdef __cplusplus

class DECLSPEC_UUID("0D17A4D2-3655-4228-BAB3-4F7ED8A44D4B")
TileSourceTileCache;
#endif

EXTERN_C const CLSID CLSID_TileSourceTileService;

#ifdef __cplusplus

class DECLSPEC_UUID("0FCD1C2B-B8AA-491A-9BBA-EC4AAA006C58")
TileSourceTileService;
#endif

EXTERN_C const CLSID CLSID_TileSourceTMS;

#ifdef __cplusplus

class DECLSPEC_UUID("E32A954B-93B0-49E7-A665-517BF145FA35")
TileSourceTMS;
#endif

EXTERN_C const CLSID CLSID_TileSourceVPB;

#ifdef __cplusplus

class DECLSPEC_UUID("6473EA0B-DF58-4F91-B1C1-A74D492AEFAC")
TileSourceVPB;
#endif

EXTERN_C const CLSID CLSID_TileSourceWCS;

#ifdef __cplusplus

class DECLSPEC_UUID("4A78D131-0D24-4443-882B-793A57E1E338")
TileSourceWCS;
#endif

EXTERN_C const CLSID CLSID_TileSourceWMS;

#ifdef __cplusplus

class DECLSPEC_UUID("11CD9996-D82F-4FB1-A78D-27C13154BC53")
TileSourceWMS;
#endif

EXTERN_C const CLSID CLSID_TileSourceXYZ;

#ifdef __cplusplus

class DECLSPEC_UUID("71D93485-C74B-45BC-8EA8-F45C0B4CC551")
TileSourceXYZ;
#endif

EXTERN_C const CLSID CLSID_TileSourceYahoo;

#ifdef __cplusplus

class DECLSPEC_UUID("3A31E1FC-ACC7-4B10-B6E4-F09C42F17E88")
TileSourceYahoo;
#endif

EXTERN_C const CLSID CLSID_VectorSourceGeom;

#ifdef __cplusplus

class DECLSPEC_UUID("880341A9-E77B-4042-9D26-676DC7633B3D")
VectorSourceGeom;
#endif

EXTERN_C const CLSID CLSID_VectorSourceSimple;

#ifdef __cplusplus

class DECLSPEC_UUID("E09E4A60-5580-47D2-B328-8D3AD28FA5B9")
VectorSourceSimple;
#endif

EXTERN_C const CLSID CLSID_VectorSourceStencil;

#ifdef __cplusplus

class DECLSPEC_UUID("7B70CEBA-2A61-4E0D-84E9-8B27F5D059C2")
VectorSourceStencil;
#endif

EXTERN_C const CLSID CLSID_Style;

#ifdef __cplusplus

class DECLSPEC_UUID("F3902E10-30D8-436D-B652-C3F8B28AD69C")
Style;
#endif

#ifndef ___IEarthCtrlEvents_DISPINTERFACE_DEFINED__
#define ___IEarthCtrlEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IEarthCtrlEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__IEarthCtrlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("4DCD640C-CD17-4192-B28E-B0E0D234A40C")
    _IEarthCtrlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IEarthCtrlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IEarthCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IEarthCtrlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IEarthCtrlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IEarthCtrlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IEarthCtrlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IEarthCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IEarthCtrlEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _IEarthCtrlEventsVtbl;

    interface _IEarthCtrlEvents
    {
        CONST_VTBL struct _IEarthCtrlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IEarthCtrlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IEarthCtrlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IEarthCtrlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IEarthCtrlEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IEarthCtrlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IEarthCtrlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IEarthCtrlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IEarthCtrlEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_EarthCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("41CEF06B-7E2B-4422-A166-CF8DDC575CA7")
EarthCtrl;
#endif

#ifndef ___IEarthTreeCtrlEvents_DISPINTERFACE_DEFINED__
#define ___IEarthTreeCtrlEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IEarthTreeCtrlEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__IEarthTreeCtrlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("DE0B6BEB-E4A2-405E-8B90-86230C5514B3")
    _IEarthTreeCtrlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IEarthTreeCtrlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IEarthTreeCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IEarthTreeCtrlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IEarthTreeCtrlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IEarthTreeCtrlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IEarthTreeCtrlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IEarthTreeCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IEarthTreeCtrlEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _IEarthTreeCtrlEventsVtbl;

    interface _IEarthTreeCtrlEvents
    {
        CONST_VTBL struct _IEarthTreeCtrlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IEarthTreeCtrlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IEarthTreeCtrlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IEarthTreeCtrlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IEarthTreeCtrlEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IEarthTreeCtrlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IEarthTreeCtrlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IEarthTreeCtrlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IEarthTreeCtrlEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_EarthTreeCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("07D658FB-58CA-4106-9BA7-A94C1CD4603F")
EarthTreeCtrl;
#endif

#ifndef ___IEarthViewerEvents_DISPINTERFACE_DEFINED__
#define ___IEarthViewerEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IEarthViewerEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__IEarthViewerEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("A34A90F4-722C-4ADF-88BB-D9F363D25DCF")
    _IEarthViewerEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IEarthViewerEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IEarthViewerEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IEarthViewerEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IEarthViewerEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IEarthViewerEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IEarthViewerEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IEarthViewerEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IEarthViewerEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _IEarthViewerEventsVtbl;

    interface _IEarthViewerEvents
    {
        CONST_VTBL struct _IEarthViewerEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IEarthViewerEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IEarthViewerEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IEarthViewerEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IEarthViewerEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IEarthViewerEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IEarthViewerEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IEarthViewerEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IEarthViewerEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_EarthViewer;

#ifdef __cplusplus

class DECLSPEC_UUID("FD019183-F764-4213-8DB4-A27199418BD1")
EarthViewer;
#endif

EXTERN_C const CLSID CLSID_EarthGroup;

#ifdef __cplusplus

class DECLSPEC_UUID("E0627211-67BC-4CFE-899E-F258E1AC5651")
EarthGroup;
#endif

EXTERN_C const CLSID CLSID_EarthMap;

#ifdef __cplusplus

class DECLSPEC_UUID("67565EB8-A9A6-4109-B035-8044A08AAFA9")
EarthMap;
#endif

#ifndef __IEarthDisp_INTERFACE_DEFINED__
#define __IEarthDisp_INTERFACE_DEFINED__

/* interface IEarthDisp */
/* [uuid] */ 


EXTERN_C const IID IID_IEarthDisp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1b0eb57c-f8fb-412d-b8f8-3115430c7370")
    IEarthDisp
    {
    public:
        BEGIN_INTERFACE
        END_INTERFACE
    };
    
#else 	/* C style interface */

    typedef struct IEarthDispVtbl
    {
        BEGIN_INTERFACE
        
        END_INTERFACE
    } IEarthDispVtbl;

    interface IEarthDisp
    {
        CONST_VTBL struct IEarthDispVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEarthDisp_INTERFACE_DEFINED__ */


#ifndef __IEarthObjectEvents_INTERFACE_DEFINED__
#define __IEarthObjectEvents_INTERFACE_DEFINED__

/* interface IEarthObjectEvents */
/* [object][uuid] */ 


EXTERN_C const IID IID_IEarthObjectEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c99068c9-a22a-4282-9e6f-98e977b5c52b")
    IEarthObjectEvents : public IEarthDisp
    {
    public:
        virtual /* [id] */ void STDMETHODCALLTYPE onInitializeCompleted( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEarthObjectEventsVtbl
    {
        BEGIN_INTERFACE
        
        /* [id] */ void ( STDMETHODCALLTYPE *onInitializeCompleted )( 
            IEarthObjectEvents * This);
        
        END_INTERFACE
    } IEarthObjectEventsVtbl;

    interface IEarthObjectEvents
    {
        CONST_VTBL struct IEarthObjectEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS



#define IEarthObjectEvents_onInitializeCompleted(This)	\
    ( (This)->lpVtbl -> onInitializeCompleted(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEarthObjectEvents_INTERFACE_DEFINED__ */


#ifndef __ILayerEvents_INTERFACE_DEFINED__
#define __ILayerEvents_INTERFACE_DEFINED__

/* interface ILayerEvents */
/* [object][uuid] */ 


EXTERN_C const IID IID_ILayerEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e80d0428-dba8-412e-83ee-bec02cbc81a3")
    ILayerEvents : public IEarthObjectEvents
    {
    public:
        virtual /* [id] */ void STDMETHODCALLTYPE onVisible( void) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE onHidden( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ILayerEventsVtbl
    {
        BEGIN_INTERFACE
        
        /* [id] */ void ( STDMETHODCALLTYPE *onInitializeCompleted )( 
            ILayerEvents * This);
        
        /* [id] */ void ( STDMETHODCALLTYPE *onVisible )( 
            ILayerEvents * This);
        
        /* [id] */ void ( STDMETHODCALLTYPE *onHidden )( 
            ILayerEvents * This);
        
        END_INTERFACE
    } ILayerEventsVtbl;

    interface ILayerEvents
    {
        CONST_VTBL struct ILayerEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS



#define ILayerEvents_onInitializeCompleted(This)	\
    ( (This)->lpVtbl -> onInitializeCompleted(This) ) 


#define ILayerEvents_onVisible(This)	\
    ( (This)->lpVtbl -> onVisible(This) ) 

#define ILayerEvents_onHidden(This)	\
    ( (This)->lpVtbl -> onHidden(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILayerEvents_INTERFACE_DEFINED__ */


#ifndef __IImageSurfaceEvents_INTERFACE_DEFINED__
#define __IImageSurfaceEvents_INTERFACE_DEFINED__

/* interface IImageSurfaceEvents */
/* [object][uuid] */ 


EXTERN_C const IID IID_IImageSurfaceEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b53dbf9c-e32b-46c7-986b-7fc94c169f3d")
    IImageSurfaceEvents : public ILayerEvents
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IImageSurfaceEventsVtbl
    {
        BEGIN_INTERFACE
        
        /* [id] */ void ( STDMETHODCALLTYPE *onInitializeCompleted )( 
            IImageSurfaceEvents * This);
        
        /* [id] */ void ( STDMETHODCALLTYPE *onVisible )( 
            IImageSurfaceEvents * This);
        
        /* [id] */ void ( STDMETHODCALLTYPE *onHidden )( 
            IImageSurfaceEvents * This);
        
        END_INTERFACE
    } IImageSurfaceEventsVtbl;

    interface IImageSurfaceEvents
    {
        CONST_VTBL struct IImageSurfaceEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS



#define IImageSurfaceEvents_onInitializeCompleted(This)	\
    ( (This)->lpVtbl -> onInitializeCompleted(This) ) 


#define IImageSurfaceEvents_onVisible(This)	\
    ( (This)->lpVtbl -> onVisible(This) ) 

#define IImageSurfaceEvents_onHidden(This)	\
    ( (This)->lpVtbl -> onHidden(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IImageSurfaceEvents_INTERFACE_DEFINED__ */


#ifndef __IDispImageSurfaceLayerEvents_DISPINTERFACE_DEFINED__
#define __IDispImageSurfaceLayerEvents_DISPINTERFACE_DEFINED__

/* dispinterface IDispImageSurfaceLayerEvents */
/* [uuid] */ 


EXTERN_C const IID DIID_IDispImageSurfaceLayerEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("df7442fe-8ab4-47df-b32c-36f80bf8e107")
    IDispImageSurfaceLayerEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IDispImageSurfaceLayerEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDispImageSurfaceLayerEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDispImageSurfaceLayerEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDispImageSurfaceLayerEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDispImageSurfaceLayerEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDispImageSurfaceLayerEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDispImageSurfaceLayerEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDispImageSurfaceLayerEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IDispImageSurfaceLayerEventsVtbl;

    interface IDispImageSurfaceLayerEvents
    {
        CONST_VTBL struct IDispImageSurfaceLayerEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispImageSurfaceLayerEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDispImageSurfaceLayerEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDispImageSurfaceLayerEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDispImageSurfaceLayerEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDispImageSurfaceLayerEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDispImageSurfaceLayerEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDispImageSurfaceLayerEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IDispImageSurfaceLayerEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ImageSurfaceLayer;

#ifdef __cplusplus

class DECLSPEC_UUID("91F28979-3713-4F11-B893-F491585D1E69")
ImageSurfaceLayer;
#endif

#ifndef __IVectorSurfaceLayerEvents_INTERFACE_DEFINED__
#define __IVectorSurfaceLayerEvents_INTERFACE_DEFINED__

/* interface IVectorSurfaceLayerEvents */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVectorSurfaceLayerEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e9bdab8e-525d-4735-818f-4566b9de41a1")
    IVectorSurfaceLayerEvents : public ILayerEvents
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IVectorSurfaceLayerEventsVtbl
    {
        BEGIN_INTERFACE
        
        /* [id] */ void ( STDMETHODCALLTYPE *onInitializeCompleted )( 
            IVectorSurfaceLayerEvents * This);
        
        /* [id] */ void ( STDMETHODCALLTYPE *onVisible )( 
            IVectorSurfaceLayerEvents * This);
        
        /* [id] */ void ( STDMETHODCALLTYPE *onHidden )( 
            IVectorSurfaceLayerEvents * This);
        
        END_INTERFACE
    } IVectorSurfaceLayerEventsVtbl;

    interface IVectorSurfaceLayerEvents
    {
        CONST_VTBL struct IVectorSurfaceLayerEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS



#define IVectorSurfaceLayerEvents_onInitializeCompleted(This)	\
    ( (This)->lpVtbl -> onInitializeCompleted(This) ) 


#define IVectorSurfaceLayerEvents_onVisible(This)	\
    ( (This)->lpVtbl -> onVisible(This) ) 

#define IVectorSurfaceLayerEvents_onHidden(This)	\
    ( (This)->lpVtbl -> onHidden(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVectorSurfaceLayerEvents_INTERFACE_DEFINED__ */


#ifndef __IDispVectorSurfaceLayerEvents_DISPINTERFACE_DEFINED__
#define __IDispVectorSurfaceLayerEvents_DISPINTERFACE_DEFINED__

/* dispinterface IDispVectorSurfaceLayerEvents */
/* [uuid] */ 


EXTERN_C const IID DIID_IDispVectorSurfaceLayerEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("6be570c8-a647-49e2-8372-91b290ba8dde")
    IDispVectorSurfaceLayerEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IDispVectorSurfaceLayerEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDispVectorSurfaceLayerEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDispVectorSurfaceLayerEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDispVectorSurfaceLayerEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDispVectorSurfaceLayerEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDispVectorSurfaceLayerEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDispVectorSurfaceLayerEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDispVectorSurfaceLayerEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IDispVectorSurfaceLayerEventsVtbl;

    interface IDispVectorSurfaceLayerEvents
    {
        CONST_VTBL struct IDispVectorSurfaceLayerEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispVectorSurfaceLayerEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDispVectorSurfaceLayerEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDispVectorSurfaceLayerEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDispVectorSurfaceLayerEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDispVectorSurfaceLayerEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDispVectorSurfaceLayerEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDispVectorSurfaceLayerEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IDispVectorSurfaceLayerEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_VectorSurfaceLayer;

#ifdef __cplusplus

class DECLSPEC_UUID("E14A8A95-1D6E-4C78-B13C-38F475CC2E0A")
VectorSurfaceLayer;
#endif

EXTERN_C const CLSID CLSID_ElevationSurfaceLayer;

#ifdef __cplusplus

class DECLSPEC_UUID("5A604CDB-59C5-4AFA-A846-C0908C8EEF1F")
ElevationSurfaceLayer;
#endif

EXTERN_C const CLSID CLSID_Sky;

#ifdef __cplusplus

class DECLSPEC_UUID("3B1633AE-F4E2-480C-A5A9-9AC46C46FB4C")
Sky;
#endif

EXTERN_C const CLSID CLSID_Viewpoint;

#ifdef __cplusplus

class DECLSPEC_UUID("C81E9B04-F3E5-49FA-94F0-6C6547DE0A38")
Viewpoint;
#endif

EXTERN_C const CLSID CLSID_Graticule;

#ifdef __cplusplus

class DECLSPEC_UUID("81216400-FCAC-4751-B2B5-E28DA53CDEAB")
Graticule;
#endif

EXTERN_C const CLSID CLSID_Place;

#ifdef __cplusplus

class DECLSPEC_UUID("D3C72023-53A4-41C7-B748-17DA67BE3560")
Place;
#endif

EXTERN_C const CLSID CLSID_ImageOverlay;

#ifdef __cplusplus

class DECLSPEC_UUID("37E68B4A-D185-440A-84C6-CC2AA04B0FA9")
ImageOverlay;
#endif

EXTERN_C const CLSID CLSID_Circle;

#ifdef __cplusplus

class DECLSPEC_UUID("D355DAD7-6CC5-45C4-87D9-3B32CFDF2B2C")
Circle;
#endif

EXTERN_C const CLSID CLSID_FeaturePrimitive;

#ifdef __cplusplus

class DECLSPEC_UUID("10852C50-49B9-487A-9B9C-B1BA91470E7C")
FeaturePrimitive;
#endif

EXTERN_C const CLSID CLSID_Model;

#ifdef __cplusplus

class DECLSPEC_UUID("D900CDF4-378C-41F8-B87A-7972FF96F26A")
Model;
#endif

EXTERN_C const CLSID CLSID_TextLabel;

#ifdef __cplusplus

class DECLSPEC_UUID("E41F5A53-9A5A-4125-9E77-325315E1CC5A")
TextLabel;
#endif

EXTERN_C const CLSID CLSID_RectanglePrimitive;

#ifdef __cplusplus

class DECLSPEC_UUID("D6D33759-F743-42D0-AA1C-777BDB61FAE2")
RectanglePrimitive;
#endif

EXTERN_C const CLSID CLSID_EllipsePrimitive;

#ifdef __cplusplus

class DECLSPEC_UUID("5A852434-356F-4AD6-A2C1-E6D8BBCFD2AC")
EllipsePrimitive;
#endif

EXTERN_C const CLSID CLSID_ObjectFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("984E00A9-DD8B-4744-B98F-8681EC14C724")
ObjectFactory;
#endif
#endif /* __osgEarthX_COMLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long *, LPSAFEARRAY * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


