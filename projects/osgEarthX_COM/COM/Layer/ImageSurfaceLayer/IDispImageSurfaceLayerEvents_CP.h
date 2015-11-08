#ifndef I_DISP_IMAGE_SURFACE_LAYER_EVENTS_CP_H
#define I_DISP_IMAGE_SURFACE_LAYER_EVENTS_CP_H 1

#include <COM/Layer/ImageSurfaceLayer/IImageSurfaceLayerEvents_CP.h>

template<class T>
class CProxyIDispImageSurfaceLayerEvents:
	public CProxyIImageSurfaceLayerEvents<T, &__uuidof(IDispImageSurfaceLayerEvents)>
{
public:
protected:
private:
};

#endif