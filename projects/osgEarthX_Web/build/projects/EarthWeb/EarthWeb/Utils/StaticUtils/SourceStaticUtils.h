/**
	@brief 数据源静态工具
	@author Hao Luo
	@date 2015/3/27
*/

#ifndef OSGEARTHX_WEB_SOURCE_STATIC_UTILS_H
#define OSGEARTHX_WEB_SOURCE_STATIC_UTILS_H 1

#include <EarthWeb/Source/FeatureSource/IFeatureSourceDispatch.h>
#include <EarthWeb/Source/TileSource/ITileSourceDispath.h>
#include <EarthWeb/Source/VectorSource/IVectorSourceDispatch.h>

//osgEarth
#include <osgEarth/TileSource>
#include <osgEarth/ModelSource>
#include <osgEarthFeatures/FeatureSource>

class SourceStaticUtils
{
public:
	static osgEarth::TileSourceOptions* getTileSourceOptions( ITileSourceDispatch* pITileSourceDispatch );
	static osgEarth::ModelSourceOptions* getVectorSourceOptions( IVectorSourceDispatch* pIVectorSourceDispatch );
	static osgEarth::Features::FeatureSourceOptions* getFeatureSourceOptions( IFeatureSourceDispatch* pIFeatureSourceDispatch );

protected:
private:
};

#endif