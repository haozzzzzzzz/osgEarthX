/**
	@brief 由TerrainMaskLayer构成的Map
	@author Hao Luo
	@date 2015/01/07
*/

#ifndef OSGEARTHX_CORE_TERRAIN_MASK_LAYER_H
#define OSGEARTHX_CORE_TERRAIN_MASK_LAYER_H 1

#include <osgEarthXCoreExport/Export.h>
#include <Map/BaseMap.h>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT TerrainMaskLayerMap:
		virtual public BaseMap
	{
	public:
		TerrainMaskLayerMap();
		virtual ~TerrainMaskLayerMap();

		void addTerrainMaskLayer( osgEarth::MaskLayer* pMaskLayer );
		void removeTerrainMaskLayer( osgEarth::MaskLayer* pMaskLayer );

	protected:
	private:
	};
}

#endif