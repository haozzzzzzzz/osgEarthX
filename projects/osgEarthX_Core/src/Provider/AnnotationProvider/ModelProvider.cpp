#include <Provider/AnnotationProvider/ModelProvider.h>
using namespace osgEarthXCore;

#include <osgDB/ReadFile>

ModelProvider::ModelProvider()
{

}

ModelProvider::ModelProvider( const ModelProvider& modelProvider ) : 
	osgEarth::Annotation::ModelNode( modelProvider ),
	osgEarth::Symbology::ModelSymbol( modelProvider )
{

}

ModelProvider::ModelProvider( const osgEarth::Annotation::ModelNode& modelNode ) : 
	osgEarth::Annotation::ModelNode( modelNode )
{

}

ModelProvider::ModelProvider( const osgEarth::Symbology::ModelSymbol& modelSymbol ) :
	osgEarth::Symbology::ModelSymbol( modelSymbol )
{

}

ModelProvider::~ModelProvider()
{
}

void ModelProvider::initMapNode( osgEarth::MapNode* pMapNode )
{
	ModelNode::initMapNode( pMapNode );
	_style.addSymbol( this );
	ModelNode::init();
}

void ModelProvider::setModelPath( const std::string& modelPath )
{
	setModel( osgDB::readNodeFile( modelPath ) );
}