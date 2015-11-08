/**
	@brief base viewer class of win32
	@author Hao Luo
	@date 2015/04/10
*/
#ifndef OSGEARTHX_CORE_WIN32_VIEWER_BASE_H
#define OSGEARTHX_CORE_WIN32_VIEWER_BASE_H 1

#include <Viewer/GraphicsViewerBase.h>
#include <Windows.h>
#include <osg/Camera>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT Win32ViewerBase :
		public GraphicsViewerBase
	{
	public:
		static void setCameraGraphicsWindow( osg::Camera* pCamera, HWND hWnd );

	protected:
	private:
	};
}

#endif