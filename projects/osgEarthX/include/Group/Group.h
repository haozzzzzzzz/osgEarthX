/**
	@brief 分组类
	@author Hao Luo
	@date 2014/11/06
*/

#ifndef OSGEARTHX_GROUP_H
#define OSGEARTHX_GROUP_H 1

#include <osgEarthXExport/Export.h>

#include <Object/Object.h>

//osgEarthX_Core
#include <Utils/DynamicVector.h>
#include <Callback/CallbackHost.h>

namespace osgEarthX
{
	class NotifiedGroupCallback;

	typedef DynamicVector<Object> ObjectsDynamicVector;

	class OSGEARTHX_EXPORT Group:
		public Object,
		public osgEarthXCore::CallbackHost
	{
	public:
		friend NotifiedGroupCallback;

	public:
		Group();

		void addChild( Object*pObject );///添加物体
		void insertChild( Object* pObject, unsigned int pos );//插入物体
		void removeChild( Object* pObject );///删除物体
		void removeChildByPos( unsigned int pos );///删除特定位置上的物体，比removeChild(Object* pObject)快

		Object* getChild( unsigned int pos );///根据位置获取物体
		int getPosOfChild( Object*pObject );///获取物体位置

		void moveChild( Object* pObject, unsigned int newPos );//将物体移动到newPos位置。
		void moveChildFromCurPos( unsigned int curPos, unsigned int newPos );///将curPos位置上的物体移动到newPos位置。比moveChild(Object* pObject, unsigned int newPos)快

		unsigned int getChildrenCount();
		void removeChildren();

		//实现Object纯虚函数
		virtual bool isEnabled();
		virtual bool isVisible();
		virtual void setVisible( bool bVisible = true );

	public:
		ObjectsDynamicVector& getObjects();

		//在此组及其树内，深度优先搜索某个节点的同类型节点个数，直到找到该节点才停止统计
		//多用于统计ImageSurfaceLayer、VectorSurfaceLayer，以确定显示次序
		//如果找到则返回true
		bool countObjectsOfSameKindUntil( Object* pObject, unsigned int&count );

	protected:
		virtual ~Group();

		void _removeObjectCallback( Object* pObject );///移除pObject,触发回调
		void _addObjectCallback( Object* pObject );///添加pObject, 触发回调
		void _insertObjectCallback( Object* pObject );
		void _moveObjectCallback( Object*pObject );

	private:
		///物体动态列表
		ObjectsDynamicVector m_ObjectsVector;

		///是否可见
		bool m_bVisible;
	};
}

#endif