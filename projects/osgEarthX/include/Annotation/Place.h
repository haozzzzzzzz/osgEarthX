/**
	@brief ŒÔÃÂPlace
	@author Hao Luo
	@date 2015/04/01
*/

#ifndef OSGEARTHX_PLACE_H
#define OSGEARTHX_PLACE_H 1

#include <osgEarthXExport/Export.h>
#include <Object/Object.h>

//osgEarthX_Core
#include <Provider/AnnotationProvider/PlaceProvider.h>

namespace osgEarthX
{
	class OSGEARTHX_EXPORT Place : 
		public Object,
		public osgEarthXCore::PlaceProvider
	{
	public:
		Place();

		virtual bool isEnabled();
		virtual bool isVisible();
		virtual void setVisible( bool bVisible );

	protected:
		virtual ~Place();

	private:
	};
}

#endif