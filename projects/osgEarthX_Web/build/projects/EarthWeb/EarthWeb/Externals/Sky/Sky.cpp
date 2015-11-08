#include <EarthWeb/Externals/Sky/Sky.h>

bool Sky::get_visible()
{
	return getOrCreateInnerObject()->isVisible();
}

void Sky::put_visible( bool bVisible )
{
	getOrCreateInnerObject()->setVisible( bVisible );
}

bool Sky::get_enabled()
{
	return getOrCreateInnerObject()->isEnabled();
}

bool Sky::get_enableLighting()
{
	return getOrCreateInnerObject()->isEnableLighting();
}

void Sky::put_enableLighting( bool ifEnable )
{
	getOrCreateInnerObject()->enableLighting( ifEnable );
}

float Sky::get_ambient()
{
	return getOrCreateInnerObject()->getAmbient();
}

void Sky::put_ambient( float fAmbient )
{
	getOrCreateInnerObject()->setAmbient( fAmbient );
}

float Sky::get_hours()
{
	return getOrCreateInnerObject()->getHours();
}

void Sky::put_hours( float fHours )
{
	getOrCreateInnerObject()->setHours( fHours );
}