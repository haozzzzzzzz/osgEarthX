/**
	@brief ElevationLayerº”‘ÿ»ŒŒÒ
	@author Hao Luo
	@date 2015/01/15
*/

#ifndef OSGEARTHX_CORE_ELEVATION_LAYER_TASK_H
#define OSGEARTHX_CORE_ELEVATION_LAYER_TASK_H 1

#include <osgEarthXCoreExport/Export.h>
#include <Provider/LayerProvider/LayerTask.h>
#include <Provider/LayerProvider/ElevationLayerProvider.h>

namespace osgEarthXCore
{
	class ElevationLayerMap;

	class OSGEARTHX_CORE_EXPORT ElevationLayerTask :
		public LayerTask
	{
	public:
		ElevationLayerTask( ElevationLayerProvider* pElevationLayerProvider = NULL,  ElevationLayerMap* pMap = NULL);
		virtual ~ElevationLayerTask();

		virtual void doTask();

	protected:
	private:
	};
}

#endif