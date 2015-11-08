#include <Provider/AnnotationProvider/FeaturePrimitiveProvider.h>
using namespace osgEarthXCore;

#include <Basis/Geo/Feature.h>

FeaturePrimitiveProvider::FeaturePrimitiveProvider()
{

}

FeaturePrimitiveProvider::~FeaturePrimitiveProvider()
{
	
}

void FeaturePrimitiveProvider::initMapNode( osgEarth::MapNode* pMapNode )
{
	//Èç¹ûÊÇosgEarthX::Feature
	Feature* pFeature = dynamic_cast< Feature* >( _feature.get() );
	if( pFeature )
	{
		pFeature->init( pMapNode->getMapSRS() );
	}

	FeatureNode::initMapNode( pMapNode );
	FeatureNode::init();
}