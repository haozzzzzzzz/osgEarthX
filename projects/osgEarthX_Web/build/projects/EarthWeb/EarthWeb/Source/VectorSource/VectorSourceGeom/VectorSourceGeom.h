#ifndef OSGEARTHX_WEB_VECTOR_SOURCE_GEOM_H
#define OSGEARTHX_WEB_VECTOR_SOURCE_GEOM_H 1

#include <EarthWeb/Source/SourceDispatchImpl.h>
#include <EarthWeb/Source/VectorSource/IVectorSourceDispatch.h>
#include <EarthWeb/Source/FeatureSource/IFeatureSourceDispatch.h>

//osgEarth
#include <osgEarthDrivers/model_feature_geom/FeatureGeomModelOptions>

#define VectorSourceGeomDispatchImpl SourceDispatchImpl< osgEarth::Drivers::FeatureGeomModelOptions, VectorSourceGeom, IVectorSourceDispatch >

FB_FORWARD_PTR(VectorSourceGeom)
class VectorSourceGeom : 
	public VectorSourceGeomDispatchImpl
{
public:
	VectorSourceGeom( const std::vector<FB::variant>* pArgs = NULL );

	virtual ~VectorSourceGeom(){}
private:
	void _register()
	{
		registerProperty( "featureSource", make_property( this, &VectorSourceGeom::get_featureSource, &VectorSourceGeom::put_featureSource ) );
	}

public:
	IFeatureSourceDispatchPtr get_featureSource();
	void put_featureSource( IFeatureSourceDispatchPtr ptrIFeatureSourceDispatch );

protected:
private:
};

#endif