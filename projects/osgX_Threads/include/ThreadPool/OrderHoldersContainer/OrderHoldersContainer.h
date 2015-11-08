/**
	@brief 次序修正；用于修正多线程到达顺序与原先加入次序不一的类，使最终次序与预期次序相符
	@author Hao Luo
	@date 2014/12/20
*/

#ifndef OSGX_THREADS_ORDER_HOLDERS_CONTAINER_H
#define OSGX_THREADS_ORDER_HOLDERS_CONTAINER_H 1

#include <OpenThreads/Mutex>
#include <OpenThreads/ScopedLock>
#include <ThreadPool/LockMutex.h>
#include <ThreadPool/OrderHoldersContainer/OrderHolder.h>

#include <Utils/DynamicVector.h>
#include <list>

namespace osgXThreads
{
	template< class T >
    class OrderHoldersContainer
	{
	public:
		typedef std::list< OrderHolder* > OrderHolderPtrs;
		typedef OrderHolderPtrs::iterator OrderHolderIter;

	protected:
		DynamicVector< T > m_Original;//原始序列容器的引用
		OrderHolderPtrs* m_pArrival;//实际到达

		//m_pArrival被多线程访问，所以对顺序的更改需要加此锁
		OpenThreads::Mutex m_Mutex;

	public:
		//构造函数，设置内部容器
		OrderHoldersContainer();
		virtual ~OrderHoldersContainer();

		//为pOrderHolder添加加载次序并加入到内部列表中
		void push( T* pOrderHolder );//内部分配
		void insert( T* pOrderHolder, unsigned int expectOrder );

		//返回到达后，插入的顺序
		//需保证pOrderHolder在内部列表中
		//返回当前到达m_pArrival列表中的按照世界Order排序的次序
		// -1 : 最后
		// -2 : 不满足要求
		int signArrival( T* pOrderHolder );

		/**
			@brief 移动
			@param pOrderHolder 对象,
			@param newOrder 新次序（位置）
			@param outNewArrivalOrder 如果移动成功，且已经到达过了的，则返回新到达位置
		*/
		bool move( T* pOrderHolder, unsigned int newOrder, unsigned int* outNewArrivalOrder = NULL );

		/**
			@brief 移动
			@param oldOrder 旧位置,
			@param newOrder 新次序（位置）
			@param outNewArrivalOrder 如果移动成功，且已经到达过了的，则返回新到达位置
		*/
		bool move( unsigned int oldOrder, unsigned int newOrder, unsigned int* outNewArrivalOrder = NULL );

		//删除
		bool remove( T* pOrderHolder );
		bool remove( unsigned int order );

		unsigned int size();

		T* operator [] ( unsigned int index );

	protected:
		//未加锁

		//获取已经到达的位置
		int _signArrival( T* pOrderHolder );

		/**
			@brief 移动后，已经arrival的将会从m_pArrival中移除，并标记为未arrival；需重新调用signArrival来获取最新的插入位置
			@param oldIndex 旧位置,
			@param newOrder 新次序（位置）
			@param outNewArrivalOrder 如果移动成功，且已经到达过了的，则返回新到达位置
		*/
		bool _move( unsigned int oldIndex, unsigned int newOrder, unsigned int* outNewArrivalOrder = NULL );

		bool _remove( unsigned int order );
	};

    template< class T >
    OrderHoldersContainer< T >::OrderHoldersContainer()
	{
		m_pArrival = new OrderHolderPtrs;
	}

    template< class T >
    OrderHoldersContainer< T >::~OrderHoldersContainer()
	{
		delete m_pArrival;
	}

    template< class T >
    void OrderHoldersContainer< T >::push( T* pOrderHolder )
	{
		if ( pOrderHolder == NULL )
		{
			return;
		}

		SCOPEDLOCK_MUTEX( m_Mutex );
		pOrderHolder->uiOrder = m_Original.size();
		m_Original.pushBack( pOrderHolder );
	}

	template < class T >
    void OrderHoldersContainer< T >::insert( T* pOrderHolder, unsigned int expectOrder )
	{
		SCOPEDLOCK_MUTEX( m_Mutex );
		if ( pOrderHolder == NULL )
		{
			return;
		}

		for ( unsigned int i = expectOrder; i < m_Original.size(); i ++ )
		{
			m_Original[ i ]->uiOrder ++;
		}

		pOrderHolder->uiOrder = expectOrder >= m_Original.size() ? m_Original.size() : expectOrder;
		m_Original.insert( pOrderHolder, expectOrder );
	}

	template < class T >
    int OrderHoldersContainer< T >::signArrival( T* pOrderHolder )
	{
		SCOPEDLOCK_MUTEX( m_Mutex );
		return _signArrival( pOrderHolder );
	}

	template< class T >
	int OrderHoldersContainer< T >::_signArrival( T* pOrderHolder )
	{
		if ( pOrderHolder == NULL || pOrderHolder->bArrival == true )
		{
			return -2;
		}

        int pos = 0;
		OrderHolderIter itr = m_pArrival->begin();

		for ( ; itr != m_pArrival->end(); itr ++ )
		{
			if ( pOrderHolder->uiOrder < (*itr)->uiOrder )
			{
				break;
			}
			pos ++;
		}

		if ( itr == m_pArrival->end() )
		{
			m_pArrival->push_back( pOrderHolder );
			pos = -1;
		}
		else
		{
			m_pArrival->insert( itr, pOrderHolder );
		}
		pOrderHolder->bArrival = true;

		return pos;
	}

    template < class T >
    bool OrderHoldersContainer< T >::move( T* pOrderHolder, unsigned int newOrder, unsigned int* outNewArrivalOrder )
	{
		if ( pOrderHolder == NULL )
		{
			return false;
		}

		SCOPEDLOCK_MUTEX( m_Mutex );

		int oldIndex = m_Original.getIndex( pOrderHolder );
		if ( -1 >= oldIndex )
		{
			return false;
		}

		return _move( ( unsigned int ) oldIndex, newOrder, outNewArrivalOrder );
	}

	template < class T>
    bool OrderHoldersContainer< T >::move( unsigned int oldIndex, unsigned int newOrder, unsigned int* outNewArrivalOrder )
	{
		SCOPEDLOCK_MUTEX( m_Mutex );
		return _move( oldIndex, newOrder, outNewArrivalOrder );
	}

    template < class T >
    bool OrderHoldersContainer< T >::_move( unsigned int oldIndex, unsigned int newOrder, unsigned int* outNewArrivalOrder )
	{
		if ( oldIndex > m_Original.size() || newOrder >= m_Original.size() || oldIndex == newOrder )
		{
			return false;
		}

		if ( oldIndex < newOrder )
		{
			for ( unsigned int i = oldIndex + 1; i <= newOrder; i ++ )
			{
				m_Original[ i ]->uiOrder --;
			}
		}
		else
		{
			for ( unsigned int i = newOrder; i < oldIndex; i ++ )
			{
				m_Original[ i ]->uiOrder ++;
			}
		}

		T* pOrderHolder = m_Original[ oldIndex ];
		pOrderHolder->uiOrder = newOrder;
		bool bMove = m_Original.move( oldIndex, newOrder );

		//如果已经arrival，则从arrival中删除
		if ( bMove && pOrderHolder->bArrival )
		{
			m_pArrival->remove( pOrderHolder );
			pOrderHolder->bArrival = false;//重置为未确定位置的状态

			//后续操作需要将pOrderHolder再次signArrival( pOrderHolder )以获取最新位置
			int arrivalOrder = _signArrival( pOrderHolder );
			if ( outNewArrivalOrder )
			{
				*outNewArrivalOrder = arrivalOrder == -1 ? m_pArrival->size() - 1 : arrivalOrder;
			}
		}

		return bMove;
	}

    template < class T >
    bool OrderHoldersContainer< T >::remove( T* pOrderHolder )
	{
        if ( pOrderHolder == NULL )
		{
			return false;
		}

        SCOPEDLOCK_MUTEX( m_Mutex );

        int index = m_Original.getIndex( pOrderHolder );
		if ( -1 == index )
		{
			return false;
		}

		return _remove( ( unsigned int ) index );
	}


    template < class T >
    bool OrderHoldersContainer< T >::remove( unsigned int order )
	{
        SCOPEDLOCK_MUTEX( m_Mutex );
        return _remove( order );
	}

    template < class T >
    bool OrderHoldersContainer< T >::_remove( unsigned int order )
	{
        m_pArrival->remove( m_Original[ order ] );

		for ( unsigned int i = order + 1; i < m_Original.size(); i ++ )
		{
			m_Original[i]->uiOrder --;
		}

		return m_Original.remove(order);
	}

	template < class T >
    unsigned int OrderHoldersContainer< T >::size()
	{
		SCOPEDLOCK_MUTEX(m_Mutex);
		return m_Original.size();
	}

    template < class T >
    T* OrderHoldersContainer< T >::operator [] (  unsigned int index )
	{
        SCOPEDLOCK_MUTEX( m_Mutex );
        return m_Original[ index ];
	}
}

#endif
