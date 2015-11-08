/**
	@brief Feature Object
	@author Hao Luo
	@date 2015/10/24
*/

#ifndef OSGEARTHX_FEATURE_PRIMITIVE_H
#define OSGEARTHX_FEATURE_PRIMITIVE_H 1

#include <osgEarthXExport/Export.h>
#include <Object/Object.h>

//osgEarthX_Core
#include <Provider/AnnotationProvider/FeaturePrimitiveProvider.h>

namespace osgEarthX
{
	class OSGEARTHX_EXPORT FeaturePrimitive :
		public Object,
		public osgEarthXCore::FeaturePrimitiveProvider
	{
	public:
		FeaturePrimitive();

		virtual bool isEnabled();
		virtual bool isVisible();
		virtual void setVisible(bool bVisible);

	protected:
		virtual ~FeaturePrimitive();

	private:
	};
}

#endif