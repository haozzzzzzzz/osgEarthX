/**
	@brief 场景组回调，用于将不同物体添加到场景或移出场景。
	@author Hao Luo
	@date 2014/11/07
*/

#ifndef OSGEARTHX_EARTH_ROOT_CALLBACK_H
#define OSGEARTHX_EARTH_ROOT_CALLBACK_H 1

#include <Group/NotifiedGroup.h>

//OSGEARTHX_CORE
#include <Callback/Callback.h>

namespace osgEarthX
{
	class Earth;

	class EarthRootCallback:
		public osgEarthXCore::Callback
	{
	public:
		//接受GroupChange
		virtual void doCallback(osgEarthXCore::Change* pChange);

	protected:
		friend Earth;

		EarthRootCallback( Earth* pEarth );
		virtual ~EarthRootCallback();

		void addObject(Object*pObject);
		void removeObject(Object*pObject);
		void moveObject(Object*pObject);
		void insertObject(Object* pObject);

	protected:
		Earth* m_pEarth;
		NotifiedGroup* m_pEarthRoot;

	private:
	};
}

#endif