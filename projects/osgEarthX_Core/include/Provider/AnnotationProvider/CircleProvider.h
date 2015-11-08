/**
	@brief CircleNode Provider
	@author Hao Luo
	@date 2015/10/21
*/

#ifndef OSGEARTHX_CORE_CIRCLE_PROVIDER_H
#define OSGEARTHX_CORE_CIRCLE_PROVIDER_H 1

#include <osgEarthXCoreExport/Export.h>

#include <osgEarthAnnotation/CircleNode>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT CircleProvider : public osgEarth::Annotation::CircleNode
	{
	public:
		static void getDefaultStyle( osgEarth::Symbology::Style& style );

	public:
		CircleProvider();
		virtual void initMapNode( osgEarth::MapNode* pMapNode );

	protected:
		virtual ~CircleProvider();

	private:
	};
}

#endif