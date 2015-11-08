/**
	@brief ¾­Î³Ïß
	@author Hao Luo
	@date 2015/04/08
*/

#ifndef OSGEARTHX_GRATICULE_H
#define OSGEARTHX_GRATICULE_H 1

#include <osgEarthXExport/Export.h>
#include <Object/Object.h>

#include <Provider/ExternalProvider/GraticuleProvider.h>

namespace osgEarthX
{
	class OSGEARTHX_EXPORT Graticule :
		public Object,
		public osgEarthXCore::GraticuleProvider
	{
	public:
		Graticule();

		virtual bool isEnabled();
		virtual bool isVisible();
		virtual void setVisible( bool bVisible );

	protected:
		virtual ~Graticule();

	private:
	};
}

#endif