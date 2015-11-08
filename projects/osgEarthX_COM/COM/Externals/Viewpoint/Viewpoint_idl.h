#ifndef VIEWPOINT_IDL_H
#define VIEWPOINT_IDL_H 1

#include <COM/EarthObject/IEarthObject_idl.h>

const INT IViewpointIdsCount = 6;
const INT IViewpointBeginId = IEarthObjectBeginId + IEarthObjectIdsCount;

[
	object,
	uuid(21BA1141-5A5D-449A-AF21-E18899304F79),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IViewpoint : IEarthObject{
	[ id( IViewpointBeginId + 1 ), helpstring("fly to this viewpoint") ] HRESULT flyTo( void );

	[ id( IViewpointBeginId + 2 ), helpstring("get x or lon"), propget ] HRESULT x( [ out, retval ] DOUBLE* pX );
	[ id( IViewpointBeginId + 2 ), helpstring("put x or lon"), propput ] HRESULT x( [ in ] DOUBLE _x );

	[ id( IViewpointBeginId + 3 ), helpstring("get y or lat"), propget ] HRESULT y( [ out, retval ] DOUBLE* pY );
	[ id( IViewpointBeginId + 3 ), helpstring("put y or lat"), propput ] HRESULT y( [ in ] DOUBLE _y );

	[ id( IViewpointBeginId + 4 ), helpstring("get z"), propget ] HRESULT z( [ out, retval ] DOUBLE* pZ );
	[ id( IViewpointBeginId + 4 ), helpstring("put z"), propput ] HRESULT z( [ in ] DOUBLE _z );

	[ id( IViewpointBeginId + 5 ), helpstring("get heading degree"), propget ] HRESULT heading( [ out, retval ] DOUBLE* pHeading );
	[ id( IViewpointBeginId + 5 ), helpstring("put heading degree"), propput ] HRESULT heading( [ in ] DOUBLE _heading );

	[ id( IViewpointBeginId + 6 ), helpstring("get pitch degree"), propget ] HRESULT pitch( [ out, retval ] DOUBLE* pPitch );
	[ id( IViewpointBeginId + 6 ), helpstring("put pitch degree"), propput ] HRESULT pitch( [ in ] DOUBLE _pitch );

	[ id( IViewpointBeginId + 7 ), helpstring("get range"), propget ] HRESULT range( [ out, retval ] DOUBLE* pRange );
	[ id( IViewpointBeginId + 7 ), helpstring("put range"), propput ] HRESULT range( [ in ] DOUBLE _range );

};

#endif