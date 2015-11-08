/**
	@brief йс╣Ц
	@author Hao Luo
	@date 2015/01/21
*/

#ifndef OSGEARTHX_VIEWPOINT_H
#define OSGEARTHX_VIEWPOINT_H 1

#include <osgEarthXExport/Export.h>
#include <Object/Object.h>

#include <Provider/ExternalProvider/ViewpointProvider.h>

namespace osgEarthX
{

	class OSGEARTHX_EXPORT Viewpoint : 
		public Object,
		public osgEarthXCore::ViewpointProvider
	{
	public:
		Viewpoint();

		virtual bool isEnabled();
		virtual bool isVisible();
		virtual void setVisible(bool bVisible);

	protected:
		virtual ~Viewpoint();

	private:
	};

}

#endif