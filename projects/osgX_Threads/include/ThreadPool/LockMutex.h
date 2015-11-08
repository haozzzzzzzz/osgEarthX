/**
	@brief MutexËøºê¶¨Òå
	@author Hao Luo
	@date 2014/11/04
*/

#ifndef OSGX_THREADS_LOCK_MUTEX_H
#define OSGX_THREADS_LOCK_MUTEX_H 1

#define SCOPEDLOCK_READ_MUTEX(mutex) OpenThreads::ScopedReadLock lockReadMutex(mutex)
#define SCOPEDLOCK_WRITE_MUTEX(mutex) OpenThreads::ScopedWriteLock lockWriteMutex(mutex)

#define SCOPEDLOCK_MUTEX(mutex) OpenThreads::ScopedLock<OpenThreads::Mutex> lockMutex(mutex)

#endif