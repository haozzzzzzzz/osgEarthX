/**
	@brief Sky接口包装器
	@author Hao Luo
	@date 2015/01/24
*/

#ifndef OSGEARTHX_CORE_I_SKY_WRAPPER_H
#define OSGEARTHX_CORE_I_SKY_WRAPPER_H 1

#include <osgEarthXCoreExport/Export.h>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT ISkyWrapper
	{
	public:
		virtual ~ISkyWrapper(){}

		virtual void setAmbient( float fAmbient ) = 0;
		virtual float getAmbient() = 0;

		virtual void setHours( float fHours ) = 0;
		virtual float getHours() = 0;

		virtual void enableLighting( bool bIfEnable ) = 0;
		virtual bool isEnableLighting() = 0;

	protected:
	private:
	};

}

#endif