/**
	@brief IVectorSurfaceLayer事件代理
	@author Hao Luo
	@date 2014/12/10
*/

#ifndef I_VECTOR_SURFACE_LAYER_EVENTS_CP_H
#define I_VECTOR_SURFACE_LAYER_EVENTS_CP_H

#include <COM/Layer/Layer/ILayerEvents_CP.h>

template<class T,const IID* piid>
class CProxyIVectorSurfaceLayerEvents:
	public CProxyILayerEvents<T,piid>
{
public:
protected:
private:
};

#endif