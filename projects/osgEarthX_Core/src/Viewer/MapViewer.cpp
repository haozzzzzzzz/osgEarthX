#include <Viewer/MapViewer.h>
using namespace osgEarthXCore;

#include <osgEarthUtil/EarthManipulator>
//#include <osgEarthUtil/AutoClipPlaneHandler>

//#include <osgViewer/ViewerEventHandlers>
//#include <osgGA/StateSetManipulator>

//OSGX
#include <StaticOSGViewerAssistant/StaticOSGViewerAssistant.h>

#include <Map/BaseMap.h>

MapViewer::SetMapViewerDataOperation::SetMapViewerDataOperation( MapViewer* pMapViewer, BaseMap* pBaseMap )
{
	m_refMapViewer = pMapViewer;
	m_refBaseMap = pBaseMap;
}

MapViewer::SetMapViewerDataOperation::~SetMapViewerDataOperation()
{
	m_refMapViewer = NULL;
	m_refBaseMap = NULL;
}

void MapViewer::SetMapViewerDataOperation::operator()( osg::Object* pObject)
{
	m_refMapViewer->_setMap( m_refBaseMap );
}

MapViewer::MapViewer( osgViewer::Viewer* pViewer /* = NULL */ ) : ViewerProviderT< osgViewer::Viewer >( pViewer )
{
}

MapViewer::~MapViewer()
{
	std::cout << "MapViewer distructing..." << std::endl;
	stop();//停止渲染
	_setMap( NULL );
	m_refViewer = NULL;
}

void MapViewer::initialized()
{
	//地球操纵器
	getOrCreateViewer()->setCameraManipulator( getOrCreateEarthManipulator() );

	////osg 事件处理器
	//m_refViewer->addEventHandler(new osgViewer::StatsHandler());
	//m_refViewer->addEventHandler(new osgViewer::WindowSizeHandler());
	//m_refViewer->addEventHandler(new osgViewer::ThreadingHandler());
	//m_refViewer->addEventHandler(new osgViewer::LODScaleHandler());
	//m_refViewer->addEventHandler(new osgGA::StateSetManipulator(m_Viewer.getCamera()->getOrCreateStateSet()));
	//m_refViewer->addEventHandler(new osgViewer::RecordCameraPathHandler());

	//m_refViewer->getCamera()->setNearFarRatio(0.00002);
	//m_refViewer->getCamera()->setSmallFeatureCullingPixelSize( -1.0f );

	//自动调节geocentric地球上剪裁平面的远近
	//m_refViewer->getCamera()->addCullCallback( new osgEarth::Util::AutoClipPlaneCullCallback( m_refMap->getMapNode() ) );
}

void MapViewer::run()
{
	initialized();

	osgX::StaticOSGViewerAssistant::setViewerBase( getOrCreateViewer() );
	ViewerProviderT< osgViewer::Viewer >::run();
}

void MapViewer::stop()
{
	ViewerProviderT< osgViewer::Viewer >::stop();
	osgX::StaticOSGViewerAssistant::setViewerBase( NULL );
}

osgEarth::Util::EarthManipulator* MapViewer::getOrCreateEarthManipulator()
{
	if ( m_refEarthManipulator.get() == NULL )
	{
		m_refEarthManipulator= new osgEarth::Util::EarthManipulator();
	}
	return m_refEarthManipulator;
}

void MapViewer::setMap( BaseMap* pMap )
{
	osgX::StaticOSGViewerAssistant::dealWithUpdateOperation( new SetMapViewerDataOperation( this, pMap ) );
}

void MapViewer::_setMap( BaseMap* pMap )
{
	if( m_refMap.valid() )
	{
		m_refMap->initMapViewer( NULL );
	}

	if( pMap != NULL )
	{
		getOrCreateViewer()->setSceneData( pMap->getMapRoot() );
		pMap->initMapViewer( this );

	}else{
		getOrCreateViewer()->setSceneData( NULL );
	}

	m_refMap = pMap;
}