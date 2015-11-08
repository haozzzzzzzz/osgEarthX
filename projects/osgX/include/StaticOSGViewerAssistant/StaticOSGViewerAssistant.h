/**
	@brief OSGæ≤Ã¨∏®÷˙¿‡
	@author Hao Luo
	@date 2015/03/17
*/

#ifndef OSGX_STATIC_OSG_VIEWER_ASSISTANT_H
#define OSGX_STATIC_OSG_VIEWER_ASSISTANT_H 1

#include <osgXExport/Export.h>

#include <osgViewer/ViewerBase>
#include <OpenThreads/ReadWriteMutex>

namespace osgX
{
	class OSGX_EXPORT StaticOSGViewerAssistant
	{
	private:
		static osgViewer::ViewerBase* m_pViewerBase;
		static OpenThreads::ReadWriteMutex m_ViewerBaseMutex;

	public:
		static void setViewerBase( osgViewer::ViewerBase* pViewerBase );

	public:
		static void dealWithUpdateOperation( osg::ref_ptr< osg::Operation > refOperation );

	};
}

#endif