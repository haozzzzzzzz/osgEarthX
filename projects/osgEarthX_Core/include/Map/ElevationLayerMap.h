/**
	@brief 由ElevationLayer构成的Map
	@author Hao Luo
	@date 2015/01/07
*/

#ifndef OSGEARTHX_CORE_ELEVATION_LAYER_MAP_H
#define OSGEARTHX_CORE_ELEVATION_LAYER_MAP_H 1

#include <osgEarthXCoreExport/Export.h>

#include <Map/BaseMap.h>
#include <ThreadPool/OrderHoldersContainer/OrderHoldersContainer.h>
#include <Provider/LayerProvider/ElevationLayerTask.h>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT ElevationLayerMap:
		virtual public BaseMap
	{
	private:
		osgXThreads::OrderHoldersContainer<ElevationLayerProvider> m_ElevationLayerProviders;

	public:
		ElevationLayerMap();

		void addElevationLayerProvider( ElevationLayerProvider* pLayerProvider );
		void insertElevationLayerProvider( ElevationLayerProvider* pLayerProvder, unsigned int index );
		void removeElevationLayerProvider( ElevationLayerProvider* pLayerProvider );
		void removeElevationLayerProvider( unsigned int index );
		void moveElevationLayerProvider( ElevationLayerProvider* pLayerProvider, unsigned int index );
		void moveElevationLayerProvider( unsigned int oldIndex, unsigned int newIndex );

		void addElevationLayer( osgEarth::ElevationLayer* pElevationLayer, int index = -1 );
		void removeElevationLayer( osgEarth::ElevationLayer* pElevationLayer );
		void moveElevationLayer( osgEarth::ElevationLayer* pElevationLayer, unsigned int index );

	protected:
		virtual ~ElevationLayerMap();

	private:
		friend ElevationLayerTask;

		void _addAndFixOrderOfElevLyerProv( ElevationLayerProvider* pLoadedLayerProvider );

		void _addTaskOfElevLyerProv( ElevationLayerProvider* pLayerProvider );

		void _insertElevationLayerProvider( ElevationLayerProvider* pLayerProvider, int index = -1 );
		void _removeElevationLayerProvider( ElevationLayerProvider* pLayerProvider, int index = -1 );
	};

	/*
		对ElevationLayerMap进行控制的各种Operations
	*/
	class AddElevationLayerOperation : public osg::Operation
	{
	public:
		AddElevationLayerOperation( ElevationLayerMap* pElevationLayerMap, osgEarth::ElevationLayer* pElevationLayer, int index = -1 )
		{
			m_pElevationLayerMap = pElevationLayerMap;
			m_pElevationLayer = pElevationLayer;
			m_iIndex = index;
		}

		virtual void operator() ( osg::Object* );
	protected:
		virtual ~AddElevationLayerOperation(){}

	private:
		ElevationLayerMap* m_pElevationLayerMap;
		osgEarth::ElevationLayer* m_pElevationLayer;
		int m_iIndex;

	};

	class RemoveElevationLayerOperation : public osg::Operation
	{
	public:
		RemoveElevationLayerOperation( ElevationLayerMap* pElevationLayerMap, osgEarth::ElevationLayer* pElevationLayer )
		{
			m_pElevationLayerMap = pElevationLayerMap;
			m_pElevationLayer = pElevationLayer;
		}
		virtual void operator() ( osg::Object* );

	protected:
		virtual ~RemoveElevationLayerOperation(){}

	private:
		ElevationLayerMap* m_pElevationLayerMap;
		osgEarth::ElevationLayer* m_pElevationLayer;

	};

	class MoveElevationLayerOperation : public osg::Operation
	{
	public:
		MoveElevationLayerOperation( ElevationLayerMap* pElevationLayerMap, osgEarth::ElevationLayer* pElevationLayer, unsigned int index )
		{
			m_pElevationLayerMap = pElevationLayerMap;
			m_pElevationLayer = pElevationLayer;
			m_uiIndex = index;
		}
		virtual void operator() ( osg::Object* );

	protected:
		virtual ~MoveElevationLayerOperation(){}

	private:
		ElevationLayerMap* m_pElevationLayerMap;
		osgEarth::ElevationLayer* m_pElevationLayer;
		unsigned int m_uiIndex;

	};
}

#endif