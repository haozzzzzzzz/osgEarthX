/**
	@brief Sky接口转换类模板
	@author Hao Luo
	@date 2015/01/24
*/

#ifndef OSGEARTHX_CORE_T_SKY_ADAPTER_H
#define OSGEARTHX_CORE_T_SKY_ADAPTER_H 1

#include <OSGEarth/Externals/ISkyWrapper.h>

namespace osgEarthXCore
{
	template < class T = ISkyWrapper>
	class TSkyAdapter : 
		virtual public ISkyWrapper
	{
	protected:
		T* m_pIWrapper;

	public:
		TSkyAdapter()
		{
			m_pIWrapper = 0;
		}

		virtual ~TSkyAdapter()
		{

		}

		virtual void setAmbient( float fAmbient )
		{
			m_pIWrapper->setAmbient( fAmbient );
		}

		virtual float getAmbient()
		{
			return m_pIWrapper->getAmbient();
		}

		virtual void setHours( float fHours )
		{
			m_pIWrapper->setHours( fHours );
		}

		virtual float getHours()
		{
			return m_pIWrapper->getHours();
		}

		virtual void enableLighting( bool bIfEnable )
		{
			m_pIWrapper->enableLighting( bIfEnable );
		}

		virtual bool isEnableLighting()
		{
			return m_pIWrapper->isEnableLighting();
		}
	protected:
	private:
	};
}

#endif