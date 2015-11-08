#ifndef OSGEARTHX_CORE_LAYER_CHANGE_H
#define OSGEARTHX_CORE_LAYER_CHANGE_H 1

#include <osgEarthXCoreExport/Export.h>

#include <Provider/ProviderChange.h>

namespace osgEarthXCore
{
	enum OSGEARTHX_CORE_EXPORT LayerChangeType
	{
		VISIBLE,
		HIDDEN
	};

	typedef ChangeTemplate<LayerChangeType> LayerChange;
}

#endif