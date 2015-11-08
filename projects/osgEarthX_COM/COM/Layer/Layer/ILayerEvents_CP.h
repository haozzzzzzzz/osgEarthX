/**
	@brief 图层事件代理
	@author Hao Luo
	@date 2014/12/10
*/

#ifndef I_LAYER_EVENTS_CP_H
#define I_LAYER_EVENTS_CP_H 1

#include <COM/EarthObject/IEarthObjectEvents_CP.h>

template<class T, const IID* piid>
class CProxyILayerEvents:
	public CProxyIEarthObjectEvents<T,piid>
{
public:
	HRESULT Fire_onVisible()
	{
		DISPPARAMS params = { NULL, NULL, 0, 0 };
		return InvokeConnection(1+ILayerEventsBeginId, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, NULL, NULL, NULL);
	}

	HRESULT Fire_onHidden()
	{
		DISPPARAMS params = { NULL, NULL, 0, 0 };
		return InvokeConnection(2+ILayerEventsBeginId, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, NULL, NULL, NULL);
	}

protected:
private:
};

#endif