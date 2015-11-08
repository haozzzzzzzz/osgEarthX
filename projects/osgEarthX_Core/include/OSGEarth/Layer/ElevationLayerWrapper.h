/**
	@brief 包装的ElevationLayer接口
	@author Hao Luo
	@date 2015/01/15
*/

#ifndef OSGEARTHX_CORE_ELEVATION_LAYER_WRAPPER_H
#define OSGEARTHX_CORE_ELEVATION_LAYER_WRAPPER_H 1

#include <osgEarthXCoreExport/Export.h>

#include <OSGEarth/Layer/IElevationLayerWrapper.h>
#include <OSGEarth/Layer/TerrainLayerWrapper.h>
#include <osgEarth/ElevationLayer>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT ElevationLayerWrapper : 
		public IElevationLayerWrapper,
		public TerrainLayerWrapper
	{
	public:
		ElevationLayerWrapper( osgEarth::ElevationLayer* pLayer );
		virtual ~ElevationLayerWrapper();

	protected:
		osgEarth::ElevationLayer* m_pElevationLayer;

	private:
	};
}

#endif