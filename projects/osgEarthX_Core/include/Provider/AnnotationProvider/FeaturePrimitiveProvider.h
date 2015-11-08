/**
	@brief FeatureNode Provider
	@author Hao Luo
	@date 2015/10/20
*/

#ifndef OSGEARTHX_CORE_FEATURE_PRIMITIVE_PROVIDER_H
#define OSGEARTHX_CORE_FEATURE_PRIMITIVE_PROVIDER_H 1

#include <osgEarthXCoreExport/Export.h>

#include <osgEarthAnnotation/FeatureNode>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT FeaturePrimitiveProvider : public osgEarth::Annotation::FeatureNode
	{
	public:
		FeaturePrimitiveProvider();
		virtual void initMapNode( osgEarth::MapNode* pMapNode );

	protected:
		virtual ~FeaturePrimitiveProvider();

	private:
	};
}

#endif