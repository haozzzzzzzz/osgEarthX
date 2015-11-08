/**
	@brief ImageOverlay Provider
	@author Hao Luo
	@date 2015/04/01
*/

#ifndef OSGEARTHX_CORE_IMAGE_OVERLAY_PROVIDER_H
#define OSGEARTHX_CORE_IMAGE_OVERLAY_PROVIDER_H 1

#include <osgEarthXCoreExport/Export.h>

#include <Provider/AnnotationProvider/ImageProvider.h>

#include <osgEarthAnnotation/ImageOverlay>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT ImageOverlayProvider : 
		public osgEarth::Annotation::ImageOverlay,
		public ImageProvider
	{
	public:
		ImageOverlayProvider();

	protected:
		virtual ~ImageOverlayProvider();

		virtual void _setImage( osg::Image* pImage );

	private:
	};
}

#endif