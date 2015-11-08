#include <EarthWeb/Annotation/ImageOverlay/ImageOverlay.h>
#include <atlstr.h>

bool ImageOverlay::get_visible()
{
	return getOrCreateInnerObject()->isVisible();
}

void ImageOverlay::put_visible( bool bVisible )
{
	getOrCreateInnerObject()->setVisible( bVisible );
}

bool ImageOverlay::get_enabled()
{
	return getOrCreateInnerObject()->isEnabled();
}

void ImageOverlay::setImageSrc( const std::wstring& wstrImgSrc )
{
	getOrCreateInnerObject()->setImageSrc( CStringA( wstrImgSrc.data() ).GetString() );
}

void ImageOverlay::setBounds( double lowerLeftX, double lowerLeftY, double upperRightX, double upperRightY )
{
	getOrCreateInnerObject()->setBounds( osgEarth::Bounds::Bounds( lowerLeftX, lowerLeftY, upperRightX, upperRightY ) );
}