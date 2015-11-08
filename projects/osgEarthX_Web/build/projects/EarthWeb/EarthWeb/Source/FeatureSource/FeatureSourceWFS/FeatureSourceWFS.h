#ifndef OSGEARTHX_WEB_FEATURE_SOURCE_WFS_H
#define OSGEARTHX_WEB_FEATURE_SOURCE_WFS_H 1


#include <EarthWeb/Source/SourceDispatchImpl.h>
#include <EarthWeb/Source/FeatureSource/IFeatureSourceDispatch.h>

#include <osgEarthDrivers/feature_wfs/WFSFeatureOptions>

#define FeatureSourceWFSDispatchImpl SourceDispatchImpl< osgEarth::Drivers::WFSFeatureOptions, FeatureSourceWFS, IFeatureSourceDispatch >

FB_FORWARD_PTR(FeatureSourceWFS)
class FeatureSourceWFS : 
	public FeatureSourceWFSDispatchImpl
{
public:
	FeatureSourceWFS( const std::vector<FB::variant>* pArgs = NULL ) : FeatureSourceWFSDispatchImpl( FEATURE_SOURCE_WFS )
	{

	}

	virtual ~FeatureSourceWFS(){}

protected:
private:
};

#endif