#include <EarthWeb/Basis/GeoData/GeoPoint/GeoPoint.h>

void GeoPoint::put_x( double dX )
{
	getOrCreateInnerObject()->x() = dX;
}

double GeoPoint::get_x()
{
	return getOrCreateInnerObject()->x();
}

void GeoPoint::put_y( double dY )
{
	getOrCreateInnerObject()->y() = dY;
}

double GeoPoint::get_y()
{
	return getOrCreateInnerObject()->y();
}

void GeoPoint::put_z( double dZ )
{
	getOrCreateInnerObject()->z() = dZ;
}

double GeoPoint::get_z()
{
	return getOrCreateInnerObject()->z();
}