/*
	@brief : VectorSurfaceLayer JS API
	@author : Hao Luo
	@date : 2014/11/22
*/
#ifndef OSGEARTHX_WEB_VECTOR_SURFACE_LAYER_H
#define OSGEARTHX_WEB_VECTOR_SURFACE_LAYER_H 1

#include <EarthWeb/EarthObject/EarthObjectDispatchImpl.h>
#include <EarthWeb/Layer/Layer/ILayer.h>
#include <EarthWeb/Source/VectorSource/IVectorSourceDispatch.h>

//osgEarthX
#include <Layer/VectorSurfaceLayer.h>

#define VectorSurfaceLayerDispatchImpl EarthObjectDispatchImpl< osgEarthX::VectorSurfaceLayer, VectorSurfaceLayer, ILayer >

FB_FORWARD_PTR(VectorSurfaceLayer)
class VectorSurfaceLayer : 
	public VectorSurfaceLayerDispatchImpl
{
public:
	VectorSurfaceLayer(const std::vector<FB::variant>* pArgs = NULL) :
		VectorSurfaceLayerDispatchImpl( VECTOR_SURFACE_LAYER )
	{
		registerProperty( "vectorSource", make_property( this, &VectorSurfaceLayer::get_vectorSource, &VectorSurfaceLayer::put_vectorSource ) );
	}

	virtual ~VectorSurfaceLayer(){}

	//impl EarthObject
	virtual bool get_visible();
	virtual void put_visible(bool bVisible);
	virtual bool get_enabled();

	IVectorSourceDispatchPtr get_vectorSource();
	void put_vectorSource( IVectorSourceDispatchPtr ptrIVectorSourceDispatch );

protected:
private:
};

#endif