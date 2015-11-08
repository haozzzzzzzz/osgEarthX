/**
	@brief 回调纯虚基类
	@author Hao Luo
	@date 2014/11/08
*/

#ifndef OSGEARTHX_CORE_CALLBACK_H
#define OSGEARTHX_CORE_CALLBACK_H 1

#include <osgEarthXCoreExport/Export.h>

#include <osg/Referenced>
#include <Callback/Change.h>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT Callback : virtual public osg::Referenced
	{
	public:

		///执行回调
		///内部不负责释放change
		virtual void doCallback(Change* change) = 0;

	private:
	};
}

#endif