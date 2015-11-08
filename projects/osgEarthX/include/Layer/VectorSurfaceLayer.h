/**
	@brief 矢量图层
	@author Hao Luo
	@date 2014/11/07
*/

#ifndef OSGEARTHX_VECTOR_SURFACE_LAYER_H
#define OSGEARTHX_VECTOR_SURFACE_LAYER_H 1

#include <osgEarthXExport/Export.h>

//OSGEARTHX
#include <Object/Object.h>
#include <Event/EventHost.h>
#include <Layer/LayerEventFirer.h>

//OSGEARTHX_CORE
#include <Provider/LayerProvider/ModelLayerProvider.h>

namespace osgEarthX
{
	class OSGEARTHX_EXPORT VectorSurfaceLayer : 
		public Object, 
		public osgEarthXCore::ModelLayerProvider,
		public EventHost<LayerEventFirer>
	{
	public:
		VectorSurfaceLayer();

		//实现Object纯虚函数
		virtual bool isEnabled();
		virtual bool isVisible();
		virtual void setVisible(bool bVisible);

		virtual void setFirer(LayerEventFirer* pFirer);

	protected:
		virtual ~VectorSurfaceLayer();

	private:
	};
}

#endif