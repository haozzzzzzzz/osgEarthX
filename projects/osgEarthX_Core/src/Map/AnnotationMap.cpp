#include <Map/AnnotationMap.h>
using namespace osgEarthXCore;

#include <StaticOSGViewerAssistant/StaticOSGViewerAssistant.h>

AnnotationMap::AnnotationMap()
{
	m_refAnnotations = new osg::Group();
	m_refRoot->addChild( m_refAnnotations );
}

void AnnotationMap::addAnnotation( osgEarth::Annotation::AnnotationNode* pAnnotationNode )
{
	if ( pAnnotationNode == NULL )
	{
		return;
	}

	pAnnotationNode->initMapNode( m_refMapNode );
	addGroupObject( m_refAnnotations, pAnnotationNode );
}

void AnnotationMap::removeAnnotation( osgEarth::Annotation::AnnotationNode* pAnnotationNode )
{
	if ( pAnnotationNode == NULL )
	{
		return;
	}
	removeGroupObjet( m_refAnnotations, pAnnotationNode );
}