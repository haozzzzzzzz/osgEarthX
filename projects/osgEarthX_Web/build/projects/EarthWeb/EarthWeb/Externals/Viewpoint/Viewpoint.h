/**
	@Viewpoint½Ó¿Ú
	@author Hao Luo
	@date 2015/01/26
*/

#ifndef OSGEARTHX_WEB_VIEWPOINT_H
#define OSGEARTHX_WEB_VIEWPOINT_H 1

#include <EarthWeb/EarthObject/EarthObjectDispatchImpl.h>
#include <EarthWeb/EarthObject/IEarthObject.h>

//osgEarthX
#include <Externals/Viewpoint.h>

#define ViewpointDispatchImpl EarthObjectDispatchImpl< osgEarthX::Viewpoint, Viewpoint, IEarthObject >

FB_FORWARD_PTR(Viewpoint)
class Viewpoint : 
	public ViewpointDispatchImpl
{
public:

	Viewpoint(  const std::vector<FB::variant>* pArgs = NULL  ) :
		ViewpointDispatchImpl( EXTERNAL_VIEWPOINT )
	{
		registerMethod( "flyTo", make_method( this, &Viewpoint::flyTo ) );
		registerProperty( "x", make_property( this, &Viewpoint::get_x, &Viewpoint::put_x ) );
		registerProperty( "y", make_property( this, &Viewpoint::get_y, &Viewpoint::put_y ) );
		registerProperty( "z", make_property( this, &Viewpoint::get_z, &Viewpoint::put_z ) );
		registerProperty( "heading", make_property( this, &Viewpoint::get_heading, &Viewpoint::put_heading ) );
		registerProperty( "pitch", make_property( this, &Viewpoint::get_pitch, &Viewpoint::put_pitch ) );
		registerProperty( "range", make_property( this, &Viewpoint::get_range, &Viewpoint::put_range ) );
	}

	virtual ~Viewpoint()
	{

	}

	//impl EarthObject
	virtual bool get_visible();
	virtual void put_visible( bool bVisible );
	virtual bool get_enabled();

	void flyTo();

	double get_x();
	void put_x( double value );

	double get_y();
	void put_y( double value );

	double get_z();
	void put_z( double value );

	double get_heading();
	void put_heading( double value );

	double get_pitch();
	void put_pitch( double value );

	double get_range();
	void put_range( double value );

protected:
private:
};

#endif