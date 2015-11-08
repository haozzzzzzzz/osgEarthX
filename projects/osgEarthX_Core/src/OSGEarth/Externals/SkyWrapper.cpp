
#include <OSGEarth/Externals/SkyWrapper.h>
using namespace osgEarthXCore;

#include <cassert>

SkyWrapper::SkyWrapper( osgEarth::Util::SkyNode* pSkyNode )
{
	assert( pSkyNode != NULL );
	m_pSkyNode = pSkyNode;
}

SkyWrapper::~SkyWrapper()
{

}

void SkyWrapper::setAmbient( float fAmbient )
{
	m_pSkyNode->getSunLight()->setAmbient( osg::Vec4( fAmbient, fAmbient, fAmbient, 1.0f ) );
}

float SkyWrapper::getAmbient()
{
	return m_pSkyNode->getSunLight()->getAmbient().a();
}

void SkyWrapper::setHours( float fHours )
{
	const osgEarth::DateTime& dateTime = m_pSkyNode->getDateTime();
	fHours = osg::clampBetween( fHours, 0.0f, 24.0f );
	m_pSkyNode->setDateTime( osgEarth::DateTime( dateTime.year(), dateTime.month(), dateTime.day(), ( double )fHours ) );
}

float SkyWrapper::getHours()
{
	return m_pSkyNode->getDateTime().hours();
}

void SkyWrapper::enableLighting( bool bIfEnable )
{
	m_pSkyNode->setLighting( bIfEnable ? osg::StateAttribute::ON : osg::StateAttribute::OFF );
}

bool SkyWrapper::isEnableLighting()
{
	return m_pSkyNode->getLighting() == osg::StateAttribute::ON;
}