/**
	@brief ElevationLayerÃ·π©’ﬂ
	@author Hao Luo
	@date 2015/01/15
*/

#ifndef OSGEARTHX_CORE_ELEVATION_LAYER_PROVIDER_H
#define OSGEARTHX_CORE_ELEVATION_LAYER_PROVIDER_H 1

#include <osgEarthXCoreExport/Export.h>
#include <Provider/LayerProvider/LayerProvider.h>
#include <OSGEarth/Layer/IElevationLayerWrapper.h>
#include <OSGEarth/Layer/TElevationLayerAdapter.h>

#include <osgEarth/ElevationLayer>

namespace osgEarthXCore
{
	class ElevationLayerTask;

	class OSGEARTHX_CORE_EXPORT ElevationLayerProvider :
		public LayerProvider,
		public TElevationLayerAdapter<IElevationLayerWrapper>
	{
	public:
		friend ElevationLayerTask;

	private:
		osg::ref_ptr<osgEarth::ElevationLayer> m_refElevationLayer;
		osgEarth::ElevationLayerOptions* m_pElevationLayerOptions;

	public:
		ElevationLayerProvider();

		osgEarth::ElevationLayer* getElevationLayer();
		virtual LayerTask* getOrCreateLayerTask();

		void setTileSource( osgEarth::TileSourceOptions& tileSrouceOptions );

	protected:
		virtual ~ElevationLayerProvider();

		virtual void initialized();
	};
}

#endif