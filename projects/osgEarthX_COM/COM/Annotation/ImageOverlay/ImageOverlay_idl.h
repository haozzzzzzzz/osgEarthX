#ifndef OSGEARTHX_COM_IMAGE_OVERLAY_IDL_H
#define OSGEARTHX_COM_IMAGE_OVERLAY_IDL_H 1

#include <COM/EarthObject/IEarthObject_idl.h>

const INT IImageOverlayIdsCount = 2;
const INT IImageOverlayBeginId = IEarthObjectBeginId + IEarthObjectIdsCount;
[
	object,
	uuid(E46E3C9B-362E-4B06-896F-7B1822B6AD59),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IImageOverlay : IEarthObject{
	[ id( IImageOverlayBeginId + 1 ), helpstring( "set image src" ) ] HRESULT setImageSrc( [ in ] BSTR bstrImgSrc );
	[ id( IImageOverlayBeginId + 2 ), helpstring( "set bound of image overlay" ) ] HRESULT setBounds( [ in ] DOUBLE lowerLeftX, [ in ] DOUBLE lowerLeftY, [ in ] DOUBLE upperRightX, [ in ] DOUBLE upperRightY );
};

#endif