/**
	@brief 驱动选项静态工具
	@author Hao Luo
	@date 2015/03/24
*/

#ifndef OSGEARTHX_COM_SOURCE_STATIC_UTILS_H
#define OSGEARTHX_COM_SOURCE_STATIC_UTILS_H 1

#include "osgEarthX_COM_i.h"

//osgEarth
#include <osgEarth/TileSource>
#include <osgEarth/ModelSource>
#include <osgEarthFeatures/FeatureSource>

class SourceStaticUtils
{
public:
	static HRESULT createInstance( SourceClassType classType, IDispatch** ppIDispatch );
	static osgEarth::TileSourceOptions* getTileSourceOptions( ITileSourceDispatch* pITileSourceDispatch );
	static osgEarth::ModelSourceOptions* getVectorSourceOptions( IVectorSourceDispatch* pIVectorSourceDispatch );
	static osgEarth::Features::FeatureSourceOptions* getFeatureSourceOptions( IFeatureSourceDispatch* pIFeatureSourceDispatch );

protected:
private:
};

#endif