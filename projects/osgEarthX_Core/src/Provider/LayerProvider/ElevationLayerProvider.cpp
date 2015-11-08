#include <Provider/LayerProvider/ElevationLayerProvider.h>
#include <Provider/LayerProvider/ElevationLayerTask.h>

#include <OSGEarth/Layer/ElevationLayerWrapper.h>
#include <OSGEarth/Layer/ElevationLayerOptionsWrapper.h>
using namespace osgEarthXCore;

ElevationLayerProvider::ElevationLayerProvider()
{
	m_refElevationLayer = NULL;
	m_pElevationLayerOptions = new osgEarth::ElevationLayerOptions();

	m_pIWrapper = new ElevationLayerOptionsWrapper( m_pElevationLayerOptions );
}

ElevationLayerProvider::~ElevationLayerProvider()
{
	delete m_pElevationLayerOptions;
	delete m_pIWrapper;
}

LayerTask* ElevationLayerProvider::getOrCreateLayerTask()
{
	if ( m_refElevationLayer.get() == NULL )
	{
		m_refLayerTask = new ElevationLayerTask( this );
	}
	return m_refLayerTask;
}

osgEarth::ElevationLayer* ElevationLayerProvider::getElevationLayer()
{
	return m_refElevationLayer;
}

void ElevationLayerProvider::initialized()
{
	//
	if ( m_refElevationLayer.valid() )
	{
		return;
	}

	m_refElevationLayer = new osgEarth::ElevationLayer( *m_pElevationLayerOptions );

	//
	delete m_pIWrapper;
	delete m_pElevationLayerOptions;
	m_pElevationLayerOptions = NULL;

	m_pIWrapper = new ElevationLayerWrapper( m_refElevationLayer );

	LayerProvider::initialized();
}

void ElevationLayerProvider::setTileSource( osgEarth::TileSourceOptions& tileSrouceOptions )
{
	if ( m_pElevationLayerOptions )
	{
		m_pElevationLayerOptions->driver() = tileSrouceOptions;
	}
}