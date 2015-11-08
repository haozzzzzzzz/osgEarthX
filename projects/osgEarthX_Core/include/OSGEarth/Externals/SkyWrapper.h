/**
	@brief Sky°ü×°Æ÷
	@author Hao Luo
	@date 2015/01/23
*/

#ifndef OSGEARTHX_CORE_SKY_WRAPPER_H
#define OSGEARTHX_CORE_SKY_WRAPPER_H 1

#include <osgEarthXCoreExport/Export.h>

#include <OSGEarth/Externals/ISkyWrapper.h>
#include <osgEarthUtil/Sky>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT SkyWrapper : 
		public ISkyWrapper
	{
	public:
		SkyWrapper( osgEarth::Util::SkyNode* pSkyNode );
		virtual ~SkyWrapper();

		virtual void setAmbient( float fAmbient );
		virtual float getAmbient();

		virtual void setHours( float fHours );
		virtual float getHours();

		virtual void enableLighting( bool bIfEnable );
		virtual bool isEnableLighting();

	protected:
		osgEarth::Util::SkyNode* m_pSkyNode;

	private:
	};
}

#endif