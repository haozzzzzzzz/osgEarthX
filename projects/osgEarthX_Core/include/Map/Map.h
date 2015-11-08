/**
	@brief ≥°æ∞µÿÕº¿‡
	@author Hao Luo
	@date 2014/11/03
*/

#ifndef OSGEARTHX_CORE_AT_MAP_H
#define OSGEARTHX_CORE_AT_MAP_H 1

#include <osgEarthXCoreExport/Export.h>
#include <Map/ImageLayerMap.h>
#include <Map/ModelLayerMap.h>
#include <Map/ElevationLayerMap.h>
#include <Map/TerrainMaskLayerMap.h>

#include <Map/ExternalsMap.h>
#include <Map/AnnotationMap.h>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT Map:
		public ImageLayerMap,
		public ModelLayerMap,
		public ElevationLayerMap,
		public TerrainMaskLayerMap,
		public ExternalsMap,
		public AnnotationMap
	{
	public:
		Map();

	protected:
		virtual ~Map();
		virtual void initMapViewer( MapViewer* pMapViewer );
	};
}

#endif