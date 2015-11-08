/**
	@brief ŒÔÃÂImageOverlay
	@author Hao Luo
	@date 2015/04/01
*/

#ifndef OSGEARTHX_IMAGE_OVERLAY_H
#define OSGEARTHX_IMAGE_OVERLAY_H 1

#include <osgEarthXExport/Export.h>
#include <Object/Object.h>

//osgEarthX_Core
#include <Provider/AnnotationProvider/ImageOverlayProvider.h>

namespace osgEarthX
{
	class OSGEARTHX_EXPORT ImageOverlay :
		public Object,
		public osgEarthXCore::ImageOverlayProvider
	{
	public:
		ImageOverlay();

		virtual bool isEnabled();
		virtual bool isVisible();
		virtual void setVisible(bool bVisible);

	protected:
		virtual ~ImageOverlay();

	private:
	};
}

#endif