/**
	@brief ModelLayer接口转换类模板
	@author Hao Luo
	@date 2015/01/24
*/

#ifndef OSGEARTHX_CORE_T_MODEL_LAYER_ADAPTER_H
#define OSGEARTHX_CORE_T_MODEL_LAYER_ADAPTER_H 1

#include <OSGEarth/Layer/IModelLayerWrapper.h>
#include <OSGEarth/Layer/TLayerAdapter.h>

namespace osgEarthXCore
{
	template < class T = IModelLayerWrapper >
	class TModelLayerAdapter : 
		virtual public IModelLayerWrapper,
		virtual public TLayerAdapter<T>
	{
	public:
		virtual ~TModelLayerAdapter()
		{

		}
	protected:
	private:
	};
}

#endif