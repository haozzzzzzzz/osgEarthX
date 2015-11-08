/**
	@brief Layer包装接口
	@author Hao Luo
	@date 2015/01/15
*/

#ifndef OSGEARTHX_CORE_I_LAYER_WRAPPER_H
#define OSGEARTHX_CORE_I_LAYER_WRAPPER_H 1

#include <osgEarthXCoreExport/Export.h>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT ILayerWrapper
	{
	public:
		virtual ~ILayerWrapper(){}

		virtual bool getEnabled() = 0;
		virtual bool getVisible() const = 0;
		virtual void setVisible( bool value ) = 0;

	protected:
	private:
	};
}

#endif