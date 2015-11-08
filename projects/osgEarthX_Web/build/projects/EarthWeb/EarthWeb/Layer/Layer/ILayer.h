/*
	@brief : Layer JS ½Ó¿Ú
	@author : Hao Luo
	@date : 2014/11/21
*/

#ifndef OSGEARTHX_WEB_I_LAYER_H
#define OSGEARTHX_WEB_I_LAYER_H 1

#include <EarthWeb/EarthObject/IEarthObject.h>

FB_FORWARD_PTR(ILayer)
class ILayer : public IEarthObject
{
public:
	ILayer(){}
	virtual ~ILayer(){}

	//events
	FB_JSAPI_EVENT(onVisible, 0, ());
	FB_JSAPI_EVENT(onHidden, 0, ());

protected:
private:
};

#endif