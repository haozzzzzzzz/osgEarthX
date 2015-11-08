/**
	@brief TextLabel object
	@author Hao Luo
	@date 2015/10/27
*/

#ifndef OSGEARTHX_TEXT_LABEL_H
#define OSGEARTHX_TEXT_LABEL_H 1

#include <osgEarthXExport/Export.h>
#include <Object/Object.h>
#include <Provider/AnnotationProvider/LabelProvider.h>

namespace osgEarthX
{
	class OSGEARTHX_EXPORT TextLabel : 
		public Object,
		public osgEarthXCore::LabelProvider
	{
	public:
		TextLabel();
		virtual bool isEnabled();
		virtual bool isVisible();
		virtual void setVisible(bool bVisible);

	protected:
		virtual ~TextLabel();

	private:
	};
}

#endif