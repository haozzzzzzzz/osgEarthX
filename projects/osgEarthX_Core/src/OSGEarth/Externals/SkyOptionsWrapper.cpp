
#include <OSGEarth/Externals/SkyOptionsWrapper.h>
using namespace osgEarthXCore;

#include <cassert>

SkyOptionsWrapper::SkyOptionsWrapper( osgEarth::Util::SkyOptions* pOptions )
{
	assert( pOptions != NULL );
	m_pSkyOptions = pOptions;
	m_bEnableLighting = true;
}

SkyOptionsWrapper::~SkyOptionsWrapper()
{

}

void SkyOptionsWrapper::copyOptionalsTo( osgEarth::Util::SkyNode& skyNode )
{
	if ( m_bEnableLighting.isSet() )
	{
		skyNode.setLighting( m_bEnableLighting.get() ? osg::StateAttribute::ON : osg::StateAttribute::OFF  );
	}
}

void SkyOptionsWrapper::setAmbient( float fAmbient )
{
	m_pSkyOptions->ambient() = fAmbient;
}

float SkyOptionsWrapper::getAmbient()
{
	return m_pSkyOptions->ambient().get();
}

void SkyOptionsWrapper::setHours( float fHours )
{
	m_pSkyOptions->hours() = fHours;
}

float SkyOptionsWrapper::getHours()
{
	return m_pSkyOptions->hours().get();
}

void SkyOptionsWrapper::enableLighting( bool bIfEnable )
{
	m_bEnableLighting = bIfEnable;
}

bool SkyOptionsWrapper::isEnableLighting()
{
	return m_bEnableLighting.get();
}
