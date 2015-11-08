/**
	@brief ViewpointÃ·π©’ﬂ
	@author Hao Luo
	@date 2015/01/20
*/

#ifndef OSGEARTHX_CORE_VIEWPOINT_PROVIDER_H
#define OSGEARTHX_CORE_VIEWPOINT_PROVIDER_H 1

#include <osgEarthXCoreExport/Export.h>
#include <Provider/AsynProvider.h>

#include <osgEarth/Viewpoint>
#include <osgEarthUtil/EarthManipulator>

namespace osgEarthXCore
{
#define VP_MIN_DURATION      2.0     // minimum fly time.
#define VP_METERS_PER_SECOND 2500.0  // fly speed
#define VP_MAX_DURATION      2.0 //8.0     // maximum fly time.

	class OSGEARTHX_CORE_EXPORT ViewpointProvider : 
		public osgEarth::Viewpoint,
		public AsynProvider
	{
	public:
		ViewpointProvider( osgEarth::Util::EarthManipulator* pEarthManipulator = NULL );

		ViewpointProvider(
			const osg::Vec3d& focal_point,
			double heading_deg,
			double pitch_deg,
			double range,
			const osgEarth::SpatialReference* srs = NULL,
			osgEarth::Util::EarthManipulator* pEarthManipulator = NULL );

		ViewpointProvider(
			double x_or_lon, double y_or_lat, double z,
			double heading_deg,
			double pitch_deg,
			double range,
			const osgEarth::SpatialReference* srs =NULL,
			osgEarth::Util::EarthManipulator* pEarthManipulator = NULL  );

		ViewpointProvider(
			const std::string& name,
			const osg::Vec3d& focal_point,
			double heading_deg,
			double pitch_deg,
			double range,
			const osgEarth::SpatialReference* srs =NULL,
			osgEarth::Util::EarthManipulator* pEarthManipulator = NULL  );

		ViewpointProvider(
			const std::string& name,
			double x_or_lon, double y_or_lat, double z,
			double heading_deg,
			double pitch_deg,
			double range,
			const osgEarth::SpatialReference* srs =NULL,
			osgEarth::Util::EarthManipulator* pEarthManipulator = NULL  );

        ViewpointProvider( const osgEarth::Config& conf );

        ViewpointProvider( const ViewpointProvider& rhs );

		void bindEarthManipulator( osgEarth::Util::EarthManipulator* pManipulator );
		void flyTo();

	protected:
		virtual ~ViewpointProvider();

		void _init();

	protected:
		osg::ref_ptr< osgEarth::Util::EarthManipulator > m_refManipulator;

	private:
	};
}

#endif