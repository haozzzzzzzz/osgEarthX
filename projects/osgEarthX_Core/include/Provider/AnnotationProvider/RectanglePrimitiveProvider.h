/**
	@brief RectangleNode Provider
	@author Hao Luo
	@date 2015/10/28
*/

#ifndef OSGEARTHX_CORE_RECTANGLE_PRIMITIVE_PROVIDER_H
#define OSGEARTHX_CORE_RECTANGLE_PRIMITIVE_PROVIDER_H 1

#include <osgEarthXCoreExport/Export.h>
#include <osgEarthAnnotation/RectangleNode>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT RectanglePrimitiveProvider : 
		public osgEarth::Annotation::RectangleNode
	{
	public:
		static void getDefaultStyle( osgEarth::Symbology::Style& style );

	public:
		RectanglePrimitiveProvider();
		void initMapNode( osgEarth::MapNode* pMapNode );

	protected:
		virtual ~RectanglePrimitiveProvider();

	private:
	};
}

#endif