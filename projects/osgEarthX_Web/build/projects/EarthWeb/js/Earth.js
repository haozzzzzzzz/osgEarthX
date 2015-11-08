/**
	@brief : EarthWeb插件辅助库
	@author : Hao Luo
	@created : 2014/11/20
	@last edited : 2015/04/13
	@description : 插件加载完成后，需要调用initEarthJS方法，传入插件DOM对象，才能对所需对象进行初始化。
*/

//全局对象
var classFactory = undefined;
var webEarth = undefined;

// EarthObject classes
EarthGroup = undefined;
ImageSurfaceLayer = undefined;
VectorSurfaceLayer = undefined;
ElevationSurfaceLayer = undefined;
TerrainMaskSurfaceLayer = undefined;

Graticule = undefined;
Sky = undefined;
Label = undefined;
Model = undefined;
ImageOverlay = undefined;
Shape = undefined;
Place = undefined;
Viewpoint = undefined;
LabelSetLayer = undefined;
ModelSetLayer = undefined;
ImageOverlaySetLayer = undefined;
ShapeSetLayer = undefined;
PlaceSetLayer = undefined;
ViewpointSetLayer = undefined;

//tile source classes
TileSourceAGGLite = undefined;
TileSourceArcGIS = undefined;
TileSourceBing = undefined;
TileSourceColorRamp = undefined;
TileSourceDebug = undefined;
TileSourceGDAL = undefined;
TileSourceMBTiles = undefined;
TileSourceNoise = undefined;
TileSourceOSG = undefined;
TileSourceTileCache = undefined;
TileSourceTileService = undefined;
TileSourceTMS = undefined;
TileSourceVPB = undefined;
TileSourceWCS = undefined;
TileSourceWMS = undefined;
TileSourceXYZ = undefined;
TileSourceYahoo = undefined;

//feature source classes
FeatureSourceOGR = undefined;
FeatureSourceTFS = undefined;
FeatureSourceWFS = undefined;

//vector source classes
VectorSourceGeom = undefined;
VectorSourceSimple = undefined;
VectorSourceStencil = undefined;

//Geo
GeoPoint = undefined;

//地图对象类类型枚举对象
EarthObjectClassType = {
	EARTH_GROUP : 				2,

	IMAGE_SURFACE_LAYER : 		3,
	VECTOR_SURFACE_LAYER : 		4,
	ELEVATION_SURFACE_LAYER : 	5,
	TERMASK_SURFACE_LAYER : 	6,

	EXTERINAL_GRATICULE : 		7,
	EXTERINAL_SKY : 			8,
	EXTERINAL_LABEL : 			9,
	EXTERINAL_MODEL : 			10,
	ANNOTATION_IMAGE_OVERLAY : 	11,
	EXTERINAL_SHAPE : 			12,
	ANNOTATION_PLACE : 			13,
	EXTERINAL_VIEWPOINT : 		14,

	LABEL_SET_LAYER : 			15,
	MODEL_SET_LAYER : 			16,
	OVERIMG_SET_LAYER : 		17,
	SHAPE_SET_LAYER : 			18,
	PLACE_SET_LAYER : 			19,
	VIEWPOINT_SET_LAYER : 		20
};

SourceClassType = {
	TILE_SOURCE_AGGLITE : 		0,
	TILE_SOURCE_ARCGIS : 		1,
	TILE_SOURCE_BING : 			2,
	TILE_SOURCE_COLOR_RAMP : 	3,
	TILE_SOURCE_DEBUG : 		4,
	TILE_SOURCE_GDAL : 			5,
	TILE_SOURCE_MBTILES : 		6,
	TILE_SOURCE_NOISE : 		7,
	TILE_SOURCE_OSG : 			8,
	TILE_SOURCE_TILE_CACHE : 	9,
	TILE_SOURCE_TILE_SERVICE : 	10,
	TILE_SOURCE_TMS : 			11,
	TILE_SOURCE_VPB : 			12,
	TILE_SOURCE_WCS : 			13,
	TILE_SOURCE_WMS : 			14,
	TILE_SOURCE_XYZ : 			15,
	TILE_SOURCE_YAHOO : 		16,

	VECTOR_SOURCE_GEOM : 		17,
	VECTOR_SOURCE_STENCIL : 	18,
	VECTOR_SOURCE_SIMPLE : 		19,

	FEATURE_SOURCE_OGR : 		20,
	FEATURE_SOURCE_TFS : 		21,
	FEATURE_SOURCE_WFS : 		22
};

GeoClassType = {
	GEO_POINT : 0
};

/**
	@brief 初始化Earth.js环境，在插件成功加载后调用
	@params plugin : 插件的DOM对象
*/
function initEarthJS( plugin )
{
	webEarth = plugin;
	classFactory = plugin.getClassFactory();
	initClasses();
}

/**
	@brief 事件监听函数
	@params obj : 对象; name : 事件名称; func 响应函数
*/
function addEvent( obj, name, func )
{
    if ( bj.attachEvent ) {
        obj.attachEvent( "on"+name, func );
    } else {
        obj.addEventListener( name, func, false ); 
    }
}

/*
	@brief 初始化类
*/
function initClasses()
{
	//EarthObject classes
	EarthGroup 				= classFactory.createByEarthObjectClassType( EarthObjectClassType.EARTH_GROUP );

	ImageSurfaceLayer 		= classFactory.createByEarthObjectClassType( EarthObjectClassType.IMAGE_SURFACE_LAYER );
	VectorSurfaceLayer 		= classFactory.createByEarthObjectClassType( EarthObjectClassType.VECTOR_SURFACE_LAYER );
	ElevationSurfaceLayer 	= classFactory.createByEarthObjectClassType( EarthObjectClassType.ELEVATION_SURFACE_LAYER );
	TerrainMaskSurfaceLayer = classFactory.createByEarthObjectClassType( EarthObjectClassType.TERMASK_SURFACE_LAYER );

	Graticule 				= classFactory.createByEarthObjectClassType( EarthObjectClassType.EXTERINAL_GRATICULE );
	Sky 					= classFactory.createByEarthObjectClassType( EarthObjectClassType.EXTERINAL_SKY );
	Label 					= classFactory.createByEarthObjectClassType( EarthObjectClassType.EXTERINAL_LABEL );
	Model 					= classFactory.createByEarthObjectClassType( EarthObjectClassType.EXTERINAL_MODEL );
	ImageOverlay 			= classFactory.createByEarthObjectClassType( EarthObjectClassType.ANNOTATION_IMAGE_OVERLAY );
	Shape 					= classFactory.createByEarthObjectClassType( EarthObjectClassType.EXTERINAL_SHAPE );
	Place 					= classFactory.createByEarthObjectClassType( EarthObjectClassType.ANNOTATION_PLACE );
	Viewpoint 				= classFactory.createByEarthObjectClassType( EarthObjectClassType.EXTERINAL_VIEWPOINT );

	LabelSetLayer 			= classFactory.createByEarthObjectClassType( EarthObjectClassType.LABEL_SET_LAYER );
	ModelSetLayer 			= classFactory.createByEarthObjectClassType( EarthObjectClassType.MODEL_SET_LAYER );
	ImageOverlaySetLayer 	= classFactory.createByEarthObjectClassType( EarthObjectClassType.OVERIMG_SET_LAYER );
	ShapeSetLayer 			= classFactory.createByEarthObjectClassType( EarthObjectClassType.SHAPE_SET_LAYER );
	PlaceSetLayer 			= classFactory.createByEarthObjectClassType( EarthObjectClassType.PLACE_SET_LAYER );
	ViewpointSetLayer 		= classFactory.createByEarthObjectClassType( EarthObjectClassType.VIEWPOINT_SET_LAYER );

	//tile source classes
	TileSourceAGGLite 		= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_AGGLITE );
	TileSourceArcGIS 		= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_ARCGIS );
	TileSourceBing 			= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_BING );
	TileSourceColorRamp 	= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_COLOR_RAMP );
	TileSourceDebug 		= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_DEBUG );
	TileSourceGDAL 			= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_GDAL );
	TileSourceMBTiles 		= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_MBTILES );
	TileSourceNoise 		= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_NOISE );
	TileSourceOSG 			= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_OSG );
	TileSourceTileCache 	= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_TILE_CACHE );
	TileSourceTileService 	= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_TILE_SERVICE );
	TileSourceTMS 			= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_TMS );
	TileSourceVPB 			= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_VPB );
	TileSourceWCS 			= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_WCS );
	TileSourceWMS 			= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_WMS );
	TileSourceXYZ 			= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_XYZ );
	TileSourceYahoo 		= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_YAHOO );

	//feature source classes
	FeatureSourceOGR 		= classFactory.createBySourceClassType( SourceClassType.FEATURE_SOURCE_OGR );
	FeatureSourceTFS 		= classFactory.createBySourceClassType( SourceClassType.FEATURE_SOURCE_TFS );
	FeatureSourceWFS 		= classFactory.createBySourceClassType( SourceClassType.FEATURE_SOURCE_WFS );

	//vector source classes
	VectorSourceGeom 		= classFactory.createBySourceClassType( SourceClassType.VECTOR_SOURCE_GEOM );
	VectorSourceSimple 		= classFactory.createBySourceClassType( SourceClassType.VECTOR_SOURCE_SIMPLE );
	VectorSourceStencil 	= classFactory.createBySourceClassType( SourceClassType.VECTOR_SOURCE_STENCIL );

	//Geo
	GeoPoint 				= classFactory.createByGeoClassType( GeoClassType.GEO_POINT );
}