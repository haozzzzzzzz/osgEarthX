/**
	@brief circle annotation
	@author Hao Luo
	@date 2015/04/14
*/

#ifndef OSGEARTHX_CIRCLE_H
#define OSGEARTHX_CIRCLE_H 1

#include <osgEarthXExport/Export.h>

#include <Object/Object.h>
#include <Provider/AnnotationProvider/CircleProvider.h>

namespace osgEarthX
{
	class OSGEARTHX_EXPORT Circle : 
		public Object,
		public osgEarthXCore::CircleProvider
	{
	public:
		Circle();
		virtual bool isEnabled();
		virtual bool isVisible();
		virtual void setVisible(bool bVisible);

	protected:
		virtual ~Circle();

	private:
	};
}

#endif