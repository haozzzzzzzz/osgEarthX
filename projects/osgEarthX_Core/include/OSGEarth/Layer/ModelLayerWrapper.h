/**
	@brief ModelLayer包装接口
	@author Hao Luo
	@date 2015/01/15
*/

#ifndef OSGEARTHX_CORE_MODEL_LAYER_WRAPPER_H
#define OSGEARTHX_CORE_MODEL_LAYER_WRAPPER_H 1

#include <osgEarthXCoreExport/Export.h>
#include <osgEarth/ModelLayer>
#include <OSGEarth/Layer/IModelLayerWrapper.h>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT ModelLayerWrapper:
		virtual public IModelLayerWrapper
	{
	public:
		ModelLayerWrapper( osgEarth::ModelLayer* pModelLayer );
		virtual ~ModelLayerWrapper();

		virtual bool getEnabled();
		virtual bool getVisible() const;
		virtual void setVisible( bool value );

	protected:
		osgEarth::ModelLayer* m_pModelLayer;

	private:
	};
}

#endif