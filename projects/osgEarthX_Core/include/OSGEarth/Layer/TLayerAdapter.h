/**
	@brief Layer提供者模板基类，对内部对象接口进行转换，使调用统一
	@author Hao Luo
	@date 2015/01/24
*/

#ifndef OSGEARTHX_CORE_T_LAYER_ADAPTER_H
#define OSGEARTHX_CORE_T_LAYER_ADAPTER_H 1

#include <OSGEarth/Layer/ILayerWrapper.h>

namespace osgEarthXCore
{
	template< class T = ILayerWrapper>
	class TLayerAdapter :
		virtual public ILayerWrapper
	{
	protected:
		T* m_pIWrapper;

	public:
		TLayerAdapter()
		{
			m_pIWrapper = 0;
		}

		virtual ~TLayerAdapter()
		{

		}

		virtual bool getEnabled()
		{
			return m_pIWrapper->getEnabled();
		}

		virtual bool getVisible() const
		{
			return m_pIWrapper->getVisible();
		}

		virtual void setVisible( bool value )
		{
			m_pIWrapper->setVisible( value );
		}

	public:

	private:
	};
}

#endif