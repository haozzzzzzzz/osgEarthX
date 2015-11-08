
#include <Map/BaseMap.h>
#include <Provider/LayerProvider/LayerTask.h>
#include <ThreadPool/LockMutex.h>
using namespace osgEarthXCore;

LayerTask::LayerTask(LayerProvider* pLayerProvider /* = NULL */, BaseMap* pMap /* = NULL */)
{
	m_pBaseMap = pMap;
	m_pLayerProvider = pLayerProvider;
}

LayerTask::~LayerTask()
{

}

void LayerTask::setBaseMap(BaseMap* pMap)
{
	m_pBaseMap = pMap;
}

void LayerTask::setLayerProvider(LayerProvider* pLayerProvider)
{
	m_pLayerProvider = pLayerProvider;
}

const LayerProvider* LayerTask::getLayerProvider()
{
	return m_pLayerProvider;
}