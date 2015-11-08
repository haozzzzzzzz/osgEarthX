#include <Provider/LayerProvider/ModelLayerProvider.h>
#include <Provider/LayerProvider/ModelLayerTask.h>

#include <OSGEarth/Layer/ModelLayerWrapper.h>
#include <OSGEarth/Layer/ModelLayerOptionsWrapper.h>
using namespace osgEarthXCore;

void ModelLayerProvider::getDefaultLineSymbolStyle( osgEarth::Symbology::Style& outStyle )
{
	osgEarth::Symbology::LineSymbol* lineSymbol = outStyle.getOrCreateSymbol<osgEarth::Symbology::LineSymbol>();
	lineSymbol->stroke()->color() = osgEarth::Symbology::Color::Yellow;
	lineSymbol->stroke()->width() = 2.0f;
}

ModelLayerProvider::ModelLayerProvider()
{
	m_refModelLayer = NULL;
	m_pModelLayerOptions = new osgEarth::ModelLayerOptions();

	m_pIWrapper = new ModelLayerOptionsWrapper ( m_pModelLayerOptions );
}

ModelLayerProvider::~ModelLayerProvider()
{
	delete m_pModelLayerOptions;
	delete m_pIWrapper;
}

osgEarth::ModelLayer* ModelLayerProvider::getModelLayer()
{
	return m_refModelLayer;
}

void ModelLayerProvider::initialized()
{
	//
	if ( m_refModelLayer.valid() )
	{
		return;
	}
	m_refModelLayer = new osgEarth::ModelLayer( *m_pModelLayerOptions );

	//
	delete m_pIWrapper;
	delete m_pModelLayerOptions;
	m_pModelLayerOptions = NULL;

	m_pIWrapper = new ModelLayerWrapper ( m_refModelLayer );

	LayerProvider::initialized();
}

LayerTask* ModelLayerProvider::getOrCreateLayerTask()
{
	if ( m_refLayerTask.get() == NULL )
	{
		m_refLayerTask = new ModelLayerTask(this);
	}
	return m_refLayerTask;
}

void ModelLayerProvider::setModelSource( osgEarth::ModelSourceOptions& modelSourceOptions )
{
	if ( m_pModelLayerOptions )
	{
		m_pModelLayerOptions->driver() = modelSourceOptions;
	}
}