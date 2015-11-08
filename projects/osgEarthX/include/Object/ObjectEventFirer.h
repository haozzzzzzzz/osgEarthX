/**
	@brief 物体事件触发类
	@author Hao Luo
	@date 2014/11/08
*/

#ifndef OSGEARTHX_OBJECT_EVENT_FIRER_H
#define OSGEARTHX_OBJECT_EVENT_FIRER_H 1

#include <osgEarthXExport/Export.h>

namespace osgEarthX
{
	class OSGEARTHX_EXPORT ObjectEventFirer
	{
	public:
		virtual void onInitializeCompleted(){}

	};
}

#endif