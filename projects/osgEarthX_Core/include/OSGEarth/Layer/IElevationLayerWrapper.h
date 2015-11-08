/**
	@brief ElevationLayer接口包装类
	@author Hao Luo
	@date 2015/01/24
*/

#ifndef OSGEARTHX_CORE_I_ELEVATION_LAYER_WRAPPER_H
#define OSGEARTHX_CORE_I_ELEVATION_LAYER_WRAPPER_H 1

#include <osgEarthXCoreExport/Export.h>
#include <OSGEarth/Layer/ITerrainLayerWrapper.h>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT IElevationLayerWrapper :
		virtual public ITerrainLayerWrapper
	{
	public:
		virtual ~IElevationLayerWrapper(){}

	protected:

	private:

	};

}

#endif