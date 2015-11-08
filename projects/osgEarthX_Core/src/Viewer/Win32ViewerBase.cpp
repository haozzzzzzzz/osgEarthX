#include <Viewer/Win32ViewerBase.h>
using namespace osgEarthXCore;

#include <osgViewer/api/Win32/GraphicsWindowWin32>


void Win32ViewerBase::setCameraGraphicsWindow( osg::Camera* pCamera, HWND hWnd )
{
	if ( hWnd == NULL || pCamera == NULL )
	{
		return;
	}

	osgViewer::GraphicsWindowWin32::WindowData* pWindowData = new osgViewer::GraphicsWindowWin32::WindowData( hWnd );

	RECT rect;
	::GetWindowRect( hWnd, &rect );

	osg::GraphicsContext::Traits* pTraints = new osg::GraphicsContext::Traits( osg::DisplaySettings::instance() );
	pTraints->x = 0;
	pTraints->y = 0;
	pTraints->width = rect.right - rect.left;
	pTraints->height = rect.bottom - rect.top;
	pTraints->windowDecoration = false;
	pTraints->doubleBuffer = true;
	pTraints->inheritedWindowData = pWindowData;

	GraphicsViewerBase::setCameraGraphicsWindow( pCamera, osg::GraphicsContext::createGraphicsContext( pTraints ) );
}
