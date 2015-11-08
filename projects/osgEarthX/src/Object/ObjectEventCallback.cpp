#include <Object/ObjectEventCallback.h>
using namespace osgEarthX;

//OSGEARTHX_CORE
#include <Provider/ProviderChange.h>

#include <cassert>

ObjectEventCallback::ObjectEventCallback(ObjectEventFirer*pEventFirer)
{
	assert(pEventFirer != NULL);
	m_pObjectEventFirer = pEventFirer;
}

ObjectEventCallback::~ObjectEventCallback()
{

}

void ObjectEventCallback::doCallback(osgEarthXCore::Change* pChange)
{
	osgEarthXCore::ProviderChange* pProviderChange = dynamic_cast<osgEarthXCore::ProviderChange*>(pChange);
	if (pProviderChange == NULL)
	{
		return;
	}

	switch(pProviderChange->getChangeType())
	{
	case osgEarthXCore::INITIALIZE_COMPLETED:
		m_pObjectEventFirer->onInitializeCompleted();
		break;

	default:
		break;
	}
}