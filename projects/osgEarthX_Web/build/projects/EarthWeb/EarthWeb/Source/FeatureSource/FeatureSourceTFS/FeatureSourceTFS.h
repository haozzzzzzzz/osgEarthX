#ifndef OSGEARTHX_WEB_FEATURE_SOURCE_TFS_H
#define OSGEARTHX_WEB_FEATURE_SOURCE_TFS_H 1

#include <EarthWeb/Source/SourceDispatchImpl.h>
#include <EarthWeb/Source/FeatureSource/IFeatureSourceDispatch.h>

#include <osgEarthDrivers/feature_tfs/TFSFeatureOptions>

#define FeatureSourceTFSDispatchImpl SourceDispatchImpl< osgEarth::Drivers::TFSFeatureOptions, FeatureSourceTFS, IFeatureSourceDispatch >

FB_FORWARD_PTR(FeatureSourceTFS)
class FeatureSourceTFS : 
	public FeatureSourceTFSDispatchImpl
{
public:
	FeatureSourceTFS( const std::vector<FB::variant>* pArgs = NULL ) : FeatureSourceTFSDispatchImpl( FEATURE_SOURCE_TFS )
	{

	}

	virtual ~FeatureSourceTFS(){}

protected:
private:
};

#endif