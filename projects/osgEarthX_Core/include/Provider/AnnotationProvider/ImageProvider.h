/**
	@brief Õº∆¨Ã·π©’ﬂ
	@author Hao Luo
	@date 2015/04/01
*/

#ifndef OSGEARTHX_CORE_IMAGE_PROVIDER_H
#define OSGEARTHX_CORE_IMAGE_PROVIDER_H 1

#include <osgEarthXCoreExport/Export.h>

#include <osg/Image>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT ImageProvider
	{
	public:
		void setImageSrc( std::string strSrc );

	protected:
		virtual void _setImage( osg::Image* pImage ) = 0;

	private:
	};
}

#endif