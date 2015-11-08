/**
	@brief ImageLayerº”‘ÿ»ŒŒÒ
	@author Hao Luo
	@date 2014/11/05
*/

#ifndef OSGEARTHX_CORE_IMAGE_LAYER_TASK_H
#define OSGEARTHX_CORE_IMAGE_LAYER_TASK_H

#include <osgEarthXCoreExport/Export.h>
#include <Provider/LayerProvider/LayerTask.h>
#include <Provider/LayerProvider/ImageLayerProvider.h>

namespace osgEarthXCore
{
	class ImageLayerMap;

	class OSGEARTHX_CORE_EXPORT ImageLayerTask : 
		public LayerTask
	{
	public:
		ImageLayerTask( ImageLayerProvider* pImageLayerProvider = NULL, ImageLayerMap* pMap = NULL );
		virtual ~ImageLayerTask();

		virtual void doTask();

	private:
	};
}

#endif