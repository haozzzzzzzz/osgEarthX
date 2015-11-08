/**
	@brief Sky½Ó¿Ú
	@author Hao Luo
	@date 2015/01/24
*/

#ifndef OSGEARTHX_WEB_SKY_H
#define OSGEARTHX_WEB_SKY_H 1

#include <EarthWeb/EarthObject/EarthObjectDispatchImpl.h>
#include <EarthWeb/EarthObject/IEarthObject.h>

#include <Externals/Sky.h>

#define SkyDispatchImpl EarthObjectDispatchImpl< osgEarthX::Sky, Sky, IEarthObject >

FB_FORWARD_PTR(Sky)
class Sky :
	public SkyDispatchImpl
{
public:
	Sky( const std::vector<FB::variant>* pArgs = NULL ) :
		SkyDispatchImpl( EXTERNAL_SKY )
	{
		registerProperty( "enableLighting", make_property( this, &Sky::get_enableLighting, &Sky::put_enableLighting ) );
		registerProperty( "ambient", make_property( this, &Sky::get_ambient, &Sky::put_ambient ) );
		registerProperty( "hours", make_property( this, &Sky::get_hours, &Sky::put_hours ) );
	}

	virtual ~Sky()
	{

	}

	//impl EarthObject
	virtual bool get_visible();
	virtual void put_visible( bool bVisible );
	virtual bool get_enabled();

	//
	bool get_enableLighting();
	void put_enableLighting( bool ifEnable );
	float get_ambient();
	void put_ambient( float fAmbient );
	float get_hours();
	void put_hours( float fHours );

protected:
private:
};

#endif