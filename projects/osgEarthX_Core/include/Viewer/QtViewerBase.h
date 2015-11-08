/**
	@brief base class of qt viewer
	@author Hao Luo
	@date 2015/04/10
*/

#ifndef AT_EARTH_CORE_QT_VIEWER_BASE_H
#define AT_EARTH_CORE_QT_VIEWER_BASE_H 1

#include <AtEarthCoreExport/Export.h>

#include <Viewer/GraphicsViewerBase.h>

#include <osgQt/GraphicsWindowQt>

namespace AtEarthCore
{
	class AT_EARTH_CORE_EXPORT QtViewerBase : 
		public GraphicsViewerBase
	{
	public:

		static void setCameraGraphicsWindow( osg::Camera* pCamera, osgQt::GLWidget* pWidget );

	protected:
	private:
	};
}

#endif