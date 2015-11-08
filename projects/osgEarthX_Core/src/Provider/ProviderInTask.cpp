#include <Provider/ProviderInTask.h>
#include <ThreadPool/LockMutex.h>
using namespace osgEarthXCore;

ProviderInTask::ProviderInTask()
{
	m_BindingState = ProviderInTask::NOT_ADDED;
}

ProviderInTask::~ProviderInTask()
{

}

void ProviderInTask::initialized()
{
	SCOPEDLOCK_WRITE_MUTEX( m_ProviderInTaskMutex );
	AsynProvider::initialized();
}