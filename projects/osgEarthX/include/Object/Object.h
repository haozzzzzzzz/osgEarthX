/**
	@brief 物体基类
	@author Hao Luo
	@date 2014/11/06
*/

#ifndef OSGEARTHX_OBJECT_H
#define OSGEARTHX_OBJECT_H 1

#include <osgEarthXExport/Export.h>

#include <Object/ObjectType.h>

#include <osg/Referenced>
#include <string>

namespace osgEarthX
{

	/*
		GroupItem保存父组指针，只能由Group访问
	*/
	class Group;
	class OSGEARTHX_EXPORT GroupItem
	{
	public:
		friend Group;
	protected:
		Group* m_pParent;

	public:
		GroupItem();
		virtual ~GroupItem();

		Group* getParent();
	private:
	};

	class OSGEARTHX_EXPORT Object:
		virtual public osg::Referenced,
		public GroupItem
	{
	public:
		Object();
		
		//接口
		virtual bool isEnabled() = 0;
		virtual bool isVisible() = 0;
		virtual void setVisible(bool bVisible) = 0;

		virtual ObjectType getObjectType();
		virtual std::string getObjectName();

	protected:
		virtual ~Object();

	protected:
		ObjectType m_ObjectType;
		std::string m_strName;
	};
}

#endif