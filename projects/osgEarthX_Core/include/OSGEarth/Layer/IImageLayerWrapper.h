/**
	@brief ImageLayer接口包装器
	@author Hao Luo
	@date 2015/01/24
*/

#ifndef OSGEARTHX_CORE_I_IMAGE_LAYER_WRAPPER_H
#define OSGEARTHX_CORE_I_IMAGE_LAYER_WRAPPER_H 1

#include <osgEarthXCoreExport/Export.h>
#include <OSGEarth/Layer/TerrainLayerWrapper.h>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT IImageLayerWrapper : 
		virtual public ITerrainLayerWrapper
	{
	public:
		virtual ~IImageLayerWrapper(){}
	protected:
	private:
	};

}

#endif