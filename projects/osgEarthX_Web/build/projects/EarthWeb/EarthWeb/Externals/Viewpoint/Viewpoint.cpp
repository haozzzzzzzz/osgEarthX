#include <EarthWeb/Externals/Viewpoint/Viewpoint.h>

bool Viewpoint::get_visible()
{
	return getOrCreateInnerObject()->isVisible();
}

void Viewpoint::put_visible( bool bVisible )
{
	getOrCreateInnerObject()->setVisible( bVisible );
}

bool Viewpoint::get_enabled()
{
	return getOrCreateInnerObject()->isEnabled();
}

void Viewpoint::flyTo()
{
	getOrCreateInnerObject()->flyTo();
}

double Viewpoint::get_x()
{
	return getOrCreateInnerObject()->x();
}

void Viewpoint::put_x( double value )
{
	getOrCreateInnerObject()->x() = value;
}

double Viewpoint::get_y()
{
	return getOrCreateInnerObject()->y();
}

void Viewpoint::put_y( double value )
{
	getOrCreateInnerObject()->y() = value;
}

double Viewpoint::get_z()
{
	return getOrCreateInnerObject()->z();
}

void Viewpoint::put_z( double value )
{
	getOrCreateInnerObject()->z() = value;
}

double Viewpoint::get_heading()
{
	return getOrCreateInnerObject()->getHeading();
}

void Viewpoint::put_heading( double value )
{
	getOrCreateInnerObject()->setHeading( value );
}

double Viewpoint::get_pitch()
{
	return getOrCreateInnerObject()->getPitch();
}

void Viewpoint::put_pitch( double value )
{
	getOrCreateInnerObject()->setPitch( value );
}

double Viewpoint::get_range()
{
	return getOrCreateInnerObject()->getRange();
}

void Viewpoint::put_range( double value )
{
	getOrCreateInnerObject()->setRange( value );
}