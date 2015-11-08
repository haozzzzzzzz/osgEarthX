/**
	@brief ModelLayer接口包装类
	@author Hao Luo
	@date 2015/01/24
*/
#ifndef OSGEARTHX_CORE_I_MODEL_LAYER_WRAPPER_H
#define OSGEARTHX_CORE_I_MODEL_LAYER_WRAPPER_H 1

#include <osgEarthXCoreExport/Export.h>
#include <OSGEarth/Layer/ILayerWrapper.h>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT IModelLayerWrapper :
		virtual public ILayerWrapper
	{
	public:
		virtual ~IModelLayerWrapper(){}
	protected:
	private:
	};
}

#endif