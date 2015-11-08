/**
	@brief ModelNode Provider
	@author Hao Luo
	@date 2015/10/21
*/

#ifndef OSGEARTHX_CORE_MODEL_PROVIDER_H
#define OSGEARTHX_CORE_MODEL_PROVIDER_H 1

#include <osgEarthXCoreExport/Export.h>

#include <osgEarthAnnotation/ModelNode>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT ModelProvider : 
		virtual public osgEarth::Annotation::ModelNode,
		virtual public osgEarth::Symbology::ModelSymbol
	{
	public:
		ModelProvider();
		ModelProvider( const ModelProvider& modelProvider );
		ModelProvider( const osgEarth::Annotation::ModelNode& modelNode );
		ModelProvider( const osgEarth::Symbology::ModelSymbol& modelSymbol );

		virtual void initMapNode( osgEarth::MapNode* pMapNode );
		void setModelPath( const std::string& modelPath );

	protected:
		virtual ~ModelProvider();

	private:
	};
}

#endif