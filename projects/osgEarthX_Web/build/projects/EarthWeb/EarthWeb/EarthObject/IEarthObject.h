/**
	@brief : EarthObject js ½Ó¿Ú
	@author : Hao Luo
	@date : 2014/11/21
*/

#ifndef OSGEARTHX_WEB_I_EARTH_OBJECT_H
#define OSGEARTHX_WEB_I_EARTH_OBJECT_H 1

#include <EarthWeb/EarthObject/EarthObjectClassType.h>
#include <EarthWeb/Earth/IEarthDispatch.h>

#include <Object/Object.h>

FB_FORWARD_PTR(IEarthObject)
class IEarthObject : public IEarthDispatch
{
public:
	IEarthObject()
	{
		registerProperty( "classType", make_property( this, &IEarthObject::get_classType ) );
		registerProperty( "visible",make_property( this, &IEarthObject::get_visible, &IEarthObject::put_visible ) );
		registerProperty( "enabled",make_property( this, &IEarthObject::get_enabled ) );
	}
	virtual ~IEarthObject(){}

	virtual EarthObjectClassType get_classType() = 0;
	virtual bool get_visible() = 0;
	virtual void put_visible(bool bVisible) = 0;
	virtual bool get_enabled() = 0;

	//events
	FB_JSAPI_EVENT( onInitializeCompleted, 0, () );

protected:
private:
};

#endif