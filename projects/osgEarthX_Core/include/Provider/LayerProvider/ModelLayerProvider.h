/**
	@brief ModelLayerÃ·π©¿‡
	@author Hao Luo
	@date 2014/11/05
*/

#ifndef OSGEARTHX_CORE_MODEL_LAYER_PROVIDER_H
#define OSGEARTHX_CORE_MODEL_LAYER_PROVIDER_H 1

#include <osgEarthXCoreExport/Export.h>

#include <Provider/LayerProvider/LayerProvider.h>
#include <OSGEarth/Layer/IModelLayerWrapper.h>
#include <OSGEarth/Layer/TModelLayerAdapter.h>

#include <osgEarth/ModelLayer>
#include <osgEarthSymbology/Style>

namespace osgEarthXCore
{
	class ModelLayerTask;

	class OSGEARTHX_CORE_EXPORT ModelLayerProvider : 
		public LayerProvider,
		public TModelLayerAdapter<IModelLayerWrapper>
	{
	public:
		friend ModelLayerTask;

	public:
		static void getDefaultLineSymbolStyle(  osgEarth::Symbology::Style& outStyle );

	public:
		ModelLayerProvider();
		osgEarth::ModelLayer* getModelLayer();
		LayerTask* getOrCreateLayerTask();

		void setModelSource( osgEarth::ModelSourceOptions& modelSourceOptions );

	protected:
		virtual ~ModelLayerProvider();

		virtual void initialized();

	private:
		osg::ref_ptr<osgEarth::ModelLayer> m_refModelLayer;
		osgEarth::ModelLayerOptions* m_pModelLayerOptions;
	};
}

#endif