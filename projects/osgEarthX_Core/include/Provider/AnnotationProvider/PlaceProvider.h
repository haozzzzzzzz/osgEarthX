/**
	@brief osgEarth::Anntation::PlaceNode Ã·π©’ﬂ
	@author Hao Luo
	@date 2015/04/01
*/

#ifndef OSGEARTHX_CORE_PLACE_PROVIDER_H
#define OSGEARTHX_CORE_PLACE_PROVIDER_H 1

#include <osgEarthXCoreExport/Export.h>

#include <Provider/AnnotationProvider/ImageProvider.h>
#include <osgEarthAnnotation/PlaceNode>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT PlaceProvider : 
		public osgEarth::Annotation::PlaceNode,
		public ImageProvider
	{
	public:
		PlaceProvider();

		void setLocalText( const std::string& str );
		void setUnicodeText( const std::string& str );

	protected:
		virtual ~PlaceProvider();
		virtual void _setImage( osg::Image* pImage );

	private:
	};
}

#endif