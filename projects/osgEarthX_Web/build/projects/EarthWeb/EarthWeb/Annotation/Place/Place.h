/**
	@brief Place JS½Ó¿Ú
	@author Hao Luo
	@date 2015/04/02
*/

#ifndef OSGEARTHX_WEB_PLACE_H
#define OSGEARTHX_WEB_PLACE_H 1

#include <EarthWeb/EarthObject/EarthObjectDispatchImpl.h>
#include <EarthWeb/EarthObject/IEarthObject.h>

#include <Annotation/Place.h>
#include <EarthWeb/Basis/GeoData/GeoPoint/GeoPoint.h>

#define PlaceDispatchImpl EarthObjectDispatchImpl< osgEarthX::Place, Place, IEarthObject >

FB_FORWARD_PTR(Place)
class Place : public PlaceDispatchImpl
{
public:
	Place( const std::vector<FB::variant>* pArgs = NULL ) : PlaceDispatchImpl( ANNOTATION_PLACE )
	{
		registerMethod( "setPosition", make_method( this, & Place::setPosition ) );
		registerMethod( "getPosition", make_method( this, & Place::getPosition ) );
		registerMethod( "setText", make_method( this, & Place::setText ) );
		registerMethod( "getText", make_method( this, & Place::getText ) );
		registerMethod( "setImageSrc", make_method( this, & Place::setImageSrc ) );

	}

	virtual ~Place(){}

	//impl EarthObject
	virtual bool get_visible();
	virtual void put_visible( bool bVisible );
	virtual bool get_enabled();

	//
	void setPosition( GeoPointPtr ptrGeoPoint );
	GeoPointPtr getPosition();
	void setText( const std::wstring& wstrText );
	std::wstring getText();
	void setImageSrc( const std::wstring& wstrImgSrc );

protected:
private:
};

#endif