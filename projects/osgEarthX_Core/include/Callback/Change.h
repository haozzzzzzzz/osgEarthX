/**
	@brief 状态变化基类及模板
	@author Hao Luo
	@date 2014/11/08
*/

#ifndef OSGEARTHX_CORE_CHANGE_H
#define OSGEARTHX_CORE_CHANGE_H 1

#include <osgEarthXCoreExport/Export.h>

namespace osgEarthXCore
{
	//改变基类
	class OSGEARTHX_CORE_EXPORT Change
	{
	public:
		virtual ~Change()
		{

		}
	};

	//改变模板
	template <class ChangeType>
	class ChangeTemplate:
		virtual public Change
	{
	public:
		ChangeTemplate()
		{
		}

		///设置内部变化类型
		///内部不负责释放changeType
		ChangeTemplate(ChangeType& changeType)
		{
			setChangeType(changeType);
		}

		///设置内部变化类型
		///内部不负责释放changeType
		void setChangeType(ChangeType& changeType)
		{
			m_Type = changeType;
		}

		virtual ~ChangeTemplate()
		{

		}


		//因为可能会存在继承多种改变类型，所以不能是虚函数
		//这样通过转换成基类的指针就可以获取基类的改变类型
		//not virtual !
		ChangeType& getChangeType()
		{
			return m_Type;
		}

	protected:
		ChangeType m_Type;
	private:
	};

}

#endif