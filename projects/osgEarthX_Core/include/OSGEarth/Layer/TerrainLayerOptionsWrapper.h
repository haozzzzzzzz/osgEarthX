/**
	@brief 实现ITerrainLayerWrapper的TerrainLayerOptions包装器
	@author Hao Luo
	@date 2015/01/24
*/

#ifndef OSGEARTHX_CORE_TERRAIN_LAYER_OPTIONS_WRAPPER_H
#define OSGEARTHX_CORE_TERRAIN_LAYER_OPTIONS_WRAPPER_H 1

#include <osgEarthXCoreExport/Export.h>
#include <osgEarth/TerrainLayer>
#include <OSGEarth/Layer/ITerrainLayerWrapper.h>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT TerrainLayerOptionsWrapper : 
		virtual public ITerrainLayerWrapper
	{
	public:
		TerrainLayerOptionsWrapper(osgEarth::TerrainLayerOptions* pTerrainLayerOptions);
		virtual ~TerrainLayerOptionsWrapper();

		virtual bool getEnabled();
		virtual bool getVisible() const;
		virtual void setVisible( bool value );

	protected:
		osgEarth::TerrainLayerOptions* m_pTerrainLayerOptions;

	private:

	};
}

#endif