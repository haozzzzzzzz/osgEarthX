/**
	@brief ImageLayer½Ó¿Ú
	@author Hao Luo
	@date 2015/01/15
*/

#ifndef OSGEARTHX_CORE_IMAGE_LAYER_H
#define OSGEARTHX_CORE_IMAGE_LAYER_H 1

#include <osgEarthXCoreExport/Export.h>

#include <OSGEarth/Layer/IImageLayerWrapper.h>
#include <OSGEarth/Layer/TerrainLayerWrapper.h>
#include <osgEarth/ImageLayer>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT ImageLayerWrapper : 
		public IImageLayerWrapper,
		public TerrainLayerWrapper
	{
	public:
		ImageLayerWrapper( osgEarth::ImageLayer* pImageLayer );
		virtual ~ImageLayerWrapper();

	protected:
		osgEarth::ImageLayer* m_pImageLayer;

	private:
	};
}

#endif