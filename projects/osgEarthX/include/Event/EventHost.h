/**
	@brief 需要触发事件的类
	@author Hao Luo
	@date 2014/11/06
*/

#ifndef OSGEARTHX_EVENT_HOST_H
#define OSGEARTHX_EVENT_HOST_H 1

namespace osgEarthX
{
	template <class Firer>
	class EventHost
	{
	public:
		EventHost()
		{
			m_pFirer = 0;
		}

		virtual void setFirer( Firer* pFirer )
		{
			m_pFirer = pFirer;
		}

		virtual Firer* getEventFirer()
		{
			return m_pFirer;
		}

	protected:
		Firer * m_pFirer;

	private:
	};
}

#endif