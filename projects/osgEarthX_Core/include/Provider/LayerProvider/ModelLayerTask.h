/**
	@brief ModelLayer任务类
	@author Hao Luo
	@date 2014/11/05
*/


#ifndef OSGEARTHX_CORE_MODEL_LAYER_TASK_H
#define OSGEARTHX_CORE_MODEL_LAYER_TASK_H 1

#include <osgEarthXCoreExport/Export.h>
#include <Provider/LayerProvider/LayerTask.h>
#include <Provider/LayerProvider/ModelLayerProvider.h>

namespace osgEarthXCore
{
	class ModelLayerMap;

	class OSGEARTHX_CORE_EXPORT ModelLayerTask : 
		public LayerTask
	{
	public:
		ModelLayerTask(ModelLayerProvider* pModelLayerProvider = NULL ,ModelLayerMap* pMap = NULL);

		///实现Task纯虚函数
		virtual void doTask();

	protected:
		virtual ~ModelLayerTask();

	};
}

#endif