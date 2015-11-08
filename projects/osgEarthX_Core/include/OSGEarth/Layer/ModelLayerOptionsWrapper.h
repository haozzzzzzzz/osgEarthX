/**
	@brief ModelLayerOptions°ü×°Àà
	@author Hao Luo
	@date 2015/01/24
*/

#ifndef OSGEARTHX_CORE_MODEL_LAYER_OPTIONS_WRAPPER_H
#define OSGEARTHX_CORE_MODEL_LAYER_OPTIONS_WRAPPER_H 1

#include <osgEarthXCoreExport/Export.h>
#include <OSGEarth/Layer/IModelLayerWrapper.h>
#include <osgEarth/ModelLayer>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT ModelLayerOptionsWrapper:
		virtual public IModelLayerWrapper
	{
	public:
		ModelLayerOptionsWrapper( osgEarth::ModelLayerOptions* pModelLayerOptions );
		virtual ~ModelLayerOptionsWrapper();

		virtual bool getEnabled();
		virtual bool getVisible() const;
		virtual void setVisible( bool value );

	protected:
		osgEarth::ModelLayerOptions* m_pModelLayerOptions;
	private:
	};

}

#endif