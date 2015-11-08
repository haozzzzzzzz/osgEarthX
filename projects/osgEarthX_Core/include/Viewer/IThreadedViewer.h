/**
	@brief interface of threaded viewer
	@author Hao Luo
	@date 2015/04/10
*/

#ifndef OSGEARTHX_CORE_I_THREADED_VIEWER_H
#define OSGEARTHX_CORE_I_THREADED_VIEWER_H 1

#include <osgEarthXCoreExport/Export.h>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT IThreadedViewer
	{
	public:
		virtual int start() = 0;
		virtual void stop() = 0;

	protected:
	private:
	};
}

#endif