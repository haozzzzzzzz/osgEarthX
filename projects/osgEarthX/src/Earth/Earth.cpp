#include <Earth/Earth.h>
using namespace osgEarthX;

#include <Earth/EarthRootCallback.h>

#include <cassert>

Earth::Earth()
{
	m_refRoot = new NotifiedGroup();
	m_refRoot->addCallback( new EarthRootCallback( this ) );
}

Earth::~Earth()
{
}

NotifiedGroup* Earth::getEarthRoot()
{
	return m_refRoot;
}

EarthViewer* Earth::getEarthViewer()
{
	if (m_refEarthViewer == NULL)
	{
		m_refEarthViewer = new EarthViewer;
	}

	return m_refEarthViewer;
}

void Earth::setEarthViewer( EarthViewer* pEarthViewer )
{
	assert(pEarthViewer != NULL);
	m_refEarthViewer = pEarthViewer;
}

EarthMap* Earth::getEarthMap()
{
	if (m_refEarthMap == NULL)
	{
		m_refEarthMap = new EarthMap;
	}

	return m_refEarthMap;
}

void Earth::setEarthMap( EarthMap*pEarthMap )
{
	assert(pEarthMap != NULL);
	m_refEarthMap = pEarthMap;
}

void Earth::initialize()
{
	getEarthViewer()->setMap( getEarthMap() );
}

void Earth::run()
{
	initialize();
	getEarthViewer()->run();
}

void Earth::setActiveSky( Sky* pSky )
{
	getEarthMap()->setSkyProvider( pSky );
}

void Earth::removeActiveSky()
{
	getEarthMap()->removeSkyProvider();
}

void Earth::setHomeViewpoint( Viewpoint* pViewpoint )
{
	getEarthViewer()->getOrCreateEarthManipulator()->setHomeViewpoint( *pViewpoint );
}

void Earth::setActiveGraticule( Graticule* pGraticule )
{
	getEarthMap()->setGraticuleProvider( pGraticule );
}

void Earth::removeActiveGraticule()
{
	getEarthMap()->removeGraticuleProvider();
}