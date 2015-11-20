/**
	@brief 回调函数宿主，继承CallbackHost意味着该派生类拥有执行回调的能力
	@author Hao Luo
	@date 2014/11/08
*/

#ifndef OSGEARTHX_CORE_CALLBACK_HOST_H
#define OSGEARTHX_CORE_CALLBACK_HOST_H 1

#include <osgEarthXCoreExport/Export.h>
#include <Callback/Callback.h>
#include <Utils/DynamicList.h>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT CallbackHost
	{
	public:
		typedef DynamicList< Callback > CallbacksDynamicList;
		typedef CallbacksDynamicList::List CallbacksList;
		typedef CallbacksList::iterator CallbackIterator;

	public:
		virtual ~CallbackHost();

		///添加回调函数
		void addCallback( Callback* pCallback );

		///移除回调函数
		void removeCallback( Callback* pCallback );

	protected:
		///触发回调函数
		///内部不负责释放change
		void callback( Change* pChange );

	protected:
		//回调函数列表
		CallbacksDynamicList m_CallbacksDynamicList;

	private:
	};
}

#endif