/**
	@brief ImageSurfaceLayer事件接口实现
	@author Hao Luo
	@date 2014/12/10
*/

#ifndef I_IMAGE_SURFACE_LAYER_EVENTS_CP_H
#define I_IMAGE_SURFACE_LAYER_EVENTS_CP_H 1

#include <COM/Layer/Layer/ILayerEvents_CP.h>

template <class T, const IID* piid>
class CProxyIImageSurfaceLayerEvents:
	public CProxyILayerEvents<T,piid>
{
public:
protected:
private:
};

#endif