#include <Viewer/GraphicsViewerBase.h>
using namespace osgEarthXCore;

void GraphicsViewerBase::setCameraGraphicsWindow( osg::Camera* pCamera, osg::GraphicsContext* pGraphicContext )
{
	if ( pGraphicContext == NULL )
	{
		return;
	}
	const osg::GraphicsContext::Traits* pTraits = pGraphicContext->getTraits();

	pCamera->setGraphicsContext( pGraphicContext );
	pCamera->setViewport( new osg::Viewport( 0, 0, pTraits->width, pTraits->height ) );
	pCamera->setProjectionMatrixAsPerspective( 30.0f, ( double ) pTraits->width / ( double ) pTraits->height, 1.0f, 1000.0f );
}