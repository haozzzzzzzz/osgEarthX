
#include <Provider/ExternalProvider/ViewpointProvider.h>
using namespace osgEarthXCore;

ViewpointProvider::ViewpointProvider( osgEarth::Util::EarthManipulator* pEarthManipulator )
{
	m_refManipulator = pEarthManipulator;
	_init();
}

void ViewpointProvider::_init()
{
	m_ProviderState = AsynProvider::INITIALIZED;
}

ViewpointProvider::ViewpointProvider( const osg::Vec3d& focal_point, double heading_deg, double pitch_deg, double range, const osgEarth::SpatialReference* srs /* =NULL */, osgEarth::Util::EarthManipulator* pEarthManipulator ) :
	osgEarth::Viewpoint(focal_point, heading_deg, pitch_deg, range, srs)
{
	m_refManipulator = pEarthManipulator;
	_init();
}

ViewpointProvider::ViewpointProvider( double x_or_lon, double y_or_lat, double z, double heading_deg, double pitch_deg, double range, const osgEarth::SpatialReference* srs /* =NULL */, osgEarth::Util::EarthManipulator* pEarthManipulator ) :
	osgEarth::Viewpoint(x_or_lon, y_or_lat, z, heading_deg, pitch_deg, range, srs)
{
	m_refManipulator = pEarthManipulator;
	_init();
}

ViewpointProvider::ViewpointProvider( const std::string& name, const osg::Vec3d& focal_point, double heading_deg, double pitch_deg, double range, const osgEarth::SpatialReference* srs /* =NULL */, osgEarth::Util::EarthManipulator* pEarthManipulator ) : 
	osgEarth::Viewpoint(name, focal_point, heading_deg, pitch_deg, range, srs)
{
	m_refManipulator = pEarthManipulator;
	_init();
}

ViewpointProvider::ViewpointProvider( const std::string& name, double x_or_lon, double y_or_lat, double z, double heading_deg, double pitch_deg, double range, const osgEarth::SpatialReference* srs /* =NULL */, osgEarth::Util::EarthManipulator* pEarthManipulator ) :
	osgEarth::Viewpoint(name, x_or_lon, y_or_lat, z, heading_deg, pitch_deg, range, srs)
{
	m_refManipulator = pEarthManipulator;
	_init();
}

ViewpointProvider::ViewpointProvider( const osgEarth::Config& conf ) : osgEarth::Viewpoint(conf)
{
	m_refManipulator = NULL;
	_init();
}

ViewpointProvider::ViewpointProvider( const ViewpointProvider& rhs ) : osgEarth::Viewpoint(rhs)
{
	m_ProviderState = rhs.m_ProviderState;
	m_refManipulator = rhs.m_refManipulator;
}

void ViewpointProvider::bindEarthManipulator( osgEarth::Util::EarthManipulator* pManipulator )
{
	m_refManipulator = pManipulator;
}

void ViewpointProvider::flyTo()
{
	if ( m_refManipulator == NULL )
	{
		return;
	}

	Viewpoint currentVP = m_refManipulator->getViewpoint();
	osgEarth::GeoPoint vp0( currentVP.getSRS(), currentVP.getFocalPoint(), osgEarth::ALTMODE_ABSOLUTE );
	osgEarth::GeoPoint vp1( this->getSRS(), this->getFocalPoint(), osgEarth::ALTMODE_ABSOLUTE );
	double distance = vp0.distanceTo( vp1 );
	double duration = osg::clampBetween( distance / VP_METERS_PER_SECOND, VP_MIN_DURATION, VP_MAX_DURATION );
	m_refManipulator->setViewpoint( *this, duration );
}

ViewpointProvider::~ViewpointProvider()
{

}