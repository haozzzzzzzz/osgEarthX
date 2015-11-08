/**
	@brief 多线程任务中保存次序的类
	@author Hao Luo
	@date 2015/01/06
*/

#ifndef OSGX_THREADS_ORDER_HOLDER_H
#define OSGX_THREADS_ORDER_HOLDER_H 1

#include <osgXThreadsExport/Export.h>
#include <osg/Referenced>

namespace osgXThreads
{
	class OSGX_THREADS_EXPORT OrderHolder:
		virtual public osg::Referenced
	{
	public:
		OrderHolder();
		OrderHolder( const OrderHolder& orderHolder );

		unsigned int uiOrder;
		bool bArrival;

	protected:
		virtual ~OrderHolder();
	};
}

#endif