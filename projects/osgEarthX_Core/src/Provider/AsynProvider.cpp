#include <Provider/AsynProvider.h>
using namespace osgEarthXCore;

AsynProvider::AsynProvider()
{
	m_ProviderState = UNINITIALIZED;
}

AsynProvider::~AsynProvider()
{

}

void AsynProvider::initialized()
{
	m_ProviderState = AsynProvider::INITIALIZED;
}

bool AsynProvider::isInitialized()
{
	return m_ProviderState == AsynProvider::INITIALIZED;
}