/**
	@brief ElevationLayerOptions°ü×°Àà
	@author Hao Luo
	@date 2015/01/24
*/

#ifndef OSGEARTHX_CORE_ELEVATION_LAYER_OPTIONS_WRAPPER_H
#define OSGEARTHX_CORE_ELEVATION_LAYER_OPTIONS_WRAPPER_H 1

#include <osgEarthXCoreExport/Export.h>
#include <OSGEarth/Layer/IElevationLayerWrapper.h>
#include <OSGEarth/Layer/TerrainLayerOptionsWrapper.h>
#include <osgEarth/ElevationLayer>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT ElevationLayerOptionsWrapper : 
		public IElevationLayerWrapper,
		public TerrainLayerOptionsWrapper
	{
	public:
		ElevationLayerOptionsWrapper( osgEarth::ElevationLayerOptions* pOptions );
		virtual ~ElevationLayerOptionsWrapper();

	protected:
		osgEarth::ElevationLayerOptions* m_pElevationLayerOptions;

	private:
	};
}

#endif