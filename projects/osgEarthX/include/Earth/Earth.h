/**
	@brief Earth¿‡
	@author Hao Luo
	@date 2014/11/06
*/

#ifndef OSGEARTHX_EARTH_H
#define OSGEARTHX_EARTH_H 1

#include <osgEarthXExport/Export.h>

//OSGEARTHX
#include <Earth/EarthEventFirer.h>
#include <Event/EventHost.h>

#include <EarthViewer/EarthViewer.h>
#include <EarthMap/EarthMap.h>

#include <Group/NotifiedGroup.h>

#include <Externals/Graticule.h>
#include <Externals/Sky.h>
#include <Externals/Viewpoint.h>

namespace osgEarthX
{
	class OSGEARTHX_EXPORT Earth:
		public EventHost<EarthEventFirer>,
		public osg::Referenced
	{
	public:
		Earth();

		EarthViewer* getEarthViewer();
		void setEarthViewer(EarthViewer* pEarthViewer);

		EarthMap* getEarthMap();
		void setEarthMap(EarthMap*pEarthMap);

		NotifiedGroup* getEarthRoot();

		void setHomeViewpoint( Viewpoint* pViewpoint );
		void setActiveSky( Sky* pSky );
		void removeActiveSky();
		void setActiveGraticule( Graticule* pGraticule );
		void removeActiveGraticule();

		void initialize();
		void run();

	protected:
		virtual ~Earth();

	protected:
		osg::ref_ptr<EarthViewer> m_refEarthViewer;
		osg::ref_ptr<EarthMap> m_refEarthMap;

		osg::ref_ptr<NotifiedGroup> m_refRoot;
	};
}

#endif