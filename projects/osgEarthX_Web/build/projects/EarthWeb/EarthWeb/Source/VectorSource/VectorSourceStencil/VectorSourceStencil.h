#ifndef OSGEARTHX_WEB_VECTOR_SOURCE_STENCIL_H
#define OSGEARTHX_WEB_VECTOR_SOURCE_STENCIL_H 1

#include <EarthWeb/Source/SourceDispatchImpl.h>
#include <EarthWeb/Source/VectorSource/IVectorSourceDispatch.h>

#include <osgEarthDrivers/model_feature_stencil/FeatureStencilModelOptions>

#define VectorSourceStencilDispatchImpl SourceDispatchImpl< osgEarth::Drivers::FeatureStencilModelOptions, VectorSourceStencil, IVectorSourceDispatch >

FB_FORWARD_PTR(VectorSourceStencil)
class VectorSourceStencil : 
	public VectorSourceStencilDispatchImpl
{
public:
	VectorSourceStencil( const std::vector<FB::variant>* pArgs = NULL ) : VectorSourceStencilDispatchImpl( VECTOR_SOURCE_STENCIL )
	{

	}

	virtual ~VectorSourceStencil(){}

protected:
private:
};


#endif