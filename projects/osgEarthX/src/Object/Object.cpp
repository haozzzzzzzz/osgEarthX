
#include <Object/Object.h>
#include <Group/Group.h>
using namespace osgEarthX;

//GroupItem
GroupItem::GroupItem()
{
	m_pParent = NULL;
}

GroupItem::~GroupItem()
{

}

Group* GroupItem::getParent()
{
	return m_pParent;
}

Object::Object()
{
	m_ObjectType = OBJECT;
}

Object::~Object()
{

}

ObjectType Object::getObjectType()
{
	return m_ObjectType;
}

std::string Object::getObjectName()
{
	return m_strName;
}