/**
	@brief EllipseNode provider
	@author Hao Luo
	@date 2015/10/29
*/

#ifndef OSGEARTHX_CORE_ELLIPSE_PRIMITIVE_PROVIDER_H
#define OSGEARTHX_CORE_ELLIPSE_PRIMITIVE_PROVIDER_H 1

#include <osgEarthXCoreExport/Export.h>
#include <osgEarthAnnotation/EllipseNode>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT EllipsePrimitiveProvider : public osgEarth::Annotation::EllipseNode
	{
	public:
		static void getDefaultStyle( osgEarth::Symbology::Style& style );

	public:
		EllipsePrimitiveProvider();

		virtual void initMapNode( osgEarth::MapNode* pMapNode );

	protected:
		virtual ~EllipsePrimitiveProvider();
		virtual void rebuild();
		void _rebuild();

	private:

	};
}

#endif