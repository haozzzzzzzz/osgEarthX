/**
	@brief SkyOptions接口包装器
	@author Hao Luo
	@date 2015/01/24
*/

#ifndef OSGEARTHX_CORE_SKY_OPTIONS_WRAPPER_H
#define OSGEARTHX_CORE_SKY_OPTIONS_WRAPPER_H 1

#include <osgEarthXCoreExport/Export.h>
#include <OSGEarth/Externals/ISkyWrapper.h>
#include <osgEarthUtil/Sky>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT SkyOptionsWrapper : 
		public ISkyWrapper
	{
	public:
		SkyOptionsWrapper( osgEarth::Util::SkyOptions* pOptions );
		virtual ~SkyOptionsWrapper();

		virtual void setAmbient( float fAmbient );
		virtual float getAmbient();

		virtual void setHours( float fHours );
		virtual float getHours();

		virtual void enableLighting( bool bIfEnable );
		virtual bool isEnableLighting();

		void copyOptionalsTo( osgEarth::Util::SkyNode& skyNode );

	protected:
		osgEarth::Util::SkyOptions* m_pSkyOptions;
		osgEarth::optional<bool> m_bEnableLighting;

	private:
	};
}

#endif