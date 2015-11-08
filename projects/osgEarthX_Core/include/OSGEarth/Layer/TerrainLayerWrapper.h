/**
	@brief TerrainLayer½Ó¿Ú
	@author Hao Luo
	@date 2015/01/15
*/

#ifndef OSGEARTHX_CORE_TERRAIN_LAYER_H
#define OSGEARTHX_CORE_TERRAIN_LAYER_H 1

#include <osgEarthXCoreExport/Export.h>
#include <osgEarth/TerrainLayer>
#include <OSGEarth/Layer/ITerrainLayerWrapper.h>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT TerrainLayerWrapper : 
		virtual public ITerrainLayerWrapper
	{
	public:
		TerrainLayerWrapper(osgEarth::TerrainLayer* pTerrainLayer);
		virtual ~TerrainLayerWrapper();

		virtual bool getEnabled();
		virtual bool getVisible() const;
		virtual void setVisible( bool value );

	protected:
		osgEarth::TerrainLayer* m_pTerrainLayer;

	private:
	};
}

#endif