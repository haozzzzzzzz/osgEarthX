/**
	@brief EllipsePrimitive object
	@author Hao Luo
	@date 2015/10/30
*/

#ifndef OSGEARTHX_ELLIPSE_PRIMITIVE_H
#define OSGEARTHX_ELLIPSE_PRIMITIVE_H 1

#include <Object/Object.h>
#include <Provider/AnnotationProvider/EllipsePrimitiveProvider.h>

namespace osgEarthX
{
	class OSGEARTHX_EXPORT EllipsePrimitve : 
		public Object,
		public osgEarthXCore::EllipsePrimitiveProvider
	{
	public:
		EllipsePrimitve();

		virtual bool isEnabled();
		virtual bool isVisible();
		virtual void setVisible(bool bVisible);

	protected:
		virtual ~EllipsePrimitve();

	private:
	};
}

#endif