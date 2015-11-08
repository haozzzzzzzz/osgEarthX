#include <EarthWeb/Annotation/Place/Place.h>
#include <atlstr.h>

bool Place::get_visible()
{
	return getOrCreateInnerObject()->isVisible();
}

void Place::put_visible( bool bVisible )
{
	getOrCreateInnerObject()->setVisible( bVisible );
}

bool Place::get_enabled()
{
	return getOrCreateInnerObject()->isEnabled();
}

void Place::setPosition( GeoPointPtr ptrGeoPoint )
{
	if ( ptrGeoPoint.get() == NULL )
	{
		return;
	}

	getOrCreateInnerObject()->setPosition( * ptrGeoPoint->getOrCreateInnerObject() );
}

GeoPointPtr Place::getPosition()
{
	GeoPointPtr ptrGeoPoint = boost::make_shared<GeoPoint>();
	*( ptrGeoPoint->getOrCreateInnerObject() ) = getOrCreateInnerObject()->getPosition();
	return ptrGeoPoint;
}

void Place::setText( const std::wstring& wstrText )
{
	getOrCreateInnerObject()->setText( CStringA( wstrText.data() ).GetString() );
}

std::wstring Place::getText()
{
	return ( std::wstring ) CString( getOrCreateInnerObject()->getText().data() );
}

void Place::setImageSrc( const std::wstring& wstrImgSrc )
{
	getOrCreateInnerObject()->setImageSrc( CStringA( wstrImgSrc.data() ).GetString() );
}