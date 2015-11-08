#ifndef OSGEARTHX_WEB_I_FEATURE_SOURCE_DISPATCH_H
#define OSGEARTHX_WEB_I_FEATURE_SOURCE_DISPATCH_H 1

#include <EarthWeb/Source/ISourceDispatch.h>

FB_FORWARD_PTR(IFeatureSourceDispatch)
class IFeatureSourceDispatch : public ISourceDispatch
{
public:
	IFeatureSourceDispatch(){}
	virtual ~IFeatureSourceDispatch(){}

protected:
private:
};

#endif