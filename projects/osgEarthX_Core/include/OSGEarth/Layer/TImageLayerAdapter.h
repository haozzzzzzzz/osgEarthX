/**
	@brief ImageLayerΩ”ø⁄  ≈‰∆˜
	@author Hao Luo
	@date 2015/01/24
*/

#ifndef OSGEARTHX_CORE_T_IMAGE_LAYER_ADAPTER_H
#define OSGEARTHX_CORE_T_IMAGE_LAYER_ADAPTER_H 1

#include <OSGEarth/Layer/TTerrainLayerAdapter.h>
#include <OSGEarth/Layer/IImageLayerWrapper.h>

namespace osgEarthXCore
{
	template < class T = IImageLayerWrapper >
	class TImageLayerAdapter : 
		virtual public IImageLayerWrapper,
		virtual public TTerrainLayerAdapter<T>
	{
	public:
		virtual ~TImageLayerAdapter()
		{

		}
	protected:
	private:
	};
}

#endif