/**
	@brief ElevationLayer接口转换类模板
	@author Hao Luo
	@date 2015/01/24
*/

#ifndef OSGEARTHX_CORE_T_ELEVATION_LAYER_ADAPTER_H
#define OSGEARTHX_CORE_T_ELEVATION_LAYER_ADAPTER_H 1

#include <OSGEarth/Layer/IElevationLayerWrapper.h>
#include <OSGEarth/Layer/TTerrainLayerAdapter.h>

namespace osgEarthXCore
{
	template < class T = IElevationLayerWrapper>
	class TElevationLayerAdapter : 
		virtual public IElevationLayerWrapper,
		virtual public TTerrainLayerAdapter<T>
	{
	public:
		virtual ~TElevationLayerAdapter()
		{

		}
	protected:
	private:
	};
}

#endif