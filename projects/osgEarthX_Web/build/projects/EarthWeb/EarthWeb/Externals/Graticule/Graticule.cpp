#include <EarthWeb/Externals/Graticule/Graticule.h>

bool Graticule::get_visible()
{
	return getOrCreateInnerObject()->isVisible();
}

void Graticule::put_visible( bool bVisible )
{
	getOrCreateInnerObject()->setVisible( bVisible );
}

bool Graticule::get_enabled()
{
	return getOrCreateInnerObject()->isEnabled();
}