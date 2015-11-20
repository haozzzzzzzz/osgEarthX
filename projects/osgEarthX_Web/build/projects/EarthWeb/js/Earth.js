/**
	@brief : EarthWeb插件辅助库
	@author : Hao Luo
	@created : 2014/11/20
	@last edited : 2015/11/19
	@description : 插件加载完成后，需要调用initEarthJS方法，传入插件DOM对象，才能对所需对象进行初始化。
*/

(function(){

	var OsgEarthXWeb = window.OsgEarthXWeb = function( plugin ){
		this.earth = plugin;
		this.initClasses();
	};

	// -------------------------------------------------------------------------------
	// Classes

	// EarthObject classes
	OsgEarthXWeb.EarthGroup = undefined;
	OsgEarthXWeb.ImageSurfaceLayer = undefined;
	OsgEarthXWeb.VectorSurfaceLayer = undefined;
	OsgEarthXWeb.ElevationSurfaceLayer = undefined;
	OsgEarthXWeb.TerrainMaskSurfaceLayer = undefined;

	OsgEarthXWeb.Graticule = undefined;
	OsgEarthXWeb.Sky = undefined;
	OsgEarthXWeb.Label = undefined;
	OsgEarthXWeb.Model = undefined;
	OsgEarthXWeb.ImageOverlay = undefined;
	OsgEarthXWeb.Shape = undefined;
	OsgEarthXWeb.Place = undefined;
	OsgEarthXWeb.Viewpoint = undefined;
	OsgEarthXWeb.LabelSetLayer = undefined;
	OsgEarthXWeb.ModelSetLayer = undefined;
	OsgEarthXWeb.ImageOverlaySetLayer = undefined;
	OsgEarthXWeb.ShapeSetLayer = undefined;
	OsgEarthXWeb.PlaceSetLayer = undefined;
	OsgEarthXWeb.ViewpointSetLayer = undefined;

	//tile source classes
	OsgEarthXWeb.TileSourceAGGLite = undefined;
	OsgEarthXWeb.TileSourceArcGIS = undefined;
	OsgEarthXWeb.TileSourceBing = undefined;
	OsgEarthXWeb.TileSourceColorRamp = undefined;
	OsgEarthXWeb.TileSourceDebug = undefined;
	OsgEarthXWeb.TileSourceGDAL = undefined;
	OsgEarthXWeb.TileSourceMBTiles = undefined;
	OsgEarthXWeb.TileSourceNoise = undefined;
	OsgEarthXWeb.TileSourceOSG = undefined;
	OsgEarthXWeb.TileSourceTileCache = undefined;
	OsgEarthXWeb.TileSourceTileService = undefined;
	OsgEarthXWeb.TileSourceTMS = undefined;
	OsgEarthXWeb.TileSourceVPB = undefined;
	OsgEarthXWeb.TileSourceWCS = undefined;
	OsgEarthXWeb.TileSourceWMS = undefined;
	OsgEarthXWeb.TileSourceXYZ = undefined;
	OsgEarthXWeb.TileSourceYahoo = undefined;

	//feature source classes
	OsgEarthXWeb.FeatureSourceOGR = undefined;
	OsgEarthXWeb.FeatureSourceTFS = undefined;
	OsgEarthXWeb.FeatureSourceWFS = undefined;

	//vector source classes
	OsgEarthXWeb.VectorSourceGeom = undefined;
	OsgEarthXWeb.VectorSourceSimple = undefined;
	OsgEarthXWeb.VectorSourceStencil = undefined;

	//Geo
	OsgEarthXWeb.GeoPoint = undefined;

	//地图对象类类型枚举对象
	var EarthObjectClassType = OsgEarthXWeb.EarthObjectClassType = {};
	var EarthObjectClassTypeOrder = 2;
	EarthObjectClassType.EARTH_GROUP = 			EarthObjectClassTypeOrder ++ ;
	EarthObjectClassType.IMAGE_SURFACE_LAYER = 	EarthObjectClassTypeOrder ++ ;
	EarthObjectClassType.VECTOR_SURFACE_LAYER = EarthObjectClassTypeOrder ++ ;
	EarthObjectClassType.ELEVATION_SURFACE_LAYER = 	EarthObjectClassTypeOrder ++ ;
	EarthObjectClassType.TERMASK_SURFACE_LAYER = 	EarthObjectClassTypeOrder ++ ;

	EarthObjectClassType.EXTERINAL_GRATICULE = 	EarthObjectClassTypeOrder ++ ;
	EarthObjectClassType.EXTERINAL_SKY = EarthObjectClassTypeOrder ++ ;
	EarthObjectClassType.EXTERINAL_VIEWPOINT = 	EarthObjectClassTypeOrder ++ ;

	EarthObjectClassType.ANNOTATION_TEXT_LABEL = 	EarthObjectClassTypeOrder ++ ;
	EarthObjectClassType.ANNOTATION_MODEL = 	EarthObjectClassTypeOrder ++ ;
	EarthObjectClassType.ANNOTATION_IMAGE_OVERLAY = EarthObjectClassTypeOrder ++ ;
	EarthObjectClassType.ANNOTATION_FEATURE = 	EarthObjectClassTypeOrder ++ ;
	EarthObjectClassType.ANNOTATION_PLACE =		EarthObjectClassTypeOrder ++ ;
	EarthObjectClassType.ANNOTATION_CIRCLE =	EarthObjectClassTypeOrder ++ ;
	EarthObjectClassType.ANNOTATION_RECTANGLE =	EarthObjectClassTypeOrder ++ ;
	EarthObjectClassType.ANNOTATION_ELLIPSE =	EarthObjectClassTypeOrder ++ ;

	EarthObjectClassType.LABEL_SET_LAYER = 		EarthObjectClassTypeOrder ++ ;
	EarthObjectClassType.MODEL_SET_LAYER = 		EarthObjectClassTypeOrder ++ ;
	EarthObjectClassType.OVERIMG_SET_LAYER = 	EarthObjectClassTypeOrder ++ ;
	EarthObjectClassType.SHAPE_SET_LAYER = 		EarthObjectClassTypeOrder ++ ;
	EarthObjectClassType.PLACE_SET_LAYER = 		EarthObjectClassTypeOrder ++ ;
	EarthObjectClassType.VIEWPOINT_SET_LAYER = 	EarthObjectClassTypeOrder ++;

	var SourceClassType = OsgEarthXWeb.SourceClassType = {};
	var SourceClassTypeOrder = 0;
	SourceClassType.TILE_SOURCE_AGGLITE = 		SourceClassTypeOrder ++ ;
	SourceClassType.TILE_SOURCE_ARCGIS = 		SourceClassTypeOrder ++ ;
	SourceClassType.TILE_SOURCE_BING = 			SourceClassTypeOrder ++ ;
	SourceClassType.TILE_SOURCE_COLOR_RAMP = 	SourceClassTypeOrder ++ ;
	SourceClassType.TILE_SOURCE_DEBUG = 		SourceClassTypeOrder ++ ;
	SourceClassType.TILE_SOURCE_GDAL = 			SourceClassTypeOrder ++ ;
	SourceClassType.TILE_SOURCE_MBTILES = 		SourceClassTypeOrder ++ ;
	SourceClassType.TILE_SOURCE_NOISE = 		SourceClassTypeOrder ++ ;
	SourceClassType.TILE_SOURCE_OSG = 			SourceClassTypeOrder ++ ;
	SourceClassType.TILE_SOURCE_TILE_CACHE = 	SourceClassTypeOrder ++ ;
	SourceClassType.TILE_SOURCE_TILE_SERVICE = 	SourceClassTypeOrder ++ ;
	SourceClassType.TILE_SOURCE_TMS = 			SourceClassTypeOrder ++ ;
	SourceClassType.TILE_SOURCE_VPB = 			SourceClassTypeOrder ++ ;
	SourceClassType.TILE_SOURCE_WCS = 			SourceClassTypeOrder ++ ;
	SourceClassType.TILE_SOURCE_WMS = 			SourceClassTypeOrder ++ ;
	SourceClassType.TILE_SOURCE_XYZ = 			SourceClassTypeOrder ++ ;
	SourceClassType.TILE_SOURCE_YAHOO = 		SourceClassTypeOrder ++ ;

	SourceClassType.VECTOR_SOURCE_GEOM = 		SourceClassTypeOrder ++ ;
	SourceClassType.VECTOR_SOURCE_STENCIL = 	SourceClassTypeOrder ++ ;
	SourceClassType.VECTOR_SOURCE_SIMPLE = 		SourceClassTypeOrder ++ ;

	SourceClassType.FEATURE_SOURCE_OGR = 		SourceClassTypeOrder ++ ;
	SourceClassType.FEATURE_SOURCE_TFS = 		SourceClassTypeOrder ++ ;
	SourceClassType.FEATURE_SOURCE_WFS = 		SourceClassTypeOrder ++ ;

	GeoClassType = OsgEarthXWeb.GeoClassType = {};
	var GeoClassTypeOrder = 0;
	GeoClassType.GEO_POINT = GeoClassTypeOrder ++ ;

	/*
		@brief 初始化类
	*/
	OsgEarthXWeb.prototype.initClasses = function(){
		var classFactory = this.earth.getClassFactory();

		//EarthObject classes
		this.EarthGroup 				= classFactory.createByEarthObjectClassType( EarthObjectClassType.EARTH_GROUP );

		this.ImageSurfaceLayer 			= classFactory.createByEarthObjectClassType( EarthObjectClassType.IMAGE_SURFACE_LAYER );
		this.VectorSurfaceLayer 		= classFactory.createByEarthObjectClassType( EarthObjectClassType.VECTOR_SURFACE_LAYER );
		this.ElevationSurfaceLayer 		= classFactory.createByEarthObjectClassType( EarthObjectClassType.ELEVATION_SURFACE_LAYER );
		this.TerrainMaskSurfaceLayer 	= classFactory.createByEarthObjectClassType( EarthObjectClassType.TERMASK_SURFACE_LAYER );

		this.Graticule 					= classFactory.createByEarthObjectClassType( EarthObjectClassType.EXTERINAL_GRATICULE );
		this.Sky 						= classFactory.createByEarthObjectClassType( EarthObjectClassType.EXTERINAL_SKY );
		this.Viewpoint 					= classFactory.createByEarthObjectClassType( EarthObjectClassType.EXTERINAL_VIEWPOINT );

		this.Label 						= classFactory.createByEarthObjectClassType( EarthObjectClassType.ANNOTATION_TEXT_LABEL );
		this.Model 						= classFactory.createByEarthObjectClassType( EarthObjectClassType.ANNOTATION_MODEL );
		this.ImageOverlay 				= classFactory.createByEarthObjectClassType( EarthObjectClassType.ANNOTATION_IMAGE_OVERLAY );
		this.Shape 						= classFactory.createByEarthObjectClassType( EarthObjectClassType.ANNOTATION_FEATURE );
		this.Place 						= classFactory.createByEarthObjectClassType( EarthObjectClassType.ANNOTATION_PLACE );

		this.LabelSetLayer 				= classFactory.createByEarthObjectClassType( EarthObjectClassType.LABEL_SET_LAYER );
		this.ModelSetLayer 				= classFactory.createByEarthObjectClassType( EarthObjectClassType.MODEL_SET_LAYER );
		this.ImageOverlaySetLayer 		= classFactory.createByEarthObjectClassType( EarthObjectClassType.OVERIMG_SET_LAYER );
		this.ShapeSetLayer 				= classFactory.createByEarthObjectClassType( EarthObjectClassType.SHAPE_SET_LAYER );
		this.PlaceSetLayer 				= classFactory.createByEarthObjectClassType( EarthObjectClassType.PLACE_SET_LAYER );
		this.ViewpointSetLayer 			= classFactory.createByEarthObjectClassType( EarthObjectClassType.VIEWPOINT_SET_LAYER );

		//tile source classes
		this.TileSourceAGGLite 			= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_AGGLITE );
		this.TileSourceArcGIS 			= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_ARCGIS );
		this.TileSourceBing 			= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_BING );
		this.TileSourceColorRamp 		= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_COLOR_RAMP );
		this.TileSourceDebug 			= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_DEBUG );
		this.TileSourceGDAL 			= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_GDAL );
		this.TileSourceMBTiles 			= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_MBTILES );
		this.TileSourceNoise 			= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_NOISE );
		this.TileSourceOSG 				= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_OSG );
		this.TileSourceTileCache 		= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_TILE_CACHE );
		this.TileSourceTileService 		= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_TILE_SERVICE );
		this.TileSourceTMS 				= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_TMS );
		this.TileSourceVPB 				= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_VPB );
		this.TileSourceWCS 				= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_WCS );
		this.TileSourceWMS 				= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_WMS );
		this.TileSourceXYZ 				= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_XYZ );
		this.TileSourceYahoo 			= classFactory.createBySourceClassType( SourceClassType.TILE_SOURCE_YAHOO );

		//feature source classes
		this.FeatureSourceOGR 			= classFactory.createBySourceClassType( SourceClassType.FEATURE_SOURCE_OGR );
		this.FeatureSourceTFS 			= classFactory.createBySourceClassType( SourceClassType.FEATURE_SOURCE_TFS );
		this.FeatureSourceWFS 			= classFactory.createBySourceClassType( SourceClassType.FEATURE_SOURCE_WFS );

		//vector source classes
		this.VectorSourceGeom 			= classFactory.createBySourceClassType( SourceClassType.VECTOR_SOURCE_GEOM );
		this.VectorSourceSimple 		= classFactory.createBySourceClassType( SourceClassType.VECTOR_SOURCE_SIMPLE );
		this.VectorSourceStencil 		= classFactory.createBySourceClassType( SourceClassType.VECTOR_SOURCE_STENCIL );

		//Geo
		this.GeoPoint 					= classFactory.createByGeoClassType( GeoClassType.GEO_POINT );
	};

	/**
		@brief 事件监听函数
		@params obj : 对象; name : 事件名称; func 响应函数
	*/
	window.addEvent = function( obj, name, func ){
	    if ( bj.attachEvent ) {
	        obj.attachEvent( "on"+name, func );
	    } else {
	        obj.addEventListener( name, func, false ); 
	    }
	};

})();