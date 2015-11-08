/**
	@brief Map中的图层、外部物体等的异步提供者基类
	@author Hao Luo
	@date 2015/01/14
*/

#ifndef OSGEARTHX_CORE_ASYN_PROVIDER_H
#define OSGEARTHX_CORE_ASYN_PROVIDER_H 1

#include <osgEarthXCoreExport/Export.h>
#include <osg/Referenced>

namespace osgEarthXCore
{
	//用于延时构建真正所需的对象
	class OSGEARTHX_CORE_EXPORT AsynProvider : 
		virtual public osg::Referenced
	{
	public:
		enum ProviderState
		{
			UNINITIALIZED,//未初始化
			INITIALIZED//已初始化
		};

	public:
		ProviderState m_ProviderState;

	public:
		AsynProvider();

	protected:
		virtual ~AsynProvider();

		virtual void initialized();
		virtual bool isInitialized();

	private:
	};
}

#endif