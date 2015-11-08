/**
	@brief Model Object
	@author Hao Luo
	@date 2015/10/24
*/

#ifndef OSGEARTHX_MODEL_H
#define OSGEARTHX_MODEL_H 1

#include <osgEarthXExport/Export.h>
#include <Object/Object.h>

//osgEarthX_Core
#include <Provider/AnnotationProvider/ModelProvider.h>

namespace osgEarthX
{
	class OSGEARTHX_EXPORT Model :
		public Object,
		public osgEarthXCore::ModelProvider
	{
	public:
		Model();

		virtual bool isEnabled();
		virtual bool isVisible();
		virtual void setVisible(bool bVisible);

	protected:
		virtual ~Model();

	private:
	};
}

#endif