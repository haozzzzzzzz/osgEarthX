/**
	@brief 需要加入到任务中的Provider
	@author Hao Luo
	@date 2015/03/30
*/

#ifndef OSGEARTHX_CORE_PROVIDER_IN_TASK_H
#define OSGEARTHX_CORE_PROVIDER_IN_TASK_H 1

#include <Provider/AsynProvider.h>
#include <OpenThreads/ReadWriteMutex>

namespace osgEarthXCore
{
	class ProviderInTask : public AsynProvider
	{
	public:
		//与Map的绑定的状态
		enum MapBindingState
		{
			NOT_ADDED,//还没准备加入Map
			IN_TASK,//在加载队列中
			ADDED,//已经加入Map中
			REMOVED//已经从Map中移除
		};

	public:
		MapBindingState m_BindingState;
		OpenThreads::ReadWriteMutex m_ProviderInTaskMutex;

	public:
		ProviderInTask();

	protected:
		virtual ~ProviderInTask();
		virtual void initialized();

	private:
	};
}

#endif