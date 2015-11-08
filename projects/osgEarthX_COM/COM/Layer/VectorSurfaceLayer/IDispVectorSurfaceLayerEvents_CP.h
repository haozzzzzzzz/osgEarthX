/**
	@brief VectorSurfaceLayer事件分发接口实现
	@author Hao Luo
	@date 2014/12/10
*/

#ifndef I_DISP_VECTOR_SURFACE_LAYER_EVENTS_CP_H
#define I_DISP_VECTOR_SURFACE_LAYER_EVENTS_CP_H

#include <COM/Layer/VectorSurfaceLayer/IVectorSurfaceLayerEvents_CP.h>

template<class T>
class CProxyIDispVectorSurfaceLayerEvents:
	public CProxyIVectorSurfaceLayerEvents<T,&__uuidof(IDispVectorSurfaceLayerEvents)>
{
public:
protected:
private:
};
#endif