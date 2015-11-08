/**
	@brief ITerrainLayerWrapper½Ó¿Ú×ª»»Æ÷
	@author Hao Luo
	@date 2015/01/25
*/

#ifndef OSGEARTHX_CORE_T_TERRAIN_LAYER_ADAPTER_H
#define OSGEARTHX_CORE_T_TERRAIN_LAYER_ADAPTER_H 1

#include <OSGEarth/Layer/ITerrainLayerWrapper.h>
#include <OSGEarth/Layer/TLayerAdapter.h>

namespace osgEarthXCore
{
	template < class T = ITerrainLayerWrapper>
	class TTerrainLayerAdapter : 
		virtual public ITerrainLayerWrapper,
		virtual public TLayerAdapter<T>
	{
	public:
		virtual ~TTerrainLayerAdapter()
		{

		}
	protected:
	private:
	};
}

#endif