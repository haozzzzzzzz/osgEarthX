/**
	@brief EarthObject物体事件
	@author Hao Luo
	@date 2014/12/10
*/

#ifndef I_EARTH_OBJECT_EVENTS_CP_H
#define I_EARTH_OBJECT_EVENTS_CP_H

#include <COM/Earth/IEarthDisp_CP.h>

template<class T,const IID* piid>
class CProxyIEarthObjectEvents:
	public CProxyIEarthDisp<T, piid>
{
public:
	HRESULT Fire_onInitializeCompleted()
	{
		DISPPARAMS params = { NULL, NULL, 0, 0 };
		return InvokeConnection(1+IEarthObjectEventsBeginId, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, NULL, NULL, NULL);
	}

protected:
private:
};

#endif