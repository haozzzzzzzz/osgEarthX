/**
	@brief RectanglePrimitive Object
	@author Hao Luo
	@date 2015/10/28
*/

#ifndef OSGEARTHX_RECTANGLE_PRIMITIVE_H
#define OSGEARTHX_RECTANGLE_PRIMITIVE_H 1

#include <osgEarthXExport/Export.h>

#include <Object/Object.h>
#include <Provider/AnnotationProvider/RectanglePrimitiveProvider.h>

namespace osgEarthX
{
	class OSGEARTHX_EXPORT RectanglePrimitive:
		public Object,
		public osgEarthXCore::RectanglePrimitiveProvider
	{
	public:
		RectanglePrimitive();

		virtual bool isEnabled();
		virtual bool isVisible();
		virtual void setVisible(bool bVisible);

	protected:
		virtual ~RectanglePrimitive();

	private:
	};
}

#endif