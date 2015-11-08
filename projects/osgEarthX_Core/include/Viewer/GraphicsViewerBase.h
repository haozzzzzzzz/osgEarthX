/**
	@brief Base Class Of Viewer
	@author Hao Luo
	@date 2015/04/10
*/

#ifndef OSGEARTHX_CORE_GRAPHICS_VIEWER_BASE_H
#define OSGEARTHX_CORE_GRAPHICS_VIEWER_BASE_H 1

#include <osgEarthXCoreExport/Export.h>
#include <osg/Camera>
namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT GraphicsViewerBase
	{
	public:
		static void setCameraGraphicsWindow( osg::Camera* pCamera, osg::GraphicsContext* pGraphicContext );

	protected:

	private:
	};
}

#endif
