/*
	@brief 动态向量类
	@author Hao Luo
	@date 2014/11/26
*/

#ifndef OSGX_LIBS_DYNAMIC_VECTOR_H
#define OSGX_LIBS_DYNAMIC_VECTOR_H 1

#include <vector>
#include <osg/Referenced>
#include <osg/ref_ptr>

template<class VectorItem = osg::Referenced>
class DynamicVector
{
public:
	typedef std::vector< osg::ref_ptr< VectorItem >* > PtrVectorOfRefPtr;//指向VectorItem的ref_ptr指针的指针

	DynamicVector()
	{
		m_pPtrVectorOfRefPtr = NULL;
	}

	virtual ~ DynamicVector()
	{
		clear();
		delete m_pPtrVectorOfRefPtr;
	}

	PtrVectorOfRefPtr* getOrCreateVector()
	{
		if ( m_pPtrVectorOfRefPtr == NULL )
		{
			m_pPtrVectorOfRefPtr = new PtrVectorOfRefPtr;
		}

		return m_pPtrVectorOfRefPtr;
	}

	bool valid()
	{
		return m_pPtrVectorOfRefPtr == NULL ? false : true;
	}

	void clear()//清除数据
	{
		if ( m_pPtrVectorOfRefPtr )
		{
			for ( unsigned int i = 0, vectorSize = size(); i < vectorSize; i++ )
			{
				delete m_pPtrVectorOfRefPtr->at( i );
			}
			m_pPtrVectorOfRefPtr->clear();
		}
	}

	void pushBack( VectorItem* pVectorItem )
	{
		getOrCreateVector()->push_back( new osg::ref_ptr<VectorItem>( pVectorItem ) );
	}

	void insert( VectorItem* pVectorItem, unsigned int pos )
	{
		if ( pos >= getOrCreateVector()->size() )
		{
			pushBack( pVectorItem );
		}
		else
		{
			getOrCreateVector()->insert( getOrCreateVector()->begin() + pos, new osg::ref_ptr<VectorItem>( pVectorItem ) );
		}
	}

	bool remove( VectorItem* pVectorItem )
	{
		int index = getIndex( pVectorItem );
		if ( -1 == index )
		{
			return false;
		}

		return remove( ( unsigned int ) index );
	}

	bool remove( unsigned int index )
	{
		if ( ! valid() || index >= size() )
		{
			return false;
		}
		delete m_pPtrVectorOfRefPtr->at( index );//删除new的ref_ptr对象

		m_pPtrVectorOfRefPtr->erase( m_pPtrVectorOfRefPtr->begin() + index );
		return true;
	}

	bool move( VectorItem* pVectorItem, unsigned int newIndex )
	{
		int index = getIndex( pVectorItem );
		if ( -1 == index )
		{
			return false;
		}

		return move( ( unsigned int ) index, newIndex );
	}

	bool move( unsigned int curIndex,unsigned int newIndex )
	{
		unsigned int vectorSize = size();
		if ( !valid() || curIndex >= vectorSize || newIndex >= vectorSize || curIndex == newIndex )
		{
			return false;
		}

		osg::ref_ptr<VectorItem>* pRefPtr = m_pPtrVectorOfRefPtr->at( curIndex );
		m_pPtrVectorOfRefPtr->erase( m_pPtrVectorOfRefPtr->begin() + curIndex );

		if ( newIndex >= vectorSize -1 )//newIndex大于curIndex, 而且删除curIndex之后，newIndex会大于size()，所以放在最后
		{
			m_pPtrVectorOfRefPtr->push_back( pRefPtr );
		}
		else
		{
			m_pPtrVectorOfRefPtr->insert( m_pPtrVectorOfRefPtr->begin() + newIndex, pRefPtr );
		}

		return true;
	}

	// -1 : 没发现
	int getIndex( VectorItem* pVectorItem )
	{
		//允许获取一个内容为pVectorItem = NULL的位置索引，用于填充内容
		if ( ! valid() )
		{
			return -1;
		}

		for ( unsigned int i = 0, vectorSize = size(); i < vectorSize; i ++ )
		{
			if ( pVectorItem == *( ( *m_pPtrVectorOfRefPtr )[ i ] ) )
			{
				return i;
			}
		}

		return -1;
	}

	VectorItem* operator [] (unsigned int index)
	{
		if (!valid() || index >= size())
		{
			return NULL;
		}

		return *( *m_pPtrVectorOfRefPtr )[ index ];
	}

	unsigned int size()
	{
		if (!valid())
		{
			return 0;
		}

		return m_pPtrVectorOfRefPtr->size();
	}

private:
	PtrVectorOfRefPtr* m_pPtrVectorOfRefPtr;
};
#endif