/**
	@brief ImageOverlay JS½Ó¿Ú
	@author Hao Luo
	@date 2015/04/02
*/

#ifndef OSGEARTHX_WEB_IMAGE_OVERLAY_H
#define OSGEARTHX_WEB_IMAGE_OVERLAY_H 1

#include <EarthWeb/EarthObject/EarthObjectDispatchImpl.h>
#include <EarthWeb/EarthObject/IEarthObject.h>

#include <Annotation/ImageOverlay.h>

#define ImageOverlayDispatchImp EarthObjectDispatchImpl< osgEarthX::ImageOverlay, ImageOverlay, IEarthObject >

FB_FORWARD_PTR(ImageOverlay)
class ImageOverlay : public ImageOverlayDispatchImp
{
public:
	ImageOverlay( const std::vector<FB::variant>* pArgs = NULL ) : ImageOverlayDispatchImp( ANNOTATION_IMAGE_OVERLAY )
	{
		registerMethod( "setImageSrc", make_method( this, & ImageOverlay::setImageSrc ) );
		registerMethod( "setBounds", make_method( this, & ImageOverlay::setBounds ) );
	}

	virtual ~ImageOverlay(){}

	//impl EarthObject
	virtual bool get_visible();
	virtual void put_visible( bool bVisible );
	virtual bool get_enabled();

	void setImageSrc( const std::wstring& wstrImgSrc );
	void setBounds( double lowerLeftX, double lowerLeftY, double upperRightX, double upperRightY );

protected:
private:
};

#endif