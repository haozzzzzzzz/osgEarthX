/**
	@brief 图层基本触发事件
	@author Hao Luo
	@datee 2014/11/08
*/

#ifndef OSGEARTHX_LAYER_EVENT_FIRER_H
#define OSGEARTHX_LAYER_EVENT_FIRER_H 1

#include <osgEarthXExport/Export.h>
#include <Object/ObjectEventFirer.h>

namespace osgEarthX
{
	class OSGEARTHX_EXPORT LayerEventFirer:
		virtual public ObjectEventFirer
	{
	public:
		virtual void onVisible(){}
		virtual void onHidden(){}
	};
}

#endif