/**
	@brief Feature Provider
	@author Hao Luo
	@date 2015/10/31
*/

#ifndef OSGEARTHX_CORE_FEATURE_H
#define OSGEARTHX_CORE_FEATURE_H 1

#include <osgEarthXCoreExport/Export.h>
#include <osgEarthFeatures/Feature>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT Feature : public osgEarth::Features::Feature
	{
	public:
		static void getDefaultPolygonStyle( osgEarth::Symbology::Style& outStyle );
		static void getDefaultLineStringStyle( osgEarth::Symbology::Style& outStyle );
		
	public:
		Feature();

		void init( const osgEarth::SpatialReference* pSRS );

	protected:
		virtual ~Feature();

	private:
	};
}

#endif