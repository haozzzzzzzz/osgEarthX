/**
	@brief 通知父组状态发生改变的回调
	@author Hao Luo
	@date 2014/11/07
	@description 当前状态发生变化，通知父节点。使用时，父节点创建该回调，传给子节点，告诉子节点，
						当子节点状态发生变化时，应该通知父节点。
*/

#ifndef OSGEARTHX_NOTIFIED_GROUP_CALLBACK_H
#define OSGEARTHX_NOTIFIED_GROUP_CALLBACK_H 1

//OSGEARTHX_CORE
#include <Callback/Callback.h>

namespace osgEarthX
{
	class Group;

	class NotifiedGroupCallback:
		public osgEarthXCore::Callback
	{
	public:
		NotifiedGroupCallback( Group*pGroup );//通知给pGroup

		virtual void doCallback( osgEarthXCore::Change* pChange );

	protected:
		virtual ~NotifiedGroupCallback();

	protected:
		Group* m_pParentGroup;
	};
}

#endif