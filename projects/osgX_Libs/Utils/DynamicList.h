/**
	@brief 动态列表模板
	@author Hao Luo
	@date 2014/11/07
*/

#ifndef AT_LIBS_DYNAMIC_LIST_H
#define AT_LIBS_DYNAMIC_LIST_H 1

#include <list>
#include <osg/Referenced>
#include <osg/ref_ptr>

template <class ListItem = osg::Referenced>
class DynamicList
{
public:
    typedef std::list< osg::ref_ptr< ListItem > > List;

	DynamicList()
	{
		m_pDynamicList = NULL;
	}

	virtual ~DynamicList()
	{
		clear();
		delete m_pDynamicList;
	}

	List* getOrCreateDynamicList()
	{
		if (m_pDynamicList == NULL)
		{
			m_pDynamicList = new List;
		}

		return m_pDynamicList;
	}

	bool valid()
	{
		return m_pDynamicList == NULL ? false : true;
	}

	void clear()//清除数据，但是未释放List对象
	{
		if (m_pDynamicList != NULL)
		{
			m_pDynamicList->clear();
		}
	}

private:
	List* m_pDynamicList;
};

#endif
