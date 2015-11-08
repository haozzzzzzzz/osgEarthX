/**
	@brief 分组状态变化类
	@author Hao Luo
	@date 2014/11/06
*/

#ifndef OSGEARTHX_GROUP_CHANGE_H
#define OSGEARTHX_GROUP_CHANGE_H 1

//OSGEARTHX_CORE
#include <Callback/Change.h>

namespace osgEarthX
{
	class Object;

	struct GroupChangeType
	{
		enum ChangeType
		{
			ADD_OBJECT = 0,
			INSERT_OBJECT,
			REMOVE_OBJECT,
			MOVE_OBJECT
		};
		GroupChangeType()
		{
			changeType = ADD_OBJECT;
			pObject = NULL;
		}

		GroupChangeType(ChangeType changeType, Object* pObject)
		{
			this->changeType = changeType;
			this->pObject = pObject;
		}
		
		GroupChangeType(const GroupChangeType& copyObj)
		{
			this->changeType = copyObj.changeType;
			this->pObject = copyObj.pObject;
		}

		ChangeType changeType;
		Object* pObject;
	};

	typedef osgEarthXCore::ChangeTemplate<GroupChangeType> GroupChange;

}

#endif