#include <Viewer/QtViewerBase.h>
using namespace AtEarthCore;

void QtViewerBase::setCameraGraphicsWindow( osg::Camera* pCamera, osgQt::GLWidget* pWidget )
{
	if ( pCamera == NULL || pWidget == NULL )
	{
		return;
	}

	osg::DisplaySettings* pDisplaySettings = osg::DisplaySettings::instance().get();
	osg::GraphicsContext::Traits* pTraints = new osg::GraphicsContext::Traits( pDisplaySettings );

	pTraints->x = pWidget->x();
	pTraints->y = pWidget->y();
	pTraints->width = pWidget->width();
	pTraints->height = pWidget->height();
	pTraints->doubleBuffer = true;
	pTraints->inheritedWindowData = new osgQt::GraphicsWindowQt::WindowData( pWidget );

	GraphicsViewerBase::setCameraGraphicsWindow( pCamera, new osgQt::GraphicsWindowQt( pTraints ) );
}
