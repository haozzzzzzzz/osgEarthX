/**
	@brief 物体回调
	@author Hao Luo
	@date 2014/11/08
*/

#ifndef OSGEARTHX_OBJECT_EVENT_CALLBACK_H
#define OSGEARTHX_OBJECT_EVENT_CALLBACK_H 1

//OSGEARTHX_CORE
#include <Callback/Callback.h>

//OSGEARTHX
#include <Object/ObjectEventFirer.h>

namespace osgEarthX
{
	class ObjectEventCallback:
		public osgEarthXCore::Callback
	{
	public:
		ObjectEventCallback(ObjectEventFirer*pEventFirer);

		virtual void doCallback(osgEarthXCore::Change* pChange);

	protected:
		virtual ~ObjectEventCallback();

	protected:
		ObjectEventFirer* m_pObjectEventFirer;

	private:
	};
}

#endif