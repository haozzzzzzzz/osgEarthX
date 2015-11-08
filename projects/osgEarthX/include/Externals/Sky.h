/**
	@brief Íâ²¿Ìì¿Õ
	@author Hao Luo
	@date 2015/01/13
*/

#ifndef OSGEARTHX_SKY_H
#define OSGEARTHX_SKY_H 1

#include <osgEarthXExport/Export.h>
#include <Object/Object.h>

//osgEarthX_Core
#include <Provider/ExternalProvider/SkyProvider.h>
namespace osgEarthX
{
	class OSGEARTHX_EXPORT Sky :
		public Object,
		public osgEarthXCore::SkyProvider
	{
	public:
		Sky();

		virtual bool isEnabled();
		virtual bool isVisible();
		virtual void setVisible(bool bVisible);

	protected:
		virtual ~Sky();
	private:
	};
}

#endif