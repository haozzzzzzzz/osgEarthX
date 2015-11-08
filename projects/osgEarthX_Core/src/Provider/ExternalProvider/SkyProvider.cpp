#include <Provider/ExternalProvider/SkyProvider.h>

#include <OSGEarth/Externals/SkyWrapper.h>
#include <OSGEarth/Externals/SkyOptionsWrapper.h>
using namespace osgEarthXCore;

#include <osgEarth/MapNode>

SkyProvider::SkyProvider()
{
	m_pSkyOptions = new osgEarth::Util::SkyOptions();
	m_pIWrapper = new SkyOptionsWrapper( m_pSkyOptions );
}

SkyProvider::~SkyProvider()
{
	delete m_pIWrapper;
	delete m_pSkyOptions;
}

osgEarth::Util::SkyNode* SkyProvider::getSkyNode()
{
	return m_refSkyNode;
}

void SkyProvider::initSky( osgEarth::MapNode* pMapNode )
{
	if ( m_refSkyNode.get() != NULL || pMapNode == NULL || m_pSkyOptions == NULL )
	{
		return;
	}

	m_refSkyNode = osgEarth::Util::SkyNode::create( *m_pSkyOptions, pMapNode );
	if ( m_refSkyNode.get() != NULL )
	{
		initialized();
	}

	// SkyNode should be the parent of mapnode
	m_refSkyNode->addChild( pMapNode );
}

void SkyProvider::initialized()
{
	//copy options
	( ( SkyOptionsWrapper* ) m_pIWrapper )->copyOptionalsTo( *m_refSkyNode );

	//delete interface pointer
	delete m_pIWrapper;
	delete m_pSkyOptions;
	m_pSkyOptions = NULL;

	//point to new interface
	m_pIWrapper = new SkyWrapper( m_refSkyNode );

	AsynProvider::initialized();
}