/**
	@brief Ó°ÏñÍ¼²ã
	@author Hao Luo
	@date 2014/11/07
*/

#ifndef OSGEARTHX_IMAGE_SURFACE_LAYER_H
#define OSGEARTHX_IMAGE_SURFACE_LAYER_H 1

#include <osgEarthXExport/Export.h>
#include <Object/Object.h>

//osgEarthX_Core
#include <Provider/LayerProvider/ImageLayerProvider.h>
#include <Event/EventHost.h>
#include <Layer/LayerEventFirer.h>

namespace osgEarthX
{
	class OSGEARTHX_EXPORT ImageSurfaceLayer : 
		public Object,
		public osgEarthXCore::ImageLayerProvider,
		public EventHost< LayerEventFirer >
	{
	public:
		ImageSurfaceLayer();

		//ÊµÏÖObject´¿Ðéº¯Êý
		virtual bool isEnabled();
		virtual bool isVisible();
		virtual void setVisible( bool bVisible );

		//¸²¸ÇEventHost<LayerEventFirer>
		virtual void setFirer( LayerEventFirer* pFirer );

	protected:
		virtual ~ImageSurfaceLayer();

	private:
	};
}

#endif