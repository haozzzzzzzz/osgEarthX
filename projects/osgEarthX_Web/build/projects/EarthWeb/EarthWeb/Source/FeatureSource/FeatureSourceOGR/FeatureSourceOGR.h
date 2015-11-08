#ifndef OSGEARTHX_WEB_FEATURE_SOURCE_OGR_H
#define OSGEARTHX_WEB_FEATURE_SOURCE_OGR_H 1

#include <EarthWeb/Source/SourceDispatchImpl.h>
#include <EarthWeb/Source/FeatureSource/IFeatureSourceDispatch.h>

#include <osgEarthDrivers/feature_ogr/OGRFeatureOptions>

#define FeatureSourceOGRDispatchImpl SourceDispatchImpl< osgEarth::Drivers::OGRFeatureOptions, FeatureSourceOGR, IFeatureSourceDispatch >

FB_FORWARD_PTR(FeatureSourceOGR)
class FeatureSourceOGR : 
	public FeatureSourceOGRDispatchImpl
{
public:
	FeatureSourceOGR( const std::vector<FB::variant>* pArgs = NULL ) : FeatureSourceOGRDispatchImpl( FEATURE_SOURCE_OGR )
	{
		registerProperty( "url", make_property( this,&FeatureSourceOGR::get_url, &FeatureSourceOGR::put_url  ) );
	}

	virtual ~FeatureSourceOGR(){}

	std::wstring get_url();
	void put_url( const std::wstring& strUrl );

protected:
private:
};
#endif