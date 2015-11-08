
#include <Group/Group.h>
using namespace osgEarthX;

#include <cassert>
#include <algorithm>

#include <Group/GroupChange.h>

Group::Group()
{
	m_ObjectType = GROUP;
	m_bVisible = true;

}

Group::~Group()
{
}

ObjectsDynamicVector& Group::getObjects()
{
	return m_ObjectsVector;
}

bool Group::countObjectsOfSameKindUntil( Object* pObject, unsigned int&count )
{
	unsigned int size = m_ObjectsVector.size();
	Object* pTempObject = NULL;
	for ( unsigned int i = 0; i < size; i ++ )
	{
		pTempObject = m_ObjectsVector[i];
		if ( pTempObject->getObjectType() == GROUP )
		{
			if ( ( (Group*)pTempObject )->countObjectsOfSameKindUntil( pObject, count ) )
			{
				return true;
			}
		}

		if ( pTempObject == pObject )
		{
			return true;
		}

		if ( pTempObject->getObjectType() == pObject->getObjectType() )
		{
			count ++;
		}
	}
	return false;
}

bool Group::isEnabled()
{
	return true;///创建后即可用
}

bool Group::isVisible()
{
	return m_bVisible;
}

void Group::setVisible( bool bVisible )
{
	for (unsigned int i = 0, size = m_ObjectsVector.size(); i < size; i++)
	{
		m_ObjectsVector[i]->setVisible( bVisible );
	}

	m_bVisible = bVisible;
}

void Group::addChild( Object*pObject )
{
	if ( pObject == NULL || pObject == this || pObject->getParent() == this )
	{
		return;
	}
	
	m_ObjectsVector.pushBack( pObject );

	if ( pObject->getParent() != NULL )//在其他组中添加过
	{
		//重新设置关联
		pObject->getParent()->removeChild( pObject );
	}
	pObject->m_pParent = this;

	_addObjectCallback( pObject );
}

void Group::_addObjectCallback( Object* pObject )
{
	//是否有回调
	if ( m_CallbacksDynamicList.valid() )
	{
		GroupChange groupChange;
        GroupChangeType groupChangeType( GroupChangeType::ADD_OBJECT,pObject );
        groupChange.setChangeType( groupChangeType );
		callback( &groupChange );
	}
}

void Group::removeChild( Object* pObject )
{
	if ( pObject == NULL || ! m_ObjectsVector.remove( pObject ) )
	{
		return;
	}

	pObject->m_pParent = NULL;
	_removeObjectCallback( pObject );
}

void Group::removeChildByPos( unsigned int pos )
{
	osg::ref_ptr<Object> refObject = m_ObjectsVector[ pos ];

	if ( !m_ObjectsVector.remove( pos ) )
	{
		return;
	}
	_removeObjectCallback( refObject );
}

void Group::_removeObjectCallback( Object* pObject )
{
	//是否有回调
	if ( m_CallbacksDynamicList.valid() )
	{
		GroupChange groupChange;
        GroupChangeType groupChangeType( GroupChangeType::REMOVE_OBJECT, pObject );
        groupChange.setChangeType( groupChangeType );
		callback( &groupChange );
	}
}

Object* Group::getChild( unsigned int pos )
{
	return m_ObjectsVector[ pos ];
}

unsigned int Group::getChildrenCount()
{
	return m_ObjectsVector.size();
}

///允许获取一个pObject = NULL的位置，用于填充
///返回 - 1代表未找到
int Group::getPosOfChild( Object*pObject )
{
	return m_ObjectsVector.getIndex( pObject );
}

void Group::moveChild( Object* pObject, unsigned int newPos )
{
	if ( m_ObjectsVector.move( pObject, newPos ) )
	{
		_moveObjectCallback( pObject );
	}
}

void Group::moveChildFromCurPos( unsigned int curPos, unsigned int newPos )
{

	if ( m_ObjectsVector.move( curPos, newPos ) )
	{
		_moveObjectCallback( m_ObjectsVector[ newPos ] );
	}
}

void Group::_moveObjectCallback( Object*pObject )
{
	if ( m_CallbacksDynamicList.valid() )
	{
		GroupChange groupChange;
        GroupChangeType groupChangeType( GroupChangeType::MOVE_OBJECT, pObject );
        groupChange.setChangeType( groupChangeType );
		callback( &groupChange );
	}
}

void Group::removeChildren()
{
	unsigned int size = getChildrenCount();

	for (unsigned int i =0; i < size; i++)
	{
		_removeObjectCallback( m_ObjectsVector[ i ] );
	}

	m_ObjectsVector.clear();
}

void Group::insertChild(Object* pObject, unsigned int pos)
{
	if ( pObject == NULL || pObject == this || pObject->getParent() == this )
	{
		return;
	}
	m_ObjectsVector.insert( pObject, pos );

	if ( pObject->getParent() != NULL )//在其他组中添加过
	{
		//重新设置关联
		pObject->getParent()->removeChild( pObject );
	}
	pObject->m_pParent = this;

	_insertObjectCallback( pObject );
}

void Group::_insertObjectCallback( Object* pObject )
{
	if ( m_CallbacksDynamicList.valid() )
	{
		GroupChange groupChange;
        GroupChangeType groupChangeType( GroupChangeType::INSERT_OBJECT, pObject );
        groupChange.setChangeType( groupChangeType );
		callback( &groupChange );
	}
}
