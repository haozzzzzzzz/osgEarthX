/**
	@brief 用于浏览三维地图的Viewer
	@author Hao Luo
	@date 2014/12/15
*/

#ifndef OSGEARTHX_CORE_MAP_VIEWER_H
#define OSGEARTHX_CORE_MAP_VIEWER_H 1

#include <osgEarthXCoreExport/Export.h>
#include <Viewer/ViewerProviderT.h>
#include <Provider/ExternalProvider/ViewpointProvider.h>

#include <osgEarthUtil/EarthManipulator>
#include <osgViewer/Viewer>

namespace osgEarthXCore
{
	class BaseMap;

	class OSGEARTHX_CORE_EXPORT MapViewer:
		virtual public osg::Referenced,
		public ViewerProviderT< osgViewer::Viewer >
	{
	public:
		friend BaseMap;

	protected:
		osg::ref_ptr< BaseMap > m_refMap;
		osg::ref_ptr< osgEarth::Util::EarthManipulator > m_refEarthManipulator;

	public:
		MapViewer( osgViewer::Viewer* pViewer = NULL );
		virtual ~MapViewer();

		osgEarth::Util::EarthManipulator* getOrCreateEarthManipulator();
		void setMap( BaseMap* pMap );

		virtual void run();
		virtual void stop();

	protected:
		virtual void initialized();
		void _setMap( BaseMap* pMap );

	protected:

		class SetMapViewerDataOperation : public osg::Operation
		{
		public:
			SetMapViewerDataOperation( MapViewer* pMapViewer, BaseMap* pBaseMap );
			void operator()( osg::Object* pObject);
		protected:
			virtual ~SetMapViewerDataOperation();

		private:
			osg::ref_ptr< MapViewer > m_refMapViewer;
			osg::ref_ptr< BaseMap > m_refBaseMap;
		};

	};
}

#endif