#ifndef OSGEARTHX_WEB_VECTOR_SOURCE_SIMPLE_H
#define OSGEARTHX_WEB_VECTOR_SOURCE_SIMPLE_H 1

#include <EarthWeb/Source/SourceDispatchImpl.h>
#include <EarthWeb/Source/VectorSource/IVectorSourceDispatch.h>

#include <osgEarthDrivers/model_simple/SimpleModelOptions>

#define VectorSourceSimpleDispatchImpl SourceDispatchImpl< osgEarth::Drivers::SimpleModelOptions, VectorSourceSimple, IVectorSourceDispatch >

FB_FORWARD_PTR(VectorSourceSimple)
class VectorSourceSimple : 
	public VectorSourceSimpleDispatchImpl
{
public:
	VectorSourceSimple( const std::vector<FB::variant>* pArgs = NULL ) : VectorSourceSimpleDispatchImpl( VECTOR_SOURCE_SIMPLE )
	{

	}

	virtual ~VectorSourceSimple(){}

protected:
private:
};


#endif