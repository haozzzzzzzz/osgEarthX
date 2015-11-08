/**
	@brief 保存有NotifiedGroupCallback的类
	@author Hao Luo
	@date 2015/01/16
*/

#ifndef OSGEARTHX_NOTITIED_GROUP_H
#define OSGEARTHX_NOTITIED_GROUP_H 1

#include <osgEarthXExport/Export.h>
#include <Group/Group.h>
#include <Group/NotifiedGroupCallback.h>

namespace osgEarthX
{
	class OSGEARTHX_EXPORT NotifiedGroup :
		public Group
	{
	public:
		NotifiedGroup();

		NotifiedGroupCallback* getNotifiedGroupCallback();

	protected:
		virtual ~NotifiedGroup();

	private:

		osg::ref_ptr<NotifiedGroupCallback> m_refCallback;
	};
}

#endif